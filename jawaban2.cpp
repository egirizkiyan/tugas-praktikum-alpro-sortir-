#include <iostream>
#include <string>

// Fungsi untuk menukar dua elemen dalam array
void swap(std::string &a, std::string &b) {
    std::string temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk mengurutkan array menggunakan algoritma Bubble Sort
void bubbleSort(std::string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int jumlahWarga = 10;
    std::string namaWarga[jumlahWarga] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    std::cout << "Nama-nama warga sebelum diurutkan: ";
    for (int i = 0; i < jumlahWarga; ++i) {
        std::cout << namaWarga[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(namaWarga, jumlahWarga);

    std::cout << "Nama-nama warga setelah diurutkan secara alfabetis: ";
    for (int i = 0; i < jumlahWarga; ++i) {
        std::cout << namaWarga[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
