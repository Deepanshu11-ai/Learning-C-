#include <iostream>
#include <climits>
using namespace std;
int bhalu(int arr[],int size,int target){

for (int i = 0; i < size; i++)
{
    /* code */if (arr[i]==target)
    {
        /* code */return i;
    }       
}
return -1;


};
int main() {
    int arr[]={12,13,14,15,16,17,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=16;
   cout<<bhalu(arr,size,target);
    return 0;
}
