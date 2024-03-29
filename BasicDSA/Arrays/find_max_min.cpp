#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x;
    cout << "Enter the Length of Array";
    cin >> x;
    int n;

    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin >> arr[i];
    }


    cout << endl;

    sort(arr,arr+x);
    for(int i=0;i<x;i++)
    {
        cout << arr[i] << " " ;
    }
    




}