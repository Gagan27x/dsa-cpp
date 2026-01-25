#include <bits/stdc++.h>
using namespace std;

//3 pointers then prints the first value using all this
int main(){
//     string *ptr = new string("abc");

//     string **ptr2 = &ptr;

//     string ***ptr3 = &ptr2;

//     cout<<"value "<<(*ptr)<<endl;
//     cout<<"value "<<(**ptr2)<<endl;
//     cout<<"value "<<(***ptr3)<<endl;
    
// }

//2-d array
int td_arr[3][2]={
    {12,24},
    {43,65},
    {34,45}
};

for(int i=0;i<3;++i){
    for(int j=0;j<2;++j){
        cout<<td_arr[i][j]<<" ";
    }
    cout<<endl;
}

// input takes 9 elements and store them 1-array 
//then store in 2 d array(size3x3) of 1 -d array


int arr[9];
for(int i=0;i<9;i++){
    cin>>arr[i];
    cout<<" ";
}


}