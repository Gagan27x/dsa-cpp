#include <bits/stdc++.h>
using namespace std;

//pass by value 
int add(int x, int y){
    x=x+10;
    y=y+10;
    return x+y;
}

//pass by refrence
int sub(int& x, int& y){
    x=x+20;
    y=y+10;
    return x-y;
}

//pass by pointer
void add(string *a, string *b){
    a->push_back('x');
    (*b).push_back('y');

    //cout<<*a<<' '<<*b<<"\n";

}

int main(){
    int a=5 , b=10;
    int result = add(a,b);

    cout<<a<<" "<<b<<"\n"<<result<<endl;

    int c=10, d=5;
    int output = sub(c,d);

    cout<<c<<" "<<d<<"\n"<<output<<endl;

    
    string stra="abc", strb="123";
    add(&stra,&strb);//assign the address
    
    cout<<stra<<" "<<strb;
}


// string a = "str 1";
// string* ptr = &a;

// ptr->push_back('x');
// (*ptr).push_back('y');
// cout<<*ptr<<endl;

// int *ptr = new int(6);
// cout<<*ptr<<endl;