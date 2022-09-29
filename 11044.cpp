#include<iostream>
using namespace std;
int main()
{
    int Row, Colum, Test,cont;
    cin>>Test;
    while(Test--)
    {
        cont=0;
        cin>>Row>>Colum;
        for(int i=1; i<Row-1; i+=3)
        {
            for(int j=1; j<Colum-1; j+=3)
            {
                cont++;
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}
