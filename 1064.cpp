

#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{

    double arr[6], sum = 0;
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];

        if (arr[i] > 0)
        {
            count++;
            sum += arr[i];
        }
    }

    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum / count << endl;

    return 0;
}