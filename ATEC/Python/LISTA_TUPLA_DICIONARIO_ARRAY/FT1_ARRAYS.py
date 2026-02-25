import array
array_inteiros = array.array('i',[5, 10, 15, 20, 25])                           #o i significa inteiro

#MOSTRAR/IMPRIMIR O PRIMEIRO E O ULTIMO
print("Primeiro elemento: ",array_inteiros[0])  
print("Último elemento: ",array_inteiros[4])    

#MODIFICAR O 3º ELEMENTO
array_inteiros[2] = 30

#PERCORRER TODO O ARRAY
for arr in array_inteiros:
    print(arr)

#ADD NUM 35
array_inteiros.append(35)

#IMPRIMIR O ARRAY TODO
print(array_inteiros)

