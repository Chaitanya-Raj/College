#include<iostream>
//#include<conio.h>
using namespace std;

int main()
{
	int size,ictr=0;
	cout<<"\nEnter the size of the array : ";
	cin>>size;
	int arr[size];
	cout<<"\nEnter the elements :\n";
	for(int i=0;i<size;i++)
		cin>>arr[i];
	cout<<"\nThe unsorted array is \t";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<"\t";
	cout<<"\n\n";
	for(int i=0;i<size-1;i++)
	{
		int cctr=0;
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			cctr++;
		}
		for(int i=0;i<size;i++)
			cout<<arr[i]<<"\t";
		ictr++;
		cout<<"\nAfter pass "<<ictr;
		cout<<"\nComparison counter = "<<cctr<<"\n\n";
	}
	cout<<"\nThe sorted array is \t";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<"\t";
	//getch();
	return 0;
} 	
