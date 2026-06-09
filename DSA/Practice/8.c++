#include <iostream>
using namespace std;

int main(void)
{
    char ch;
    cout<<"enter character:";
    cin>>ch;

    if(ch>='a'&& ch<='z')
    {
        cout<<"Char is lowercase"<<endl;
    }
    else if(ch>= 65&& ch<=90)
    {
        cout<<"Char is Uppercase"<<endl;
    }
    else
    {
        cout<<"char is invalid"<<endl;
    }
    return 0;
}