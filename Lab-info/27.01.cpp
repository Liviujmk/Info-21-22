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


// v2.III.1

#include <iostream>

using namespace std;

int factori (int n, int m){
    int k1, k2, nr=0;
    int d=2;
    while(n!=1){
        k1=0;
        while(n%d==0){
            n/=d;
            k1++;
        }
        k2=0;
        while(m%d==0){
            m/=d;
            k2++;
        }
        d++;
        if(k1==k2)
            nr++;
    }
    return nr;
}

int main()
{
    cout<< factori(16500, 10780);
    return 0;
}

//v2.III.2

#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int n=5;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i+j <= n+1)
                a[i][j]=j;
            else
                a[i][j]=a[n+1-j][n+1-i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<endl;
    cout<<endl;
    return 0;
}
????
