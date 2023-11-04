#pragma once
template <class T>
ref class Lista {
private:
	template <class T>
	ref struct Node {
		Node<T>^ next;
		Node<T>^ prev;
		T val;
	};
	Node<T>^ head;
	Node<T>^ tail;
	int size;
public:
	//Constructor de la lista
	Lista() : size(0){}
	void Add(T val);
	void Remove(T val);
	void Remove(int index);
	Node<T>^ Get(T val);
	Node<T>^ Get(int index);
	bool isEmpty();
	int Size();

#pragma region  Sort
	void swap(Node<T>^ a, Node<T>^ b);
	Node<T>^ partition(Node<T>^ low, Node<T>^ high);
	void quickSort(Node<T>^ low, Node<T>^ high);
#pragma endregion

};