#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a;
    int *b=&a;
    cout << b << endl;
    
    int marks = 50;
    string result = (marks>=40) ? "passed" : "failed";
    cout << result << endl;
    


    string res = (marks>=40) ? "Good" : "exCELLENT";

    cout << res << endl;

    int x = 5;
    int y = x>>1;
    int z = x<<1;
    
    cout << y << endl;
    cout << z << endl;
    
    return 0;
    
}