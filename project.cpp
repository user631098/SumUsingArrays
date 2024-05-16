#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int size;
	cout<<"Size:     ";
	cin>>size;
	
	int* array = new int[size];
	
	for(int i=0; i<size; i++) {
		cout<<"Element "<<i+1<<":   ";
		cin>>array[i];
	}
	
	int sum = 0;
	
	for(int i=0; i<size; i++) {
		sum+=array[i];
	}

	delete[]array;
	array = NULL;
	system("cls");
	
	cout<<"Sum of all values is: "<<sum;
	
}
