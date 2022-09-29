
#include <iostream>
using namespace std;
int main() {
    int test, Number;
    cin>>test;
    while(test--) {
        cin>>Number;
        int result = (((((Number*567)/9)+7492)*235)/47)-498;
        if(result < 0)
            result *= -1;
        cout<< result/10%10<<endl;
    }
    return 0;
}
