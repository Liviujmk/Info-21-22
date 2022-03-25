I.1. c
  2. a
  3. c
  4. d
  5. b

II.1.a.
     b.
     
III.1
  int putere(unsigned int n){
    int d=2,p,pMin, dMin;
    pMin = 100000;
    while(n>1){
        p=0;
        while(n%d==0){
            p++;
            n/=d;
        }
        if(p!=0 && p<pMin){
            pMin = p;
            dMin = d;
        }
        d++;
    }
    return dMin;
  }  

III.2
#include <iostream>
using namespace std;

int main()
{
      int n, i,j, a[100][100], k, aux;
      cin>>n;
      for( i=1; i<=n; i++)
          for( j=1; j<=n; j++)
              cin>>a[i][j];
      cin>>k;
      cout<<endl;
      aux = a[k][k-1];
      for(j=k-1; j>=2;j--)
        a[k][j] = a[k][j-1];
      
      a[k][1]=aux;
      for(i=1; i<=n; i++) {\
        cout<<a[i][j]<<" ";
        cout<<endl;
      }
      
      return 0;
}

III.3

