#include <iostream>

using namespace std;
//creating a function to reverse the given array
void reverseArray(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9}; //sample array
    int length = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,length); //to print the original array
    
    reverseArray(arr,0,length-1); //array reverse function call
    
    printArray(arr,length); //printing the reversed array
    
    return 0;
}


