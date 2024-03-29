#include<iostream>
#include<algorithm>
using namespace std;

// void printArray(int arr[],int size)
// {
//     for(int i=0;i<=size;i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int binarySearch(int arr[],int start , int end, int ele)
{
    start = 0;
    int mid =0;

    while(start<=end)

    {
        mid = start + (end - start) / 2;
        if(arr[mid]==ele)
        {
            return mid;
        }

        else if ( arr[mid] < ele)
        {
            start = mid+1;
        }

        else{
            end = mid-1;
        }

    }

    return -1;
}


int main()
{
    int x;
    cout << "Enter the Length of Array";
    cin >> x;
    int arr[x]; 

    int n;
    cin >> n;

    for(int i=0;i<x;i++)
    {
        cin >> arr[i];
    }


    cout << endl;
    // printArray(arr,x);
    int res =  binarySearch(arr,0,x-1,n);


    if(res==1)
    {
        cout << "found " << endl;
    }

    if ( res == -1)
    {
        cout << "not found " << endl;
    }




}