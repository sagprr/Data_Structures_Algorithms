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
    int a,b;
    cin >> a >> b;
    cout << fact(a)/fact(b)*fact(a-b) << endl;
}