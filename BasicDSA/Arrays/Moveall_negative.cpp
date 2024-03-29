#include<iostream>
#include<algorithm>
using namespace std;


void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void rearrange(int  arr[],int n)
{

    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            if(i!=j)
            {
                swap(arr,i,j);
            }
            j++;
        }
        

    }
    
}

int main()
{
    int x;
    cout << "Enter the Length of Array";
    cin >> x;
    int arr[x];

    for(int i=0;i<x;i++)
    {
        cin >> arr[i];
    }

    rearrange(arr,x);
    
    for(int i=0;i<x;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}