#include<iostream>
#include <climits>
using namespace std;
int main(){
    int num[]={12,14,10,9,13,4,2};
    int size=7;
    int smallest=INT_MAX;
    for (int i = 0; i < size+1; i++)
    {
        if (num[i]<smallest)
        {
            smallest=num[i];
        }
        
    }
    
    cout<<"smalles = "<<smallest<<endl;
    return 0;
}