#include<iostream>
#include<set>
#include<algorithm>
#include<map>
using namespace std;


void rotate(int arr[],int n)
{
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

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

    rotate(arr,x);

    for(int i=0;i<x;i++)
    {
        cout << arr[i] << " ";

    }

// could also use two variables like i and j 
// j=n-1 and i =0; swap both of these 


    
    return 0;
};