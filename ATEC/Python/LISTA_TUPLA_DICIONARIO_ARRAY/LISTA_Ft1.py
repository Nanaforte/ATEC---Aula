# 1 - CRIAR LISTA (lista_de_numeros) COM OS ELEMENTOS: 5, 10, 15, 20, 25
lista_de_numeros = [5, 10, 15, 20, 25]

# 2 - ADICIONAR 30 AO FIM DA LISTA
lista_de_numeros.append(30)

# 3 - REMOVER O NÚMERO 10 DA LISTA
lista_de_numeros.remove(10)

# 4 - ALTERAR O SEGUNDO NÚMERO DA LISTA 
lista_de_numeros[1] = 12


# 5 - IMPRIMIR O PRIMEIRO E O ÚLTIMO NÚMERO DA LISTA
print("Primeiro número:", lista_de_numeros[0])
print("Último número:", lista_de_numeros[-1])

# 6 - UTILIZAR UM LOOP for PARA IMPRIMIR TODOS OS NÚMEROS DA LISTA
print("\nNúmeros da lista: ")
for numero in lista_de_numeros:
    print(numero)

# 7 - ADICIONAR O INDICE2 COM O INDICE3. 
soma_indices = lista_de_numeros[2] + lista_de_numeros[3]
print(f"\nA soma do índice 2 com o índice 3 é {soma_indices}")

# 8 - CALCULAR E IMPRIMIR A SOMA DE TODOS OS NÚMEROS DA LISTA
total = sum(lista_de_numeros)
print("\nSoma de todos os números da lista é:", total)

# 9 - ENCONTRAR E IMPRIMIR O NÚMERO MÁXIMO DA LISTA
maximo = max(lista_de_numeros)
print("O número máximo da lista é:", maximo)

# 10 - ORDENAR A LISTA EM ORDEM CRESCENTE E IMPRIMIR A LISTA ORDENADA
ordem_crescente = sorted(lista_de_numeros)
print("\nLista ordenada em ordem crescente:", ordem_crescente)

# 11 - ORDENAR A LISTA EM ORDEM DECRESCENTE E IMPRIMIR A LISTA ORDENADA
ordem_decrescente = sorted(lista_de_numeros, reverse=True)
print("Lista ordenada em ordem decrescente:", ordem_decrescente)
