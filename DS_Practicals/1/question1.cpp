#include<iostream>
//#include<conio.h>
#include<math.h>
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

void ismember(int arr[],int n)
{
	cout<<"\nEnter element to be searched : ";
	int x;
	cin>>x;
	bool found=false;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			found=true;
	}
	if(found==true)
		cout<<"\nElement found in set";
	else
		cout<<"\nElement not found in set";
}

/*void pwrset(int arr[],int req,int start,int cur,bool check[],int len)
{
	if(cur>req)
	return;
	else if(cur==req)
	{
		cout<<"\t";
		cout<<"{";
		for(int i=0;i<len;i++)
		{
			if(check[i]==true)
			{
				cout<<arr[i];
				if(i!=len-i)
					cout<<",";
			}
		}
		cout<<"}";
		cout<<"\n";
		return;
	}
	if(start==len)
	{
		return;
	}
	check[start]=true;
	pwrset(arr,req,start+1,cur+1,check,len);
	check[start]=false;
	pwrset(arr,req,start+1,cur,check,len);	
}*/

void pwrset(int arr[],int n)
{
	int x=pow(2,n);
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
				cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
}

int menu()
{
	cout<<"\nEnter the set size : ";
	int size;
	cin>>size;
	int set[size];
	bool check[size];
	cout<<"\nEnter the set elements :\n";
	for(int i=0;i<size;i++)
	{
		cin>>set[i];
		check[i]=false;
	}
	printSet(set,size);

	cout<<"\nChoose an option :\n";
	cout<<"\n1.Cardinality";
	cout<<"\n2.Check whether an element is present or not";
	cout<<"\n3.Powerset";
	cout<<"\n0.Exit\n\n";
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:	cout<<"\nThe cardinality of set is "<<size;
				break;
		case 2:	ismember(set,size);
				break;
		case 3:	/*for(int i=0;i<=size;i++)
				{
					cout<<"\n The subsets of the cardinality "<<i<<" for the given array set:\n";
					pwrset(set,i,0,0,check,size);	
				}*/
				pwrset(set,size);
				break;
		case 0:	exit(0);
	}
}

int main()
{
	
	menu();
	//getch();
	return 0;
}
