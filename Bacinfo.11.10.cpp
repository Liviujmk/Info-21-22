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

/*
void iii1-divPrim(int n, int s){
    s=0;

}*/
int prim(int n){
    int nr=0;
    for(int d=2; d<=sqrt(n);d++)
        if(n%d==0)
            nr=1;

    if(nr==0)
        return 1;
    return 0;
}
/*
void divizori(){
    int n=30, s=0;
    for(int d=2; d<=n/2;d++){
        if(n%d==0){
            if(prim(d)){
                s=s+d;

            }
        }
    }


}*/

void III2(){
    int n,k;
    char c[10];
    cin>>n>>k;
    char aux[10];
    for(int i=1; i<=n;i++){
        cin.getline(c,10);
        cin.get();
        cout<<c[strlen(c)];
    }
}

int main()
{
    //iiex1c();
    //iiex1d();
    //iiex3();
    //divizori();
    III2();
    return 0;
}
