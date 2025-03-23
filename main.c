#include <stdio.h>


int longestMountain(int* arr, int size) {
    if (size < 3) return 0;
    
    int maxLen = 0;
    for (int i = 1; i < size - 1; i++) {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) { // Peak found
            int left = i - 1;
            while (left > 0 && arr[left - 1] < arr[left]) left--; // Expand left

            int right = i + 1;
            while (right < size - 1 && arr[right] > arr[right + 1]) right++; // Expand right

            int length = right - left + 1;
            if (length > maxLen) maxLen = length;
        }
    }
    return maxLen;
}

// No main() here; GitHub Actions will append it dynamically.
// to ensure main() is not defined multiple times.