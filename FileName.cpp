#include <iostream>
using namespace std;

int List[];
int lenght = sizeof(List[0]);

void Insert(int index, int value)
{

	List[index] = value;

}

void Delte_By_Value(int value)
{

	for (int i=0; i < lenght; i++)
	{
		if (List[i] == value)
		{
			List[i] = NULL;
			cout << i;
		}
	}
}

void Delete_By_Index(int input)
{

	for (int i=0; i < lenght; i++)
	{
		if (i == input)
		{
			List[i] = NULL;
		}
	}

}

void Display()
{

	for (int i = 0; i < lenght; i++)
	{
		cout << i << " : " << List[i] << endl;
	}

}

void Append(int value)
{

	List[lenght + 1] = value;

}

void Reverse(int arr[])
{

	for(int i=lenght; i>0 ; i--)
	for(int j = 0; j < lenght; j++)
	{
		List[j] = arr[i];
	}

}

void Search_By_Value(int value)
{

	for (int i = 0; i < lenght; i++)
	{
		if (List[i] == value)
		{
			cout << i;
		}
	}

}

//int main()
//{
//
//	Insert(0,10);
//	Insert(1, 20);
//	Insert(2, 30);
//	Insert(3, 40);
//	Delte_By_Value(20);
//	Delete_By_Index(2);
//	Append(55);
//	Reverse(List);
//	Display();
//
//}