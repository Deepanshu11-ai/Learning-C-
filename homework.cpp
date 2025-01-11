#include<iostream>
#include<climits>
using namespace std;
int main(){

    int nums[]={12,14,5,6,0,1,69};
    int size=7;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int smallindex=-1;
    int largeindx=-1;
    for (int i = 0; i < size; i++){
        if (nums[i]<smallest){
            smallest=nums[i];
            smallindex=i;
        }
        if (nums[i]>largest)
        {
            largest=nums[i];  
            largeindx=i;  /* code */
        }
    }
    cout<<largeindx<<" ";
    cout<<smallindex;
    

    return 0;
}