#pragma once
#include "Medicamento.h"

Medicamento::Medicamento(System::String^ nombre, Clasificaci�n categor�a,
	double dosisRecomendadaMg, System::String^ principiosActivos) {
	this->nombre = nombre;
	this->categor�a = categor�a;
	this->dosisRecomendada_mg = dosisRecomendadaMg;
	this->principiosActivos = principiosActivos;
}
System::String^ Medicamento::getNombre() {
	return nombre;
}
int Medicamento::getNumRegistro() {
	return numRegistro;
}
Clasificaci�n Medicamento::getCategor�a() {
	return categor�a;
}
double Medicamento::getDosisMg() {
	return dosisRecomendada_mg;
}
System::String^ Medicamento::getPrincipiosActivos() {
	return principiosActivos;
}