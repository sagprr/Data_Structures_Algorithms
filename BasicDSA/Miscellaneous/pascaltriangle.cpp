#include <iostream>
#include <cmath>

using namespace std;

int fact(int x)
{
    int fact = 1;
    for(int i=2;i<=x;i++)
    {
        fact *= i;
    }

    return fact;

}

int main()
{
    int n;
    cin >> n;
    for ( int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << fact(i)/(fact(j)*fact(i-j)) << " ";
        }
        cout << endl;
    }
    
}