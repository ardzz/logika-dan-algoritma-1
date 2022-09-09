### INSTALASI TOOLS PENGEMBANGAN PROGRAM C
#### Dibuat dan disusun oleh
| Variabel | Nilai               |
|----------|---------------------|
| Nama     | Naufal Reky Ardhana |
| NIM      | 4.33.22.0.21        |
| Kelas    | TI-1A               |

#### Tabel Isi
* [INSTALASI TOOLS PENGEMBANGAN PROGRAM C](#instalasi-tools-pengembangan-program-c)
  * [Penjelasan kode](#penjelasan-kode)
    * [Impor Library](#impor-library)
    * [Mendefini Fungsi Utama](#mendefini-fungsi-utama)
    * [Menulis Output Pada Konsol](#menulis-output-pada-konsol)
    * [Hasil Praktikum](#hasil-praktikum)
    * [Kesimpulan](#kesimpulan)
    
#### Perintah
```
Buatlah program yang menampilkan Nama, Tanggal Lahir, Alamat dan Asal Sekolah dengan bahasa C (sertakan screenshot kode dan hasil eksekusi program)
```

#### Penjelasan kode

##### Impor Library
Untuk menampilkan pesan-pesan di dalam konsol, diperlukan _standard library input-output_, _library_ ini diimpor pada baris pertama kode
```c
#include "stdio.h"
```

##### Mendefini Fungsi Utama
Setelah library `stdio.h` diimpor, saatnya mendefinisikan fungsi `main` 
Seperti namanya, _main_ berarti utama. 
Fungsi ini akan menjadi fungsi utama yang akan dieksekusi oleh program C. 
Pada umumnya fungsi `main` ditulis seperti kode di bawah
```c
main(){
    
}
```
Iya memang seperti itu, tetapi perlu Anda ketahui jika mendefinisikan fungsi itu harus detail dan spesifik. 
Seperti menambahkan output tipe nilai. 
Jika melihat kode yang saya tulis diatas, 
saya menulis kata `int` tepat sebelum fungsi main. 
`int` artinya integer, integer merupakan tipe data.
Berarti fungsi `main` yang saya definisikan akan mengeluarkan output dengan tipe data _integer_
<br>
Berikut contoh kodenya
```c
int main(){
    
}
```
Karena saya tidak memasukkan input argumen ke fungsi, maka saya tambah keyword `void` diantara simbol `()` atau kurung tutup-buka. Maka hasilnya akan seperti ini
```c
int main(void){
    
}
```

##### Menulis Output Pada Konsol
Untuk menulis output pada konsol diperlukan fungsi yang bisa menulis output. 
Pada kasus ini, penulis menggunakan fungsi yang bernama `printf` sesuai contoh dari penugasan mata kuliah ini.
Berikut adalah contoh penggunaan dari `printf`
```c
printf("Halo dunia!");
```
Agar bisa menulis beberapa baris tulisan, maka Anda harus menyisipkan karakter ASCII `\n`
pada akhir baris. Dibawah adalah contoh kode yang akan menampilkan beberapa baris tulisan.
```c
printf("Halo dunia!\n");
printf("Namaku Reky");
```
Dari kode diatas maka akan menampilkan output seperti ini
```
Halo dunia!
Namaku Reky
```

##### Pengembalian Nilai
```c
return 0;
```
Jika Anda lihat kode terakhir pada fungsi `main`, dia akan mengembalikan nilai `0` yang berarti program berhasil berjalan tanpa kesalahan.
Bingung ya? Begini, potongan kode diatas berada pada baris terkahir, Jika kode berjalan sampai baris terkahir artinya kode tersebut tidak mengalami _error_ atau kesalahan.
Jika kode mengalami _error_ maka program akan otomatis berhenti setelah terjadi _error_. Analoginya seperti acara balapan motor GP, jika motor yang sedang berjalan terjadi kecelakaan (_error_) maka motor tersebut tidak akan pernah sampai di garis _finish_
<br>
Penulis sempat menyinggung tipe pengeluaran diatas menggunakan integer, karena pengembalian outputnya berupa angka, yaitu angka `0`

##### Hasil Praktikum
* [Source Code](https://github.com/ardzz/logika-dan-algoritma-1/blob/master/static_biodata.c)
* [Screenshot output](https://github.com/ardzz/logika-dan-algoritma-1/blob/master/screenshots/Screen%20Shot%202022-09-10%20at%2002.14.51.png)

##### Kesimpulan
Untuk menulis tulisan-tulisan pada konsol, kita harus mengimpor pustaka terlebih dahulu.
<br>
Lalu memanggil fungsi yang dibutuhkan, yaitu fungsi `printf`
<br>
Selanjutnya, agar terhindar dari _error_, kita harus teliti ketika menulis kode, seperti memperhatikan penulisan syntax kode
(tidak lupa menulis semi-colon (`;`) di tiap akhir baris kode)
<br>
<br>
Itu saja yang dapat saya sampaikan, saya memohon maaf sebesar-besarnya pada pembaca dan korektor jika bahasa yang saya tulis
sulit dipahami. Karena saya menyadari bahwa saya belum lihai dalam menulis apalagi menjelaskan sesuatu hal yang kompleks menjadi sederhana. Terimakasih