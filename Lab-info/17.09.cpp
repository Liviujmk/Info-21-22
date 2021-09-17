## 18.2

#include <iostream>

using namespace std;

int main()
{
    int x,y,aux;
    cin>>x>>y;
    if(x>y){
        aux=x;
        x=y;
        y=aux;
    }
    if(x%2==0){
        x=x+1;
    }
    while(x<=y){
        x+=2;
        cout<<"*";
    }
    return 0;
}
