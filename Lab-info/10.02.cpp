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

/////Test 10 antrenament 2021
///III.2

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cif.txt");


int main()
{
    int m=5, n=4,a[100][100];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    
    int gasit = 0;
    for(int j=1;j<=n-1;j++){
        for(int i=1;i<=m;i++)
            if(a[i][j]==a[i][m]){
                cout<<a[i][j]<<" ";
                gasit = 1;
            }   
    }
    if(gasit==0)
        cout<<"nu exista";
    return 0;
}

/// III.3
int p,x,k=1;
while(f>>x)
    k++;
cout<<k;
f.close();
return 0;}
