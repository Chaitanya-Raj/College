#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of vertices : ";
    int v;
    cin>>v;
    cout<<"Enter the adjacency matrix :"<<endl;
    int adj[v][v];
    for(int i = 0; i < v; i++)
    {
        for(int j = 0; j < v; j++)
        {
            cin>>adj[i][j];
        }
    }
    cout<<"\nThe adjacent matrix is \n";
    int sum=0;
    int odd=0;
    for(int i = 0; i < v; i++)
    {
        cout<<endl;
        for(int j = 0; j < v; j++)
        {
            cout<<"\t"<<adj[i][j];
            sum+=adj[i][j];
            if(adj[i][j]%2==1)
                odd++;
        }
    }
    
    if(sum%2==0)
    {
        cout<<"\nIt has a Euler Circuit";
    }
    else if(odd==2)
    {
        cout<<"\nIt has a Euler Path";
    }
    else
    {
        cout<<"\nIt has neither Euler Path nor Circuit";
    }
    
    return 0;
}