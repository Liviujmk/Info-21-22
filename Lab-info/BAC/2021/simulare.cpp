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

  int n,d,p;
  int main()
  {
      int n, i,j, a[100][100], k;
      cin>>n>>k;
      for( i=1; i<=n; i++)
          for( j=1; j<=n; j++)
              cin>>a[i][j];
      cout<<endl;     
      for( i=1; i<=n; i++){
          for( j=1; j<=n; j++)
              cout<<a[i][j]<<" ";
          cout<<endl;
      }
      cout<<endl<<i<<"   "<<endl;int aux;
      for(j=1;j<=n/2;j++)
          if(i>j){
              aux=a[k][j];
              a[k][j]=a[k][n/2-1];
              a[k][n/2-1]=aux;  
          };

      for( i=1; i<=n; i++){
          for( j=1; j<=n; j++)
              cout<<a[i][j]<<" ";
          cout<<endl;
      }
      return 0;

  }
