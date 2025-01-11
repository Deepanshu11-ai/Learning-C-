#include <iostream>
using namespace std;
int hello(int n){
    int b=0;
    for (int i = 1; i <=n; i++)
    {
        /* code */ b+=i;
    
    }
    return b;
}
int main(){
    cout<< hello(4);
    return 0;
}