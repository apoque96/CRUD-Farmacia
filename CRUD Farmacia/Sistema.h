#pragma once
#include "Inventario.h"
#include "Lista.h"

ref class Sistema {
	Lista<Proveedor> listaProveedores;
	Lista<Inventario> listaInventario;
	void registrar();
	void actualizar();
	void informe();
	int promedio();
	void inventarioMedicamento();
	double precioMásAlto();
	Medicamento buscarCriterio();
};