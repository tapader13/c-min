#include <iostream>
using namespace std;
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int a, b;
    cout << "number a";
    cin >> a;
    cout << "number b";

    cin >> b;
    int result = power(a, b);
    cout << "result is : " << result;
}