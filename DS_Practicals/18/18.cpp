#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int a[10][10], b[10][10];
    int l;
    char x, y;

    cout << "Enter the number of vertices : ";
    int v;
    cin >> v;
    cout << "Enter the adjacency matrix :" << endl;
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    cout << "\nEnter source and destination:\n";
    cin >> x >> y;
    cout << "\nEnter length of paths:\n";
    cin >> l;

    for (int i = l; i > 1; i--)
    {
        for (int j = 0; j < v; j++)
            for (int k = 0; k < v; k++)
                arr[j][k] = 0;

        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
                for (int k = 0; k < v; k++)
                    arr[i][j] += a[i][k] * b[k][j];
        }

        for (int i = 0; i < v; i++)
            for (int j = 0; j < v; j++)
                b[i][j] = arr[i][j];
    }

    cout << "\nNumber of paths between " << x << " and " << y << ":\n" << b[x - 97][y - 97];

    return 0;
}
