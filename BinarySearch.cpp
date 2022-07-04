// In this program we've to search the position of the given element through binary search. If the element is not in the array then print nothing.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7},h,l,mid,size,k=5;    //Condition is that the array should be sorted. 
    h=(sizeof(arr)/sizeof(arr[1]))-1;
    l=0;
    while(l<=h){
        if((h+l)%2!=0){
            mid=/*(h+l-1)/2*/{l+(h-l-1)/2};   // reason behind this logic is that in case of maximum size limitation the memory alloted to value is limited.
        }
        else{
            mid=l+(h-l)/2;   // simmilar method as that in if condition's statement.
        }
        if(k>arr[mid]){
            l=mid+1;
        }
        else if (k<arr[mid])
        {
            h=mid-1;
        }
        else{
            cout<<"arr["<<mid<<"]"<<" = "<<k<<endl;
            break;
        }
    }
    return 0;
}