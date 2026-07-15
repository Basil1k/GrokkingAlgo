# Компилятор
CC = gcc
# Флаги (стандарт C11, все предупреждения)
CFLAGS = -std=c11 -Wall -Wextra -Werror
# Имя итоговой программы
TARGET = test_algo
# Все .c-файлы в текущей папке
SOURCES = $(wildcard *.c)
# Заменяем .c на .o для получения объектных файлов
OBJECTS = $(SOURCES:.c=.o)

# Цель по умолчанию
all: $(TARGET)

# Линковка: из объектных файлов получаем программу
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

# Компиляция каждого .c в .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

# Очистка (удаляем объектные файлы и саму программу)
clean:
	rm -f $(OBJECTS) $(TARGET)

# Пересборка с нуля
rebuild: clean all

# Указываем, что это не настоящие файлы
.PHONY: all clean rebuild
