#include<iostream>
using namespace std;
    // I've used array and fuction datatype, which is nothing but the derived type datatype, in the previous file named datatypes.cpp.
    // Class
    // ____example of private eccess modifire
    class car{
        private:
            double enginID=2022;
        public:
            string company="MG_Hector";
            string model="ShineCVT";                         //Class is a definition of an obj.
            string colour="DarkBlue";                        //Object is an instance of a class.
            void getID(){
                cout<<enginID<<endl;
            }
        protected:
            double regID;
    };
    class reg: public car{
        public:
            void setRegID(int regNo){
                regID=regNo;
            }
            void getRegID(int regNo){
                regID=regNo;
                cout<<regID<<endl;
           }
    };
    int main(){
        int regNo;
        cout<<"Enter Registration ID: "<<endl;
        cin>>regNo;
        car obj;
        reg obj_Reg;
        obj.getID();
        obj_Reg.setRegID(regNo);
        cout<<obj.company<<'\n'<<obj.model<<'\n'<<obj.colour<<'\n';
        return 0;
    }