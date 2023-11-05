#include <iostream>
#include <cmath>

using namespace std;

// int primenum(int num1, int num2)
// {

//     for (int i; i <= num2; i++)
//     {
//         int flag = 1;

//         if (num1 <= 1)
//         {
//             flag = 0;
//         }

//         else
//         {
//             for (int j = 2; j * j <= i; j++)
//             {
//                 if (i % j == 0)
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//         }

//         if (flag)
//         {
//             return i;
//         }
//     }

// }

bool isprime(int num)
{
    if(num<=1)
    {
        return false;
    }

    for(int i=2; i*i<=num ; i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}


void displaynum(int num1 , int num2 )
{
    for ( int i=num1 ; i<=num2 ; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}


bool primeornot(int num)
{
    int flag = 1;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
            break;
        }
    }

    return true;
    
}


int main()
{
    int a, b;
    cin >> a >> b;
    int x;
    cin >> x;


    displaynum(a, b);
    cout << endl;
    cout << "Prime or not " << primeornot(x) << endl;
}