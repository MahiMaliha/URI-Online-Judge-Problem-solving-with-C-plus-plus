

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int test, m, n;
    cin >> test;

    while (test > 0)
    {
        cin >> m >> n;
        int sum = 0;
        int num = m;
       while (n > 0)
        {
            if (num % 2 != 0)
            {
                sum += num;
                n--;
            }
            num++;
        }

        cout << sum << endl;
        test--;
    }

    return 0;
}
