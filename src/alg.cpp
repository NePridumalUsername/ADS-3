// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
int count = 0;
int left = 0;
int right = size;
while (left < right) {
int mid = (left + right) / 2;
if (arr[mid] < value) {
left = mid + 1;
} else {
right = mid;
}
}
while (arr[left] == value) {
count++;
left++;
}
return count;
}
