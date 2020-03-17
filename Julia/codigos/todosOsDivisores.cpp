#include <iostream>
using namespace std;

int main(){

    int num,i = 1;
    
    cin >> num;
    
    while(i <= num){
    	if(num % i == 0)
            cout << i << " ";
    	i++;
    }
    
    cout << endl;


	return 0;
}