

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    int test, a, b, max, min, sum = 0;
    cin >> test;

    for (int i = 0; i< test; i++) {
        cin >> a >> b;
        sum = 0;
        if( a > b) {
            max = a;
            min = b;
        } else {
            max = b;
            min = a;
        }

        for(int j = min + 1; j< max; j++) {
            if(j%2 != 0) sum+= j;
        }

        cout << sum  << endl;
    }

    return 0;
}
