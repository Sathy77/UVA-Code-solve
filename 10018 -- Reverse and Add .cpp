# UVA-Code-solve

#include<iostream>
using namespace std;

int main()
{
    int Test,cont;
    long long int reminder=0,TNumber,Number,RNumber;
    cin>>Test;
    while(Test--)
    {
        cin>>Number;
        cont=0;
        while(1)
        {
            TNumber=Number;
            RNumber=0;
            while(TNumber!=0)
            {
                reminder=TNumber%10;
                TNumber=TNumber/10;
                RNumber=RNumber*10+reminder;

            }
            if(Number==RNumber)
            {
                break;
            }

            else
            {
                Number=Number+RNumber;
                cont++;
            }

        }
        cout<<cont<<" "<<RNumber<<endl;


    }
    return 0;

}
