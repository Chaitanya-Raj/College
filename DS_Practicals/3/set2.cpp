#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class Relation
{
	int l,set[10],rel[10][10];
	public:
		void reflexive();
		void symmetric();
		void anti_symmetric();
		void transitive();
		void input();
		void printMatrix();
};

void Relation::input()
{
	cout<<"\nEnter the set size : "<<endl;
	cin>>l;
	cout<<"\nEnter the set elements :\n";
	for(int i=0;i<l;i++)
	{
		cin>>set[i];
	}
	cout<<"\nEnter the relation matrix elements :\n";
	for(int i=0;i<l;i++)
	{
		
		for(int j=0;j<l;j++)
			cin>>rel[i][j];
	}
}

void Relation::printMatrix()
{
	cout<<"\n\n";
	for(int i=0;i<l;i++)
	{
		cout<<"\t"<<set[i];
	}
	cout<<endl;
	for(int i=0;i<l;i++)
	{
		cout<<"\n";
		for(int j=0;j<l;j++)
		{
			cout<<"\t"<<rel[i][j];
		}
	}
	cout<<"\n\n";
}

void Relation::reflexive()
{
	bool flag=true;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
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

void Relation::symmetric()
{
	bool flag=true;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
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

void Relation::anti_symmetric()
{
	bool flag=true;
	for(int i=0;i<l;i++)
	{
		for

void Relation::transitive()
{
	bool flag=true;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			for(int k=0;k<l;k++)
			{
				if((rel[i][j]==1)&&(rel[j][k]==1)&&(rel[i][k]!=1))
				{
					flag=false;
				}
			}
		}
	}
	if(flag==true)
		cout<<"\nThe relation is transitive";
	if(flag==false)
		cout<<"\nThe relation is not transitive";
}

int main()
{
	Relation r;
	r.input();
	r.printMatrix();
	r.reflexive();
	r.symmetric();
	r.transitive();
	getch();
	return 0;
}
