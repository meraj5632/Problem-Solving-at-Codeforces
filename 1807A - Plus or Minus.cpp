#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i=0;
    cin >> test;

    int a, b, c;
    while (i != test)
    {
        cin >> a >> b >> c;

        if (a+b==c)
        {
            cout << "+" << endl;
        }
        else if (a-b==c)
        {
            cout << "-" << endl;
        }

        i++;
    }
}
