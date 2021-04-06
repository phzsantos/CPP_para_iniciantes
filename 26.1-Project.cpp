#include <iostream>

int main(int argc, char const ** argv ){
  for( int i = 0; i <= 10; i++){
    if(i == 0 || i == 10){
      std::cout << "+" << '\n';
    }else{
      std::cout << "|" << '\n';
    }
  }
  return 0;
}