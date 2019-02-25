#include<iostream>
#include<conio.h>
using namespace std;

class SET{
public:
	int size;
	int set[10];
	SET()
	{
		cout<<"\nEnter set size : ";
		cin>>size;
		cout<<"\nEnter set elements : ";
		for(int i=0;i<size;i++)
			cin>>set[i];
	}

};

int main()
{
	SET s1
}
