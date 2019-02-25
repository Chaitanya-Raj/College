#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int size;
	cout<<"\nEnter set size: ";
	cin>>size;
	int set[size];
	cout<<"\nEnter the set elements :\n";
	for(int i=0;i<size;i++)
		cin>>set[i];
	for(int i=0;i<size;i++)
		cout>>set[i];
	
}
