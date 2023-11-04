#pragma once
#include "Proveedor.h"

Proveedor::Proveedor(System::String^ nombre, int Nit, System::String^ direcciónFiscal,
	System::String^ dirección, System::String^ teléfono, System::String^ correo) {
	this->nombre = nombre;
	this->Nit = Nit;
	this->direcciónFiscal = direcciónFiscal;
	this->dirección = dirección;
	this->teléfono = teléfono;
	this->correo = correo;
}

System::String^ Proveedor::getNombre() {
	return nombre;
}
int Proveedor::getNit() {
	return Nit;
}
System::String^ Proveedor::getDirecciónFiscal() {
	return direcciónFiscal;
}
System::String^ Proveedor::getDirección() {
	return dirección;
}
System::String^ Proveedor::getTeléfono() {
	return teléfono;
}
System::String^ Proveedor::getCorreo() {
	return correo;
}