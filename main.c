#include <stdio.h>
#include "linkedlist.h"
#include "stack.h"
#include "queue.h"

int main() {
    Node* linkedList = NULL;  // Inisialisasi linked list kosong
    Stack stack = {NULL};     // Inisialisasi stack kosong
    Queue queue = {NULL, NULL}; // Inisialisasi queue kosong
    
    int choice, subChoice, value;

    while (1) {
        printf("\n***********************************************\n");
        printf("       PROGRAM LINKED LIST, STACK & QUEUE\n");
        printf("**********************************************\n");
        printf("1. Linked List\n");
        printf("2. Stack\n");
        printf("3. Queue\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Linked List
                printf("\n===== LINKED LIST =====\n");
                printf("1. Tambah elemen di akhir\n");
                printf("2. Hapus elemen dari awal\n");
                printf("3. Tampilkan seluruh elemen\n");
                printf("Pilih aksi: ");
                scanf("%d", &subChoice);
                
                if (subChoice == 1) {
                    printf("Masukkan nilai yang ingin ditambahkan: ");
                    scanf("%d", &value);
                    insertAtEnd(&linkedList, value);
                    printf("Elemen %d ditambahkan ke Linked List\n", value);
                } else if (subChoice == 2) {
                    deleteFromStart(&linkedList);
                    printf("Elemen pertama dalam Linked List dihapus\n");
                } else if (subChoice == 3) {
                    printf("Isi Linked List saat ini: ");
                    displayList(linkedList);
                } else {
                    printf("Invalid...\n");
                }
                break;

            case 2: // Stack
                printf("\n===== STACK =====\n");
                printf("1. Push (Tambahkan elemen ke stack)\n");
                printf("2. Pop (Hapus elemen dari stack)\n");
                printf("3. Tampilkan isi stack\n");
                printf("Pilih aksi: ");
                scanf("%d", &subChoice);
                
                if (subChoice == 1) {
                    printf("Masukkan nilai yang ingin dimasukkan ke stack: ");
                    scanf("%d", &value);
                    push(&stack, value);
                    printf("Elemen %d ditambahkan ke Stack\n", value);
                } else if (subChoice == 2) {
                    pop(&stack);
                    printf("Elemen teratas dalam Stack telah dihapus\n");
                } else if (subChoice == 3) {
                    printf("Isi Stack saat ini: ");
                    displayStack(stack.top);
                } else {
                    printf("Invalid\n");
                }
                break;

            case 3: // Queue
                printf("\n===== QUEUE =====\n");
                printf("1. Enqueue (Tambahkan elemen ke queue)\n");
                printf("2. Dequeue (Hapus elemen dari queue)\n");
                printf("3. Tampilkan isi queue\n");
                printf("Pilih aksi: ");
                scanf("%d", &subChoice);
                
                if (subChoice == 1) {
                    printf("Masukkan nilai yang ingin dimasukkan ke queue: ");
                    scanf("%d", &value);
                    enqueue(&queue, value);
                    printf("Elemen %d berhasil ditambahkan ke Queue!\n", value);
                } else if (subChoice == 2) {
                    dequeue(&queue);
                    printf("Elemen pertama dalam Queue telah dihapus\n");
                } else if (subChoice == 3) {
                    printf("Isi Queue saat ini: ");
                    displayQueue(queue.front);
                } else {
                    printf("Invalid\n");
                }
                break;

            case 4: // Keluar dari program
                return 0;

            default:
                printf("Invalid\n");
        }
    }

    return 0;
}
