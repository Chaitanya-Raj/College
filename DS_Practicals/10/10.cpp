#include <iostream>
using namespace std;

<<<<<<< HEAD
int count = 0;

void swap(int *a, int *b)
=======
class Permutation
{
    public:
        int n,arr[10];
        void input();
        void swap(int*,int*);
        void perm(int[],int,int);
};

void Permutation::input()
{
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"\nEnter elements of array : \n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void Permutation::swap(int *a,int *b)
>>>>>>> 48d621d628fa4a8e5b37b88aaea0087df97542d1
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

<<<<<<< HEAD
void perm(int arr[], int s, int l)
=======
void Permutation::perm(int arr[],int s, int l)
>>>>>>> 48d621d628fa4a8e5b37b88aaea0087df97542d1
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
<<<<<<< HEAD
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
=======
    Permutation p;
    p.input();
    cout<<"\nThe Permutations of the given array are\n";
    p.perm(p.arr,0,p.n);
>>>>>>> 48d621d628fa4a8e5b37b88aaea0087df97542d1
}