#include <iostream>

int main() {
  
  int vetMain[50];
  int vetResp[50];
  int loop,i;

  std::cin >> loop;

  for(i=0;i < loop;i++){
    std::cin >> vetMain[i];
  }

  if(loop == 1){
    
   vetResp[0] = vetMain[0];

  }else{

    vetResp[0] = vetMain[0] + vetMain[1];

    for(i=0;i < loop;i++){
      
      if(i > 0 && i + 1 < loop){
        vetResp[i] = vetMain[i] + vetMain[i+1] + vetMain[i-1];
     
      }

    }
    vetResp[i-1] = vetMain[i-1] + vetMain[i-2];
   
  }
  
  for(i = 0;i < loop;i++)
    std::cout << vetResp[i] << "\n";

  

  return 0;
}