I.2.d

#include <iostream>
using namespace std;
int main()
{
    int a,b,nr,i,x;
    cin>>a>>b;
    nr=0;i=a;
    do{
        x=i;
        while((x>9) && (1+x%10==(x/10)%10)){
            x/=10;
        }
        if(x<10)
            nr++;
        i++;
    } while(i<=b);
    cout<<nr;
    return 0;
}

