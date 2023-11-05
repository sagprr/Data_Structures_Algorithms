#include<iostream>
#include<climits>
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


    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0;i<x;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }

        if(arr[i]>max)
        {
            max = arr[i];
        }

    }

    cout << "MAX " << max << endl;
    cout << "MIN " << min << endl;

}