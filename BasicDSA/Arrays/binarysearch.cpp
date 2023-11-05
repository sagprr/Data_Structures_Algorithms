#include <iostream>
#include <climits>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int x;
    cin >> x;

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter key: " << endl;
    int key;
    cin >> key;

    cout << binarysearch(arr, x, key) << endl;
}



//COMPLEXITY - O(LOGN)