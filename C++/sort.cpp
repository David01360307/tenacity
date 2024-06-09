#include <iostream>

void sortarray(int nums[], int size);

int main(){

    int nums[] = {3, 2, 6, 15, 4, 8, 9, 1, 10};
    int size = sizeof(nums) / sizeof(int);

    sortarray(nums, size);

    for (int i = 0; i < size; i++){
        std::cout << nums[i] << " ";
    }
    return 0;
}

void sortarray(int nums[], int size){
    int temp;

    for(int j = 0; j < size - 1; j++)
        for(int i = 0; i < size - 1 - j; i++){
            if (nums[i] > nums[i + 1]){
                temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }

}
