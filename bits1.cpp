#include<iostream>

/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int numSetBits(unsigned int A) {
  
  unsigned int q=A;
  int r;
  int count=0;
  while(q >0){

      r = q%2;
      std::cout<<"the remainder is: "<<r;
      if(r == 1) { count++ ;}
      q = q/2;
      std::cout<<"quotient is:"<<q;

  }

return count;

}


int main(){

    std::cout<<numSetBits(4294967295);
    return 0;
}