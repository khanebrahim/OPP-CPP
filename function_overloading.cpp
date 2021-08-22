#include<iostream>
using namespace std;
//difference data type difference perameter but function name same 
// function overloading
int sum(int a,int b);
double sum(double a,double b);
float sum(float a,float b);

int main() {
    cout<<sum(4,5)<<endl;
    cout<<sum(5.4,6.3)<<endl;
    cout<<sum(5.7,3.9)<<endl;
    

}
int sum(int a,int b){
    return a+b;
}
double sum(double a,double b){
    return a+b;
}
float sum(float a,float b){
    return a+b;
}