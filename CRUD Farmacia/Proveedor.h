#pragma once

ref class Proveedor {
private:
	System::String^ nombre;
	int Nit;
	System::String^ direcci�nFiscal;
	System::String^ direcci�n;
	System::String^ tel�fono;
	System::String^ correo;
	int id;
public:
	Proveedor(System::String^ nombre, int Nit, System::String^ direcci�nFiscal,
		System::String^ direcci�n, System::String^ tel�fono, System::String^ correo, int id);
	System::String^ getNombre();
	int getNit();
	System::String^ getDirecci�nFiscal();
	System::String^ getDirecci�n();
	System::String^ getTel�fono();
	System::String^ getCorreo();
	int getId();
};