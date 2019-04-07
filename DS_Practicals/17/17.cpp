#include<iostream>
using namespace std;

class graph
{
        int v;
        int adj[10][10];
    public:
        void input();
        void display();
        void deg();
};

void graph::input()
{
    cout << "Enter the number of vertices : ";
    cin >> v;
    cout << "Enter the adjacency matrix :" << endl;

    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> adj[i][j];
        }
    }
}

void graph::display()
{
    cout << "\nThe adjacent matrix is \n";
    for (int i = 0; i < v; i++)
    {
        cout << endl;
        for (int j = 0; j < v; j++)
        {
            cout << "\t" << adj[i][j];
        }
    }
}

void graph::deg()
{
    char vert = 'a';

    for (int i = 0; i < v; i++)
    {
        int isum = 0, osum = 0;
        cout << endl;
        for (int j = 0; j < v; j++)
        {
            osum += adj[i][j];
            isum += adj[j][i];
        }
        cout << "\nThe in-degree of " << vert << " is " << isum;
        cout << "\nThe out-degree of " << vert++ << " is " << osum;
    }
}

int main()
{
    graph g;
    g.input();
    g.display();
    g.deg();
    return 0;
}
