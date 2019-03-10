#include<iostream>
//#include<conio.h>
using namespace std;

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

void permutation(int n,int r)
{
	double result=(factorial(n)/factorial(n-r));
	cout<<"\nPermutation\n";
	cout<<n<<"P"<<r<<" = "<<result<<"\n\n";
}


void combination(int n,int r)
{
	double result=(factorial(n)/(factorial(r)*factorial(n-r)));
	cout<<"\nCombination\n";
	cout<<n<<"C"<<r<<" = "<<result<<"\n\n";
}

int main()
{
	cout<<"\nEnter n :";
	int n;
	cin>>n;
	cout<<"\nEnter r :";
	int r;
	cin>>r;
	cout<<"\n\n";
	permutation(n,r);
	combination(n,r);
	//getch();
	return 0;
}
