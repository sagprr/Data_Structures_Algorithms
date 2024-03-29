#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int ksmallest(int arr[],int x,int l)
{
    sort(arr,arr+x);
    return arr[l-1];
}


int main()
{
    int n;
    cin >> n;
    int arr[n];

    cout << "K" << endl;
    int k;
    cin >> k;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "The element is -> " << ksmallest(arr,n,k);


}