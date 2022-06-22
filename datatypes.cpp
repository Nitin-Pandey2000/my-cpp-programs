#include <iostream> 
using namespace std; 
void func(){
        cout<< "This is String came from a fuction, which was defined by you."<<endl;
}
int main(){
    // regarding the datatype like (int,char,float)
   int age=21,new_age,arr[5]={12,1,2,4,11},i;
   float avg;
   char name[]="Nitin Pandey";
   cout << "Hello " << name<<"\nyour age is: "<< age<<"\nWhat's your new age: ";
   cin>>new_age;
   avg=(float)(age+new_age)/2;
   cout<<"this is your entered new age: "<<new_age<<"\n"<<"Your average age is: "<<avg<<"\n";
   cout<<"Your array: {";
   for(i=0;i<5;i++){
       cout<<arr[i];
       if(i!=4){
        cout<<",";
       }
   }
   cout<<"}"<<endl;
   func();
}
