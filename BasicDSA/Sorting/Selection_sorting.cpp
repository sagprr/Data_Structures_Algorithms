// SELECTION SORT 
// Find the minimum element in unsorted array 
// and swap it with element at begining

#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

    }

    for(int i=0;i<x;i++)
    {
        cout << arr[i] << " ";
    }



}



// BUBBLE SORT 
// REPEATEDLY SORT 2 ADJACENT ELEMENTS IF THEY ARE IN WRONG ORDER


 