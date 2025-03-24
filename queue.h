#ifndef QUEUE_H
#define QUEUE_H

#include "linkedlist.h"

typedef struct {
    Node* front;  // Pointer ke elemen pertama dalam antrian
    Node* rear;   // Pointer ke elemen terakhir dalam antrian
} Queue;

void enqueue(Queue* queue, int data); // Menambahkan elemen ke dalam queue (Enqueue)

void dequeue(Queue* queue); // Menghapus elemen dari queue (Dequeue).

void displayQueue(Node* front); // Menampilkan isi queue dari depan ke belakang

#endif
