#include<iostream>
using namespace std;
class CSE
{
    public:
    int category;
    double salary;
    void display(){
            cout <<category <<" " <<salary <<endl;
    }
    void setValue(int x ,double y){
        category = x;
        salary = y;
    } 
};
int main(){
    CSE Parvez, Sadi;
    Parvez.setValue(101,50000);
    Parvez.display();
    Sadi.setValue(102,56000);
    Sadi.display();
  

}