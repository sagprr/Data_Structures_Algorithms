#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    for (int i = x; i <= y; i++)
    {
        int isPrime = 1; // Assume the number is prime initially

        if (i <= 1)
        {
            isPrime = 0; // Numbers less than or equal to 1 are not prime
        }
        else
        {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0; // If a divisor is found, mark the number as not prime
                    break;
                }
            }
        }

        if (isPrime)
        
            cout << "Prime number: " << i << endl;
        }
    }

    return 0;
}
