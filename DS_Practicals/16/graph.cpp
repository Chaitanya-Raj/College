#include<iostream>
using namespace std;

int main()
{
    bool flag=true;
    cout<<"Enter the number of vertices : ";
    int v;
    cin>>v;
    int adj[v][v];
    cout<<"\nEnter the adjacency matrix : ";
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin>>adj[i][j];
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(i==j)
            {
                if(adj[i][j]!=0)
                {
                    flag=false;
                    break;
                }
            }
            else if(adj[i][j]==0)
            {
                flag=false;
                break;
            }
        }
    }
    if(flag==true)
        cout<<"\nComplete Graph";
    else
        cout<<"\nNot Complete Graph";
}