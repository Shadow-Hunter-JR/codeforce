#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a > 0)
    {
        int s = 0;
        string d;
        cin >> d;
        int f = d.length();
        if (f == 1)
            s = 1;
        else
        {
            for (int i = 1; i < f; i++)
            {
                if (d[i] == d[i - 1])
                {
                    s = 1;
                    break;
                }
                else
                    s = f;
            }
        }
        cout << s << endl;

        a--;
    }
}