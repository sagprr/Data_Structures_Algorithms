#include<iostream>
#include<set>
#include<algorithm>
#include<map>
using namespace std;


int kadane(int arr[],int n)
{
    int max = INT_MIN;
    int max_count = 0;

    for(int i=0;i<n;i++)
    {
        max_count = max_count+arr[i];
        if(max < max_count)
        {
            max = max_count;
        }
    }

    if(max_count < 0)
    {
        max_count = 0;
    }

    return max_count;
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

    int max = kadane(arr,x);
    cout << max << endl;
    
};