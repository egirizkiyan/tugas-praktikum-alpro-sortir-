# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Egi Rizkiyansyah</p>

## Dasar Teori
Algoritma Sorting
Algoritma sorting adalah serangkaian langkah atau prosedur yang digunakan untuk mengatur sekumpulan elemen data ke dalam urutan tertentu, sesuai dengan kunci atau kriteria yang ditentukan. Tujuan utama dari algoritma sorting adalah untuk mengatur data sehingga menjadi lebih mudah dicari, diakses, dan digunakan.

Jenis Algoritma Sorting
Ascending (Menaik):
Pada pengurutan ascending, elemen-elemen data diatur sedemikian rupa sehingga nilai-nilai yang lebih kecil berada di bagian depan (awal) dan nilai-nilai yang lebih besar berada di bagian belakang (akhir). Dengan kata lain, urutan data akan bertambah besar seiring dengan posisi indeks yang bertambah.

Descending (Menurun):
Sebaliknya, pada pengurutan descending, elemen-elemen data diatur sedemikian rupa sehingga nilai-nilai yang lebih besar berada di bagian depan (awal) dan nilai-nilai yang lebih kecil berada di bagian belakang (akhir). Dengan kata lain, urutan data akan bertambah kecil seiring dengan posisi indeks yang bertambah.

Contoh Implementasi
Contoh implementasi algoritma sorting dapat dilakukan dengan berbagai cara, seperti menggunakan Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, dan lain sebagainya. Dalam implementasi tersebut, data akan diurutkan sesuai dengan jenis pengurutan yang diinginkan, baik ascending maupun descending, untuk memenuhi kebutuhan aplikasi atau analisis data yang dilakukan.

## Guided 

### 1. [Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort]

```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]){
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length){
    
    for (int i=0; i<length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){

    int length = 5;
    double a[] = {22,1,15,3,8,2,33,21,99,99};

    cout << "urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```
#### Full code Screenshot:
![Screenshot 2024-03-27 001406](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/bf2fcae4-7891-425a-986d-f7b318962b75)

#### Output:
![Screenshot 2024-03-27 001741](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/bb68e08e-9bb3-4906-a938-f812f773d212)

Kode yang diberikan adalah implementasi algoritma Bubble Sort dalam bahasa C++. Berikut adalah penjelasan dari kode tersebut:
- Fungsi bubble_sort(double arr[], int length): Ini adalah fungsi yang mengimplementasikan algoritma Bubble Sort untuk mengurutkan array arr dengan panjang length. Fungsi ini akan melakukan iterasi melalui array, membandingkan pasangan elemen berturut-turut, dan menukar mereka jika urutannya salah. Proses ini akan terus berlanjut sampai tidak ada lagi pertukaran yang perlu dilakukan, yang menunjukkan bahwa array telah diurutkan.
- Fungsi print_array(double a[], int length): Fungsi ini digunakan untuk mencetak isi dari array a dengan panjang length. Ini akan memudahkan kita untuk melihat nilai-nilai dalam array sebelum dan setelah proses pengurutan.
- Di dalam fungsi main(), terdapat inisialisasi array a dengan bilangan-bilangan yang diberikan. Kemudian, array ini dicetak untuk menunjukkan urutan sebelum diurutkan. Setelah itu, fungsi bubble_sort() dipanggil untuk mengurutkan array tersebut. Setelah proses pengurutan selesai, array di cetak lagi untuk menampilkan urutan setelah diurutkan.
Namun, perlu diperhatikan bahwa ada kekurangan dalam implementasi ini. Array a memiliki panjang 10, sementara panjang yang diberikan pada fungsi bubble_sort() adalah 5. Ini bisa menjadi masalah jika panjang array berubah. Idealnya, panjang array harus disesuaikan secara dinamis atau diketahui sebelumnya untuk memastikan algoritma bekerja dengan benar.

### 2. [Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort]

```C++
#include <iostream>
using namespace std;


void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i =1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        } // end of while loop
    } // end of for loop
}

void print_array(char a[], int length) {
    
    for(int i=0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "\n Urutan karakter setelah sorting: " << endl;
    print_array(a, length);
}

```
#### Full code Screenshot:
![Screenshot 2024-03-27 002823](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/2aa6f87e-3625-43a8-a6bf-56f243fdc1a1)

#### Output:
![Screenshot 2024-03-27 002957](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/9b3d64ce-5fa5-4c05-b311-488a03fef2d4)

