III.1

#include <iostream>

using namespace std;

void frate(int x, int &y) {
    int uc, bun = 1, p=1;
    y=0;
    while(x){
        uc=x%10;
        x/=10;
        if(uc<9){
            y=y+p*(uc+1);
            p=p*10;
        }
        else
            bun = 0;
    }
    if(bun == 0)
        y=-1;
}

int main()
{
    int z;
    frate(1027, z);
    cout<<z;
    return 0;
}
