#include<stdio.h>

#define INT_MAX 100000000

int compareFunction(const void* a, const void* b) {
    int value1 = *((int *)a);
    int value2 = *((int *)b);
    if (value1 < value2) {
        // Return -1 if you want ascending. 1 if you want descending. 
        return -1;
    } else if (value1 > value2) {
        // Return 1 if you want ascending. -1 if you want descending. 
        return 1;
    }
    return 0;
}

int mod(int a){
    if(a > 0){
        return a;
    }
    else{
        return -1*a;
    }
}


int threeSumClosest(int* A, int n1, int B) {
   int i;
   int sum_req, sum_2, sum_final;
   int min_diff = INT_MAX;
   int diff, head, tail;
   qsort(A,n1,sizeof(int), compareFunction);


   for(i=0; i < n1 - 2; i++){
      head = i+1;
      tail = n1 - 1;
      sum_req = B - A[i];
      while(head < tail ){
        sum_2 = A[i] + A[head] + A[tail];
        diff = sum_req - (A[head] + A[tail]);
        // printf("the diff is %d \n", diff);
        // printf("the sum is %d \n", A[i] + A[head] + A[tail]);
         if(diff < 1 && diff > -1){
            //  printf("executed");
            return B;
         }
         else if(diff < 0){
            tail--;
         }
         else if(diff > 0){
            head++;
         }
         if(mod(diff) < mod(min_diff)){
            min_diff = mod(diff);
            sum_final = sum_2;
            // printf("min_diff is %d \n", min_diff);
            // printf("sum_final is %d \n", sum_final);
         }
      }
   }
//    printf("the final final final sum is %d \n", sum_final ); 
   return sum_final;

}


int main(){
    // int S[56] = {-5, 1, 4, -7, 10, -7, 0, 7, 3, 0, -2, -5, -3, -6, 4, -7, -8, 0, 4, 9, 4, 1, -8, -6, -6, 0, -9, 5, 3, -9, -5, -9, 6, 3, 8, -10, 1, -2, 2, 1, -9, 2, -3, 9, 9, -10, 0, -9, -2, 7, 0, -4, -3, 1, 6, -3 };
    int S[6] = { 10, -6, 3, 4, -8, -5 };
    // printf("%d", threeSumClosest(S, 6, 3));
}