#include <stdio.h>
#include <math.h>

void sort_arr(int *start, int len);

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    sort_arr(arr, 10);
    return 0;
}

void sort_arr(int *start, int len)
{
    int random_arr[len];
    int avg_1 = round((*start) + *(start+len-1))/2;
    printf("%d",avg_1);
    random_arr[0] = *start;
    random_arr[1] = avg_1;
    random_arr[2] = round((*start) + avg_1)/2;
    printf("%d", random_arr[2]);
    random_arr[3] = round((*start) + random_arr[2])/2;
    printf("%d", random_arr[3]);
    random_arr[4] = (random_arr[2] + random_arr[1])/2;
    printf("%d", random_arr[4]);
}
