"""
Projeto: Sistema de um Restaurante
Turma: PIPL0924
Autores: Ana Forte, Ionela Frunza, Jordan Okeke

Este ficheiro tem a estrutura de menus obrigatória.
"""
from pedidos import AdicionarPedido, ConsultarPedidos  #importa as funcionalidades do cliente guardadas em json
from classescliente import Cliente, Pedido, Pratos   #importa as funcionalidades do cliente
from classesgestor import Restaurante, Prato, Mesa   #importa as funcionalidades do gestor


import os
from time import sleep

#funcao para limpar a tela
def LimparTela():
    """
    Limpa a tela dependendo do so.     
    windows -> 'cls'     
    macOS/linux -> 'clear'
    """
    if os.name == "nt":  
        os.system("cls") 
    else:
        os.system("clear")


#funcao para validar o input
def EscolherOpcao(op_validas):
    #a funcao recebe uma lista de valores corretos e ve se o utilizador escolhe uma dessas opcoes
    #se o utilizador escolher uma delas o programa continua com a op escolhida
    #se o utilizador nao escolher nenhuma delas mostra uma mensagem de erro, espera 1 segundo e pede ao utilizador para escolher denovo
    while True:
        op = input("\nEscolha uma opção (pressione Enter depois de selecionar a opção): ") 
        if op in op_validas: #verifica se a tecla pressionada esta na lista op_validas
            return op #se vdd retorna a op e sai da func
        print("Opção inválida! Tente novamente.")
        sleep(1)
        #se invalida da a mensagem, espera 1 seg e pergunta dnv




password_gestor = "1234"   #password para aceder ao menu gestor
restaurante = Restaurante()   
#cria objeto chamado restaur. da classe Restaurante do ficheiro classesgestor.py
#este objeto ira representar o sistema
    #gerir o menu de pratos
    #gerir reservas e mesas
    #definir horarios e limites de clientes
#é a caixa principal que guarda todas as info e funcionalidades do restaurante


# ======================================= Menu Principal =======================================
def MenuPrincipal():
    #ciclo q vai ser infinito até o utilizador escolher a op voltar
    while True:
        LimparTela()  #para limpar a tela antes de mostrar o menu, denovo ou nao
        print("\n==================== MENU PRINCIPAL ====================")
        print("1 - Entrar como Gestor")
        print("2 - Entrar como Cliente")
        print("0 - Sair da aplicação")
        print("=====================================================")
        
        #receber a opcao que o utilizador escolheu utilizando a validacao
        op = EscolherOpcao(["0","1","2"])
        
        #condicoes dependendo da escolha do utilizador
        if op == "1":
            #caso escolha a op 1 terá de escrever a password do gestor
            password = input("Escreva a password do gestor: ")
            #aqui terá um if que confirmará se a senha está correta e irá para o menu do gestor
            if password  == password_gestor:
                MenuGestor() 
                sleep(1)
            else:
                #se a password tiver errada irá voltar para o menu principal
                print("Password incorreta! A regressar para o menu principal...")
                sleep(1)
        elif op == "2":
            MenuCliente()
            sleep(1)
        elif op == "0":
            print("A sair do programa ...")
            sleep(1)  #isto pausa darante 1 segundo
            break  #sai do loop e termina o programa


# ======================================= Menu do Gestor =======================================
def MenuGestor():
    #ciclo q vai ser infinito até o utilizador escolher a op voltar
    while True:
        LimparTela() #para limpar a tela antes de mostrar o menu, denovo ou nao
        print("\n==================== MENU GESTOR ====================")
        print("1 - Definir/alterar horário do restaurante")
        print("2 - Definir número máximo de clientes por hora")
        print("3 - Adicionar prato ao menu")
        print("4 - Remover prato do menu")
        print("5 - Consultar pedidos dos clientes")
        print("6 - Ver menu completo")
        print("7 - Reservar mesa")
        print("8 - Cancelar reserva")
        print("9 - Ver estado das mesas")
        print("10 - Atualizar Prato")
        print("0 - Voltar ao menu principal")
        print("=====================================================")
        
        #receber a op que o utilizador escolheu utilizando a validacao
        op = EscolherOpcao(["0","1","2","3","4","5","6","7","8","9","10"])    
            
        #condicoes dependendo da escolha do utilizador
        #vai buscar as func ao file classesgestor
        if op == "1":
            restaurante.DefinirHorario()
            sleep(1)
        elif op == "2":
            restaurante.DefinirMaxClientes()
            sleep(1)
        elif op == "3":
            restaurante.adicionar_prato()
            sleep(1)
        elif op == "4":
            restaurante.remover_prato()
            sleep(1)
        elif op == "5":
            ConsultarPedidos()  #chama a funcao do ficheiro pedidos.py
            sleep(1)
        elif op == "6":
            restaurante.listar_menu()
            input("\nPressione Enter para continuar...")
            sleep(1)
        elif op == "7":
            restaurante.mesas.book_table()
            sleep(1)
        elif op == "8":
            restaurante.mesas.cancel_reserva()
            sleep(1)
        elif op == "9":
            restaurante.mesas.show_reservas()
            input("\nPressione Enter para continuar...")
            sleep(1)
        elif op == "10":
            restaurante.atualizar_prato()
            input("\nPressione Enter para continuar...")
            sleep(1)
        elif op == "0":
            print("A regressar ao Menu Principal ...")
            sleep(1) #pausa antes de limpar e mostrar o menu novamente
            break  #sai do loop e volta para o menu principal

# ======================================= Menu do Cliente =======================================
def MenuCliente():
    
    cliente = Cliente(None, None, None, None, restaurante)  # <-- instância criada aqui
    pratos = Pratos()  # <-- instância dos pedidos
    
    #ciclo q vai ser infinito até o utilizador escolher a op voltar
    while True:
        LimparTela()  #para limpar a tela antes de mostrar o menu, denovo ou nao
        print("\n==================== MENU CLIENTE ====================")
        print("1 - Consultar menu do restaurante")
        print("2 - Fazer reserva")
        print("3 - Pedir pratos")
        print("0 - Voltar ao menu principal")
        print("=====================================================")
        
        #receber a opcao que o utilizador escolheu utilizando a validacao
        op = EscolherOpcao(["0","1","2","3"])

        #condicoes dependendo da escolha do utilizador
        if op == "1":
            restaurante.listar_menu()   
            input("\nPressione Enter para voltar...")
            sleep(1)
        elif op == "2":
            #print("Fazer reserva")
            cliente.reserva()
            sleep(2)
        elif op == "3":
            #print("Pedir pratos")
            AdicionarPedido()    #chama a função que guarda o pedido 
            sleep(2)
        elif op == "0":
            print("A regressar ao Menu Principal ...")
            sleep(2) #pausa antes de limpar e mostrar o menu novamente
            break #sai do loop e volta para o menu principal



#isto so é executado se este ficheiro for executado diretamente
#evita que o menu principal seja iniciado quando este ficheiro for importado noutro modulo
#se o ficheiro for executado sozinho, inicia a aplicação chamando MenuPrincipal().
if __name__ == "__main__":
    MenuPrincipal()  # Inicia a aplicação
