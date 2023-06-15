#include<bits/stdc++.h>
using namespace std;
int fun(int *&p){
    cout<<p<<endl;
    // cout<<&p<<endl;
    // *p = 10;
}
int main(){
    int vval =  20;
    int *ptr = &vval;
    fun(ptr);
    cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    return 0;
}