#pragma once

ref class Proveedor {
private:
	System::String^ nombre;
	int Nit;
	System::String^ direcciónFiscal;
	System::String^ dirección;
	System::String^ teléfono;
	System::String^ correo;
public:
	Proveedor(System::String^ nombre, int Nit, System::String^ direcciónFiscal,
		System::String^ dirección, System::String^ teléfono, System::String^ correo);
	System::String^ getNombre();
	int getNit();
	System::String^ getDirecciónFiscal();
	System::String^ getDirección();
	System::String^ getTeléfono();
	System::String^ getCorreo();
};