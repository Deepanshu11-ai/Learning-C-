#include <iostream>
#include <climits>
using namespace std;
void arrays(int arr[],int sz){
    int st=0,end=sz-1;
    while (st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    

};
int main() {
 int arr[]={1,2,3,4,5};
 int size=sizeof(arr)/sizeof(arr[0]);
 arrays(arr,size);
 for (int i = 0; i < size; i++)
 {
    /* code */cout<<arr[i]<<" ";
 }
 cout<<endl;

    return 0;
}
