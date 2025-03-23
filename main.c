#include <stdio.h>


// Function to find the longest mountain
int longestMountain(int* arr, int arrSize) {
    if (arrSize < 3) return 0;

    int longest = 0;

    for (int i = 1; i < arrSize - 1; i++) {
        // Check if arr[i] is a peak
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
            int left = i - 1;
            int right = i + 1;

            // Expand to the left
            while (left > 0 && arr[left - 1] < arr[left]) {
                left--;
            }

            // Expand to the right
            while (right < arrSize - 1 && arr[right] > arr[right + 1]) {
                right++;
            }

            // Only count valid mountain if length >= 3
            int length = right - left + 1;
            if (length >= 3 && length > longest) {
                longest = length;
            }
        }
    }

    return longest;
}

// Main function (Empty, test cases will be appended dynamically)
int main() {
    
    return 0;
}
