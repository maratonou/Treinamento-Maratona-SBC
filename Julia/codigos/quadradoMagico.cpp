#include <iostream>

int main() {
 
  int sD = 0;
  int ordem;
  int i,j;
  
  std::cin >> ordem;

   int m[ordem][ordem];
  int s1[ordem];
  int s2[ordem];
  int m2[ordem][ordem];

  for(i = 0;i < ordem;i++){
    s1[i] = s2[i] = 0;
    for(j = 0;j < ordem;j++){
      std::cin >> m[i][j];
    }
  }

  for(i = 0;i < ordem;i++){
    sD+=m[i][i];
    for(j = 0;j < ordem;j++){
      
        s1[i] += m[i][j];
      
    }
  }
  int dif = 0;

  for(i = 0;i < ordem - 1;i++){
    if(s1[i] != s1[i+1]){
      dif = 1;
      break;
    }
  }
  if(sD != s1[0])
    dif = 1;

  int sDS = 0;
  for(i = ordem - 1; i >= 0;i--){
    sDS += m[i][(ordem - 1) - i];
  }


 
  if(sDS != s1[0])
    dif = 1;

  if(dif == 0){
    for(i = 0;i < ordem;i++){
      for(j = 0;j < ordem;j++){
        m2[i][j] = m[j][i];
      }
    }

    for(i = 0;i < ordem;i++){
     
      for(j = 0;j < ordem;j++){
        
        s2[i] += m2[i][j];
        
      }
    }

    for(i = 0;i < ordem - 1;i++){
      if(s2[i] != s2[i+1]){
        dif = 1;
        break;
      }
    }

    if(dif)
      std::cout << -1 << std::endl;
    else
    std::cout << s2[0] << std::endl;

  }else{
    std::cout << -1 << std::endl;
    
  }

  

  return 0;
}