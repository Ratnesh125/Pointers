#include<iostream>
using namespace std;
void fun(int *p){
    *p=*p+5;
}
int main()
{
    int x=10;
    fun(&x);
    cout<<x;
    return 0;
}
//output 15

#include<iostream>
using namespace std;
void fun(int x){
    x=x+5;
}
int main()
{
    int x=10;
    fun(x);
    cout<<x;
    return 0;
}
//output 10
