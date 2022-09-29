#include<iostream>
using namespace std;
int main()
{
    int Cola, Number, NewN, Rest;
    while(cin>>Number)
    {
        Cola=Number;
        while(Number!=0)
        {
            NewN=Number/3;
            Cola+=NewN;
            Rest=Number%3;
            Number=NewN+Rest;

            if(Number==2)
            {
                Number=(Number+1)%3;
                Cola+=1;
            }
            else if(Number==1)
                break;

        }
        cout<<Cola<<endl;
    }
    return 0;
}

