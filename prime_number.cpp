#include<iostream>
using namespace std;
int main() 
{
    int number;
    cout <<"number is:"<<endl;
    cin>>number;
    bool isPrimeNumber =true;
    for(int i=2; i<number; i++){
        if(number%i==0){
            isPrimeNumber=false;
            break;
            
        }
    }
    if(isPrimeNumber){
        cout<<"prime number"<<endl;
    }else{
        cout<<"is not prime number"<<endl; 
    }
    
}