#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char array[100];
	char temp[100];
	int size;
	
	cout<<"Input Array Size (Choose from 1-100): ";
	cin>>size;
	
	cout<<"Enter Characters: ";
	cin>>array;
	
	cout<<"\nReversed Array: ";	
	for (int i = size; i > -1; i--)
	{
		char temp = array[i];
		array[i] = temp;
		cout<<array[i];
	}
	
	cout<<"\nSize of the Array: "<<size;

	getch();
	return 0;
}
