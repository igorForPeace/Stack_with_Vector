#pragma once
#include "All_libraries.h"

class Vector
{
private:
	int* date;
	unsigned int size;
	unsigned int capacity;
	void EnsureCapacity(int count);  // ���������� ������ 
public:
	Vector();
	Vector(unsigned int capacity);
	Vector(const Vector& original);
	~Vector();
	
	int GetSize() const;
	int GetCapacity() const;
	void SetCapacity(unsigned int capacity); // ��������� ��� �������� ������
	void Print(); // ����� ��������� �������
	void Print(int index);
	void ShowInfo(); // ����� ���������� ��� ������ + ��������
	void PushBack(int number); // ���������� �������� � ����� �������
	void PushFront(int number); //���������� ������ �������� � ������ �������
	void Insert(unsigned int index, int number); //������� ����� �� �������
	void RemoveAt(unsigned int inde); // �������� �� �������
	void Remove(int number); // �������� �� ������� ���� ��������� number
	void PopFront(); // �������� ������� �������� �� �������
	void PopBack(); // �������� ���������� �������� �� �������
	void Clear(); // ��������� ���� ��������� �� 0
	bool IsEmpty(); // ����� ���������� true, ���� size = 0, � false � �������� ������
	void TrimToSize(); // ����� ��������� �������� capacity ��� size, ����������� � �������������� ������
	int IndexOf(int number);  //(�������� ����� ����� ������� ������� ��������� � ������ ���������� ��������.
			//� ���������� ������ ������� ������ ���������� ��������, � e��� ������ �� �������, ������� - 1)
	int LastIndexOf(int number);

	void Reverse(); // ��������������� �������
	void SortAsc(); // ������� ���������� �� �����������
	void SortDesc(); // ������� ���������� �� ��������
	void Shuffle(); //��������� ������������� ��������� �������
	void RandomFill(); // ���������� ������� ���������� �������
	bool Equals(const Vector& other); // ��������� ���� ��������
	int GetElementAt(int index);
	Vector& Clone(const Vector& other); // ���������� ���� ������� �������
	Vector& operator = (const Vector& other);
	int operator [] (int index); 
	bool operator == (const Vector& other);
	friend ostream& operator<<(ostream& os, const Vector& vector);
	friend istream& operator>>(istream& is, Vector& vector);
};

