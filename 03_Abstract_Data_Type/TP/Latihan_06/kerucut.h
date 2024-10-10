#ifndef KERUCUT_H
#define KERUCUT_H

//kelas kerucut, yang berisikan private variable agar gak bisa diakses secara bebas (atributnya)
class Kerucut {
private:
    double jariJari;
    double tinggi;

// kalau yang public ada ini
public:
    // Konstruktor
    Kerucut(double r, double t);

    // Selektor
    //const : var yang nilainya gak bisa diubah
    // ini itu buat getJarijari dari inputan user, dan setelah diinputkan ga bisa diubah.
    double getJariJari() const;
    double getTinggi() const;

    // Mutator
    void setJariJari(double r);
    void setTinggi(double t);

    // Penghitung
    double hitungVolume() const;
    double hitungLuasPermukaan() const;
    double hitungLuasSelimut() const;

    // Input/Output
    void input();
    void tampilkan() const;
};

#endif // KERUCUT_H