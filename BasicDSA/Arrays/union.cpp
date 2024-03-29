#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int union(int arr[],int m,int arr2[],int n)
{
    int a[100000];
    int j=0;
    for(int i=0;i<m;i++)
    {
        a[i] = arr[i];
    }

    for(int i=0;i<m+n;i++)
    {
        a[i] = arr2[j++];
    }



    sort(arr,arr+m+n);
    int count =0;
    for(int i=0;i<m+n;i++)
    {
        if a[i] != ar[i-1];
        count++;
    }

    return count;
    

}


int main()
{
    int n;
    int m;
    cin >> m;
    int arr2[m];
    cin >> n;
    int arr[n];

    cout << "K" << endl;
    int k;
    cin >> k;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<m;i++)
    {
        cin >> arr2[i];
    }

    cout << endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout << arr[i] << " ";
    // }

    cout << endl;

    cout << "The union is -> " << union(arr,m,arr2,n);


}