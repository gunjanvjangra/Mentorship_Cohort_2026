#include <iostream>
using namespace std;
int main()
{
    int num, a;
    cout<<"Enter the number: ";
    cin>>num;
    a = num;
    while (a != 0) {
        cout<<a%10<<endl;
        a = a/10;
    }
    return 0;
}
