#include<iostream>
#include<math.h>
using namespace std;

class Relation{
	int l,set[10],rel[10][10];
	public:
		bool ref=false,sym=false,ansym=false,tr=false;
		void input();
		void printMatrix();
		void reflexive();
		void symmetric();
		void anti_symmetric();
		void transitive();
};

void Relation::input()
{
	cout<<"\nEnter the set size : "<<endl;
	cin>>l;
	cout<<"\nEnter the set elements :\n";
	for(int i=0;i<l;i++)
	{
		cin>>set[l];
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
	{
		cout<<"\nThe relation is reflexive";
		ref=true;
	}
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
	{
		cout<<"\nThe relation is symmetric";
		sym=true;
	}
	if(flag==false)
		cout<<"\nThe relation is not symmetric";
}

void Relation::anti_symmetric()
{
	bool flag=true;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if((rel[i][j]==1)&&(rel[j][i]==1)&&(i!=j))
				flag=false;
		}
	}
	if(flag==true)
	{
		cout<<"\nThe relation is anti-symmetric";
		ansym=true;
	}
	if(flag==false)
		cout<<"\nThe relation is not anti-symmetric";
}

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
					flag=false;
			}
		}
	}
	if(flag==true)
	{
		cout<<"\nThe relation is transitive";
		tr=true;
	}
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
    r.anti_symmetric();
    r.transitive();
    if(((r.ref==r.sym)==r.tr)==true)
    {
        cout<<"\nEquivalence";
    }
    else if(((r.ref==r.ansym)==r.tr)==true)
    {
        cout<<"\nPartial Order";
    }
    else
    {
        cout<<"\nNone";
    }
    return 0;
}