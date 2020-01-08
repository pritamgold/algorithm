#include<bits/stdc++.h>
using namespace std;

int main()
{
    bitset<8> b;     ///initialize b; all bit will be zero  "size should be defined"
    cout<< b << endl;

    b.set();         /// set all bit as 1;
    cout<< b << endl;

    b.reset();       ///set all bit as 0;
    cout<< b << endl;

    bitset<8> c(5);     /// we can initialize value
    cout<< c << endl;

    bitset<9> d(string("1011"));   /// We can initialize string
    cout<< d << endl;

    cout<< d.size() << endl;    /// bitset size
    cout<< d.count() << endl;   /// counts 1

    if(d.any()) cout<< "true\n";  /// if any bit is 1 then true;
    if(b.none()) cout << "all zero\n";  /// if all bit is 0 then true;

    b.set(3);
    cout<< b << endl;    ///number 3 bit will be set;

    d.flip();
    cout<< d << endl;     ///flip all bits
    cout<< "shift\n";
    bitset<4> s(string("0011"));
    s=s<<1;
    cout<< s << endl;
    s=s>>2;
    cout<< s << endl;


    return 0;
}
