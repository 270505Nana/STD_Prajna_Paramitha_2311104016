#include "kerucut.h" //memanggil library file kerucut.h
#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Konstruktor
Kerucut::Kerucut(double r, double t) : jariJari(r), tinggi(t) {}

// Selektor
double Kerucut::getJariJari() const { return jariJari; }
double Kerucut::getTinggi() const { return tinggi; }

// Mutator
void Kerucut::setJariJari(double r) { jariJari = r; }
void Kerucut::setTinggi(double t) { tinggi = t; }

// Penghitung
double Kerucut::hitungVolume() const {
    return (1.0 / 3.0) * PI * jariJari * jariJari * tinggi;
}

double Kerucut::hitungLuasPermukaan() const {
    double sisiMiring = sqrt(jariJari * jariJari + tinggi * tinggi);
    return PI * jariJari * (jariJari + sisiMiring);
}

double Kerucut::hitungLuasSelimut() const {
    double sisiMiring = sqrt(jariJari * jariJari + tinggi * tinggi);
    return PI * jariJari * sisiMiring;
}

// Input/Output
void Kerucut::input() {
    std::cout << "Masukkan jari-jari kerucut: ";
    std::cin >> jariJari;
    std::cout << "Masukkan tinggi kerucut: ";
    std::cin >> tinggi;
}

void Kerucut::tampilkan() const {
    std::cout << "Properti Kerucut:" << std::endl;
    std::cout << "Jari-jari: " << jariJari << std::endl;
    std::cout << "Tinggi: " << tinggi << std::endl;
    std::cout << "Volume: " << hitungVolume() << std::endl;
    std::cout << "Luas Permukaan: " << hitungLuasPermukaan() << std::endl;
    std::cout << "Luas Selimut: " << hitungLuasSelimut() << std::endl;
}