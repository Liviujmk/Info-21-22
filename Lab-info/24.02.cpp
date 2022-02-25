//Teste antrenament 2021 - v.8
// II.1.c
/*

#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin>>n;
    x=0;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            x=x+i*i;
        else
            x=x+(i+1)*(i+1);
    }
    cout<<x;
    return 0;
}

*/
// III.2
#include <iostream>

using namespace std;

int main(){
  int n, a[51][51], s=0;
  cin>>n;
  for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
        cin>>a[i][j];
  for(int i=2;i<=n-1;i++)
    for(int j=n/2;j<n-1;j++)
      if(i<j && i+j<n+1)
        s+=a[i][j];
  cout<<s;
  return 0;
}

//III.3

//122 1635 628 1413 1647 900 3001 4252
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cin.txt");

int main(){
  int x, px, ux;
  while(f>>x){
    if(x%2==1){
        px=ux;
        ux=x;
    }
  }
  if(px!=-1)
     cout<<px<<" "<<ux;
    else
     cout<<"Nu esista";
  return 0;
}

// v - 7
//II.1.d
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cin.txt");

int main(){
  int x,y,n,c;
  cin>>x;
  n=0;
  if(x!=0){
    do{
      y=x;
      c=0;
      while(y>0){
        if(y%10>c)
          c=y%10;
        y/=10;
      }
      n=n*10+c;
      cin>>x;
    }while(x!=0);
  }
  cout<<n;
  return 0;
}

