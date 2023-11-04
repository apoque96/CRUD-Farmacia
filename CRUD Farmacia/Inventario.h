#pragma once
#include "Medicamento.h"
#include "Proveedor.h"

ref class Inventario : public Medicamento {
private:
	int cantidad;
	System::String^ caducidad;
	Proveedor^ proveedor;
	double precioCompra;
	double precioVenta;
public:
	Inventario(System::String^ nombre, Clasificación categoría,
		double dosisRecomendadaMg, System::String^ principiosActivos);
	void setCantidad(int cantidad);
	int getCantidad();
	void setProveedor(Proveedor^ proveedor);
	Proveedor^ getProveedor();
	void setCompra(double precioCompra);
	double getCompra();
	void setVenta(double precioVenta);
	double getVenta();
};