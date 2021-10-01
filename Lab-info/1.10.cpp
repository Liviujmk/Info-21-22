#include <iostream>

using namespace std;

int main()
{
    int x, y,s=0;
    /* Varianta 2 - I.2.a,b */

    /*cin>>x;
    while(x>0){
        cin>>y;
        cout<<"-"<<endl;
        if(x>y){
            cout<<x%10;
            cout<<endl<<"-"<<endl;
        }
        else{
            cout<<y%10;
            cout<<endl<<"-"<<endl;
        }
    x=y;
    }*/

    /*cin>>x;
    if(x>0){
        do{
                cout<<"Dati y: ";
            cin>>y;
            cout<<"-"<<endl;
            if(x>y){
                cout<<x%10;
                cout<<endl<<"--"<<endl;
            }
            else {
                cout<<y%10;
                cout<<endl<<"--"<<endl;
            }
        x=y;
        } while(x>0);
    }*/
    /*for(cin>>x, s=0; x; x/=10)
        s+=x%10;
    cout<<s;*/ // suma cif
    return 0;
}
