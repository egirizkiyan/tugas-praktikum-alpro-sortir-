#include <iostream>

// Fungsi untuk menukar dua elemen dalam array
void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk mengurutkan array menggunakan algoritma Selection Sort
void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            swap(arr[i], arr[maxIndex]);
        }
    }
}

int main() {
    const int jumlahMahasiswa = 5;
    double IPS[jumlahMahasiswa] = {3.8, 2.9, 3.3, 4.0, 2.4};

    std::cout << "IPS sebelum diurutkan: ";
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        std::cout << IPS[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(IPS, jumlahMahasiswa);

    std::cout << "IPS setelah diurutkan dari yang terbesar hingga terkecil: ";
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        std::cout << IPS[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
