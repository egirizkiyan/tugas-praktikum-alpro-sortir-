#include <iostream>
#include <algorithm>

int main() {
    int n;

    // Meminta pengguna untuk memasukkan jumlah karakter
    std::cout << "Masukkan jumlah karakter: ";
    std::cin >> n;

    // Membuat array untuk menyimpan karakter yang dimasukkan pengguna
    char characters[n];

    // Meminta pengguna untuk memasukkan sejumlah n karakter
    std::cout << "Masukkan " << n << " karakter: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> characters[i];
    }

    // Melakukan sorting secara ascending (menaik)
    std::sort(characters, characters + n);

    // Menampilkan hasil sorting ascending
    std::cout << "Karakter setelah diurutkan secara ascending: ";
    for (int i = 0; i < n; ++i) {
        std::cout << characters[i] << " ";
    }
    std::cout << std::endl;

    // Menampilkan sorting (aslinya)
    std::cout << "Karakter sebelum diurutkan (sortir): ";
    for (int i = 0; i < n; ++i) {
        std::cout << characters[i] << " ";
    }
    std::cout << std::endl;

    // Melakukan sorting secara descending (menurun)
    std::sort(characters, characters + n, std::greater<char>());

    // Menampilkan hasil sorting descending
    std::cout << "Karakter setelah diurutkan secara descending: ";
    for (int i = 0; i < n; ++i) {
        std::cout << characters[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
