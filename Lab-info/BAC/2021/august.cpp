II.1. 
  a) 3,4,6,8,9,15
  
  2. ARMONIA
  3. a[0].venit = 4000
     a[0].dp.anNastere = 2000
 
III
  1. void cuburi(unsigned int n){
      for(int i=n; i>=1; i--)
        cout<<i*i*i<<" ";
      }
  
  2. 
  int n, k, nr=0, a[100][100],x;
    cin>>k>>n;
    
    for(int i=1; i<=n;i++){
        a[i][1] = i*k-i+1;
        for(int j=2;j<=n;j++)
            a[i][j] = a[i][j-1]+1;
    }
   
  3. 
  
