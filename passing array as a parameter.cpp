#include<iostream>
using namespace std;

void f(int a[])//here it always store pointer inta[] is same as int*a means pointer
{
    int n = sizeof(a)/sizeof(int);//so here when you get sizeof(a) pointer which is 8 byte divided by dereferencing integer value which give size of integer which is
  //4 byte so 8/4=2 so loop runs 2 times
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
void f(int a[], int N)
{
    int n = N;
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}
int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    for(int i = 0; i < n; i ++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    f(a);
    f(a,n);
    return 0;
}

//we always pass pointer of array as a parameter and we never use sizeof() function inside of the function
//we pass size of array in the parameter
