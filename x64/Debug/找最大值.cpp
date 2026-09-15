#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=(a>b)?(a>c?a:c):(b>c?b:c);
    cout<<sum<<endl;
    return 0;
}