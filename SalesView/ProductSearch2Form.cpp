#include "ProductSearch2Form.h"
#include "ProductsStoreForm.h"

System::Void SalesView::ProductSearch2Form::dgvProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	//int cateId = ((ComboBoxIdItem^)cmbCategoria->Items[cmbCategoria->SelectedIndex])->Value;
	int cateId = 1;

	int productsId = 1;

	int cateId2 = ((ComboBoxIdItem^)cmbCategoria->Items[cmbCategoria->SelectedIndex])->Value;
	//int productsId = ((ComboBoxIdItem^)cmbProducts->Items[cmbCategoria->SelectedIndex])->Value;
	Categories^ c = SalesManager::QueryCategoriesById(cateId2);
	//int productId = ((ComboBoxIdItem^)cmbProducts->Items[cmbProducts->SelectedIndex])->Value;
	int proid = 99999;

	if (e->RowIndex < 0) return;
	int selectedRow = e->RowIndex;
	if (selectedRow >= 0)
	{
		if (dgvProducts->Rows[selectedRow]->Cells[0] != nullptr &&
			dgvProducts->Rows[selectedRow]->Cells[0]->Value != nullptr &&
			dgvProducts->Rows[selectedRow]->Cells[0]->Value->ToString() != "")
		{
			dgvProducts->Rows[selectedRow]->Selected = true;
			String^ productId = dgvProducts->Rows[selectedRow]->Cells[0]->Value->ToString();
			productsId = Int32::Parse(productId);
			if (c != nullptr && c->ProductsList != nullptr)
			{
				//	txtProductId->Text = "2";
				for (int i = 0; i < c->ProductsList->Count; i++)
				{
					//txtProductId->Text = "3";
					Products^ pl = c->ProductsList[i];
					if (productsId == pl->Id) {

						((ProductsStoreForm^)refForm)->AddProductToDetails(pl);
						/*Se agrega el objeto p al grid de la venta*/
						this->Close();
					}
				}
			}
		}
	}
}
