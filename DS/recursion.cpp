#include <iostream>
using namespace std;

int rec(int x)
{
    static int c = 0;
    if (x > 0)
    {
        c++;
        return rec(x - 1) + c;
        cout << x << endl;
    }
    return 0;
}

int main()
{
    int x = 6;
    int s = rec(x);
    cout << s << endl;
    cout
        << "End of Program";

    return 0;
}