III.1

#include <iostream>

using namespace std;

void afisare(int x, int y, int k){
    int nr=0;
    for(int i=x;i<=y;i++){
        nr++;
        if(nr==k || nr%k==0)
            cout<<i<<" * ";
        else if(nr==(y+1-x))
            cout<<i<<" * ";
        else 
            cout<<i<<" ";
    }
}

int main()
{
    afisare(11,21,4);
    return 0;
}


III.2 

  #include <iostream>

using namespace std;

int main()
{
    int a[100][100],i,j,x,y,nr=0,inv;
    cin>>x;
    y=x;
    while(x){
        nr++;
        inv = inv*10 + x%10;
        x/=10;
    }
    for(i=1;i<=nr;i++){
        int p = inv;
        for(j=1;j<=nr;j++){
            a[i][j] = p%10;
            p/=10;
        }
    }
    
    for(i=1;i<=nr;i++) {
        for(j=1;j<=nr;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

