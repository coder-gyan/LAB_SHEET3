// Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data 
// member for the parked time. Make functions to set data members and show the charges and parked hours of the
//  corresponding car id. Make functions for setting and showing the data members. Member function should be called 
//  from other functions.
#include<iostream>
using namespace std;
class carpark{
    int carid;
    int charge;
    float parkedTime;
    public:
        void setdata(int a,int b,float c){
            carid=a;
            charge=b;
            parkedTime=c;
        }
        void show(){
            cout<<endl<<"Charges: "<<charge<<endl<<"Parked Time: "<<parkedTime<<endl;
        }
        void display(){
            show();
        }
};


int main(){
    carpark c;
    int carid;
    int charge;
    float parkedTime;
    cout<<"Carid: ";
    cin>>carid;
    cout<<"Charge: ";
    cin>>charge;
    cout<<"Parked time: ";
    cin>>parkedTime;
    c.setdata(carid,charge,parkedTime);
    c.display();
    return 0;
}
