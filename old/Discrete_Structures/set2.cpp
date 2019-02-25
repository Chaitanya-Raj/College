#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void printMatrix(int rel[10][10],int m,int n)
{
	cout<<"\n\n";
	for(int i=0;i<m;i++)
	{
		cout<<"\n";
		for(int j=0;j<n;j++)
		{
			cout<<"\t"<<rel[i][j];
		}
	}
	cout<<"\n\n";
}

void reflexive(int rel[10][10],int m,int n)
{
	bool flag=true;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i==j)&&(rel[i][j]!=1))
				flag=false;
		}
	}
	if(flag==true)
		cout<<"\nThe relation is reflexive";
	if(flag==false)
		cout<<"\nThe relation is not reflexive";
}

void symmetric(int rel[10][10],int m,int n)
{
	bool flag=true;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(((rel[j][i]!=1)&&(rel[i][j]==1)))
				flag=false;
		}
	}
	if(flag==true)
		cout<<"\nThe relation is symmetric";
	if(flag==false)
		cout<<"\nThe relation is not symmetric";
}

int main()
{
	cout<<"\nEnter the relation matrix size : "<<endl;
	int m,n;
	cin>>m>>n;
	int rel[10][10];
	cout<<"\nEnter the relation matrix elements :\n";
	for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<n;j++)
			cin>>rel[i][j];
	}
	printMatrix(rel,m,n);
	reflexive(rel,m,n);
	symmetric(rel,m,n);
	getch();
	return 0;
}
