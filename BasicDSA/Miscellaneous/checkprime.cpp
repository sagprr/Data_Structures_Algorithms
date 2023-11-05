#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;

    for(int i=x;i<=y;i++)
    {
        int isprime =1;

        if (i<=1)
        {
            isprime=0;
        }

        else
        {
            for (int j=2;j*j<=i;j++)
            {
                if  (i%j==0)
                {
                    isprime=0;
                    break;
                }

            }

        }

        if(isprime)
        {
            cout << i << endl;
        }
        
    }
    
}