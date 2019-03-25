#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;    
}

void perm(int arr[],int s, int l)
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
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements of array : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nThe permutations of the given array are\n";
    perm(arr,0,n);
}