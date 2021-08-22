#include<iostream>
using namespace std;
bool isPrimeNumber(int number){
bool isPrimeNumber =true;
for(int i=2; i<number; i++){
    if(number%i==0){
        return false;
        break;
        
    }
    }
    return true;
}
int main() 
{
    int number;
    cout <<"number is:"<<endl;
    cin>>number;
    bool isNumber = isPrimeNumber(number);
    if(isNumber){
        cout<<"prime number"<<endl;
    }else{
        cout<<"is not prime number"<<endl; 
         
    }
    
}