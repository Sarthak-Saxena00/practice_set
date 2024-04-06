/* Counting down inventory: You're managing a store and need to count the number of items in stock for each product. (Loop through a list of products, keeping track of a count for each) */

#include <cstdlib> 
#include <iostream> 
#include <ctime>
using namespace std; 
  
/* int main() 
{ 
    srand(time(0));
    int N = 100; 
     
        cout << rand() % N << "_1"<<endl; 
        cout << rand() % N << "*2"<<endl; 
  
    return 0; 
}  */









 #include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // seed the random number generator

    int heads = 0;
    int tails = 0;

    for (int i = 0; i < 10; i++) {
        int flip = rand() % 2;

        if (flip == 0) {
            heads++;
            std::cout << "Heads" << std::endl;
        } else {
            tails++;
            std::cout << "Tails" << std::endl;
        }
    }

    std::cout << "Number of heads: " << heads << std::endl;
    std::cout << "Number of tails: " << tails << std::endl;

    return 0;
} 





