#include<string>
#include<iostream>
using namespace std;

int main()
{
    string str = "Sagar";
    string str1 = "Panwar";
    reverse(str.begin(),str.end());
    cout << str << endl;
    cout << endl;

    string strnew="";

    for(int i=str1.length();i>=0;i--)
    {
        cout << str1[i];
    }
    cout << endl;

    
    int n= str1.length();

    for(int i=n;i>=0;i--)
    {
        strnew += str1[i];
    }

    cout << strnew << endl;


}