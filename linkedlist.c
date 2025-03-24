#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

Node* createNode(int data) { // Membuat node baru dengan nilai tertentu
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode) {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}

void insertAtEnd(Node** head, int data) { // Menambahkan elemen di akhir linked list
    Node* newNode = createNode(data);
    if (!newNode) return;
    
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

void deleteFromStart(Node** head) { // Menghapus elemen dari awal linked list.
    if (*head == NULL) {
        printf("Linked List kosong!\n");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void displayList(Node* head) { // Menampilkan semua elemen dalam linked list
    if (!head) {
        printf("Linked List kosong!\n");
        return;
    }
    Node* temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
