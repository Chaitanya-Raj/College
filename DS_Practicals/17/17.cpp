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
    for(int i = 0; i < v; i++)
    {
        cout<<endl;
        for(int j = 0; j < v; j++)
        {
            cout<<"\t"<<adj[i][j];
        }
    }
    
    char vert='a';

    for(int i = 0; i < v; i++)
    {
        int isum=0,osum=0;
        cout<<endl;
        for(int j = 0; j < v; j++)
        {
            osum+=adj[i][j];
            isum+=adj[j][i];
        }
        cout<<"\nThe in-degree of "<<vert<<" is "<<isum;
        cout<<"\nThe out-degree of "<<vert++<<" is "<<osum;
    }
    
    return 0;
}
