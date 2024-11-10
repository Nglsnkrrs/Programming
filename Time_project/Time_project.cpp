#include "Time.h"

int main()
{
    Time t1(12, 45, 3);
    Time t2(15, 35, 10);

    
    cout << (t1 += t2) << endl;
    cout << (t1 -= t2) << endl;

    cout << ((t1 == t2) ? "yes" : "no" )<< endl;
    cout << ((t1 != t2) ? "yes" : "no") << endl;
}

