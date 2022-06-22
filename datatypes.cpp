#include <iostream> 
using namespace std; 
void func(){
        cout<< "This is String came from a fuction, which was defined by you."<<endl;
}
void print_func()
{
   int i,arr[5]={12,1,2,4,11}; 
   cout<<"Your array: {";
   for(i=0;i<5;i++)
   {
       cout<<arr[i];
       if(i!=4)
       {
        cout<<",";
       }
   }
   cout<<"}"<<endl;
}
int main(){
    // regarding the datatype like (int,char,float)
   int age=21,new_age,arr[5]={12,1,2,4,11},i,j;  // It'll take integer type values.
   float avg;                                  // It'll take floting point values.
   char name[]="Nitin Pandey";                 // Char is a datatype which will take single character as value and can take whole string with the spaces if array is provided as variable to it.
   cout << "Hello " << name<<"\nyour age is: "<< age<<"\nWhat's your new age: ";
   cin>>new_age;
   avg=(float)(age+new_age)/2;
   cout<<"this is your entered new age: "<<new_age<<"\n"<<"Your average age is: "<<avg<<"\n";


   // array operations ___________________________
   
   // printing an array : -
   print_func();

   // reversing an array : -
   if((sizeof(arr)/sizeof(arr[0]))%2==0)
   {
       j=(sizeof(arr)/sizeof(arr[0]))/2;
   }
   else
   {
       j=((sizeof(arr)/sizeof(arr[0]))+1)/2;
   }
   for(i=0;i<j;i++)
   {
       int c=arr[i];
       arr[i]=arr[(sizeof(arr)/sizeof(arr[0]))-1-i];
       arr[(sizeof(arr)/sizeof(arr[0]))-1-i]=c;
   }
   cout<<"Your array: {";
   for(i=0;i<5;i++)
   {
       cout<<arr[i];
       if(i!=4)
       {
        cout<<",";
       }
   }
   cout<<"}"<<endl;


   // string operations ___________________________

   func();
   string str;   // string datatype will take the string as value. And it'll be terminated whenever space is given.
   cin>>str;
   cout<<"the string is: "+str<<endl; //concatenation

   
}