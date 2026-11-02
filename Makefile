# Compilador e flags
CC      ?= gcc
# -Wno-unused-result: os exemplos didaticos nao verificam o retorno de scanf()
CFLAGS  ?= -std=c11 -Wall -Wextra -Wpedantic -Wno-unused-result -O2

# Diretorios
SRC_DIR := src
BIN_DIR := bin

# Descobre automaticamente todos os arquivos .c dentro de src/
SOURCES := $(shell find $(SRC_DIR) -name '*.c' | sort)
TARGETS := $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SOURCES))

.PHONY: all clean list run help

all: $(TARGETS)

# Compila src/<pasta>/<nome>.c -> bin/<pasta>/<nome>
$(BIN_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

# Lista os executaveis que serao gerados
list:
	@printf '%s\n' $(TARGETS)

# Executa um programa: make run PROG=03_condicionais/aprovacao
run: $(BIN_DIR)/$(PROG)
	@./$(BIN_DIR)/$(PROG)

clean:
	rm -rf $(BIN_DIR)

help:
	@echo "Comandos disponiveis:"
	@echo "  make              Compila todos os programas"
	@echo "  make list         Lista os executaveis gerados"
	@echo "  make run PROG=... Compila e executa um programa"
	@echo "  make clean        Remove a pasta bin/"
	@echo ""
	@echo "Exemplo: make run PROG=03_condicionais/aprovacao"
