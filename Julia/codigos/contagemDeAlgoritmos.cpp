#include <iostream>

using namespace std;

int main() {

    int N,i,j;
    
    cin >> N;

    int vetR[10];
    for(i = 0;i < 10;i++)
      vetR[i] = 0;

    string vet;

    for(i = 0;i < N;i++){
      cin >> vet;
      
      for(j = 0; j < vet.size();j++){
        int num = vet[j] - '0';
        switch(num){
          case 0:
            vetR[0]++;
          break;
          case 1:
            vetR[1]++;
          break;
          case 2:
            vetR[2]++;
          break;
          case 3:
            vetR[3]++;
          break;
          case 4:
            vetR[4]++;
          break;
          case 5:
            vetR[5]++;
          break;
          case 6:
            vetR[6]++;
          break;
          case 7:
            vetR[7]++;
          break;
          case 8:
            vetR[8]++;
          break;
          case 9:
            vetR[9]++;
          break;
        }
        
      }


    }

    for(i = 0; i < 10;i++){
      cout << i << " - " << vetR[i] << endl;
    }

}