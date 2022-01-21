//// v.18.III.3
#include <iostream>

using namespace std;

int count(double a[101], int n){
    int nr=0;
    double ma,s=0;
    for(int i=0;i<n;i++){
        s=s+a[i];
    }
    ma=s/n;
    for(int i=0;i<n;i++){
        if(a[i]>=ma)
            nr++;
    }
    return nr;
}



int main()
{
    double v[]={12, 7.5, 6.5, 3, 8.5, 7.5}; 
    int n=6;
    cout<<count(v,n);
    return 0;
}
