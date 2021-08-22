#include<iostream>
using namespace std;
struct book
{
    char name[40];
    int price;

};
int main(){
    typedef struct book Book;
    Book b={"Full stack web development HM Naim",420};
    cout<<"Book name :"<<b.name<<endl;
    cout<<"Book price :"<<b.price<<endl;
    
    getchar();
    
}