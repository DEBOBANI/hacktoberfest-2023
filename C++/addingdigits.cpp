#include <iostream>
using namespace std;

int main()
{
    int a, b, n, oa;
    cin >> a >> b >> n;
    oa = a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if ((a * 10 + j) % b == 0)
            {
                a = a * 10 + j;
                break;
            }
        }
    }
    if (a != oa)
    {
        cout << a << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}