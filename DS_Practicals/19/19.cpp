#include <iostream>
using namespace std;

class graph
{
    int sum = 0;
    int odd = 0;
    int v;
    int adj[10][10];

  public:
    void euler();
};

void graph::euler()
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
    cout << "\nThe adjacent matrix is \n";

    for (int i = 0; i < v; i++)
    {
        cout << endl;
        for (int j = 0; j < v; j++)
        {
            cout << "\t" << adj[i][j];
            sum += adj[i][j];
            if (adj[i][j] % 2 == 1)
                odd++;
        }
    }

    if (sum % 2 == 0 && odd == 0)
    {
        cout << "\nIt has a Euler Circuit";
    }
    else if (sum % 2 == 0 && odd == 2)
    {
        cout << "\nIt has a Euler Path";
    }
    else
    {
        cout << "\nIt has neither Euler Path nor Circuit";
    }
}

int main()
{
    graph g;
    g.euler();
    return 0;
}