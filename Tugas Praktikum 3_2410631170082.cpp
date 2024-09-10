#include <iostream>
using namespace std;

// Soal nomor 1

int main() {
 int score;
 cout<<"Masukan Score  : ";
 cin>>score;

 if (score >= 90) {
    cout<<"Selamat! Anda mendapatkan nilai A." <<endl;
 } else if (score >= 80) {
    cout<<"Anda mendapatkan nilai B." <<endl;
 } else if (score >= 70) {
    cout<<"Anda mendapatkan nilai C." <<endl;
 } else if (score >= 60) {
    cout<<"Anda mendapatkan nilai D." <<endl;
 } else {
    cout<<"Anda mendapatkan nilai E." <<endl;
 }


// Soal nomor 2

 int a, b, c;
 cout<<"Masukan angka pertama : ";
 cin>>a;
 cout<<"Masukan angka kedua : ";
 cin>>b;
 cout<<"Masukan angka ketiga : ";
 cin>>c;

 if (a > b && a > c) {
    cout<<a;
 } else if (b > a && b > c) {
    cout<<b;
 } else {
    cout<<c;
 }

 cout<<"\n";

// Soal nomor 3

 int sisi, alas, tinggi, panjang, lebar, pilihan;
 float luasPersegi, luasPersegiPanjang, luasSegitiga;

 cout<<"Pilih luas bangun datar untuk: \n1. Persegi \n2. Persegi Panjang \n3. Segitiga \nNomor Pilihan : ";
 cin>>pilihan;

  switch(pilihan) {
   case 1:
    cout<<"Masukan sisi : ";
    cin>>sisi;
    luasPersegi = sisi * sisi;
    cout<<"Hasil : ";
    cout<<luasPersegi;
    break;

   case 2:
    cout<<"Masukan panjang : ";
    cin>>panjang;
    cout<<"Masukan lebar : ";
    cin>>lebar;
    luasPersegiPanjang = panjang * lebar;
    cout<<"Hasil : ";
    cout<<luasPersegiPanjang;
    break;

   case 3:
    cout<<"Masukan alas : ";
    cin>>alas;
    cout<<"Masukan tinggi : ";
    cin>>tinggi;
    luasSegitiga = alas * tinggi * 0.5;
    cout<<"Hasil : ";
    cout<<luasSegitiga;
    break;

   default:
    cout<<"Error";
    break;
  }

 return 0;

}
