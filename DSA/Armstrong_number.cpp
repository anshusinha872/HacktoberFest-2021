#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int num = n;
    while (num > 0)
    {
        int rem = num % 10;
        // sum += pow(rem, 3); THis line is now working in this VS code but working fine in another IDEs
        sum+=rem*rem*rem;
        num = num / 10;
    }
    if (n == sum)
        cout << "Armstong number";
    else
        cout << "Not a Armstong number";
    return 0;
}
