#pragma once
#include "Inventario.h"
Inventario::Inventario(System::String^ nombre, Clasificaci�n categor�a,
	double dosisRecomendadaMg, System::String^ principiosActivos) {
	this->nombre = nombre;
	this->categor�a = categor�a;
	this->dosisRecomendada_mg = dosisRecomendadaMg;
	this->principiosActivos = principiosActivos;
}
void Inventario::setCantidad(int cantidad) {
	this->cantidad = cantidad;
}
int Inventario::getCantidad() {
	return cantidad;
}
void Inventario::setProveedor(Proveedor^ proveedor) {
	this->proveedor = proveedor;
}
Proveedor^ Inventario::getProveedor() {
	return proveedor;
}
void Inventario::setCompra(double precioCompra) {
	this->precioCompra = precioCompra;
}
double Inventario::getCompra() {
	return precioCompra;
}
void Inventario::setVenta(double precioVenta) {
	this->precioVenta = precioVenta;
}
double Inventario::getVenta() {
	return precioVenta;
}