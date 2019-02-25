#include<iostream>
#include<conio.h>
using namespace std;

void Bsearch(int arr[],int n,int x)
{
	int mid,index=-1;
	int beg=0,end=n-1;
	int i;
	for(i=0;i<n;i++)
	{
		mid=(beg+end)/2;
		if(arr[mid]>x)
			end=mid-1;
		if(arr[mid]<x)
			beg=mid+1;
		if(arr[mid]=x)
			index=mid;
	}
	if(index>0)
		cout<<"\nElement found at index "<<index;
	else
		cout<<"\nElement not found";
}

int main()
{
	int num,size;
	cout<<"\nEnter size of array : ";
	cin>>size;
	int y[size];
	cout<<"\nEnter the elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>y[i];
	}
	cout<<"\nEnter element to be searched : ";
	cin>>num;
	Bsearch(y,size,num);
	getch();
	return 0;
}
