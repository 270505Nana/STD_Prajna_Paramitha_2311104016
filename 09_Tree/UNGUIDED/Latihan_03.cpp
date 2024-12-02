// Buatlah fungsi rekursif cari_simpul_daun(node) untuk menghitung jumlah simpul
// daun dalam Binary Tree. Simpul daun adalah node yang tidak memiliki anak kiri
// maupun kanan.

#include <iostream>
using namespace std;

// Deklarasi struktur untuk pohon biner
struct Pohon {
    char data;             
    Pohon *left, *right;     // Pointer untuk child kiri dan kanan
    Pohon *parent;           // Pointer ke parent node
};

// Variabel global
Pohon *root, *baru;          

// Inisialisasi pohon biner
void init() {
    root = NULL;           
}

// Mengecek apakah pohon kosong
bool isEmpty() {
    return root == NULL;     
}

// Membuat node baru sebagai root
void buatNode(char data) {
    if (isEmpty()) {
        root = new Pohon{data, NULL, NULL, NULL}; 
        cout << "\nNode " << data << " berhasil dibuat menjadi root." << endl;
    } else {
        cout << "\nPohon sudah dibuat." << endl;
    }
}

// Menambahkan node sebagai child kiri
Pohon *insertLeft(char data, Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat tree terlebih dahulu!" << endl; // ga bisa nambahain klo pohon kosong
        return NULL;
    }
    if (node->left != NULL) {
        cout << "\nNode " << node->data << " sudah ada child kiri!" << endl;
        return NULL;
    }
    baru = new Pohon{data, NULL, NULL, node}; 
    node->left = baru; 
    cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
    return baru;
}

// Menambahkan node sebagai child kanan
Pohon *insertRight(char data, Pohon *node) {
    if (isEmpty()) {
        cout << "\nBuat tree terlebih dahulu!" << endl; // ga bisa nambahain klo pohon kosong
        return NULL;
    }
    if (node->right != NULL) {
        cout << "\nNode " << node->data << " sudah ada child kanan!" << endl;
        return NULL;
    }
    baru = new Pohon{data, NULL, NULL, node}; 
    node->right = baru; 
    cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
    return baru;
}

// Menampilkan child dari suatu node
void showChild(Pohon *node) {
    if (!node) {
        cout << "\nNode tidak ditemukan!" << endl; // Jika node tidak ditemukan
        return;
    }
    cout << "\nNode: " << node->data; // Menampilkan data node
cout << "\nChild Kiri: " << (node->left ? string(1, node->left->data) : "(kosong)"); // Menampilkan child kiri
cout << "\nChild Kanan: " << (node->right ? string(1, node->right->data) : "(kosong)") << endl; // Menampilkan child kanan

}

// Menampilkan semua descendant (keturunan) dari suatu node
void showDescendants(Pohon *node) {
    if (!node) {
        cout << "\nNode tidak ditemukan!" << endl; // Jika node tidak ditemukan
        return;
    }
    cout << "\nDescendants of " << node->data << ": "; // Menampilkan node yang diinput
    if (!node->left && !node->right) { // klo ga ada child
        cout << "(tidak ada descendants)" << endl;
        return;
    }
    if (node->left) { 
        cout << node->left->data << " "; // Cetak data child kiri
        showDescendants(node->left); // Rekursif untuk child kiri
    }
    if (node->right) { 
        cout << node->right->data << " "; // Cetak data child kanan
        showDescendants(node->right); // Rekursif untuk child kanan
    }
    cout << endl;
}

// Fungsi rekursif untuk menghitung jumlah simpul daun
int cari_simpul_daun(Pohon *node) {
    if (!node) {
        return 0; // klo node NULL, jumlah simpul daun adalah 0
    }
    if (!node->left && !node->right) {
        return 1; // klo node ga punya anak kiri maupun kanan, ini adalah simpul daun
    }
    // Rekursif untuk child kiri dan kanan
    return cari_simpul_daun(node->left) + cari_simpul_daun(node->right);
}

// Menu interaktif untuk mengelola pohon
void menu() {
    int pilihan;            // Variabel untuk menyimpan pilihan menu
    char data;              // Variabel untuk data node
    Pohon *node = NULL;     // Pointer untuk node

    do {
        // Menampilkan menu pilihan
        cout << "\n=== MENU TREE ===";
        cout << "\n1. Buat Root";
        cout << "\n2. Tambah Kiri";
        cout << "\n3. Tambah Kanan";
        cout << "\n4. Tampilkan Child";
        cout << "\n5. Tampilkan Descendants";
        cout << "\n6. Hitung Jumlah Simpul Daun";
        cout << "\n7. Keluar";
        cout << "\nPilih: ";
        cin >> pilihan; 

        switch (pilihan) {
            case 1:
                if (isEmpty()) { 
                    cout << "Masukkan data root: ";
                    cin >> data;
                    buatNode(data); // bikin root baru
                } else {
                    cout << "Root sudah ada!" << endl;
                }
                break;
            case 2:
                cout << "Masukkan data node parent: ";
                cin >> data;
                node = root; 
                cout << "Masukkan data child kiri: ";
                cin >> data;
                insertLeft(data, node); // Menambahkan child kiri
                break;
            case 3:
                cout << "Masukkan data node parent: ";
                cin >> data;
                node = root; 
                cout << "Masukkan data child kanan: ";
                cin >> data;
                insertRight(data, node); // Menambahkan child kanan
                break;
            case 4:
                showChild(root); // Menampilkan child node
                break;
            case 5:
                showDescendants(root); // Menampilkan descendants node
                break;
            case 6: 
                cout << "Jumlah simpul daun dalam tree: " << cari_simpul_daun(root) << endl;
                break;
            case 7:
                cout << "Keluar dari program." << endl; 
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 7);
}
int main() {
    init();
    menu(); 
    return 0;
}
