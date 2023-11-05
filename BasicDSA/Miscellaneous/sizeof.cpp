#include<iostream>
using namespace std;

int main()
{
    int x=10;
    float y = 10;
    bool z = 1;
    char a =1;

    unsigned int w = -10;
    signed int b = 10;


    cout << sizeof(z)<< endl;
    cout << sizeof(x)<< endl;
    cout << sizeof(y)<< endl;
    cout << sizeof(a)<< endl;
    cout << sizeof(w)<< endl;
    cout << sizeof(b)<< endl;
    cout << "TYPE MODIFIERS" << endl;


    double g = 10000;
    cout << sizeof(g)<< endl;

    long int h =10;
    short int l = 1; 

    cout << sizeof(h)<< endl;
    cout << sizeof(l)<< endl;


}