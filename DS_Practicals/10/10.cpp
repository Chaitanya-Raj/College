#include <iostream>
using namespace std;

int count = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void perm(int arr[], int s, int l)
{
    if (s == l - 1)
    {
        count++;
        for (int i = 0; i < l; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }
    else
    {
        for (int i = s; i < l; i++)
        {
            swap(&arr[s], &arr[i]);
            perm(arr, s + 1, l);
            swap(&arr[s], &arr[i]);
        }
    }
}

int main()
{
    cout << "Enter size of array : ";
    int n;
    cin >> n;
    int arr[n];
    cout << "\nEnter elements of array : \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\n\n";
    perm(arr, 0, n);
    cout << "\nThe given array has " << count << " permutations\n";
}