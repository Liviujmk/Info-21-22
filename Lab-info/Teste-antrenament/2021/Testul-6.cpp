III.1

void numar(int n, int c, int &m){
    int uc, p=1;
    m=0;
    while(n){
        uc=n%10;
        n/=10;
        if(uc!=c){
            nr+=uc*p;
            p*=10;
        }
    }    
    if(ok==0)
        m=-1;
}
