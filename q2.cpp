// Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. 
// When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 
// 'y' or 'n'. Don't forget to use the object-oriented concept
#include<iostream>
using namespace std;
class prime{
    private:
        int prime_num;
    public:
        prime( int n){
            prime_num=n;
        }
        int is_prime(){
            int i,j,flag=0;

            for(i=1;i<=prime_num;i++){
                if(prime_num%i==0)  flag++;
            }
        
            if(flag==2) return 1;
            else    return 0;
        }
        void show(){
            if(is_prime())    cout<<"Prime"<<endl<<endl;
            else cout<<"Not Prime"<<endl<<endl;
        }
};

int main(){
    int n;
    char ch;
    do{
        cout<<"Enter a number:";
        cin>>n;
        prime p(n);
        p.show();
        cout<<"Do you want to continue?(y/n): ";
        cin>>ch;       
}while(ch=='y' || ch=='Y');
    return 0;
}