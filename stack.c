#include "stack.h"

#define STACK_CAPACITY 100

static unsigned int stack[STACK_CAPACITY];
static unsigned int top_index = 0;

void stack_init() { // Reinicia el stack
    top_index = 0;
}

int stack_push(unsigned int data) { // Si el stack esta lleno retorna -1, si no, inserta valores
    if (stack_is_full()) {
        return -1;
    }
    stack[top_index++] = data;
    return 0; // Éxito
}

int stack_pop() {   // Si el stack esta vacio retorna -1, si no, saca el ultimo valor insertado
    if (stack_is_empty()) {
        return -1; 
    }
    return stack[--top_index];
}

unsigned int stack_size() { // Muestra el tamaño del stack
    return top_index;
}

int stack_is_full() {   // Devuelve 1 si el stack está en su máxima capacidad
    return top_index == STACK_CAPACITY;
}

int stack_is_empty() {  // Retorna 1 si el stack está vacío
    return top_index == 0;
}
