III.1
#include <iostream>

using namespace std;

void ex1( int a, int b, int &n, int v[])
{
    int i=0,x,ga,gb,uc;
    while(i<n)
    {
        x=v[i];
        ga=0;
        gb=0;
        while(x)
        {
            uc=x%10;
            if(uc==a)
                ga=1;
            if(uc==b)
                gb=1;
            x=x/10;
        }

        if(ga!=0 && gb==0)
        {
            for(int j=i;j<=n-2;j++)
            v[j]=v[j+1];
            n--;
        }
        else
            i++;

    }


}

#include<iostream>

using namespace std;


III.2
int main()
{
    int n,m, a[26][26];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            a[i][j]=i+j-1;
    return 0;
}
