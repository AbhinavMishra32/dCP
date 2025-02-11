#include <stdio.h>

int A[5] = {3,4,6,23,54};

int binary_search(int l, int h, int val){
    while(l<=h){
        int mid = (l+h)/2;
        if (val == A[mid]) return mid;
        if (val > A[mid]) return l = mid+1;
        else h = mid -1;
    }
    return -1;
}

int binary_search_recursive(int l, int h, int val){
    if (l>h) return -1;
    int mid = (l+h)/2;
    if (val == A[mid]) return mid;
    if (val > A[mid]) return binary_search_recursive(mid +1, h, val);
    else return binary_search_recursive(l, mid -1, val);
}

int main()
{
    printf("%d\n", binary_search(0, 4, 6));
    printf("%d\n", binary_search_recursive(0, 4, 6));
    return 0;
}