Program di atas merupakan implementasi algoritma pengurutan menggunakan metode Insertion Sort dalam bahasa pemrograman C++. Algoritma ini bertujuan untuk mengurutkan sebuah array karakter dari nilai yang paling besar ke yang paling kecil.
Proses pengurutan dilakukan dalam fungsi insertion_sort(char arr[], int length). Pada setiap iterasi, algoritma akan membandingkan elemen-elemen array satu per satu dan menyisipkan elemen ke dalam posisi yang sesuai dalam urutan yang telah diurutkan sebelumnya. Ini dilakukan dengan cara memindahkan elemen-elemen yang lebih besar ke posisi yang lebih tinggi dalam array.
Fungsi print_array(char a[], int length) digunakan untuk mencetak isi dari array sebelum dan sesudah proses pengurutan.
Dalam main(), sebuah array karakter diinisialisasi dengan karakter-karakter yang diberikan. Array tersebut kemudian dicetak untuk menampilkan urutan sebelum diurutkan. Setelah itu, fungsi insertion_sort() dipanggil untuk mengurutkan array tersebut. Setelah proses pengurutan selesai, array dicetak lagi untuk menampilkan urutan setelah diurutkan.
Hasil dari program ini adalah array karakter yang telah diurutkan dari nilai yang paling besar hingga yang paling kecil. Program ini membantu memahami konsep algoritma pengurutan serta implementasinya dalam bahasa pemrograman C++. Ini juga memperlihatkan bagaimana algoritma Insertion Sort bekerja dengan membandingkan dan menyisipkan elemen dalam array untuk mencapai hasil pengurutan yang diinginkan.

## Unguided 
### 1. [Soal]

```C++
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

```
#### Output:
![Screenshot 2024-03-27 004554](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/0c113b3c-1479-470e-a6d0-dedc35820f9c)

#### Full code Screenshot:
![Screenshot 2024-03-27 004406](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/c10be0ff-8f6f-4bc3-8d1d-b766758bd970)

Program di atas adalah contoh program dalam bahasa C++ yang mengilustrasikan bagaimana memisahkan angka-angka dalam sebuah array menjadi dua kategori: angka genap dan angka ganjil. Setelah memisahkan angka-angka tersebut, program menampilkan array awal beserta angka-angka genap dan ganjil secara terpisah sebagai output.
Pertama-tama, program menginisialisasi sebuah array dengan angka-angka yang sudah ditentukan sebelumnya. Kemudian, program menggunakan vektor untuk menampung angka-angka genap dan ganjil setelah dipisahkan dari array awal.
Proses pemisahan dilakukan dengan iterasi melalui setiap elemen dalam array. Pada setiap iterasi, program memeriksa apakah angka tersebut genap atau ganjil dengan menggunakan operasi modulo. Jika angka tersebut genap, maka akan dimasukkan ke dalam vektor angka genap. Sebaliknya, jika angka tersebut ganjil, akan dimasukkan ke dalam vektor angka ganjil.
Setelah proses pemisahan selesai, program menampilkan array awal beserta angka-angka genap dan ganjil secara terpisah sebagai output. Ini dilakukan dengan menggunakan pernyataan cout untuk menampilkan elemen-elemen array serta angka-angka genap dan ganjil yang terdapat dalam vektor.
Terakhir, setelah semua output ditampilkan, program selesai dan mengembalikan nilai 0.

### 2. [Soal]

```C++
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

```
#### Output:
![Screenshot 2024-03-27 005011](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/dd1ba8b6-92c6-4084-a728-a27bfa6395fb)

#### Full code Screenshot:
![Screenshot 2024-03-27 004854](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/c83a29ba-9113-4b70-88cc-ec92885b2307)

Kesimpulan:

Program di atas adalah implementasi algoritma Bubble Sort dalam bahasa pemrograman C++ untuk mengurutkan array string yang berisi nama-nama warga.
Algoritma Bubble Sort digunakan untuk mengurutkan array dengan cara melakukan perbandingan antara dua elemen berturut-turut dan menukar posisinya jika urutannya salah. Proses ini terus berlanjut hingga tidak ada lagi perubahan yang perlu dilakukan, yang menandakan bahwa array telah diurutkan.
Dalam program ini, array namaWarga diinisialisasi dengan nama-nama warga yang diberikan. Kemudian, array tersebut dicetak untuk menampilkan urutan sebelum diurutkan. Setelah itu, fungsi bubbleSort() dipanggil untuk mengurutkan array tersebut. Setelah proses pengurutan selesai, array dicetak lagi untuk menampilkan urutan setelah diurutkan secara alfabetis.
Hasil dari program ini adalah array nama-nama warga yang telah diurutkan secara alfabetis. Program ini membantu memahami konsep algoritma Bubble Sort serta implementasinya dalam bahasa pemrograman C++. Ini juga memperlihatkan bagaimana algoritma tersebut bekerja dengan membandingkan dan menukar posisi elemen dalam array untuk mencapai hasil pengurutan yang diinginkan.

