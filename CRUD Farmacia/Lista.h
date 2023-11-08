#pragma once
#include "Inventario.h"
template <class T>
ref class Lista {
private:
	template <class T>
	ref struct Node {
		Node<T>^ next;
		Node<T>^ prev;
		T val;

		Node<T>(T val) : val(val){}
	};
	Node<T>^ head;
	Node<T>^ tail;
	int size;
public:
	//Constructor de la lista
	Lista() : size(0){}
	//Añade un nodo al final de la lista
	void Add(T val) {
		size++;
		if (!head) {
			//Se ejecuta en caso de que la lista está vacia
			head = gcnew Node<T>(val);
			tail = head;
			return;
		}
		tail->next = gcnew Node<T>(val);
		tail->next->prev = tail;
		tail = tail->next;
	}
	//Borra el nodo según el valor dado
	void Remove(T val) {
		if (size <= 0) return;
		size--;
		//Traversas la lista hasta un nodo anterior al nodo a eliminar
		Node<T>^ current = head;
		while (current && current->val != val) {
			current = current->next;
		}
		//En caso de no encontrar el nodo, simplemente no borra ningún nodo
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
	//Borra el nodo según el indice indicado
	void Remove(int index) {
		//Si el indice está fuera de rango, no hace nada
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
	Node<T>^ Get(T val) {
		if (size <= 0) return nullptr;
		Node<T>^ current = head;
		while (current && current->val != val) {
			current = current->next;
		}
		return current;
	}
	//Obtiene el nodo en el indice dado
	Node<T>^ Get(int index) {
		if (index < 0) return nullptr;
		Node<T>^ current = head;
		for (int i = 0; i < index && current; i++) {
			current = current->next;
		}
		return current;
	}

	//Obtiene el nodo con el nombre del medicamento dado
	Node<Inventario^>^ GetMedicamento(System::String^ nombre) {
		Node<Inventario^>^ current = head;
		while (current) {
			if (!System::String::Compare(nombre, current->val->getNombre())) return current;
			current = current->next;
		}
		return nullptr;
	}

	//Obtiene el nodo con el principio activo del medicamento dado
	Node<Inventario^>^ GetMedicamentoPrincipio(System::String^ principio) {
		Node<Inventario^>^ current = head;
		while (current) {
			if (!System::String::Compare(principio, current->val->getPrincipiosActivos())) return current;
			current = current->next;
		}
		return nullptr;
	}

	//Obtiene el valor del nodo
	T GetNodeVal(Node<T>^ node) {
		if(node) return node->val;
		throw 0;
	}

	bool isEmpty() {
		return size == 0;
	}

	int Size() {
		return size;
	}

#pragma region Sort
	void swap(Node<T>^ a, Node<T>^ b) {
		T^ temp = a->val;
		a->val = b->val;
		b->val = a->val;
	}

	Node<T>^ partition(Node<T>^ low, Node<T>^ high) {
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
	void quickSort(Node<T>^ low, Node<T>^ high) {
		if (high != nullptr && low != high && low != high->next) {
			Node<T>^ pivot = partition(low, high);
			quickSort(low, pivot->prev);
			quickSort(pivot->next, high);
		}
	}
#pragma endregion
};