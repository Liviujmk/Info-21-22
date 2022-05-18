#include <iostream>

using namespace std;
/*
void ex1(int x, int &n, int v[]){
    int i=1;
    while(n>=1){
        if(v[i]==x) {
            for(int j=n+1;j>i;j--)
                v[j]=v[j-1];
            v[i+1]=x;
            n++; i++;
        }
    i++;
    }
}*/

void ex2(int a[][100], int n, int m){
    for(int j=1;j<=m;j++)
        a[1][j]=j;
    for(int i=1;i<=n;i++)
        a[i][1]=i;
    for(int i=2;i<=n;i++)
        for(int j=2;j<=m;j++)
            a[i][j]=a[i][j-1]+a[i-1][j];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int a[100][100];
    /*int x, ok1, ok2, p1,p2;
    while(f>>x){
        int aux=x;
        if(ok1==0){
            while(aux){
                if(aux%2==0){
                    aux/=10;
                    ok1=1;
                }
                else
                {
                    ok1=0;
                    break;
                }
            }
        }
        else {
            i++;
            while(aux){
                if(x%2==1){
                    ok2=1;
                    aux/=10;
                }
                else {
                    ok2=0;
                    break;
                }
                if(ok2)
                    p=i;
            }
        }


    }*/
    ex2(a, 3, 5);
    return 0;
}
