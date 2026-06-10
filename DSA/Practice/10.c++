#include <iostream>
using namespace std;

int main(void)
{
    int a,i;
    cout<<"enter int: ";
    cin>>a;

    for(i=0;a>i;i++)
    {
        cout<< i<<" ";     
    }
    cout<<endl;


    int b=0;
    while(a>b)
    {
        cout<< b<<" "; 
        b++;
    }
    cout<<endl;

    int c=0;
    do
    {
        cout<< c<<" "; 
        c++;
    } while (a>c);
    cout<<endl;
    
    return 0;
}