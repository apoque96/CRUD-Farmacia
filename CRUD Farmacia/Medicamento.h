#pragma once

enum Clasificación {
	ventaLibre = 0,
	ventaReceta = 1
};

ref class Medicamento {
protected:
	System::String^ nombre;
	int numRegistro;
	Clasificación categoría;
	double dosisRecomendada_mg;
	System::String^ principiosActivos;
	static int idRegistro;
public:
	Medicamento(){}
	Medicamento(System::String^ nombre, Clasificación categoría, 
		double dosisRecomendadaMg, System::String^ principiosActivos);
	Medicamento(Medicamento% m);
	System::String^ getNombre();
	int getNumRegistro();
	Clasificación getCategoría();
	double getDosisMg();
	System::String^ getPrincipiosActivos();
};