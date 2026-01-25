#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"z ";
        }
        cout<<endl;
    }


    int i=0;
    while(i<=n)
    {
        int j=0;
        while(j<i){
            cout<<"z ";
            j++;
        }
        i++;
        cout<<endl;
    }

}