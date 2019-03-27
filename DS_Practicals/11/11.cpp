#include<iostream>
//#include<conio.h>
using namespace std;

int Permutation(int n,int r)
{
    if(r>n)
        return 0;
    else
    {
        if(r==0)
            return 1;
        else
            return(n*Permutation(n-1,r-1));
    }
}

int comb(int n,int r)
{
    if(r>n)
        return 0;
    else if((n==0)|(r==0)|(n==r))
        return 1;
    else
        return(comb(n-1,r-1)+comb(n-1,r));
}

int main()
{
    int n,r,ch,a,b,ch1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    cout<<"Enter your choice"<<endl<<"1.Permutationutation"<<endl<<"2.Combination"<<endl<<"0.Exit"<<endl;
    cin>>ch;

    switch(ch)
    {
        case 1: a=Permutation(n,r);
                cout<<"Permutationutation is "<<a<<endl;
                break;
        case 2: b=comb(n,r);
                cout<<"Combination is "<<b<<endl;
                break;
        case 0: exit(0);
        default:cout<<"Wrong choice";
    }
   // getch();
}              

