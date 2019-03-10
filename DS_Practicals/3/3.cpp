#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;

class Relation{
	int l,set[10],rel[10][10];
	public:
		bool rflag,sflag,aflag,tflag;
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
	rflag=true;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if((i==j)&&(rel[i][j]!=1))
				rflag=false;
		}
	}
	if(rflag==true)
	{
		cout<<"\nThe relation is reflexive";
	}
	if(rflag==false)
		cout<<"\nThe relation is not reflexive";
}

void Relation::symmetric()
{
	sflag=true;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(((rel[j][i]!=1)&&(rel[i][j]==1)))
				sflag=false;
		}
	}
	if(sflag==true)
	{
		cout<<"\nThe relation is symmetric";
	}
	if(sflag==false)
		cout<<"\nThe relation is not symmetric";
}

void Relation::anti_symmetric()
{
	aflag=true;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if((rel[i][j]==1)&&(rel[j][i]==1)&&(i!=j))
				aflag=false;
		}
	}
	if(aflag==true)
	{
		cout<<"\nThe relation is anti-symmetric";
	}
	if(aflag==false)
		cout<<"\nThe relation is not anti-symmetric";
}

void Relation::transitive()
{
	tflag=true;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			for(int k=0;k<l;k++)
			{
				if((rel[i][j]==1)&&(rel[j][k]==1)&&(rel[i][k]!=1))
					tflag=false;
			}
		}
	}
	if(tflag==true)
	{
		cout<<"\nThe relation is transitive"<<endl;
	}
	if(tflag==false)
		cout<<"\nThe relation is not transitive"<<endl;
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
	//getch();
	return 0;
}
