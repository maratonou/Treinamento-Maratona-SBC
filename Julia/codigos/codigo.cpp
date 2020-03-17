#include <iostream>

int main(){


    int loop;
    
    std::cin >> loop;
    
    int i;
    int vet[loop];
    for(i = 0;i < loop;i++){
    	std::cin >> vet[i];
    }
    
    int count = 0;
    
    for(i = 0;i < loop;i++){
    	if((i + 1 < loop - 1) || (i + 2 < loop - 1)){
        	if(vet[i] == 1 && vet[i + 1] == 0 && vet[i + 2] == 0){
            	count++;
            }
        }
    }

	std::cout << count << "\n";
    
	return 0;
}