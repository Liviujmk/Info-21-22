#include <iostream>
#include <cstring>

using namespace std;

void II1c(){
    int y,n,x, ok;
    cin>>n>>x>>y;
    ok=0;
    for(int i=1;i<=n;i++){
        if((i%x==0 && i%y!=0) || (i%x!=0 && i%y==0)){
            cout<<i<<" ";
            ok=1;
        }
    }
    if(ok==0)
        cout<<0;
}

void II1d(){
    int y,n,x, ok;
    cin>>n>>x>>y;
    ok=0;
    int i=1;
    while(i<=n){
        if((i%x==0 && i%y!=0) || (i%x!=0 && i%y==0)){
            cout<<i<<" ";
            ok=1;
        }
        i++;
    }
    if(ok==0)
        cout<<0;
}

void II3(){
    struct date{
        char CNP[14];
        int anNastere;
    };

    struct angajat{
        struct date dp;
        int venit;
    }a[30];

    a[0].dp.anNastere = 2000;
    a[0].venit = 4000;
}

void III1(int n){
    int x,nr=0;
    for(int i=n;i>=1;i--){
        cout<<i*i*i<<" ";
    }
}

void III2(){
    int n, k, nr=0, a[100][100];
    cin>>k>>n;
    for(int i=1; i<=n;i++)
        a[i][i]=i*k;

    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
            a[i][j]=a[i][j-1]+1;

    for(int i=1;i<=n;i++)
        for(int j=i-1;j>=1;j--)
            a[i][j]=a[i][j+1]-1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void III3()
{
    ifstream fin("numere.in");
    int na, nb, a[100], b[100], nr = 0;
    fin>>na>>nb;
    for(int i = 1; i<=na;i++)
        fin>>a[i];
    for(int j = 1; j<=nb;j++)
        fin>>b[j];
    for(int i = 1; i<=na; i++)
        for(int j = 1; j<=nb; j++)
    {
        int uc = a[i]%100;
        int aux=  uc/10;
        int auxuc = (uc%10)*10+aux;
        if(uc == b[j]%100 || auxuc == b[j]%100)
            nr++;
    }
    cout<<nr;
}

int main()
{
    //
    return 0;
}
