////var model 2022
///III.3

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cif.txt");

int cif, poz[100], lung[100], c, lungmax;

int main()
{
    int x, n, p[10]={0}, u[10]={0};
    n=0;
    while(f>>x){
        n++;
        if(p[x]==0)
            p[x]=n;
        else 
            u[x]=n;
    }
    int lMax=0;
    for(int i=0;i<=8;i+=2){
        if(u[i])
            if(u[i]-p[i]>lMax)
                lMax = u[i]-p[i];
    }
    cout<<lMax<<endl;
    for(int i=0;i<=8;i+=2)
        if(u[i]-p[i]==lMax)
            cout<<i<<" ";
    f.close();
    return 0;
}
