#pragma once
#include "Sistema.h"

void Sistema::registrar(System::String^ nombre, System::String^ principio, double dosis, int stock,
	Proveedor^ proveedor, System::String^ caducidad, double compra, double venta) {
	
	//TODO
}
void Sistema::actualizar(Inventario^ inventario) {
	//TODO
}
void Sistema::informe() {
	//TODO
}
int Sistema::promedio() {
	//TODO
	return 0;
}
void Sistema::inventarioMedicamento(Inventario^ inventario) {
	//TODO
}
double Sistema::precioMásAlto(Proveedor^ proveedor) {
	//TODO
	return 0;
}
Medicamento^ Sistema::buscarCriterio() {
	//TODO
	return nullptr;
}

void Sistema::añadirProveedor(Proveedor^ proveedor) {
	listaProveedores.Add(proveedor);
}

Proveedor^ Sistema::getProveedor(int index) {
	return listaProveedores.GetNodeVal(listaProveedores.Get(index));;
}

void Sistema::añadirInventario(Inventario^ inventario) {
	listaInventario.Add(inventario);
}

Inventario^ Sistema::getInventario(int index) {
	return listaInventario.GetNodeVal(listaInventario.Get(index));;
}