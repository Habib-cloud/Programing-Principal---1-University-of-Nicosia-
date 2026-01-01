// MD Habibur Rahman
/*You can approximate π by using the following series:*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double pi, sum = 0;

    for (int k = 10000; k <= 100000; k += 10000)
    {
        for (int i = 1; i <= k; i++)
        {
            if (i % 2 == 0)
            {
                sum = sum - 1 / (2 * i - 1);
            }
            else
            {
                sum = sum + 1 / (2 * i - 1);
            }
        }
        pi = 4 * sum;
        cout << "i = " << k << ", pi = " << pi << endl;
    }
    return 0;
}