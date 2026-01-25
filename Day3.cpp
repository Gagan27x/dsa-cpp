#include <bits/stdc++.h>
using namespace std;

//pass by value 
//pass by refrence

void add(string *a, string *b){//pass by pointer
    a->push_back('x');
    (*b).push_back('y');

    cout<<*a<<' '<<*b;

}
int main(){
    // string a = "str 1";
    // string* ptr = &a;

    // ptr->push_back('x');
    // (*ptr).push_back('y');

    // cout<<*ptr<<endl;

    // int *ptr = new int(6);
    // cout<<*ptr<<endl;

    string stra="abc", strb="123";

    add(&stra,&strb);//assign as a pointer

    cout<<stra<<" "<<strb;




}