#include<iostream>
using namespace std;
class IT  {
public:
     string Name;
     string OwnerName;
     int Salary;
     int Employees;
     IT (string name, string ownerName){
         Name=name;
         OwnerName=ownerName;
         Salary=0;
     }
     void GetInfo(){
         cout <<"Comapany name: "<<Name <<endl;
         cout <<"OwnerName: "<<OwnerName <<endl;
         cout <<"Salary: "<<Salary <<endl;
         cout <<"Employess: "<<Employees <<endl;
// 
     }

};
int main(){
    IT company("Bengaldriod","Parvez");
    IT company1("E-dakpeon","Zilani");
    company.GetInfo();
    company1.GetInfo();
    // company.Name = "Bengaldroid";
    // company.OwnerName = "Parvez";
    // company.Salary =100000;
    // company.Employees =1000;


// cout <<"Comapany name: "<<company.Name <<endl;
// cout <<"OwnerName: "<<company.OwnerName <<endl;
// cout <<"Salary: "<<company.Salary <<endl;
// cout <<"Employess: "<<company.Employees <<endl;
// 


// company1.Name = "E-dakpeon";
// company1.OwnerName = "Zilani";
// company1.Salary =120000;
// company1.Employees =2000;

// cout <<"Comapany name: "<<company1.Name <<endl;
// cout <<"OwnerName: "<<company1.OwnerName <<endl;
// cout <<"Salary: "<<company1.Salary <<endl;
// cout <<"Employess: "<<company1.Employees <<endl;
// 
// 
}










