print("")


#1-CRIAR TUPLA COM OS NOMES DOS ALUNOS
nomes_alunos = ("Ana", "Carla", "Bruno", "Eduarda", "Daniel", "Gabriela", "Felipe", "Henrique")


#2-CRIAR VARIÁVEL QUE TEM A QUANTIDADE DE ALUNOS
total_alunos = len(nomes_alunos)
print("Total de alunos:", total_alunos)


#3-PEDIR AO UTILIZADOR QUE ESCREVA UM NOME DE UM ALUNO E VERIFIQUE SE EXISTE NA TUPLA
verificar = input("Escreva o nome do aluno para verificar se existe na lista: ")
if verificar in nomes_alunos:
    print(f"{verificar} está na lista de alunos.")
else:
    print(f"{verificar} não está na lista de alunos.")


print("")

#4-MOSTRAR O NOME DO PRIMERO ALUNO
print("Primeiro aluno:", nomes_alunos[0])

#5-MOSTRAR O NOME DO ÚLTIMO ALUNO
print("Primeiro  aluno:", nomes_alunos[-1])

print("")

#6-QUAL A POSIÇÃO QE OCUPA UM DETERMINADO ALUNO INSERIDO PELO UTILIZADOR
nome_escrito = input("Escreva o nome do aluno para saber a sua posição na lista: ")

if nome_escrito in nomes_alunos:
    pos = nomes_alunos.index(nome_escrito)
    print(f"{nome_escrito} está na posição {pos} da tupla.")
else:
    print(f"{nome_escrito} não está na lista.")

print("")

#7-METODO SORT() E ANÁLISE DO RESULTADO

#alunos.sort()

#ANÁLISE
print("Isto que eu escrevi: alunos.sort() - deu erro porque as tuplas são imutáveis, então, não é possível utilizar o método sort() diretamente nelas.")

#EXTRA: SOLUÇÃO QUE ENCONTREI AO PESQUISAR FOI CONVERTER PARA LISTA E ORDENAR 
alunos_ordenados = sorted(nomes_alunos)
print("Alunos ordenados:", alunos_ordenados)


print("")