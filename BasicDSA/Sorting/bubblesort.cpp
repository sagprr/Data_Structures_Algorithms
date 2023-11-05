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
        for(int j=0;j<x-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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


 