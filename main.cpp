#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
int main(){
    srand(time(nullptr));
    for(int i=0; i<10; i++){
        std::cout<<rand()<<"\n";
    }
    return 0;
}