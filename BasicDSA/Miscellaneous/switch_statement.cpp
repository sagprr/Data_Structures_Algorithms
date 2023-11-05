#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;


    switch (x)
    {
        case 1:
        {
            cout << "PRESSED 1" << endl;
            break;
        }

        case 2 :
        {
            cout << "PRESSED 2" << endl;
            break;
        }


        default:
            cout << "PRESSED DEF" << endl;
            break;

    }
}
