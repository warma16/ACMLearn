#include <stdio.h>
int main(){
    int arr[10][4] = {
        {0},        // 0
        {1},        // 1  
        {2,4,8,6},  // 2
        {3,9,7,1},  // 3
        {4,6},      // 4
        {5},        // 5
        {6},        // 6
        {7,9,3,1},  // 7
        {8,4,2,6},  // 8
        {9,1}       // 9
    };
    int nums[10] = {1,1,4,4,2,1,1,4,4,2};  
    
    int inp_times = 0;
    scanf("%d", &inp_times);
    
    for(int i = 0; i < inp_times; i++){
        long long n;  
        scanf("%lld", &n);
        
        int last_digit = n % 10;  
        int cycle_len = nums[last_digit];  
        

        int index = (n - 1) % cycle_len;
        
        printf("%d\n", arr[last_digit][index]);
    }
    return 0;
}
