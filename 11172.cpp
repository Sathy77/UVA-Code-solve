#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int Test, Number, Number1;
    cin>>Test;
    while(Test--)
    {
        cin>>Number>>Number1;
        if(Number==Number1)
            cout<<"="<<endl;
        else if(Number>Number1)
            cout<<">"<<endl;
        else
            cout<<"<"<<endl;
    }
    return 0;
}
