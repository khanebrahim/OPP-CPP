#include<iostream>
using namespace std;
union  test
{
    int x,y;
};
union test2{
    char ch;
    int x;
};
union  test3
{
    char name[20];
    double d;

};

int main ()
{
    union test t;
    union test2 t2;
    union test3 t3;
    cout<<"size of t:"<<sizeof(t)<<endl;
    cout<<"size of t2:"<<sizeof(t2)<<endl;
    cout<<"size of t3:"<<sizeof(t3)<<endl;
    getchar();

    
}
