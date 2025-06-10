// Assume that an object represents an employee report that contains information like employee id, total bonus, 
// total overtime in a particular year. Use an array of objects to represent n employees' reports.
// Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments
// and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.

// An employee with ... ... ... has received Rs ... ... ...as a bonus
// and
// had worked ... ... ... hours as overtime in the year ... ... ...

#include<iostream>
using namespace std;
class employee{
    private:
        string empid;
        float bonus;
        float overtime; //in hours
    public:
        void setpara(string e, float b, float o){
            empid = e;
            bonus = b;
            overtime = o;
        }
        void displayreport(){
            cout<<"An employee with empid"<< empid <<" has received Rs "<<bonus <<" as a bonus"<<endl
                <<"and"<<endl
                <<"had worked" << overtime<<" hours as overtime in the year 2081."<<endl<<endl;
        }
};

int main(){
    employee e[50];
    //e[1].setpara("052", 3000000, 500);
    int n=2,i;
    string empid;
    float bonus;
    float overtime;
    for(i=0;i<n;i++){
        cout<<"Empid: ";
        cin>>empid;
        cout<<"Bonus: ";
        cin >> bonus;
        cout << "Overtime: ";
        cin >> overtime;
        e[i].setpara(empid,bonus,overtime);
        cout<<endl;
    }
    for(i=0;i<n;i++){
        e[i].displayreport();
    }
    return 0;
}
