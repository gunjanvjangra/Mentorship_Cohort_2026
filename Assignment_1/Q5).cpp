#include <iostream>
using namespace std;
int main()
{
    int n, m , d=0;
    cout<<"Enter the number: ";
    cin>>n;
    m = n;
    while (m != 0) 
    {
        d += 1;
        m = m/10;
    }
    cout<<d;
    return 0;
}
