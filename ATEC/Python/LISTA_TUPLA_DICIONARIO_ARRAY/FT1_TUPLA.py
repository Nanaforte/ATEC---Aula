print("")
#CRIAR TUPLA
tupla_notas = (7,8,5,10,6,9,4,7,8,6)


#NOTA MÁXIMA
nota_max = max(tupla_notas)
print("Nota máxima: ",nota_max)


#NOTA MÍNIMA
nota_min = min(tupla_notas)
print("Nova mínima: ",nota_min)


#MÉDIA
media = sum(tupla_notas) / len(tupla_notas)
print("Média das notas: ",media)


#NOTAS SUPERIORES OU IGUAIS À MEDIA
cont = 0
for notas in tupla_notas:
    if notas >= media:
        cont += 1

print(f"Há {cont} notas maiores ou iguais à média.")


#PEDE AO UTILIZADOR PARA ESCREVER UMA NOTA E VERIFICA SE A NOTA EXISTE NA TUPLA
nota_escrita = float(input("Escreva uma nota para verificar se ela existe na tupla: "))

if nota_escrita in tupla_notas:
    print("A nota existe presente na tupla.")
else:
    print("A nota não existe presente na tupla.")
print("")