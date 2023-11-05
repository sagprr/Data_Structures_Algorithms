#include <iostream>
#include <cmath>

using namespace std;

void fib(int n)
{
    int f1=0;
    int f2=1;
    int temp;

    for (int i=0;i<n;i++)
    {
        cout << f1 << endl;
        temp=f1+f2;
        f1=f2;
        f2=temp;
    }
    return;

}

int main()
{
    int x;
    cin >> x;
    fib(x);
}