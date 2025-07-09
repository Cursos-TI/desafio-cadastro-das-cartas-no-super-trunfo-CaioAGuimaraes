# 🃏 Desafio Cartas Super Trunfo - Países - Cadastro das Cartas

Este repositório contém a implementação do **Desafio Cartas Super Trunfo - Países** proposto na disciplina de Introdução à Programação de Computadores da Estácio de Sá. O projeto está dividido em três níveis de complexidade: Novato, Aventureiro e Mestre.

---

## 🧩 Níveis Implementados

### 🥉 Nível Novato
- Permite cadastrar duas cartas, informando código, nome, população, área, PIB e pontos turísticos.
- Exibe as informações das cartas cadastradas de forma clara e organizada.
- **Não utiliza laços (for, while) nem condicionais (if, else)**.

### 🥈 Nível Aventureiro
- Calcula automaticamente Densidade Populacional (População/Área) e PIB per Capita (PIB/População).
- Exibe os novos atributos junto com os demais.
- **Não utiliza laços nem condicionais.**

### 🥇 Nível Mestre
- Faz a comparação dos atributos entre as duas cartas (mostrando qual vence em cada).
- Calcula o "Super Poder" de cada carta (soma dos atributos, com densidade invertida).
- Mostra qual carta vence em cada atributo (1 = carta 1, 0 = carta 2).
- Para Densidade Populacional, vence a menor.
- Usa condicionais (if/ternário) apenas neste nível.

---

## 🗂 Arquivos

| Arquivo             | Descrição                                          |
|---------------------|----------------------------------------------------|
| nivel_novato.c      | Cadastro e exibição simples de cartas              |
| nivel_aventureiro.c | Cadastro e cálculo de novos atributos              |
| nivel_mestre.c      | Comparação e cálculo do Super Poder                |

---

## 👨‍💻 Tecnologias Utilizadas
- Linguagem C
- IDE recomendada: Dev-C++, Code::Blocks, GCC ou similar

---

## 🚩 Como Executar

1. Baixe ou clone este repositório.
2. Escolha o arquivo do nível desejado.
3. Compile e execute usando sua IDE ou terminal:

   ```bash
   gcc nivel_novato.c -o nivel_novato
   ./nivel_novato
   ```

4. Siga o mesmo processo para os demais arquivos.

---

## ✍️ Autor

Caio Augusto Teixeira Guimarães  
Aluno Estácio de Sá – Gestão da Tecnologia da Informação

---
