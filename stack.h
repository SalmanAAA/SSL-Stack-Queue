#ifndef STACK_H
#define STACK_H

#include "linkedlist.h"

typedef struct {
    Node* top;  // Pointer ke elemen teratas dari stack
} Stack;


void push(Stack* stack, int data); // Menambahkan elemen ke dalam stack (Push)

void pop(Stack* stack); // Menghapus elemen teratas dari stack (Pop)

void displayStack(Node* top); // Menampilkan isi stack dari atas ke bawah

#endif
