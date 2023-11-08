#pragma once
#include "main.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace CRUDFarmacia;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CRUDFarmacia::main form;
	Application::Run(% form);
}
//Despliega los datos de los proveedores
void main::desplegarProveedores() {
	Proveedor^ temp;
	for (int i = 0; i < 4; i++) {
		temp = sistema.getProveedor(i);
		dgv_proveedor->Rows->Add(
			temp->getNombre(),
			temp->getNit(),
			temp->getDirecciónFiscal(),
			temp->getDirección(),
			temp->getTeléfono(),
			temp->getCorreo(),
			temp->getId()
		);
	}
	dgv_proveedor->CurrentCell = dgv_proveedor->Rows[0]->Cells[0];
}
//Despliega los datos del inventario
void main::desplegarInventario(Inventario^ inventario) {
	dgv_inventario->Rows->Clear();
	dgv_inventario->Rows->Add(
		inventario->getCantidad().ToString(),
		inventario->getCaducidad(),
		inventario->getProveedor()->getNombre(),
		inventario->getCompra().ToString(),
		inventario->getVenta().ToString()
	);
}
//Llena el dataGridView con los 4 proveedores
System::Void main::main_Load(System::Object^ sender, System::EventArgs^ e) {
	sistema.añadirProveedor(gcnew Proveedor(
		"Farmacia Salud Total",
		1234567,
		"Calle Principal #123",
		"Dirección: Avenida Central #45",
		"555-123-456",
		"info@farmaciasaludtotal.com",
		0
	));
	sistema.añadirProveedor(gcnew Proveedor(
		"Distribuidora Farmacéutica Sanitex",
		9876543,
		"Calle Comercial #789",
		"Calle del Sol #67",
		"555-789-012",
		"contacto@sanitexpharma.com",
		1
	));
	sistema.añadirProveedor(gcnew Proveedor(
		"Farmacias EconoSalud",
		5432101,
		"Avenida Principal #987",
		"Plaza de la Salud #32",
		"555-987-654",
		"ventas@econosaludfarmacias.com",
		2
	));
	sistema.añadirProveedor(gcnew Proveedor(
		"Distribuidora Farmacéutica VitalCare",
		6543218,
		"Calle de la Salud #234",
		"Avenida de la Vida #21",
		"555-234-567",
		"info@vitalcarepharma.com",
		3
	));

	desplegarProveedores();
}
//En caso de que al ingresar algún dato tipo double, reemplaza todos los espacios vaciós con 0
double validarDouble(System::String^ s) {
	s = s->Replace('_', '0');
	return System::Convert::ToDouble(s);
}

System::Void main::btn_agregar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Inventario^ inventario = gcnew Inventario(
			tB_nombre->Text,
			categoría,
			tB_principio->Text,
			validarDouble(tB_dosis->Text),
			System::Convert::ToInt32(tB_stock->Text),
			sistema.getProveedor(System::Convert::ToInt16(dgv_proveedor->CurrentRow->Cells[6]->Value)),
			dT_caducidad->Value.ToString(),
			validarDouble(tB_compra->Text),
			validarDouble(tB_venta->Text));
			sistema.añadirInventario(inventario);
		dgv_medicamento->Rows->Add(
			inventario->getNombre(),
			inventario->getNumRegistro(),
			inventario->getCategoría() == 0 ? "Venta Libre" : "Venta Receta",
			inventario->getPrincipiosActivos(),
			inventario->getDosisMg()
		);
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Falta algún dato");
	}
}
//Muestra el panel de los proveedores
System::Void main::btn_proveedores_Click(System::Object^ sender, System::EventArgs^ e) {
	pl_proveedores->Location = btn_proveedores->Location;
	pl_proveedores->Visible = true;
}
//Cierra el panel de los proveedores
System::Void main::btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
	pl_proveedores->Visible = false;
}
//Selecciona la categoria "Venta libre"	
System::Void main::rB_libre_Click(System::Object^ sender, System::EventArgs^ e) {
	categoría = ventaLibre;
}
//Selecciona la categoría "Venta receta"
System::Void main::rB_receta_Click(System::Object^ sender, System::EventArgs^ e) {
	categoría = ventaReceta;
}
//Despliega los datos de inventario del medicamento seleccionado
System::Void main::dgv_medicamento_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	desplegarInventario(
		sistema.getInventario(
		System::Convert::ToInt32(dgv_medicamento->CurrentRow->Cells[1]->Value)));
}