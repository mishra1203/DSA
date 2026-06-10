#include <iostream>
using namespace std;

int main(void)
{
    int a,i;
    cout << "enter the int: ";
    cin>>a;
    bool isPrime=true;
         //i<(a-1)
    for(i=2;i*i <= a;i++)
    {
        if(a%i == 0)
        {
            isPrime=false;
            break;
        }
    }

    if(isPrime==true)
    {
        cout<<"The Number is Prime"<<endl;
    }
    else
    {
        cout<<"Number is not prime"<<endl;
    }
    return 0;
}