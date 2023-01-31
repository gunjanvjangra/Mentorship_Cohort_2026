#include <iostream>
using namespace std;
int main()
{
    int low, high, num, i, check;
    cout<<"Enter the lower limit: ";
    cin>>low;
    cout<<"Enter the upper limit: ";
    cin>>high;
    num=low;
    while (num <= high) 
    {
        check = 0;
        for (i=2; i<=num/2 +1; i++) 
        {
            if (num==2) 
            {
                break;
            }
            if (num%i == 0) 
            {
                check = 1;
                break;
            }
        }
        if (check == 0) 
        {     
            cout<<num<<endl;
        }
        num++;
    }
    return 0;
}
