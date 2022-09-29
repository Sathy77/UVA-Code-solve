#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
string AAA;
int main()
{
    int Test,Row, Colum,i,j;
    cin>>Test;
    while(Test--)
    {
        while(cin>>AAA)
        {
            cin>>Row>>Colum;
            int cont=0;

            if((AAA.compare("r")) == 0 || (AAA.compare("Q")) == 0)
            {
                if(Row<Colum)
                    cout<<Row<<endl;
                else
                    cout<<Colum<<endl;
            }
            else if((AAA.compare("k")) == 0)
            {
                cout<< ceil(((double)Row*(double)Colum)/2)<<endl;
            }
            else
            {
                for(i=0; i<Row; i+=2)
                {
                    for(j=0; j<Colum; j+=2)
                        cont++;

                }
                cout<<cont<<endl;
            }
        }
    }
    return 0;
}
