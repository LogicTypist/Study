//수 정렬하기 2 ~ 2751 @ 백준

#include <iostream>

//using namespace std;

int sorted_array[1000000];

void merge(int* array, int left, int mid, int right){
    int left_index = left;
    int right_index = mid + 1;
    int sorted_index = left;
    while(left_index <= mid && right_index <= right){
        if(array[left_index] <= array[right_index]){
            sorted_array[sorted_index] = array[left_index];
            ++left_index;
            ++sorted_index;
        }else{
            sorted_array[sorted_index] = array[right_index];
            ++right_index;
            ++sorted_index;
        }
    }

    if(left_index > mid){
        while(right_index <= right){
            sorted_array[sorted_index] = array[right_index];
            ++right_index;
            ++sorted_index;
        }
    }else{
        while(left_index <= mid){
            sorted_array[sorted_index] = array[left_index];
            ++left_index;
            ++sorted_index;
        }
    }

    for(int i = left; i <= right; ++i){
        array[i] = sorted_array[i];
    }
}

void merge_sort(int* array, int left, int right){
    int mid;
    if(left < right){
        mid = (left + right) / 2;
        merge_sort(array, left, mid);
        merge_sort(array, mid+1, right);
        merge(array, left, mid, right);
    }
}


int main(){
    std::ios_base::sync_with_stdio(false);          //이거 추가안하면 시간초과 ^^;;
    std::cin.tie(NULL);                             //이거 추가안하면 시간초과 ^^;;
    std::cout.tie(NULL);                            //이거 추가안하면 시간초과 ^^;;

    int num_of_numbers;

    int array[1000000];

    std::cin >> num_of_numbers;

    for(int i = 0; i < num_of_numbers; ++i){
        std::cin >> array[i];
    }

    merge_sort(array, 0, num_of_numbers - 1);
    
    for(int i = 0; i < num_of_numbers; ++i){
        std::cout << array[i] << '\n';
    }



}