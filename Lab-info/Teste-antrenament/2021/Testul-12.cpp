III.1

#include <iostream>

using namespace std;

void frate(int x, int &y) {
    int uc, bun = 1, p=1;
    y=0;
    while(x){
        uc=x%10;
        x/=10;
        if(uc<9){
            y=y+p*(uc+1);
            p=p*10;
        }
        else
            bun = 0;
    }
    if(bun == 0)
        y=-1;
}

int main()
{
    int z;
    frate(1027, z);
    cout<<z;
    return 0;
}


III.2
    
#include <iostream>

using namespace std;

int main()
{
    int n, k, a[21][21], i, j, aux;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
            
    aux=a[k][1];
    for(j=1;j<n-k;j++)
        a[k][j] = a[k][j+1];
    a[k][n-k] = aux;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
