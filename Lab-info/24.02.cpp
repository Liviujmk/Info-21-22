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
