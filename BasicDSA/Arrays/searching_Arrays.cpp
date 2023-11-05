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

    cout << "Enter key: " << endl;
    int key;
    cin >> key;


    for(int i=0;i<x;i++)
    {
        if(arr[i]==key)
        {
            cout << true << endl;
            cout << "FOUND at " << i << endl;
        }
        
    }

    


}