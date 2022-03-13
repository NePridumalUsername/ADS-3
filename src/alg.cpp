// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
   int left = 0;
    int right = size;
    int midd = 0;
    while (1)
    {
        midd = (left + right) / 2;
        if (value < arr[midd])
            right = midd - 1;
        else if (value > arr[midd])
            left = midd + 1;
        else
            return midd;
        if (left > right)
            return 0;
    }
}
