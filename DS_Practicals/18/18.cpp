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
    
    

    return 0;
}
