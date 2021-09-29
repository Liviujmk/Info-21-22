#include <iostream>
#include <fstream>

using namespace std;

ifstream f("mat.txt");

int a[100][100],n,m;

void citireMatrice(){
    f>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            f>>a[i][j];
}


void afisare(){
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

int maxim(int i){
    int maxx=0;
    for(int j=1;j<=n;j++)
        if(a[i][j]>maxx)
            maxx=a[i][j];
    return maxx;
}

int minim(int j){
    int minn=10000;
    for(int i=1;i<=m;i++)
        if(a[i][j]<minn)
            minn=a[i][j];
    return minn;
}
/*
int sumaMaximelor(int a[100][100]){
    int s=0;
    for(int j=1;j<=m;j++)
        s=s+maxim(j, a);
    return s;
}

int sumaMinimelor(int a[100][100]){
    int s=0;
    for(int i=1;i<=m;i++)
        s=s+minim(i, a);
    return s;
}*/

int main()
{
    citireMatrice();
    afisare();
    //cout<<endl<<sumaMaximelor(a);
    //cout<<endl<<sumaMinimelor(a);
    cout<<endl<<minim(2);
    return 0;
}
