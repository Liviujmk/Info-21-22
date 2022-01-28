// Teste antrenament 2021
// v2.II.1
#include <iostream>

using namespace std;

int main()
{
    int n,s,c1,c2;
    cin>>n;
    s=1;
    c1=n%10;
    n/=10;
    c2=n%10;
    if(c1==c2)
        s=0;
    else if(c1<c2)
        s=-1;
        
    while( (c1-c2)*s>0 && n>9){
        c1=n%10;
        n/=10;
        c2=n%10;
    }
    cout<<s<<" "<<n;
    return 0;
}
