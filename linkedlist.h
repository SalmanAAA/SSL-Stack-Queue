#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct Node {
    int data;        // Nilai yang disimpan di dalam node
    struct Node* next;  // Pointer ke node berikutnya dalam list
} Node;

Node* createNode(int data); // Membuat node baru dengan nilai tertentu

void insertAtEnd(Node** head, int data); // Menambahkan elemen di akhir linked list

void deleteFromStart(Node** head); // Menghapus elemen dari awal linked list.

void displayList(Node* head); // Menampilkan semua elemen dalam linked list

#endif
