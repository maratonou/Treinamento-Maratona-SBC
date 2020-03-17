#include <iostream>
using namespace std;

int main(){

    int p,r;
    
    cin >> p >> r;
    
    if(r == 0){
    	if(p == 1){
			cout << "B" << endl;	     
        }else{
        	cout << "C" << endl;
        }
    }else{
    	if(p == 1){
        	cout << "A" << endl;
        }else
            cout << "C" << endl;
    }


	return 0;
}