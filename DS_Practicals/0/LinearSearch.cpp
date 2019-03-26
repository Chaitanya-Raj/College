#include<iostream>
//#include<conio.h>
using namespace std;

void Lsearch(int arr[],int n,int x)
{
	int index=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			index=i;
	}
	if(index>0)
		System.out.println"\nElement found at index "<<index;
	else
		System.out.println"\nElement not found";
}

int main()
{
	int num,size;
	System.out.println"\nEnter size of array : ";
	cin>>size;
	int y[size];
	System.out.println"\nEnter the elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>y[i];
	}
	System.out.println"\nEnter element to be searched : ";
	cin>>num;
	Lsearch(y,size,num);
	//getch();
	return 0;
}
