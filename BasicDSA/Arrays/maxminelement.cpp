#include<iostream>
#include<algorithm>
using namespace std;

struct Pair
{
    int min;
    int max;
};


Pair getMinMax(int arr[],int n)
{
    Pair minmax;
    sort(arr,arr+n);

    minmax.min = arr[n];
    minmax.max = arr[n-1];

    return minmax;
}

int main()
{
    int x;
    cout << "Enter the Length of Array";
    cin >> x;

    int arr[x];  //donot use this practice , use the formula to calculate the size of array 

    for(int i=0;i<x;i++)
    {
        cin >> arr[i];
    }


    cout << endl;

    // sort(arr,arr+x);

    // cout <<  " MIN ELEMENT " << arr[0] << endl;
    // cout <<  " MAX ELEMENT " << arr[x-1] ;

    //using PAIRS 

    Pair minmax = getMinMax(arr, x);

    cout << "Min ele" << minmax.min  << endl;
    cout << "Max ele" << minmax.max << endl;


}