// In this program we've to search the position of the given element through binary search. If the element is not in the array then print nothing.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7},h,l,mid,size,k=5;    //Condition is that the array should be sorted. 
    h=(sizeof(arr)/sizeof(arr[1]))-1;
    l=0;
    while(l<=h){
        if((h+l)%2!=0){
            mid=(h+l-1)/2;
        }
        else{
            mid=(h+l)/2;
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