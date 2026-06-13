# 📚 Estruturas de Dados e Algoritmos
### Licenciatura em Informática — 2º Ano | Exercícios de Preparação para Teste II

---

## 📁 Estrutura dos Ficheiros

### 🖥️ Exercícios Práticos — Código C

| Ficheiro | Exercício | Conteúdo |
|---|---|---|
| `ex01_contagem_regressiva.c` | Ex. 1 | Contagem regressiva iterativa e recursiva |
| `ex02_soma_vetor.c` | Ex. 2 | Soma de vetor com laço e com recursão |
| `ex03_maior_elemento.c` | Ex. 3 | Maior elemento iterativo e recursivo |
| `ex04_contagem_digitos.c` | Ex. 4 | Contagem de dígitos iterativa e recursiva |
| `ex05_inverter_numero.c` | Ex. 5 | Inverter número com recursão |
| `ex07_soma_digitos.c` | Ex. 7 | Soma dos dígitos com recursão |
| `ex08_busca_vetor.c` | Ex. 8 | Busca linear iterativa e recursiva |
| `ex09_hanoi_recursivo.c` | Ex. 9 | Torre de Hanoi recursiva |
| `ex10_hanoi_iterativo.c` | Ex. 10 | Torre de Hanoi iterativa com pilha |
| `ex11_12_fila.c` | Ex. 11/12 | Fila FIFO com enqueue, dequeue e peek |
| `ex13_encontre_o_erro.c` | Ex. 13 | Código corrigido (caso base em falta) |
| `ex14_preveja_saida.c` | Ex. 14 | Função teste(3) com saída comentada |
| `ex15_fibonacci.c` | Ex. 15 | Fibonacci completado |
| `ex16_recursiva_para_iterativa.c` | Ex. 16 | Conversão recursiva → iterativa |
| `ex17_fatorial_comparacao.c` | Ex. 17 | Fatorial iterativo vs recursivo com medição |

---

### 📝 Exercícios Teóricos — Word (.docx)

| Ficheiro | Exercício | Conteúdo |
|---|---|---|
| `ex06_fifo.docx` | Ex. 6 | O que é FIFO e por que é essencial em filas de impressão |
| `ex10_hanoi_dificuldades.docx` | Ex. 10 | Dificuldades da Hanoi iterativa vs recursiva |
| `ex11_operacoes_fila.docx` | Ex. 11 | Explicação de enqueue, dequeue e peek |
| `ex12_array_vs_malloc.docx` | Ex. 12 | Array estático vs malloc — comparação completa |
| `ex13_encontre_erro.docx` | Ex. 13 | Análise do erro, consequência e correcção |
| `ex14_preveja_saida.docx` | Ex. 14 | Saída `3 2 1 1 2 3` com fluxo detalhado |
| `ex16_transformacao.docx` | Ex. 16 | Alterações de recursiva → iterativa justificadas |
| `ex17_comparacao.docx` | Ex. 17 | Comparação experimental fatorial + recomendação |

---

## ⚙️ Como Compilar e Executar

Qualquer ficheiro `.c` pode ser compilado com o **GCC**:

```bash
# Compilar
gcc -o nome_do_programa ficheiro.c

# Executar
./nome_do_programa
```

**Exemplo:**
```bash
gcc -o ex01 ex01_contagem_regressiva.c
./ex01
```

---

## 🧠 Conceitos Abordados

| Tema | Exercícios |
|---|---|
| **Recursão vs Iteração** | 1, 2, 3, 4, 8, 16, 17 |
| **Recursão pura** | 5, 7, 9, 15 |
| **Estruturas de Dados — Fila (Queue)** | 6, 11, 12 |
| **Estruturas de Dados — Pilha (Stack)** | 10 |
| **Análise de algoritmos** | 13, 14, 17 |
| **Transformação de algoritmos** | 16 |
| **Torre de Hanoi** | 9, 10 |

---

## 📌 Resumo dos Princípios Fundamentais

### Recursão
Toda função recursiva precisa de:
1. **Caso base** — condição que termina a recursão
2. **Caso recursivo** — chamada que se aproxima do caso base

### FIFO (First In, First Out)
O primeiro elemento a entrar é o primeiro a sair.
Usado em filas de impressão para garantir justiça e ordem.

### Iterativo vs Recursivo
| | Iterativo | Recursivo |
|---|---|---|
| Memória | O(1) | O(n) |
| Stack overflow | ❌ Impossível | ⚠️ Possível |
| Legibilidade | Boa | Muito boa |
| Sistemas limitados | ✅ Preferido | Evitar |

---

*Universidade Licungo — Estruturas de Dados e Algoritmos*
