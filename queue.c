#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void enqueue(Queue* queue, int data) { // Menambahkan elemen ke dalam queue (Enqueue)
    Node* newNode = createNode(data);
    if (!newNode) return;
    
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

void dequeue(Queue* queue) { // Menghapus elemen dari queue (Dequeue).
    if (queue->front == NULL) {
        printf("Queue kosong!\n");
        return;
    }
    Node* temp = queue->front;
    queue->front = queue->front->next;
    
    if (queue->front == NULL) queue->rear = NULL;
    
    free(temp);
}

void displayQueue(Node* front) { // Menampilkan isi queue dari depan ke belakang
    if (!front) {
        printf("Queue kosong!\n");
        return;
    }
    Node* temp = front;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
