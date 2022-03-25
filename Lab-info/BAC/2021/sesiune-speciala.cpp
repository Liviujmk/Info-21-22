III
1.

void imog(int x, int y, bool & rez){
    int i=0,uc,inv=0,cop;
    if(x>=y)
    {
        swap(x,y);
        cop=y;
    }
    
    while(cop){
        uc=cop%10;
        if(uc%2){
            inv = inv*10 +uc;
            cop/=10;
        }
    }
    if(cop==x)
        rez=1;
    else 
        rez=0;
}
