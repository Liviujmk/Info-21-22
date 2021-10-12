#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

void iiex1c(){
    int x, y ,nr=0, aux;
    cin>>x>>y;
    if(x>y){
        aux=x;
        x=y;
        y=aux;
    }
    nr=1;
    for(int i=y; i>=x;i--){
        cout<<1;
        if(nr>=x)
            cout<<2;
        nr=nr*3;
        cout<<1;
    }
}

void iiex1d(){
    int x, y ,nr=0, aux;
    cin>>x>>y;
    if(x>y){
        aux=x;
        x=y;
        y=aux;
    }
    nr=1;
    int i=y;
    while(i>=x){
        cout<<1;
        if(nr>=x)
            cout<<2;
        nr=nr*3;
        cout<<1;
        i--;
    }
}

void iiex3(){
    struct fractie{
        int a,b;
    }f,fs;
    fs.a=2020-f.a;
    fs.b=2020-f.b;
    cout<<fs.a/fs.b
}

/*void divPrim()
{
    int d=2, n, s=0;
    cin>>n;
    while(n>1)
    {
        int p=0;
        while(n%d==0)
            {
                p++;
                n=n/d;
            }
        if(p%2==1)
            {
                s=s+d;
            }
        d++;
    }
    cout<<s;
}*/

/*void ex2_sub3()
{
    int n, k;
    char a[10], vocale[]="aeiou";
    cout<<"n= "; cin>>n;
    cout<<"k= "; cin>>k;
    for(int i=0; i<n; i++)
        {
            cin>>a;
            if(strchr(vocale, a[strlen(a)-1]) && k!=0)
            {
                k--;
                cout<<a<<endl;
            }
        }
}*/

/*void ex3_sub3()
{
    int sufix, nr1, nr2, u=0, pr=0;
    f>>sufix>>nr1;
    while(f>>nr2)
    {
        if(nr1%1000==sufix && nr2%1000==sufix)
        {
            u=nr2;
            pr=nr1;
        }
        nr1=nr2;
    }
    if(u!=0)
        cout<<pr<<" "<<u;
    else
        cout<<"nu exista";
}*/

int main()
{
    //iiex1c();
    //iiex1d();
    //iiex3();
    //divizori();
    III2();
    return 0;
}
