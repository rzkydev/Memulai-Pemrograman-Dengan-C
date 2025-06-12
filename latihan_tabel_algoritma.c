// Program demonstrasi berbagai algoritma sorting, searching,
// dan simulasi fungsi-fungsi seperti di Excel untuk data bertipe integer.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 100

int data[MAX];
int n;

// ---------- FUNGSI SORTING ---------- //

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min]) min = j;
        int temp = arr[min]; arr[min] = arr[i]; arr[i] = temp;
    }
}

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[l+i];
    for (int j = 0; j < n2; j++) R[j] = arr[m+1+j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++)
        if (arr[j] < pivot)
            { int temp = arr[++i]; arr[i] = arr[j]; arr[j] = temp; }
    int temp = arr[i+1]; arr[i+1] = arr[high]; arr[high] = temp;
    return i + 1;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi-1);
        quick_sort(arr, pi+1, high);
    }
}

void counting_sort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    int count[max+1];
    memset(count, 0, sizeof(count));
    for (int i = 0; i < n; i++) count[arr[i]]++;
    for (int i = 0, j = 0; i <= max; i++)
        while (count[i]--) arr[j++] = i;
}

void shell_sort(int arr[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2)
        for (int i = gap; i < n; i++) {
            int temp = arr[i], j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
}

// ---------- FUNGSI SEARCHING ---------- //

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}

int binary_search(int arr[], int l, int r, int target) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) return m;
        if (arr[m] < target) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

// ---------- SIMULASI FUNGSI EXCEL ---------- //

int count(int arr[], int n) { return n; }

int countif(int arr[], int n, int val) {
    int c = 0;
    for (int i = 0; i < n; i++) if (arr[i] == val) c++;
    return c;
}

int sum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return s;
}

int sumif(int arr[], int n, int val) {
    int s = 0;
    for (int i = 0; i < n; i++) if (arr[i] == val) s += arr[i];
    return s;
}

int max(int arr[], int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > m) m = arr[i];
    return m;
}

int min(int arr[], int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] < m) m = arr[i];
    return m;
}

double average(int arr[], int n) {
    return (double)sum(arr, n) / n;
}

double stddev(int arr[], int n) {
    double avg = average(arr, n), total = 0;
    for (int i = 0; i < n; i++)
        total += pow(arr[i] - avg, 2);
    return sqrt(total / n);
}

void input_data() {
    printf("Masukkan jumlah data (max %d): ", MAX);
    scanf("%d", &n);
    printf("Masukkan data: ");
    for (int i = 0; i < n; i++) scanf("%d", &data[i]);
}

int main() {
    input_data();
    printf("\nJumlah: %d\n", count(data, n));
    printf("Jumlah yang bernilai 5: %d\n", countif(data, n, 5));
    printf("Total: %d\n", sum(data, n));
    printf("Total nilai 5: %d\n", sumif(data, n, 5));
    printf("Max: %d\n", max(data, n));
    printf("Min: %d\n", min(data, n));
    printf("Rata-rata: %.2lf\n", average(data, n));
    printf("Standar Deviasi: %.2lf\n", stddev(data, n));
    return 0;
}
