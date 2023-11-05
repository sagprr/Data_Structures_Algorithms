#include <iostream>
#include <cmath>

using namespace std;

int primenum(int num1, int num2)
{

    for (int i; i <= num2; i++)
    {
        int flag = 1;

        if (num1 <= 1)
        {
            flag = 0;
        }

        else
        {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag)
        {
            return i;
        }
    }
    
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << primenum(a, b) << endl;
}