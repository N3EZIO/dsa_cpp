#include<iostream>
#include<algorithm>

using namespace std;

class Myhash {

    int *arr;
    int cap, size;

    Myhash(int c) {
        cap = c;
        size = 0;
        for(int i=0; i< cap; i++){
            arr[i] = -1;
        }
    }

    int hash(int key){
        return key%cap;
    }

    bool search(int key){
        int h = hash(key);

        int i = h;

        while(arr[i] != -1){
            if(arr[i] == key) {
                return true;
            }
            i = (i+1)%cap;
            if( i == h){
                return false;
            }
        }
        return false;
    }

    bool insert(int key){

        if(size == cap) {
            return false;
        }

        int h = hash(key);

        while(arr[i] != -1 && arr[i] != -2 && arr[i] != key)
            i = hash(i+1);
        if(arr[i] == key) {
            return false;
        } else{
            arr[i] = key;
            size ++;
            return true;
        }
        
        
    }

    bool delete(int key) {
        int h = hash(key);
        int i = h;
        while(arr[i]!= -1){
            if(arr[i] == key){
                arr[i] = -2;
                return true;
            }

            i = hash(i+1);
            if ( i == hash){
                return false;
            }
        }  
        return false; 
    }
}