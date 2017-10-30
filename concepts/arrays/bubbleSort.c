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
