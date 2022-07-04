
#include<stdio.h>

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */

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



int solve(int* A, int n1, int B) {

    int head = 0;
    int tail = 1;
    int sub = 0;
    qsort(A,n1,sizeof(int), compareFunction);

    for(int i=0; i< n1; i++){
        printf("%d ", A[i]);
    }

    while(head < n1 && tail < n1){
        sub = A[tail] - A[head];
        if(sub < B){
            tail++;
        }
        if(sub > B){
            head++;
        }
        if(sub == B ){
            if(head != tail){
                return 1;
            }
            else{
                head++;
            }
        }
    }
    return 0;
}



int main(){


    int arr[6] = {20, 500, 1000, 200};

    printf("%d", solve(arr, 4, 0));


}