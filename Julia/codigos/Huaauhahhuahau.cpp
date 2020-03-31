#include <iostream>
#include <cstring>

using namespace std;

int main() {
  
  char risada[51];
  char vogal[51];
  int i,cont = 0;

  cin >> risada;

  int tamR = strlen(risada);
 
  for(i = 0; i < tamR;i++){
    if((risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u')){
      vogal[cont] = risada[i];
      
      cont++;
    }
      

  }
  int esc = 0;
  for(i= 0;i < cont;i++){
  
    if(vogal[i] != vogal[(cont - i) - 1]){
     
      esc = 1;
      break;
    }
  }

  esc == 1 ?  cout << "N" << "\n" : cout << "S" << "\n";

  

 
  return 0;
}