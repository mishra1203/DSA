#include <iostream>
using namespace std;

int main (void)
{
    int a;
    cout<<"enter int: ";
    cin>>a;

    if(a%2==0)
    {
        cout<<"int is even"<<endl; 
    }
    else
    {
        cout<<"int is odd"<<endl;
    }
    return 0;
}