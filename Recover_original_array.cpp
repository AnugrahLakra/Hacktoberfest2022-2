#include <iostream>
using namespace std;
void recover(int input[10], int n, int output[10])
{
    int i = 0, left, right;
    int mid = n / 2;

    if (n % 2 != 0)
    {
        output[mid] = input[i];
        left = mid - 1;
        right = mid + 1;
        i++;
    }
    else
    {
        left = mid - 1;
        right = mid;
    }
    while (i < n)
    {
        output[left] = input[i];
        left--;
        i++;
        output[right] = input[i];
        right++;
        i++;
    }
}
int main()
{
    int input[10], output[10], n, i;
    cout << "No Elm: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    recover(input, n, output);

    for (i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }
}
