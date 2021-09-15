#include <iostream>

using namespace std;

int sumanrimpare(int n)
{
    int s=0;
    while(n){
        int uc = n%10;
        if( uc%2!=0){
            s=s+uc;
        }
        n=n/10;
    }
    return s;
}

int verificarePalindrom(int n){
    int inv=0, temp=n;
    while(n){
        inv = inv*10 + n%10;
        n=n/10;
    }
    if(inv==temp)
        return true;
    return false;
}




int cifraMaxMin(int n)
{
    int uc=0;
    while(n){
        if(n%10>uc)
            uc=n%10;
        n=n/10;
    }
    return uc;
}



int main()
{
    int nr = 1221;
    cout<<sumanrimpare(nr)<<endl;
    cout<<verificarePalindrom(nr)<<endl;
    cout<<cifraMaxMin(nr)<<endl;
    return 0;
}
