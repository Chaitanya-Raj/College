#include <iostream>
using namespace std;

int binarySearch(int arr[], int beg, int end, int x) 
{ 
   if (end >= beg) 
   { 
        int mid = beg + (end - beg)/2; 
        if (arr[mid] < x) return binarySearch(arr, mid+1, end, x);   
        if (arr[mid] > x) return binarySearch(arr, beg, mid-1, x); 
        return mid;
   } 
   return -1; 
} 
  
int main(void) 
{ 
   int size;
   cout<<"\nEnter the size of the array : ";
   cin>>size;
   int arr[size];
   cout<<"\nEnter sorted elements in ascending order :\n";
   for(int i=0;i<size;i++)
      cin>>arr[i];
   cout<<"\nEnter element to be searched : ";
   int x;
   cin>>x; 
   int index = binarySearch(arr, 0, size-1, x); 
   if(index==-1)
      cout<<"Element is not present in array";
   else
      cout<<"Element is present at index "<<index; 
   return 0; 
} 