### 3. [Soal]

```C++
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

```
#### Output:
![Screenshot 2024-03-27 005905](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/9cb090f6-2630-4133-a47d-7e1b8ca56174)

#### Full code Screenshot:
![Screenshot 2024-03-27 005653](https://github.com/egirizkiyan/egi-rizkiyansyah-/assets/162097461/c06b313c-d1ba-4f1d-89b3-acc153c41327)

Kesimpulan:

Program di atas adalah sebuah program dalam bahasa C++ yang meminta pengguna untuk memasukkan sejumlah karakter, kemudian melakukan pengurutan karakter secara ascending (menaik) dan descending (menurun) menggunakan algoritma sorting yang telah disediakan oleh C++ STL (Standard Template Library).
Proses dimulai dengan meminta pengguna untuk memasukkan jumlah karakter yang akan diurutkan. Selanjutnya, pengguna diminta untuk memasukkan sejumlah karakter sesuai dengan jumlah yang telah ditentukan. Program kemudian menggunakan fungsi std::sort dari C++ STL untuk melakukan pengurutan karakter secara ascending. Hasil pengurutan tersebut kemudian dicetak untuk ditampilkan kepada pengguna.
Setelah itu, program mencetak urutan asli karakter sebelum dilakukan pengurutan (disebut "sortir" dalam output). Kemudian, program menggunakan fungsi std::sort kembali, kali ini dengan menggunakan std::greater<char>() sebagai argumen tambahan untuk melakukan pengurutan secara descending. Hasil pengurutan descending juga dicetak untuk ditampilkan kepada pengguna.
Hasil dari program ini adalah tiga baris output yang menunjukkan urutan karakter setelah diurutkan secara ascending, urutan asli sebelum dilakukan pengurutan, dan urutan karakter setelah diurutkan secara descending. Program ini membantu memahami konsep pengurutan dan penerapannya dalam bahasa pemrograman C++. Ini juga memperlihatkan penggunaan fungsi bawaan dari C++ STL untuk melakukan pengurutan dengan cara yang efisien dan mudah.

## Kesimpulan
Dari beberapa kode yang telah diberikan sebelumnya, dapat disimpulkan beberapa hal terkait dengan algoritma sorting dan implementasinya:
- Algoritma Sorting: Algoritma sorting adalah sebuah metode atau prosedur yang digunakan untuk mengatur kumpulan data ke dalam urutan tertentu, baik itu secara ascending (menaik) atau descending (menurun). Tujuannya adalah untuk membuat data lebih mudah dicari, diakses, dan diproses.
- Jenis Algoritma Sorting: Berdasarkan hasil pengurutan, algoritma sorting dapat dibagi menjadi dua jenis, yaitu:
    . Ascending (Menaik): Urutan data dimulai dari nilai yang terkecil ke nilai yang terbesar.
    . Descending (Menurun): Urutan data dimulai dari nilai yang terbesar ke nilai yang terkecil.
- Implementasi Sorting: Implementasi algoritma sorting dapat dilakukan dengan berbagai cara, seperti menggunakan Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort, dan lainnya. Pemilihan algoritma sorting yang tepat tergantung pada kebutuhan dan karakteristik data yang diurutkan.
- Contoh Implementasi: Beberapa contoh implementasi algoritma sorting telah diberikan menggunakan bahasa pemrograman C++. Contoh-contoh tersebut mencakup pengurutan array bilangan bulat, array karakter, dan array string. Pengurutan dilakukan baik secara ascending maupun descending, dan implementasi menggunakan algoritma Bubble Sort, Insertion Sort, serta fungsi bawaan dari C++ STL seperti std::sort.
Dengan memahami konsep algoritma sorting dan implementasinya, kita dapat menghasilkan program-program yang efisien dan dapat diandalkan untuk mengurutkan data sesuai dengan kebutuhan aplikasi.

## Referensi
[1] Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, dan Clifford Stein. (2009). Introduction to Algorithms,The MIT Press
[2] Mark A. Weiss. (2012). Data Structures and Algorithm Analysis in C++.Pearson
[3] Robert Sedgewick dan Kevin Wayne(2011).Algorithms .Addison-Wesley Professional.