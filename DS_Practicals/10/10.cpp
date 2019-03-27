#include<iostream>
using namespace std;

class Permutation
{
    public:
        int n,arr[10];
        void input();
        void swap(int*,int*);
        void perm(int[],int,int);
};

void Permutation::input()
{
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"\nEnter elements of array : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void Permutation::swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;    
}

void Permutation::perm(int arr[],int s, int l)
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
    Permutation p;
    p.input();
    cout<<"\nThe Permutations of the given array are\n";
    p.perm(p.arr,0,p.n);
}