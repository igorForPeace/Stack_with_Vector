#pragma once
#include "All_libraries.h"
#include "MyVector.h"

class Stack
{
	static const int SIZE = 10;
	Vector* arr = new Vector(SIZE);
	int index = 0;
public:
	void Clear(); // оичстка стека
	bool IsEmpty() const; // проверка на пустоту
	bool IsFull() const; // проверка на заполненность
	int GetCount() const; // возврат значения количества элементов
	void Push(int number); // добавление к стеку
	void Pop(); // вывести на экран последнее значение и убрать его из стэка


};

