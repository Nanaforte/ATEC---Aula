
# 1 - CRIAR A LISTA marcas COM AS MARCAS: "Toyota","Ford","Honda","Chevrolet","Nissan"

marcas = ["Toyota", "Ford", "Honda", "Chevrolet", "Nissan"]
 
# 2 - ADICIONAR A MARCA "Volkswagen" À LISTA

marcas.append("Volkswagen")
 
# 3 - REMOVER A MARCA "Ford" DA LISTA

marcas.remove("Ford")
 
# 4 - ALTERAR O NOME DA MARCA "Honda" PARA "Hyundai"

marcas[3] = "Hyundai"
 
# 5 - UTILIZA UM LOOP FOR PARA PERCORRER E IMPRIMIR TODAS AS MARCAS DA LISTA

for todas_marcas in marcas:

    print(todas_marcas)
 
# 6 - PEDIR AO UTILIZADOR PARA INSERIR O NOME DE UMA MARCA E VERIFICAR SE ESSA MARCA EXISTE NA LISTA, IMPRIMINDO UMA MENSAGEM

pedido = input("\nEscreva o nome de uma marca: ")

if pedido in marcas:

    print(f"A marca '{pedido}' existe na lista.")

else:

    print(f"A marca '{pedido}' não existe na lista.")
 
# 7 - ORDENAR A LISTA EM ORDEM ASCENDENTE E IMPRIMIR A LISTA ORDENADA (alfabética)

marcas_ordenadas = sorted(marcas)

print("\nLista em ordem ascendente:", marcas_ordenadas)
 
# 8 - IMPRIMIR A LISTA EM ORDEM INVERSA

print("Lista em ordem inversa: ", list(reversed(marcas)))
 