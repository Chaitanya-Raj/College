#include<iostream>
using namespace std;


class Graph
{
    public:
        bool flag;
        int v,adj[10][10];
        void input()
        {
            cout<<"Enter the number of vertices : ";
            cin>>v;
            cout<<"\nEnter the adjacency matrix : ";
            for(int i=0;i<v;i++)
            {
                for(int j=0;j<v;j++)
                {
                    cin>>adj[i][j];
                }
            }
        }

        void display()
        {
            for(int i=0;i<v;i++)
            {  
                cout<<endl;
                for(int j=0;j<v;j++)
                {
                    cout<<"\t"<<adj[i][j];
                }
            }
            cout<<endl;
        }

        void check()
        {
            flag=true;
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
};

int main()
{
    Graph g;
    g.input();
    g.display();
    g.check();   
}