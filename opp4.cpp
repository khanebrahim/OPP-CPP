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
};
int main(){
    CSE Parves;
    Parves.category =103;
    Parves.salary =4000;
   Parves.display();

}