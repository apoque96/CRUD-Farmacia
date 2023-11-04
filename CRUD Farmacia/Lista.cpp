#pragma once
#include "Lista.h"
#include "Proveedor.h"
#include "Inventario.h"
//A�ade un nodo al final de la lista
template <typename T>
void Lista<T>::Add(T val) {
	size++;
	if (!head) {
		//Se ejecuta en caso de que la lista est� vacia
		head = gcnew Node(val);
		tail = head;
		return;
	}
	tail->next = gcnew Node(val);
	tail->next->prev = tail;
	tail = tail->next;
}
//Borra el nodo seg�n el valor dado
template <typename T>
void Lista<T>::Remove(T val) {
	if (size <= 0) return;
	size--;
	//Traversas la lista hasta un nodo anterior al nodo a eliminar
	Node<T>^ current = head;
	while (current && current->val != val) {
		current = current->next;
	}
	//En caso de no encontrar el nodo, simplemente no borra ning�n nodo
	if (!current) return;
	//En caso de que el nodo sea la cabeza, asigna el siguiente nodo como la nueva cabeza
	if (current == head) {
		head = head->next;
		head->prev = nullptr;
		return;
	}
	//En caso de que el nodo sea la cola, asigna el nodo previo como la cola nueva
	if (current == tail) {
		tail = tail->prev;
		tail->next = nullptr;
		return;
	}
	//Borra el nodo
	current->prev->next = current->next;
	current->next->prev = current->prev;
	current = nullptr;
}
//Borra el nodo seg�n el indice indicado
template <typename T>
void Lista<T>::Remove(int index) {
	//Si el indice est� fuera de rango, no hace nada
	if (index < 0 || index >= size) return;
	Node<T>^ node_to_delete;
	//Elimina la cabeza
	if (index == 0) {
		node_to_delete = head;
		head = head->next;
		head->prev = nullptr;
		if (!head) tail = nullptr;
		size--;
		node_to_delete = nullptr;
		return;
	}
	//Elimina la cola
	if (index == size - 1) {
		node_to_delete = tail;
		tail = tail->prev;
		tail->next = nullptr;
		size--;
		node_to_delete = nullptr;
		return;
	}
	size--;
	//Traversas la lista hasta un nodo anterior al nodo a eliminar
	Node<T>^ current = head;
	for (int i = 0; i < index - 1; i++) {
		current = current->next;
	}
	node_to_delete = current->next;
	current->next = node_to_delete->next;
	node_to_delete->next->prev = current;
	//Elimina el nodo indicado
	node_to_delete = nullptr;
}
//Obtiene el nodo con el valor dado
template <typename T>
Lista<T>::Node<T>^ Lista<T>::Get(T val) {
	if (size <= 0) return nullptr;
	Node<T>^ current = head;
	while (current && current->val != val) {
		current = current->next;
	}
	return current;
}
//Obtiene el nodo en el indice dado
template <typename T>
Lista<T>::Node<T>^ Lista<T>::Get(int index) {
	if (index < 0) return nullptr;
	Node^ current = head;
	for (int i = 0; i < index && current; i++) {
		current = current->next;
	}
	return current;
}

template <typename T>
bool Lista<T>::isEmpty() {
	return size == 0;
}

template <typename T>
int Lista<T>::Size() {
	return size;
}

#pragma region Sort
template <typename T>
void Lista<T>::swap(Node<T>^ a, Node<T>^ b) {
	T^ temp = a->val;
	a->val = b->val;
	b->val = a->val;
}

template <typename T>
Lista<T>::Node<T>^ Lista<T>::partition(Node<T>^ low, Node<T>^ high) {
	T^ pivot = high->val;
	Node<T>^ i = low->prev;
	for (Node<T>^ j = low; j != high; j = j->next) {
		if (pivot > j->val) {
			if (i) i = i->next;
			else i = low;
			swap(i, j);
		}
	}
	if (i) i = i->next;
	else i = low;
	swap(i, high);
	return i;
}
template <class T>
void Lista<T>::quickSort(Node<T>^ low, Node<T>^ high) {
	if (high != nullptr && low != high && low != high->next) {
		Node<T>^ pivot = partition(low, high);
		quickSort(low, pivot->prev);
		quickSort(pivot->next, high);
	}
}
#pragma endregion