//BREAK AND CONTINUE 

#include<iostream>
using namespace std;

int main()
{
    int x=10;
    for (int i=0; i<x ; i++)
    {
        if(i==5)
        break;

        else
        {
            cout << i << endl;
        }
    }
    

    cout << "END OF BREAK" << endl;

    int y=10;
    for ( int i=0; i<x;i++)
    {
        if (i==5)
        continue;

        else{
            cout << i << endl;
        }
    }


    cout << "PRIME PROGRAM" << endl;
    int z;
    cin >> z;

    for ( int i=2 ; i<z;i++)
    {
        if(z%i==0)
        {
            cout << "NOT PRIME" << endl;
            break;
        }

        else
        {
            cout << "PRIME" << endl;
            break;
        }

        
    } 



}



