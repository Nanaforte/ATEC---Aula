"""
Projeto: Sistema de um Restaurante
Turma: PIPL0924
Autores: Ana Forte, Ionela Frunza, Jordan Okeke

Este ficheiro tem a funções para guardar dados em ficheiros
"""

"""
Este ficheiro é responsável por:
- Guardar os pedidos dos clientes num ficheiro JSON
- Permitir ao gestor visualizar esses pedidos

porque json - é parecido com dicionários entao é mais facil de ler e atualizar
    os dados ficam guardados dps fechar o programa



Formato do ficheiro JSON:
[
    {
        "cliente": "Ana",
        "prato": "Pizza",
        "quantidade": "2"
    }
]
"""

import json

#este ser o nome do ficheiro onde os pedidos vao ser guardados
ficheiro_pedidos = "pedidos.json"




# =========================================== ADICIONAR PEDIDOS ===========================================
def AdicionarPedido():
    """
    Esta função permite ao cliente fazer um pedido:
    -Pede informacoes ao utilizador (nome, prato e quantidade)
    -Adiciona o novo pedido à lista
    -Guarda novamente tudo no ficheiro
    """
    
    print("\n--- Criar Pedido ---")
    #recolhe os dados por input:
    cliente = input("Nome do cliente: ")
    prato = input("Prato desejado: ")
    quantidade = input("Quantidade: ")

    #guardar pedido como dicionario
    novo_pedido = {
        "cliente": cliente,
        "prato": prato,
        "quantidade": quantidade
    }

    #abrir o file para ler os pedidos ja existentes
    #caso ainda n exista comecamos uma lista vazia
    try:
        with open(ficheiro_pedidos, "r") as i:  #read
            pedidos = json.load(i)    #le os pedidos
    except FileNotFoundError:
        pedidos = []    #cria lista caso n exista pedidos ainda

    #add o novo pedido à lista
    pedidos.append(novo_pedido)

    #abrimos o file e escrevemos a lista atualizada novamente no ficheiro
    with open(ficheiro_pedidos, "w") as i:  #write
        json.dump(pedidos, i, indent=4)    
        #indent=4 -> deixar o JSON organizado e fácil de ler  
        #dump() -> transforma objetos python em JSON

    print("\nPedido registado com sucesso!\n")





# =========================================== CONSULTAR PEDIDOS ===========================================
def ConsultarPedidos():
    """
    Esta funcao é usada pelo gestor:
    -le o ficheiro JSON com os pedidos guardados
    -Apresenta a lista no ecrã
    -Se nunca houveram pedidos, mostra uma mensagem
    """
    
    print("\n========== Lista de Pedidos ==========")

    #tentamos abrir o ficheiro
    try:
        #abre o ficheiro e le
        with open(ficheiro_pedidos, "r") as i:    #read   
            pedidos = json.load(i)
    except FileNotFoundError:
        #se não existir o ficheiro é porque ainda ninguém pediu nada 
        print("Ainda não existem pedidos!")
        return

    #ciclo para mostrar cada pedido um por um
    for p in pedidos:
        print(f"Cliente: {p['cliente']} | Prato: {p['prato']} | Quantidade: {p['quantidade']}")
    
    input("\nPressiona Enter para continuar...")
