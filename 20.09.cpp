/*
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream f("vector.txt");

int n, xpr;

void citireVector(int v[100]){
    f>>n;
    for(int i=0;i<=n;i++)
        f>>v[i];
}

void afisareVector(int v[100]) {
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}

int prim(int a){
    int d, nr=0;
    for(d=2;d<=sqrt(a);d++)
        if(a%d==0)
            nr++;
    if(nr==0)
        return 1;
    return 0;
}

int dub1(int a) {
    int nr=0;
    while(a) {
        a=a/10;
        nr++;
    }
    if(nr==2)
        return 1;
    return 0;
}

void afisarePrime(int v[100]) {
    for(int i=n;i>=0;i--){
        if(prim(v[i]) && v[i]!=1 && dub1(v[i]))
        {
            xpr=v[i];
            cout<<v[i]<<" ";
            break;
        }
    }
}
/*
int dublareCifreImpare(int a){
    int nr=0;
    while(a){
        if((a%10)%2==1)
            nr=nr*10+a%10;
        if((a%10)%2==1)
            nr=nr*10+a%10;
        a=a/10;
    }
    while(nr){
        if((a%10)%2==1)
            nr=nr*10+a%10;
    }
    return a;
}

int eliminareCfraMica(int a) {
    int nr=a, minn=9;
    int nr1=0;
    while(a) {
        if(a%10<minn)
            minn=a%10;
        a=a/10;
    }
    a=nr;
    while(a) {
        if((a%10)!=minn)
            if((a%10)%2==1)
                nr1=nr1*10+a%10;
        if((a%10)!=minn)
            if((a%10)%2==1)
                nr1=nr1*10+a%10;
        a=a/10;
    }
    while(nr1){
        if((nr1%10)%2==1)
            a=a*10+nr1%10;
        nr1=nr1/10;
    }
    return a;
}


int dublare(int z)
{
    int o=0;
    while(z!=0)
    {
        if((z%10)%2==1)
            o=o*10+z%10;
        if((z%10)%2==1)
            o=o*10+z%10;
        z=z/10;

    }
    while(o!=0)
    {
        if((o%10)%2==1)
            z=z*10+o%10;
        o=o/10;
    }
    return z;
}

int detelimcm(int z)
{
    int k=z, Min=9;
    int o=0;
    while(z!=0)
    {
        if(z%10<Min)
            Min=z%10;
        z=z/10;
    }
    z=k;
    while(z!=0)
    {
        if(z%10!=Min)
            if((z%10)%2==1)
                o=o*10+z%10;
        if(z%10!=Min)
            if((z%10)%2==1)
                o=o*10+z%10;
        z=z/10;
    }
    while(o!=0)
    {
        if((o%10)%2==1)
            z=z*10+o%10;
        o=o/10;
    }
    return z;
}

void afisareElCifMica(int v[100])
{
    for(int i=0;i<n;i++) {
        if(v[i]==xpr){
            cout<<dublare(v[i]);
            //eliminareCfraMica(v[i]);
        }
    }
}

void cmmdc(int a, int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<a;
}

void cmmmc(int a, int b){
    int x=a, y=b;
    while(x!=y){
        if(a>b)
            x=x-y;
        else
            y=y-x;
    }
    cout<<(a*b)/x;
}

int main()
{
    int v[100];
    citireVector(v);
    afisareVector(v);
    cout<<endl;
    afisarePrime(v);
    cout<<endl;
    afisareElCifMica(v);
    return 0;
}


/*
Sa se extraga dintr-un tablou ultimul el prim de 2 cifre.
sa se dubleze cifrele impare, sa se elimine cifra cea mai mica din numar,
apoi sa se adauge pe pozitia k in vector
*/



#include <iostream>
#include <fstream>
using namespace std;

ifstream f("vector.txt");
//ofstream g("file.out");

int citire(int v[], int n)
{
    for(int i=1; i<=n; i++)
    {
        f>>v[i];
    }
}
int prim(int x)
{
    int k=0;
    for(int i=1; i<=x/2; i++)
    {
        if(x%i==0)
            k++;
    }
    if(k>2)
        return 0;
    else
        return 1;
}

int ultnrprim(int v[], int n, int z)
{
    for(int i=1; i<=n; i++)
    {
        if(v[i]/10!=0 && prim(v[i])==1)
            z=v[i];
    }
    return z;
}

int dublare(int z)
{
    int o=0;
    while(z!=0)
    {
        if((z%10)%2==1)
            o=o*10+z%10;
        if((z%10)%2==1)
            o=o*10+z%10;
        z=z/10;

    }
    while(o!=0)
    {
        if((o%10)%2==1)
            z=z*10+o%10;
        o=o/10;
    }
    return z;
}

int detelimcm(int z)
{
    int k=z, Min=9;
    int o=0;
    while(z!=0)
    {
        if(z%10<Min)
            Min=z%10;
        z=z/10;
    }
    z=k;
    while(z!=0)
    {
        if(z%10!=Min)
            if((z%10)%2==1)
                o=o*10+z%10;
        if(z%10!=Min)
            if((z%10)%2==1)
                o=o*10+z%10;
        z=z/10;
    }
    while(o!=0)
    {
        if((o%10)%2==1)
            z=z*10+o%10;
        o=o/10;
    }
    return z;
}

void afisare(int v[], int n)
{
    for(int i=1; i<=n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    int n,v[11],z=0, k;
    f>>n;
    f>>k;
    citire(v, n);
    z=ultnrprim(v, n, z);
    cout<<z<<" ";
    cout<<dublare(z);
    z=detelimcm(z);
    cout<<" "<<z;
    for(int i=n+1; i>k; i--)
    {
        v[i]=v[i-1];
    }
    v[k]=z;
    cout<<"\n";
    afisare(v, n+1);
    
    cmmdc(20, 32);
    cout<<endl;
    cmmmc(20,32);
    return 0;
}

/* vector.txt

6 3
1 3 37 18 23 99

/
