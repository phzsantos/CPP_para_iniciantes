#include <iostream>

int main(int argc, char const ** argv ){
  for( int i = 0; i <= 10; i++){
    if(i == 0 || i == 10){
      std::cout << "+";
      for( int k = 0; k <= 20; k++){
        if(k == 20){
          std::cout << "+";
        }else{
          std::cout << "-";
        }
      }
      std::cout << '\n';
    }else{
      std::cout << "|" << '\n';
    }
  }
  return 0;
}