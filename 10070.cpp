#include <iostream>
using namespace std;
int bigmod(string num, int m)
{
    int res = 0;
    for (int i = 0; i < num.length(); i++)
    {
        res = (10*res + (num[i]-’0’))%m;
    }
    return res;
}
int main()
{
    string y;
    bool done = false;
    while (cin >> y)
    {
        if (done) cout << endl;
        done = true;
        bool leap = (bigmod(y,400) == 0) || (bigmod(y,4) == 0 && bigmod(y,100) != 0);
        bool hul = bigmod(y,15) == 0;
        bool bul = leap && (bigmod(y,55) == 0);
        if (leap) cout << "This is leap year." << endl;
        if (hul) cout << "This is huluculu festival year." << endl;
        if (bul) cout << "This is bulukulu festival year." << endl;
        if (!(leap || hul || bul)) cout << "This is an ordinary year." << endl;
    }
}
