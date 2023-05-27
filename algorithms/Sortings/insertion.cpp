void insertion_sort(int *a, int n) {
    for (int k = 1; k < n; k++)
        for (int i = k; i > 0 && a[i - 1] < a[i]; i--)
            // мы ещё не дошли до начала массива и предыдущий элемент меньше
            swap(a[i], a[i - 1]);
}

// https://ru.algorithmica.org/cs/sorting/insertion/
