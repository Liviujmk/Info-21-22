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

int treidoi ()
{
    int n, k, l=0;
    char s[10], st[100];
    cin>>n>>k;
    int auxk=k;
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        strcpy(st+strlen(st), s);
        strcpy(st+strlen(st), " ");
        if(s[strlen(s)-1]=='a' || s[strlen(s)-1]=='e' || s[strlen(s)-1]=='i' || s[strlen(s)-1]=='o' || s[strlen(s)-1]=='u')
            l++;

    }
    char *p;
    p=strtok(st, " ");
    while(p)
    {

        if(l==auxk)
        {
            if(k!=0)
                if(p[strlen(p)-1]=='a' || p[strlen(p)-1]=='e' || p[strlen(p)-1]=='i' || p[strlen(p)-1]=='o' || p[strlen(p)-1]=='u')
                {
                    cout<<p<<" ";
                    k--;
                }
        }
        p=strtok(NULL, " ");
    }

        if(l!=auxk)
            cout<<"Nu exista k astfel de cuvinte";

return 0;
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
