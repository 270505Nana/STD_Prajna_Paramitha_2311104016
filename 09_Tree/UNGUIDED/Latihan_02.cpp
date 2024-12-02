// Buatlah fungsi rekursif is_valid_bst(node, min_val, max_val) untuk memeriksa
// apakah suatu pohon memenuhi properti Binary Search Tree. Uji fungsi ini pada
// berbagai pohon, baik yang valid maupun tidak valid sebagai BST.

#include <iostream>
#include <limits> 
using namespace std;

// Deklarasi struktur untuk pohon biner
struct Pohon {
    int data;               // nyimpan data integer pada node
    Pohon *left, *right;    // Pointer untuk child kiri dan kanan
};
//buat bikin node baru
Pohon* buatNode(int data) {
    return new Pohon{data, NULL, NULL};
}

// Fungsi rekursif untuk memeriksa apakah pohon adalah BST
bool is_valid_bst(Pohon* node, int min_val, int max_val) {
    if (node == NULL) {
        return true; // Pohon kosong selalu merupakan BST
    }

    // Periksa apakah data node berada dalam rentang [min_val, max_val]
    if (node->data <= min_val || node->data >= max_val) {
        return false;
    }

    // Periksa child kiri dan kanan dengan memperbarui rentang min dan max
    return is_valid_bst(node->left, min_val, node->data) &&
           is_valid_bst(node->right, node->data, max_val);
}

// Fungsi buat menguji is_valid_bst pada berbagai pohon
void uji_is_valid_bst() {
    // Pohon Valid BST
    Pohon* root1 = buatNode(10);
    root1->left = buatNode(5);
    root1->right = buatNode(15);
    root1->left->left = buatNode(3);
    root1->left->right = buatNode(7);
    root1->right->left = buatNode(12);
    root1->right->right = buatNode(17);

    // Pohon Tidak Valid BST
    Pohon* root2 = buatNode(10);
    root2->left = buatNode(5);
    root2->right = buatNode(8); // ga valid karena 8 < 10 harus di child kanan

    // Pohon Kosong (Valid BST)
    Pohon* root3 = NULL;

    cout << "Uji Pohon 1 (Valid BST): " << (is_valid_bst(root1, INT_MIN, INT_MAX) ? "Valid" : "Tidak Valid") << endl;
    cout << "Uji Pohon 2 (Tidak Valid BST): " << (is_valid_bst(root2, INT_MIN, INT_MAX) ? "Valid" : "Tidak Valid") << endl;
    cout << "Uji Pohon 3 (Pohon Kosong): " << (is_valid_bst(root3, INT_MIN, INT_MAX) ? "Valid" : "Tidak Valid") << endl;
}

int main() {
    uji_is_valid_bst();
    return 0;
}
