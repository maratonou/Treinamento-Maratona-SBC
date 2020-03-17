#include <iostream>
using namespace std;

int main(){

    int rep, copos, latas,soma = 0;
    int i;
    
    cin >> rep;
    
    for(i = 0; i < rep; i++){
    	cin >> latas;
        cin >> copos;
        
        if(latas > copos)
            soma += copos;
    }

	cout << soma << endl;

	return 0;
}