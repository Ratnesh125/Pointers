#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    cout<<*ptr;
    return 0;
}
//this will return Segmentation fault (this is known as wild pointer)
//we can not leave it like this 
//if we are not sure about the initialization of pointer than assign it value NULL

#include<iostream>
using namespace std;
int main()
{
    int *ptr=NULL;
    if(ptr!=NULL){
        cout<<*ptr;
    }
    else{cout<<"Segmentation fault if we try to print *ptr";}
    return 0;
}
//so to avoid wild pointer condition we always put a condition

//we can initialize pointer as 0;
int *ptr=0;
// this is valid 
// but if we try to initialize pointer as 10 or any other value 
int *ptr=10;
// this is not valid 
// because NULL is a macro of 0
// means 
#define NULL 0


