# Tarea 4 – IE-0117 Programación Bajo Plataformas Abiertas

---

## Descripción

Esta tarea implementa dos estructuras de datos fundamentales en C:

- **Ejercicio 1: `stack.c`**  
  Implementa una pila (stack) con capacidad fija de 100 elementos, usando un arreglo estático.

- **Ejercicio 2: `linked_list.c`**  
  Implementa una lista enlazada simple con operaciones básicas como inserción, eliminación, búsqueda e impresión.

Ambas estructuras se prueban desde `main.c` mediante funciones `test_stack()` y `test_linked_list()`.

---

## Estructura del Proyecto

├── main.c
├── stack.c
├── stack.h
├── linked_list.c
├── linked_list.h
├── Makefile
└── README.md


---

## Compilación

- ** Manualmente **
  
gcc -DTEST_STACK -DTEST_LIST -o tarea4 main.c stack.c linked_list.c

- ** Con Makefile **

make            # Compila todo
make clean      # Borra el ejecutable

- ** Ejecución **

./tarea4













