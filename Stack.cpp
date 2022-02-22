#include "Stack.h"

void Stack::Clear()
{
	if (this->arr != nullptr)
	{
		arr->Clear();
		this->index = 0;
	}
}

bool Stack::IsEmpty() const
{
	return index == 0;
}

bool Stack::IsFull() const
{
	return index == SIZE;
}

int Stack::GetCount() const
{
	return index;
}

void Stack::Push(int number)
{
	if (!IsFull())
	{
		arr->PushBack(number);
		index++;
	}
	else
	{
		throw "Stack overflow!";
	}
}

void Stack::Pop()
{
	if (!IsEmpty())
	{
		index--;
		arr->Print(index);
		arr->PopBack();
	}
	else
	{
		throw "Stack is empty!";
	}
}