/*
principles:
- each round, compare 1-1 two values. push the greater number to the right.
- so, at the end of the round, the greatest number will be at the right.
- then repeat the round [size array] times.
- but be wise: stop just before the greatest number if the round before, because we already know that is it greater than the current one.
*/

void swap(int sourceArray[], int firstIndex, int secondIndex);

void bubbleSort(int sourceArray[], int sizeArray) {
    int i;
    int j;

    for (i = 0; i < sizeArray; i++) {
        for (j = 0; j < sizeArray - i - 1; j++) {
            if (sourceArray[j] > sourceArray[j + 1]) {
                swap(sourceArray, j, j + 1);
            }
        }
    }
}

void swap(int sourceArray[], int firstIndex, int secondIndex) {
    int swap = sourceArray[firstIndex];
    sourceArray[firstIndex] = sourceArray[secondIndex];
    sourceArray[secondIndex] = swap;
}
