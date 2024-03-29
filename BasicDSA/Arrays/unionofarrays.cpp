#include<iostream>
#include<set>
#include<algorithm>
#include<map>
using namespace std;


// int Union(int arr[],int arr2[],int a,int b)
// {

//     set<int> s;

//     for(int i=0;i<a;i++)
//     {
//         s.insert(arr[i]);
//     }

//     for(int i=0;i<b;i++)
//     {
//         s.insert(arr2[i]);
//     }

//     for (auto itr = s.begin(); itr != s.end(); itr++)
//         cout << *itr << " ";
// }

int Union(int arr[],int arr2[],int a,int b)
{

    map<int,int> m;

    for(int i=0;i<a;i++)
    {
        m.insert({arr[i],i});
    }


    for(int i=0;i<b;i++)
    {
        m.insert({arr2[i],i});
    }

    for (auto itr = m.begin(); itr != m.end(); itr++)
        cout << itr->first << " ";
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

    Union(arr,arr2,x,y);

    


    
    return 0;
};