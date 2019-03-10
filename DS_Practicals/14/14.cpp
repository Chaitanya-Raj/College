#include<iostream>
using namespace std;

class Alg
{
	int n;
	public:
		Alg();
		Alg(int);
		int algo1(int);
		int algo2(int);
		int algo3(int);
};

Alg::Alg()
{
	n=0;
}

Alg::Alg(int x)
{
	n=x;
}

int Alg::algo1(int n)
{
	if(n==0)
		return 1;
	return algo1(n-1)+n;
}

int Alg::algo2(int n)
{
	if(n==0)
		return 1;
	return algo2(n-1)+n*n;
}

int Alg::algo3(int n)
{
	if(n==1)
		return 1;
	return 2*algo3(n/2)+n;
}

int main()
{
	int n,c,r;

    cout<<"VALUES OF RECURRENCE RELATIONS :"<<endl<<endl;
    cout<<"\t 1. T(n)= T(n-1)+n       ,T(0)=1 "<<endl;
    cout<<"\t 2. T(n)= T(n-1)+n^2     ,T(0)=1 "<<endl;
    cout<<"\t 3. T(n)= 2*T(n/2)+n     ,T(1)=1 "<<endl;

    cout<<"\nEnter your choice(between 1,2,3) :	";
    cin>>c;
	cout<<"\nEnter the value of n :";
	cin>>n;
	Alg x(n);
	switch(c)
	{
		case 1:	r=x.algo1(n);
        		cout<<"\nResult : "<<r<<endl;
				break;
		case 2:	r=x.algo2(n);
        		cout<<"\nResult : "<<r<<endl;
				break;
		case 3:	r=x.algo3(n);
        		cout<<"\nResult : "<<r<<endl;
				break;
		default:cout<<"\nInvalid choice!!";
	}
    return 0;
}
