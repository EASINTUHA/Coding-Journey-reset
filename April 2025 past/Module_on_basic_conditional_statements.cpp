// Click on 'Submit' to first see the results
// Click on 'Next to continue'
// if-else statements 
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a = 13;
    int b = 15;
    if (a >= b)
    {
        cout << a << " is greater than or equal to " << b << endl;
    }
    else
    {
        cout << a << " is lesser than " << b << endl;
    }

    // lets add the else if statement
    a = 14;
    b = 14;
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if (a == b)
    {
        cout << a << " is equal to " << b << endl;
    }
    else
    {
        cout << a << " is lesser than " << b << endl;
    }
    return 0;
}