#include<iostream>
using namespace std;
int main(){

int b,fact=1;
cin>>b;
if (b==0){
    cout<<1;
    return 0;
}
for (int i=1;i<=b;i++){
    fact*=i;
}
cout<<fact;
    return 0;
}