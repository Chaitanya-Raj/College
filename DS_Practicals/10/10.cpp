#include<iostream>
using namespace std;

class Perm
{
    public:
        int n,arr[10];
        void input();
        void swap(int*,int*);
        void perm(int[],int,int);
};

void Perm::input()
{
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"\nEnter elements of array : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void Perm::swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;    
}

void Perm::perm(int arr[],int s, int l)
{
    if(s==l-1)
    {
        for(int i=0;i<l;i++)
        {
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
    else
    {
        for(int i=s;i<l;i++)
        {
            swap(&arr[s],&arr[i]);
            perm(arr,s+1,l);
            swap(&arr[s],&arr[i]);
        }
    }
    
}

int main()
{
    Perm p;
    p.input();
    cout<<"\nThe permutations of the given array are\n";
    p.perm(p.arr,0,p.n);
}