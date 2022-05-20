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

III

#include <iostream>

using namespace std;

int divizor(int n, int &d){
    int p,div;
    div=2;
    while(n>1){
        p=0;
        while(n%div==0){
            p++;
            n/=div;
            d=div;
        }
        div++;
    }
}

int main()
{
    /*int d;
    divizor(40, d);
    cout<<d;*/
    int x, val=0, n=6,y;
    cin>>x;
    for(int i=2;i<=n/2+1;i++){
        cin>>y;
        if(x!=y)
            val=x;
    } x=y;
    if(val==0)
        cout<<"Nu";
    else
        cout<<val;
    return 0;
}
