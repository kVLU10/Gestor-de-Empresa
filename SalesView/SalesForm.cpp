#include "SalesMainForm.h"
#include "SalesForm.h"



int SalesView::SalesForm::ValidarDatos()
{
	//-1: No se ha elegido un cliente
	//-2: La fecha es menor a la fecha actual
	//-3: No hay un total
	//-4: No se ha elegido un vendedor
	if (cmbClient->SelectedIndex < 0)
		return -1;
	if (dtpSaleDate->Value <= DateTime::Today.AddDays(-1))
		return -2;
	if (txtTotal->Text == "" || Double::Parse(txtTotal->Text) <= 0) {
		return -3;
	}
	if (cmbPersonal->SelectedIndex < 0)
		return -4;
	return 1;
}

System::Void SalesView::SalesForm::btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e) {
	int validatedData = ValidarDatos();
	if (validatedData == -1) {
		MessageBox::Show("Se debe seleccionar un cliente.");
	}
	else if (validatedData == -2) {
		MessageBox::Show("La fecha no debe ser anterior a la fecha actual.");
	}
	else if (validatedData == -3) {
		MessageBox::Show("El total debe ser mayor a cero.");
	}
	if (validatedData == -4) {
		MessageBox::Show("Debe seleccionar un personal asignado a Ventas.");
	}
	else {
		Sale^ sale = gcnew Sale();
		String^ customerId = ((ComboBoxItem1^)cmbClient->SelectedItem)->Value;
		sale->client = SalesManager::QueryClientByDocumentNumber(customerId);
		DateTime dt = dtpSaleDate->Value;
		sale->Date = dt.Hour + ":" + dt.Minute; //ToString();
		sale->Total = Double::Parse(txtTotal->Text);
		sale->State = 'A';
		String^ personalId = ((ComboBoxItem1^)cmbPersonal->SelectedItem)->Value;
		sale->personal = SalesManager::QueryPersonalByDocumentNumber(personalId);
		sale->store = SalesManager::QueryStoreByDocumentNumber(((ComboBoxItem^)cmbStore->SelectedItem)->Value);
		sale->Details = gcnew List<SaleDetail^>();
		SaleDetail^ saleDetail;
		for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
			saleDetail = gcnew SaleDetail();
			int productId = Int32::Parse(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
			saleDetail->product = SalesManager::QueryProductById( productId);
			saleDetail->Quantity = Int32::Parse(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
			saleDetail->SubTotal = Double::Parse(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
			sale->Details->Add(saleDetail);
		}
		SalesManager::RegisterSale(sale);
		MessageBox::Show("Se ha registrado la venta exitosamente para el cliente " + cmbClient->Text);
		DisableControls();
	}
}