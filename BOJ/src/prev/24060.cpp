//알고리즘 수업 - 병합 정렬 ~ 24060 @ 백준

#include <iostream>

//using namespace std;

int temp_array[500000];
int target_K;
int k;
int theNUMBER;

void merge(int* array, int left, int mid, int right){
    
    int left_part = left;
    int right_part = mid + 1;
    int temp_place = left;

    while(left_part <= mid && right_part <= right){
        if(array[left_part] <= array[right_part]){
            temp_array[temp_place++] = array[left_part++];
        }else{
            temp_array[temp_place++] = array[right_part++];
        }
    }
    while(left_part <= mid){
        temp_array[temp_place++] = array[left_part++];
    }
    while(right_part <= right){
        temp_array[temp_place++] = array[right_part++];
    }
    left_part = left;
    while(left_part <= right){
        array[left_part] = temp_array[left_part];
        if(target_K == ++k){
            theNUMBER = array[left_part];
        }
        left_part++;
    }
}


void merge_sort(int* array, int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        merge_sort(array, left, mid);
        merge_sort(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}


int main(){
    int array[500000];
    int numbers;
    theNUMBER = -1;
    k = 0;

    std::cin >> numbers >> target_K;
    for(int i = 0; i < numbers; ++i){
        std::cin >> array[i];
    }
    merge_sort(array, 0, numbers-1);
    std::cout << theNUMBER << std::endl;

}