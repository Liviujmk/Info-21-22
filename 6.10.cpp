/*
Sa se scrie un program ce citeste u nr n 10 cifre, ;;;
determina si afsieaza cel mai mare numar care se poate obtine utilizand:
toate cifrele lui n;
toatre cifele distincte ale lui n;
*/
/*
#include <iostream>
using namespace std;

int v[10], nra, nrb, n;

int main()
{
    cin>>n;
    while(n){
        v[n%10]++;
        n/=10;
    }
    //punctul a)
    for(int i=9;i>=0;i--){
        if(v[i]!=0){
            nra=nra*10+i;
            if(v[i]>=2){
                nra=nra*10+i;
            }
        }
    }
    cout<<nra<<" ";
    //punctul b)
    for(int i=9;i>=0;i--){
        if(v[i]!=0){
            nrb=nrb*10+i;
        }
    }
    cout<<nrb<<" ";
    return 0;
}*/

/*
intr-un fisier maxim 1M nr
sa se scrie un program care citste valorile si le afiseaza in ordine crescatoare*/
/*

#include <iostream>
using namespace std;

int v[10], nra, nrb, n;

int main()
{
    cin>>n;
    if(n){
      while(cin>>n){
        cout<<n<<" ";
        v[n%10]++;
        n/=10;
        }
    }
    in lucru
    for(int i =0;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}*/
