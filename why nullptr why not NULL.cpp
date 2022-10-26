//1) nullptr is added in c++11 as a replacement of NULL
//2) int x= NULL; is allowed
//3)int x=nullptr; is not allowed
//4) the type of nullptr is nullptr_t

void fun(int x){     
}
void fun(int *ptr){     }
int main(){
fun(NULL)
return 0;
}

//compiler error : ambigious call
//because NULL is a macro of 0
//so int x can be 0 and pointer also can be 0 so NULL is valid in both function
//so compiler have 2 choices 
//that's why ambigious call is made


void fun(int x){     
}
void fun(int *ptr){     }
int main(){
fun(nullptr) //valid
return 0;
}
//coz it call only pointer function not int function 
//it is recommended to use nullptr instead of NULL to avoid such errors
