// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int left = 0;
int right = size;
int midd = 0;
static int count = 0;
while (1) {
midd = (left + right) / 2;
if (value < arr[midd])
right = midd - 1;
else if (value > arr[midd])
left = midd + 1;
else {
count++;
arr[midd] = -1;
for (int i = midd -1; i >= 0; i--) {
int temp = arr[i];
arr[i] = arr[midd];
arr[midd] = temp;
}
cbinsearch(arr, size, value);
}
if (left > right)
break;
}
return count;
}
