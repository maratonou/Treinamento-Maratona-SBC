#include <iostream>
using namespace std;

int main(){

    int rep,i,val,soma = 0;

    	cin >> rep;
    i = 1;
    while(i <= rep){
    	cin >> val;
        soma += val;
        if(soma >= 1000000)
            break;        
        i++;
    }

    cout << i << endl;
	return 0;
}