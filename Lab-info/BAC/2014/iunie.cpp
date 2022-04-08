II.5

#include <iostream>

using namespace std;


int main() {
    int a[100][100], i, j,n,m;
    cin>>m>>n;
    
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    
    for(j=1;j<=n;j++)
        a[m-1][j] = a[m][j];
        
    for(i=1;i<=m;i++)
        a[i][n-1] = a[i][n];
        
    n--;
    m--;
    
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    
    return 0;
}

III

3. 
  
// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void interval(int n, int &a, int &b) {
    int i;
    a=1; b=1;
    for(i=1;i<=n-1;i++)
        a=a*i;
    b=a*n*(n+1);
    a=a+1;
    b=b-1;
}

int main() {
    
    int a, b;
    interval(3, a, b);
    cout<<a<<" "<<b;
    return 0;
}

