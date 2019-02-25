#include<iostream>
#include<conio.h>
using namespace std;

void printSet(int arr[],int n)
{
	cout<<"\n{";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
		if(i!=n-1)
			cout<<",";
	}
	cout<<"}\n";
}

int main()
{
	cout<<"\nEnter the set1 size : ";
	int size1;
	cin>>size1;
	int set1[size1];
	cout<<"\nEnter the set1 elements :\n";
	for(int i=0;i<size1;i++)
	{
		cin>>set1[i];
	}
	printSet(set1,size1);
	cout<<"\nEnter the set2 size : ";
	int size2;
	cin>>size2;
	int set2[size2];
	cout<<"\nEnter the set2 elements :\n";
	for(int i=0;i<size2;i++)
	{
		cin>>set2[i];
	}
	printSet(set2,size2);
	int size=size1+size2;
	int un[size];
	for(int i=0;i<size1;i++)
	{
		un[i]=set1[i];
	}
	for(int i=0,k=size1;i<size2&&k<size;i++,k++)
	{
		for (int j=0;j<size2;j++)
		{ 
		if(un[j]!=set2[i])
		un[k]=set2[i];
	    }
	}
	cout<<"\n\nUnion\n";
	printSet(un,size);
	int m=0;
	int in[10];
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			if(set1[i]==set2[j])
			{
				in[m]=set1[i];
				m++;	
			}
		}
	}
	cout<<"\n\nIntersection\n";
	printSet(in,m);
	getch();
	return 0;
}
