

/********************************************************************************/

#include <iostream>

using namespace std;
int maxSubArraySum(int arr[], int n)
{
    int max_sum = arr[0];
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        temp += arr[i];
        if (temp > max_sum)
        {
            max_sum = temp;
        }
        if (temp < 0)
            temp = 0;
    }
    return max_sum;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "MAX SUM is: " << max_sum << endl;
    return 0;
}
