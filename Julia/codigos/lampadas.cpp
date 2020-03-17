#include <iostream>
using namespace std;

int main(){

    int rep, i, inter, a = 0, b = 0;

    cin >> rep;
    
    for(i = 0;i < rep; i++){
        cin >> inter;
        
        switch(inter){
            case 1:
                if(a)
                    a = 0;
                else
                    a = 1;
                break;
            case 2:
                if(a)
                    a = 0;
                else
                    a = 1;
                if(b)
                    b = 0;
                else
                    b = 1;
                break;
        }
    }

    cout << a << endl << b << endl;

    return 0;
}