#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

int main(){
  
  for(int k=0;k<1000;k++){ /*inicializacion, limite, y o que hare cada vez que termine*/ 
  int dinero; int step; int i; int max; int time;

  srand(k);

  dinero = 100;
  max = 0;
  i = 0;
  time = 0;

  while(dinero>0){
     step = rand()%3 -1;
     dinero += step;
 
     if(dinero> max){
        max = dinero;}
    
      i++;}

cout << " No.jugador " << k << endl;
cout << " Tiempo antes de perder todo " << i << endl;
cout << " Dinero maximo " << max << endl;}

return 0;}
