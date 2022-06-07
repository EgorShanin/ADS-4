// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = (i + 1); j < len; j++) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    return count;
}
int countPairs2(int *arr, int len, int value) {
    for (int i = len; i >= 0; i--) {
        if (arr[i] > value) {
            len--;
        }
    }
    len++;
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = (i + 1); j < len; j++) {
            if (arr[i] + arr[j] == value) {
                count++;
            }
        }
    }
    return count;
}
int countPairs3(int *arr, int len, int value) {
    int count = 0;
    int minArr = 0;
    int maxArr = 0;
    int midArr = 0;
    for (int i = 0; i < len; i++) {
        minArr = i + 1;
        maxArr = len - 1;
        while (minArr < maxArr) {
            midArr = (minArr + maxArr) / 2;
            if (arr[midArr] + arr[i] < value) {
                minArr = midArr + 1;
                minArr = midArr + 1;
            } else {
                maxArr = midArr;
            }
        }
        while (arr[minArr] + arr[i] == value) {
            count++;
            minArr++;
        }
    }
    return count;
}
