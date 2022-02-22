#pragma once
#include "All_libraries.h"
#include "MyVector.h"

class Stack
{
	static const int SIZE = 10;
	Vector* arr = new Vector(SIZE);
	int index = 0;
public:
	void Clear(); // ������� �����
	bool IsEmpty() const; // �������� �� �������
	bool IsFull() const; // �������� �� �������������
	int GetCount() const; // ������� �������� ���������� ���������
	void Push(int number); // ���������� � �����
	void Pop(); // ������� �� ����� ��������� �������� � ������ ��� �� �����


};

