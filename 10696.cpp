#include<iostream>
using namespace std;

int main()
{
    int Number;
    while (cin>>Number)
    {
        if(Number<=101)
            cout<<"f91("<<Number<<") = "<<Number-10<<endl;
        else if(Number>=100)
        cout<<"f91("<<Number<<") = "<<Number-10<<endl;

    }
    return 0;
}

