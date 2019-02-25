#include<iostream>
//#include<conio.h>
using namespace std;

void print(int a[], int n)
{
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i];
}

int main()
{
	int arr[3],t,n;
	cout<<"Enter the size of the set :";
	cin>>n;
	cout<<"\nEnter the elements :\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++)
		{
			t=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=t;
			print(arr,n);
		}
	}
	//getch();
	return 0;
}
