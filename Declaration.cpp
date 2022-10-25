#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x; //declaration
    x += 30;
    cout << *ptr << '\n';
    *ptr += 40;
    cout << x << '\n';
    return 0;
}

// ampersand gives address of something
// star gives value at address 
//int x=10;
// &x gives address
// *&x gives value 
