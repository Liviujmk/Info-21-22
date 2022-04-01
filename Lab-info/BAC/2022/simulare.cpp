III.2

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char t[250], x[100];
    cin.getline(t,250);
    cin>>x;
    int n = strlen(x), ok=0;
    char * ct = strtok(t, ";");
    while(ct!=NULL){
        if(ct[0]==' ')
            strcpy(ct, ct+1);
        if(strstr(ct, x) == ct)
            if(ct[n] == ' '){
                cout<<ct+n+1<<" ";
                ok=1;
            }
        ct = strtok(NULL, ";");
    }
    return 0;
}

3.
  

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,i,x, n3,n5;
    cin>>n;
    for(int i=1;i<=n;i++){
      x=i;
      while(x%3==0){
        n/=10;
        n3++;
      }
       while(x%5==0){
        n/=10;
        n5++;
      }
    }
    cout<<min(n3/2, n5);
    return 0;
}
