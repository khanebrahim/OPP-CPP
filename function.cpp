 #include<iostream>
 using namespace std;
 int sum(int a, int b){
     int c=a+b;
     return c;
 }
 int main(){
     int num1,num2,result;
     cout<<"Enter first number"<<endl;
     cin >> num1;
     cout<<"Enter second number"<<endl;
     cin >> num2;
     result =sum(num1,num2);
     cout<<"The result is "<<result<<endl;
     return 0;
     
     
     

 }