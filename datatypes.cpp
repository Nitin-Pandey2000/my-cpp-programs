#include <iostream> 
using namespace std; 
void func(){
        cout<< "This is String came from a fuction, which was defined by you."<<endl;
}
int main(){
    // regarding the datatype like (int,char,float)
<<<<<<< HEAD
   int age=21,new_age,arr[5]={12,1,2,4,11},i;  // It'll take integer type values.
   float avg;                                  // It'll take floting point values.
   char name[]="Nitin Pandey";                 // Char is a datatype which will take single character as value and can take whole string with the spaces if array is provided as variable to it.
   string str;                                 // string datatype will take the string as value. And it'll be terminated whenever space is given.
=======
   int age=21,new_age,arr[5]={12,1,2,4,11},i;
   float avg;
   char name[]="Nitin Pandey";
>>>>>>> 860acca1a48af7261388d7eb40564e8438f26837
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
<<<<<<< HEAD
   cin>>str;
   cout<<"the string is: "<<str<<endl;
}
=======
}
>>>>>>> 860acca1a48af7261388d7eb40564e8438f26837
