# Exercícios de C

Coleção de programas de estudo em linguagem C, organizados por assunto.

## Estrutura

```
.
├── Makefile
├── README.md
├── .gitignore
└── src/
    ├── 01_fundamentos/
    │   ├── ficha_aluno.c
    │   ├── idade_futura.c
    │   ├── calculo.c
    │   ├── convercao.c
    │   ├── contador.c
    │   └── erro_divisao.c
    ├── 02_entrada_saida/
    │   ├── calculadora.c
    │   ├── media.c
    │   └── resumo_numerico.c
    ├── 03_condicionais/
    │   ├── aprovacao.c
    │   ├── controle_acesso.c
    │   ├── debugging.c
    │   ├── notas.c
    │   ├── par_impar.c
    │   ├── sistema_estacionamento.c
    │   └── media_recuperacao.c
    └── 04_funcoes/
        └── funcao.c
```

Cada arquivo `.c` é um programa independente (possui sua própria `main`).
Os executáveis são gerados em `bin/`, mantendo a mesma subpasta de `src/`.

## Como compilar

```bash
make          # compila todos os programas
make list     # lista os executáveis gerados
make clean    # remove a pasta bin/
```

## Como executar

```bash
make run PROG=01_fundamentos/contador
make run PROG=03_condicionais/aprovacao
```

Ou diretamente:

```bash
./bin/03_condicionais/aprovacao
```

## Conteúdo

| Pasta | Arquivo | Assunto |
| --- | --- | --- |
| 01_fundamentos | `ficha_aluno.c` | Saída formatada com `printf` |
| 01_fundamentos | `idade_futura.c` | Entrada com `scanf` e aritmética |
| 01_fundamentos | `calculo.c` | Precedência de operadores |
| 01_fundamentos | `convercao.c` | Conversão de `double` para `int` |
| 01_fundamentos | `contador.c` | Operadores `++` e `--` |
| 01_fundamentos | `erro_divisao.c` | Divisão inteira x divisão com `float` |
| 02_entrada_saida | `calculadora.c` | Operações aritméticas básicas |
| 02_entrada_saida | `media.c` | Média de três notas |
| 02_entrada_saida | `resumo_numerico.c` | Divisão, resto e média |
| 03_condicionais | `aprovacao.c` | Aprovação por média e frequência |
| 03_condicionais | `controle_acesso.c` | Condições com idade, senha e bloqueio |
| 03_condicionais | `debugging.c` | Depuração de condições |
| 03_condicionais | `notas.c` | Classificação de notas com `else if` |
| 03_condicionais | `par_impar.c` | Par ou ímpar com operador `%` |
| 03_condicionais | `sistema_estacionamento.c` | Cálculo de tarifa com desconto |
| 03_condicionais | `media_recuperacao.c` | Média e recuperação |
| 04_funcoes | `funcao.c` | Declaração e chamada de função |

## Observações

- `idade.py` foi removido por não ser código em C.
- `hello` era apenas o executável compilado de `aprovaçao.c`, por isso também foi removido.
- O arquivo `aprovaçao.c` passou a se chamar `aprovacao.c` e `fucao.c` passou a se chamar
  `funcao.c`, para evitar acentos e erros de digitação nos nomes.
- Foram corrigidos problemas que impediam a compilação: caracteres invisíveis em `funcao.c`,
  identificador com acento em `media_recuperacao.c` e `return` ausente em `calculo.c`.
- Os textos impressos foram mantidos sem acentos para não depender da codificação do terminal.
