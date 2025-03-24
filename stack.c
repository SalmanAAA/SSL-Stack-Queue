#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(Stack* stack, int data) { // Menambahkan elemen ke dalam stack (Push)
    Node* newNode = createNode(data);
    if (!newNode) return;
    
    newNode->next = stack->top;
    stack->top = newNode;
}

void pop(Stack* stack) { // Menghapus elemen teratas dari stack (Pop)
    if (stack->top == NULL) {
        printf("Stack kosong!\n");
        return;
    }
    Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
}

void displayStack(Node* top) { // Menampilkan isi stack dari atas ke bawah
    if (!top) {
        printf("Stack kosong!\n");
        return;
    }
    Node* temp = top;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
