#include "ProductSearchForm.h"
#include "SalesForm.h"

using namespace SalesView;


System::Void ProductSearchForm::dgvProducts_CellClick(System::Object^ sender,
	System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (e->RowIndex < 0) return;
	int selectedRow = e->RowIndex;
	if (selectedRow >= 0) {
		if (dgvProducts->Rows[selectedRow]->Cells[0] != nullptr &&
			dgvProducts->Rows[selectedRow]->Cells[0]->Value != nullptr &&
			dgvProducts->Rows[selectedRow]->Cells[0]->Value->ToString() != "") {

			dgvProducts->Rows[selectedRow]->Selected = true;
			String^ productId = dgvProducts->Rows[selectedRow]->Cells[0]->Value->ToString();
			Products^ p = SalesManager::QueryProductById(Int32::Parse(productId));
			/*Se agrega el objeto p al grid de la ventana que lo invoca*/
			((SalesForm^)refForm)->AddProductToDetails(p);
			/*Se agrega el objeto p al grid de la venta*/

			this->Close();
		}
	}
}

