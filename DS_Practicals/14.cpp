#include<iostream>
#include<conio.h>
using namespace std;

class Alg
{
	int n;
	public:
		Alg();
		Alg(int);
		int alg1(int);
		int alg2(int);
		int alg3(int);
};

Alg::Alg()
{
	n=0;
}

Alg::Alg(int x)
{
	n=x;
}

int Alg::alg1(int n)
{
	if(n==0)
		return 1;
	return alg1(n-1)+n;
}

int Alg::alg2(int n)
{
	if(n==0)
		return 1;
	return alg2(n-1)+n*n;
}

int Alg::alg3(int n)
{
	if(n==1)
		return 1;
	return 2*alg3(n/2)+n;
}

int main()
{
	int x;
	cin>>x;
	Alg a(x);
	
	getch();
	return 0;
	//int alg2=alg2(n-1)+n*n;					
	//int alg3=2*(alg3(n)/2)+n;
}
