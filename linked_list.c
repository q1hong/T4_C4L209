#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

typedef struct Node {
    int data;
    struct Node* next;
} Node;

static Node* head = NULL;

void linked_list_init() {   // Vacía la lista
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL;
}

int linked_list_append(int data) {  // Crea un nodo y lo añade al final de la lista
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) return -1;

    new_node->data = data;
    new_node->next = NULL;

    if (!head) {
        head = new_node;
    } else {
        Node* current = head;
        while (current->next) current = current->next;
        current->next = new_node;
    }

    return 0;
}

int linked_list_prepend(int data) { // Crea un nodo y lo añade al principio de la lista
    Node* new_node = malloc(sizeof(Node));
    if (!new_node) return -1;

    new_node->data = data;
    new_node->next = head;
    head = new_node;

    return 0;
}

int linked_list_remove(int data) { // Elimina el primer elemento que coincide con el dato proporcionado
    Node* current = head;
    Node* previous = NULL;

    while (current) {
        if (current->data == data) {
            if (!previous) {
                head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            return 0;
        }
        previous = current;
        current = current->next;
    }

    return -1;
}

int linked_list_contains(int data) { // Devuelve 1 si encuentra un elemento en la lista, 0 si no
    Node* current = head;
    while (current) {
        if (current->data == data) return 1;
        current = current->next;
    }
    return 0;
}

unsigned int linked_list_size() { // Cuenta la cantidad de nodos
    unsigned int count = 0;
    Node* current = head;
    while (current) {
        count++;
        current = current->next;
    }
    return count;
}

void linked_list_print() {  // Imprime los valores de la lista
    Node* current = head;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
