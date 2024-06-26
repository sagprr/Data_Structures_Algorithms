#include<iostream>
#include<algorithm>
using namespace std;


void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnfsort(int arr[],int n)
{
    int low = 0;
    int mid =0;
    int high = n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr,low,mid);
            low++;
            mid++;
        }

        else if (arr[mid]==1)
        {
            mid++;
        }

        else{
            swap(arr,mid,high);
            high--;
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


    cout << endl;
    dnfsort(arr,x);

    for(int i=0;i<x;i++)
    {
        cout << arr[i] << " ";
    }
}