#include <iostream>
using namespace std;

int main(void)
{
    int a,i,sum=0;
    cout << "enter the int: ";
    cin>>a;

    for (i=0;i<=a;i++)
    {
        sum=sum+i;
        cout<<sum<<" ";
    }
    return 0;
}