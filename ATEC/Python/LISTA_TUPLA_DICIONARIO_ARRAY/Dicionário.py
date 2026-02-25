#CRIAR UM DICIONÁRIO VAZIO
#dicionario1=dict()    ou    dicionario1={}

dicionario1={}

dicionario1["nome"]="Ana"
dicionario1["idade"]=25
dicionario1["email"]="ana.atec@edu.pt"
dicionario1["nome"]="Tobias"       #Se repetirmos a key e colocarmos um value, esse value irá substituir o anterior


#CRIAR UM DICIONARIO JÁ COM DADOS =======================================

dicionario2={"nome":"Pedro","idade":25,"email":"ana.atec@edu.pt"}

dicionario3={0:"Joao",1:"Maria",3:"José"}

dicionario4={0:1234, 1:2341, 2:34325}

dicionario5={1: ('a','b','c'), "caracteres":('d','e','f')}

lista1=[34,34,5645,645,75,6]

dicionario6={"numero1":[1,2,3,4,5,6], "numero2":[7,8,9,10,11,12]}

dicionario6["numero1"] = lista1

#=======================================================================

pessoas={
    "Ana": {
    "peso":50,
    "altura":1.60,
    "hobbies":["ler","programar","Jogar pc","Comer"]
    }
    ,
    "marta": {
        "peso":65,
        "altura":1.65,
        "hobbies":["comer","fotografia","desenhar","caminhar"]
    }
}



#============================ EXPLICAÇÕES ============================

#ALTERAR ALGUMA COISA, NESTE CASO O HOBBY NUMERO 1 (FOTOGRAFIA) PARA COZINHAR
#pessoas["marta"]["hobbies"][1]="cozinhar"

#IMPRIMIR TUDO
#print(pessoas)

#MODIFICAR O VALOR DO HOBBY COMER PARA CORRER
#pessoas["hobbies"][2]="Correr"

#IMPRIMIR ALGO ESPECÍFICO
#print(pessoas["marta"]["hobbies"])
#print(pessoas["hobbies"][2])

#=================================================================

#IMPRIMIR AS KEYS (EX:"nome","idade"."email") DO DICIONARIO
pessoa = {"nome":"ana","idade":30,"email":"ana.atec@edu.pt"}
for chave in pessoa.keys():
    print(f"chave: {chave}")
    
#SE QUISER IMPRIMIR OS VALUES (EX:"ana",30,"email") DO DICIONARIO  
for valor in pessoa.values():
    print(f"valor: {valor}")
    
#PARA IMPRIMIR AS KEYS E AS VALUES DO DICIONARIO
for chave, valor in pessoa.items():
    print(f"A chave {chave} tem o valor {valor}.")