/* 52 2d) */

#include <iostream>

using namespace std;

int main()
{
    int x,d,n,c;
    cin>>n;
    d=0;c=0;
    for(int i = 1;i<=n;i++){
        cin>>x;
        while(x%2==0){
            x/=2;
            d++;
        }
        while(x%5==0){
            x/=5;
            c++;
        }
    }
    if(c<d)
        cout<<c;
    else
        cout<<d;

    return 0;
}
