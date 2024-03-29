#include<iostream>
#include<set>
#include<algorithm>
#include<map>
using namespace std;


void merge(int arr[],int arr2[],int a,int b,int arr3[])
{
    int i=0 ; 
    int j=0;
    int k=0;

    while(i<a && j<b) 
    {
        if(arr[i] < arr2[j])
        {
            arr3[k++] = arr[i++]; 
        }

        else{
            arr3[k++] = arr2[j++];
        }

    }


    while(i<a)
        {
            arr3[k++] = arr[i++];
        }

    while(j<b)
        {
            arr3[k++] =  arr2[j++];
        }
        

    
}



int main()
{
    int x;
    cout << "Enter the Length of Array";
    cin >> x;
    int arr[x];
    int y;
    cout << "Enter the Length of second array";
    cin >> y;

    int arr2[y];

    for(int i=0;i<x;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<y;i++)
    {
        cin >> arr2[i];
    }

    int three = x+y;
    int arr3[three];

    merge(arr,arr2,x,y,arr3);

    for(int i=0;i<three;i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
};