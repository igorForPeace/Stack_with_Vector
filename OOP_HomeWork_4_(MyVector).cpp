#include "MyVector.h"
#include "Stack.h"

ostream& operator<<(ostream& os, const Vector& vector)
{
	for (int i = 0; i < vector.size; i++)
	{
		os << vector.date[i] << "  ";
	}
	return os;
}

istream& operator>>(istream& is, Vector& vector)
{
	while (true)
	{
		cout << "continue - c" << endl;
		char t;
		is >> t;
		if (t!='c')
		{
			break;
		}
		int temp;
		is >> temp;
		vector.PushBack(temp);
	}
	return is;
}

int main()
{
	srand(time(0));
	//Vector a;
	//a.ShowInfo();
	//a.PushBack(2);
	//a.ShowInfo();
	//a.PushBack(5);
	//a.PushBack(5);
	//a.PushBack(5);
	//a.PushBack(5);
	//a.PushBack(5);
	//a.PushBack(5);
	//a.PushBack(5);
	//a.PushBack(5);
	//a.PushBack(5);  // при добавлении 10 элемента, значение памяти увеличивается
	//a.ShowInfo();
	//a.PushFront(22);
	//a.ShowInfo();
	
	// вставка по индексу

	//Vector a;
	//a.ShowInfo();
	//for (int i = 0; i < 9; i++)
	//{
	//	a.PushBack(rand() % 10);
	//}
	//cout << "=============" << endl;
	//a.ShowInfo();
	//a.Insert(1, 5);
	//a.ShowInfo();
	//a.Insert(1, 5);  // увеличение объема памяти
	//a.ShowInfo();


	// удаление по индексу
	
	/*Vector a;
	a.ShowInfo();
	for (int i = 0; i < 10; i++)
	{
		a.PushBack(rand() % 10);
	}
	a.ShowInfo();
	a.RemoveAt(8);
	a.ShowInfo();*/


	// удаление всех одинаковых элементом переданных в параметре

	/*Vector a;
	a.ShowInfo();
	a.PushBack(2);
	a.PushBack(3);
	a.PushBack(4);
	a.PushBack(5);
	a.PushBack(3);
	a.PushBack(7);
	a.PushBack(8);
	a.PushBack(3);
	a.PushBack(9);
	a.PushBack(2);
	a.ShowInfo();
	a.Remove(2);
	a.ShowInfo();
	a.Remove(3);
	a.ShowInfo();
	a.Remove(4);
	a.ShowInfo();
	a.Remove(7);
	a.ShowInfo();*/

	// удаление первого элемента и последнего элемента

	//Vector a;
	//a.ShowInfo();
	//a.PushBack(2);
	//a.PushBack(3);
	//a.PushBack(4);
	//a.PushBack(5);
	//a.PushBack(3);
	//a.PushBack(7);
	//a.PushBack(8);
	//a.PushBack(3);
	//a.PushBack(9);
	//a.PushBack(2);
	//a.ShowInfo();
	//a.PopFront();  // удаление первого элемента
	//a.ShowInfo();


	//a.PopBack(); // удаление последнего элемента
	//a.ShowInfo();

	// обнуление всех элементов массива

	//Vector a;
	//a.ShowInfo();
	//a.PushBack(2);
	//a.PushBack(3);
	//a.PushBack(4);
	//a.PushBack(5);
	//a.PushBack(3);
	//a.PushBack(7);
	//a.PushBack(8);
	//a.PushBack(3);
	//a.PushBack(9);
	//a.PushBack(2);
	//a.ShowInfo();
	//a.Clear();
	//a.ShowInfo();

	// метод IsEmpty 

	/*Vector a;
	a.ShowInfo();
	a.PushBack(2);
	a.PushBack(3);
	a.PushBack(4);
	a.PushBack(5);
	a.PushBack(3);
	a.PushBack(7);
	a.PushBack(8);
	a.PushBack(3);
	a.PushBack(9);
	a.PushBack(2);
	a.ShowInfo();
	cout << "==================" << endl;
	cout << boolalpha << a.IsEmpty() << endl;
	cout << "==================" << endl;
	a.Clear();
	a.ShowInfo();
	cout << "==================" << endl;
	cout << boolalpha << a.IsEmpty() << endl;*/

	// метод TrimToSize

	/*Vector a;
	a.PushBack(2);
	a.PushBack(3);
	a.PushBack(4);
	a.PushBack(5);
	a.PushBack(3);
	a.PushBack(2);
	a.ShowInfo();
	a.TrimToSize();
	a.ShowInfo();*/

	// метод возврата индекса 

	/*Vector a;
	a.PushBack(2);
	a.PushBack(3);
	a.PushBack(4);
	a.PushBack(5);
	a.PushBack(3);
	a.PushBack(2);
	a.ShowInfo();
	int number = 9;
	cout << "Index of your number : " << a.IndexOf(number) << endl;*/

	
	/*Vector a;
	a.PushBack(2);
	a.PushBack(3);
	a.PushBack(4);
	a.PushBack(5);
	a.PushBack(3);
	a.PushBack(2);
	a.ShowInfo();
	int number = 9;
	cout << "Index of your number : " << a.LastIndexOf(number) << endl;*/


	// переворот массива
	
	/*Vector a;
	for (int i = 0; i < 10; i++)
	{
		a.PushBack(i);
	}
	a.ShowInfo();
	a.Reverse();
	a.ShowInfo();*/

	// быстрая сортировка 

	/*Vector a;
	for (int i = 0; i < 10; i++)
	{
		a.PushBack(rand() % 10);
	}
	a.ShowInfo();
	a.SortAsc();
	a.ShowInfo();*/

	/*Vector a;
	for (int i = 0; i < 10; i++)
	{
		a.PushBack(rand() % 10);
	}
	a.ShowInfo();
	a.SortDesc();
	a.ShowInfo();*/

	// случайное перемешивание элементов массива

	/*Vector a;
	a.ShowInfo();
	cout << "==========" << endl;
	for (int i = 0; i < 10; i++)
	{
		a.PushBack(i);
	}
	a.ShowInfo();
	a.Shuffle();
	a.ShowInfo();*/

	// случайное заполнение массива
	/*Vector a;
	a.ShowInfo();
	a.RandomFill();
	a.ShowInfo();
	a.RandomFill();
	a.ShowInfo();*/


	// сравнение двух векторов

	/*Vector a;
	Vector b;
	for (int i = 0; i < 10; i++)
	{
		a.PushBack(i);
		b.PushBack(i);
	}
	a.ShowInfo();
	b.ShowInfo();

	cout << boolalpha << a.Equals(b) << endl;
	
	cout << "=========" << endl;
	Vector c;
	c.RandomFill();
	Vector d;
	d.RandomFill();
	c.ShowInfo();
	d.ShowInfo();
	cout << boolalpha << c.Equals(d) << endl;
	c.PushBack(5);
	c.ShowInfo();
	d.ShowInfo();
	cout << boolalpha << c.Equals(d) << endl;*/


	// возврат значения элемента массива по индексу 
	/*Vector a;
	a.RandomFill();
	a.ShowInfo();
	cout << a.GetElementAt(10) << endl;
	cout << a.GetElementAt(2) << endl;*/

	// Метод Clone

	/*Vector a;
	a.RandomFill();
	a.ShowInfo();
	Vector b;
	b.Clone(a);
	b.ShowInfo();*/

	/*Vector a;
	a.RandomFill();
	a.ShowInfo();
	Vector b;
	b = a;
	b.ShowInfo();
	cout << "===========================" << endl;
	Vector c;
	c.RandomFill();
	c.ShowInfo();
	Vector d(c);
	d.ShowInfo();*/
	
	// перегрузка оператора []
	/*Vector a;
	for (int i = 0; i < 10; i++)
	{
		a.PushBack(i);
	}
	a.ShowInfo();
	cout << a[5] << endl;*/
	
	// оператор ==
	/*Vector a;
	for (int i = 0; i < 10; i++)
	{
		a.PushBack(i);
	}
	a.ShowInfo();
	Vector b(a);
	b.ShowInfo();
	bool result = a == b;
	cout << boolalpha << result << endl;
	b.PushBack(5);
	b.ShowInfo();
	result = a == b;
	cout << boolalpha << result << endl;*/

	//перегрузка <<
	/*Vector a;
	a.RandomFill();
	a.ShowInfo();
	cout << a << endl;*/

	// перегрузка >>

	/*Vector a;
	a.ShowInfo();
	cin >> a;
	a.ShowInfo();*/
	


	//Stack A;
	//cout << boolalpha << A.IsEmpty() << endl;
	//cout << boolalpha << A.IsFull() << endl;
	//cout << A.GetCount() << endl;

	//for (int i = 0; i < 9; i++)
	//{
	//	A.Push(i);
	//}
	//A.Push(2);
	//cout << A.GetCount() << endl;
	//A.Push(2);  // на этом моменте стэк уже будет переполнен	

	Stack A;
	while (!A.IsFull())
	{
		A.Push(rand() % 10);
	}

	while (!A.IsEmpty())
	{
		A.Pop();
	}

	

	
	
	return 0;
}