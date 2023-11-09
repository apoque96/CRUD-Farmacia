#pragma once
#include "Medicamento.h"

Medicamento::Medicamento(System::String^ nombre, Clasificación categoría,
	double dosisRecomendadaMg, System::String^ principiosActivos) {
	this->nombre = nombre;
	this->categoría = categoría;
	this->dosisRecomendada_mg = dosisRecomendadaMg;
	this->principiosActivos = principiosActivos;
}
Medicamento::Medicamento(Medicamento% m) {
	nombre = m.nombre;
	categoría = m.categoría;
	dosisRecomendada_mg = m.dosisRecomendada_mg;
	principiosActivos = m.principiosActivos;
	numRegistro = m.numRegistro;
}
System::String^ Medicamento::getNombre() {
	return nombre;
}
int Medicamento::getNumRegistro() {
	return numRegistro;
}
Clasificación Medicamento::getCategoría() {
	return categoría;
}
double Medicamento::getDosisMg() {
	return dosisRecomendada_mg;
}
System::String^ Medicamento::getPrincipiosActivos() {
	return principiosActivos;
}