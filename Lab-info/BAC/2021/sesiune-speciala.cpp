III
1.

void imog(int x, int y, bool & rez){
    int i=0,uc,inv=0,cop;
    if(x>=y)
    {
        swap(x,y);
        cop=y;
    }
    
    while(cop){
        uc=cop%10;
        if(uc%2){
            inv = inv*10 +uc;
            cop/=10;
        }
    }
    if(cop==x)
        rez=1;
    else 
        rez=0;
}

2.
#include <iostream>


using namespace std;

int main()
{
    int n, i,j, a[100][100], k, aux;
    cin>>n;
    for( i=1; i<=n; i++)
        for( j=1; j<=n; j++)
            cin>>a[i][j];

    cin>>k;
    /*for(i=1;i<=k-1;i++)
        for(j=1;j<=k-1;j++){
            aux = a[k][j];
            a[k][j] = a[i][k];
            a[i][k] = aux;
        }*/
    for(i=1;i<=k-1;i++){
        aux = a[i][k];
        a[i][k] = a[k][i];
        a[k][i] = aux;
    }
    for( i=1; i<=n; i++){
        for( j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

