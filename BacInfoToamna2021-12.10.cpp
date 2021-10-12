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
    a[1].dp.anNastere = 2000;
    a[1].venit = 4000;
}

void III1(int n){
    int x,nr=0;
    for(int i=n;i>=1;i--){
        cout<<i*i*i<<" ";
    }
}

void III2(){
    
}

int main()
{
    III1(4);
    return 0;
}
