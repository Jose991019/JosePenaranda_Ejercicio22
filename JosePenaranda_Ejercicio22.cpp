#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>

using std::cout;
using std::endl;

void MCMC(int N);
float f(float x);

int main(){
    int N = 1000;
    MCMC(N);
    return 0;
}


void MCMC(int N){
    srand(time(0));
    float aleatorio1 = 2*drand48()-1;
    cout << aleatorio1<< endl;
        for(int i=0;i<N;i++){
            float aleatorio2 = aleatorio1 + 2*drand48()-1; 
            float r = f(aleatorio2)/f(aleatorio1);
            float alpha = drand48();
                if(r>alpha){
                    aleatorio1 = aleatorio2;
                }
            cout << aleatorio1<< endl;
        }
}

float f(float x){
  return exp(-x*x/2);
}
