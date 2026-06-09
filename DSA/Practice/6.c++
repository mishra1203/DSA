#include <iostream>
using namespace std;

int main(void)
{
    int a=1;
    int b= a++;
    int c= ++a;
    int d= a--;
    int e= --a;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout <<"c:"<<c<<endl;
    cout<<"d:"<<d<<endl;
    cout<<"e:"<<e<<endl;

    return 0;

}