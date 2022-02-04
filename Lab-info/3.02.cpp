// antrenament v2.2.3
#include <iostream>

using namespace std;

int main()
{
    while(f>>x){
        n++;
        if(x>0)
        if(kp=-1)
            kp=n;
        else
            kn=n;
    }
    if(n-kp+1 > kn)
        cout<<n-kp+1;
    else
        cout<<kn;
    return 0;
}


// model 2022
//III.1


#include <iostream>
#include <cmath>

using namespace std;

int mozaic(int x, int y, int z){
    int a,b,c,cm,cmf;
    a=x;
    b=y;
    c=z;
    while(a!=b){
        if(a>b)
            a-=b;
        else
            b--=a;
    }
    cm=(x*y)/a;
    int cmm=cm;
    while(cm!c){
        if(cm>c)
            cm-=c;
        else
            c-=cm;
    }
    cmf = (cmm*z)/c;
    return cmf;
}
int main (){

    return 0;
}
