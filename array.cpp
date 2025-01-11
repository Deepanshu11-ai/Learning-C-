#include<iostream>
using namespace std;
int main(){

    int marks[5]={12,13,14,15,16};
    double price[5]={99.9,99.12,34.67,23.56,89.90};
    marks[0]=123;
    int size=5;
    cout<<sizeof(marks)<<endl;
    cout<<marks[0]<<endl;
    // loops
    for (int i = 0; i < size; i++)
    {
        /* code */cout<<marks[i]<<endl;
    }
    
    return 0;
}