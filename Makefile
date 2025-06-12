# Nombre del ejecutable
TARGET = tarea4

# Archivos fuente
SRCS = main.c stack.c linked_list.c

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Regla principal
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Limpiar archivos generados
clean:
	rm -f $(TARGET)
