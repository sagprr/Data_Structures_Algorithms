#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}

void printArray(int arr[],int size)
{
    for(int i=0;i<=size;i++)
    {
        cout << arr[i] << " ";
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

    //reversing array
    // for(int i=x-1;i>=0;i--)  // find the index of i and other things 

    // {
    //     cout << arr[i] << " " ;
    // }



    // reverse(arr,arr+x);


    // for(int i=0;i<x;i++)
    //     {
    //         cout << arr[i] << " ";
    //     }

    reverseArray(arr,0,x-1);
    printArray(arr,x-1);


}



