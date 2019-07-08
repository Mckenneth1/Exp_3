#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	double provA[7], provB[7], provC[7];

	cout << "Enter the Weekly Temperature of Province A, Province B and Province C"<< endl;
	cout <<"" << endl;

	for(int i = 0; i < 7; i ++){
		cout << "Province A, Day " << i+1 << " : ";
		cin >> provA[i];
	}
	
	for(int i = 0; i < 7; i ++){
		cout << "Province B, Day " << i+1 << " : ";
		cin >> provB[i];
	}
	
	for(int i = 0; i < 7; i ++){
		cout << "Province C, Day " << i+1 << " : ";
		cin >> provC[i];
	}
	
	cout <<"" << endl;
	cout <<"" << endl;
		cout << "Displayed Values:" << endl;
	cout <<"" << endl;
	
	for(int i = 0; i < 7; i ++){
		cout << "Province A, Day " << i+1 << " = " << provA[i] << endl;
	}
	
	cout << endl;
	
	for(int i = 0; i < 7; i ++){
		cout << "Province B, Day " << i+1 << " = " << provB[i] << endl;
	}
	
	cout << endl;
	
	for(int i = 0; i < 7; i ++){
		cout << "Province C, Day " << i+1 << " = " << provC[i] << endl;
	}

	getch();
	return 0;
