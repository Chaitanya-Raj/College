#include<iostream>
#include<conio.h>
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
	int found=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			found=1;
	}
	if(found==1)
		cout<<"\nElement found in set";
	else
		cout<<"\nElement not found in set";
}

void pwrset(int arr[],int req,int start,int cur,bool check[],int len)
{
	if(cur>req)
	return;
	else if(cur==req)
	{
		cout<<"\t";
		for(int i=0;i<len;i++)
		{
			if(check[i]==true)
			{
				cout<<arr[i]<<" ";
			}
		}
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
}

int main()
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
	ismember(set,size);
	for(int i=1;i<=size;i++)
	{
		cout<<"\n The subsets of the length"<<i<<" for the given array set:\n";
		pwrset(set,i,0,0,check,size);	
	}
	getch();
	return 0;
}
