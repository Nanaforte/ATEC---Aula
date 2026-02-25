import os # para limpar a tela com cls
from reservas import AdicionarReserva
# Capacidade máxima por hora
max_clientes_por_hora = 15

class Cliente:
    def __init__(self, nome, numero_pessoas, data, hora, restaurante):
        self.nome = nome
        self.numero_pessoas = numero_pessoas
        self.data = data
        self.hora = hora
        self.restaurante = restaurante

    def ConsultarMenu(self, menu):
        print("\n--- Menu ---")
        for prato in menu:
            print(prato)

    def reserva(self):
            print("\n--- Fazer Reserva ---")
            self.nome = input("Diga o seu nome: ")
            self.numero_pessoas = int(input("Diga o número de pessoas: "))
            self.data = input("Diga a data da reserva (dia/mes/ano): ")
            self.hora = input("Diga a hora da reserva (hora:min): ")


            # Verifica capacidade
            total_na_hora = sum(r["numero_pessoas"] for r in getattr(self.restaurante, "reservas", []) # getattr Serve para tentar pegar um atributo de um objeto, mesmo se esse atributo talvez não exista
                            if r["data"] == self.data and r["hora"] == self.hora)    # pega apenas reservas que  que coincidem com a data e hora atuais
            
            if total_na_hora + self.numero_pessoas > max_clientes_por_hora:    # Verifica a soma das pessoas já reservadas + as pessoas desta nova reserva
                print("Desculpe, não há capacidade disponível nessa hora.\n")
                input("Pressione Enter para continuar...")
                return

            #atribuir mesa
            mesa_atribuida = None
            for num, ocupado in self.restaurante.mesas.tables.items():
                if ocupado is None:  #se a mesa estiver livre
                    mesa_atribuida = num  #mesa vai ser atribuida a um cliente
                    self.restaurante.mesas.tables[num] = self.nome  # marca a mesa como ocupada com o nome do cliente
                    
            if mesa_atribuida is None: #mesa nao esta livre
                print("Desculpe todas as mesas estão ocupadas")
                print("Pressione Enter para continuar...")
                            
            # Guarda reserva no ficheiro
            AdicionarReserva(self.nome, self.numero_pessoas, self.data, self.hora)

            # Atualiza a lista interna do restaurante
            if not hasattr(self.restaurante, "reservas"):
                self.restaurante.reservas = []
                
            self.restaurante.reservas.append({
                "nome": self.nome,
                "numero_pessoas": self.numero_pessoas,
                "data": self.data,
                "hora": self.hora
            })

            print(f"Reserva feita com sucesso! Mesa atribuida: {mesa_atribuida}\n")
            input("Pressione Enter para continuar...")


# Nova classe Pedido para associar prato a cliente
class Pedido:
    def __init__(self, cliente_nome, prato):
        self.cliente_nome = cliente_nome
        self.prato = prato


class Pratos:
    def __init__(self):
        self.pedidos = []

    # Adicionei cliente_nome como parâmetro
    def PedidoPrato(self, menu, cliente_nome):
        print("\t\t\t\t\tMenu")
        for prato in menu:
            print(prato)

        while True:
            escolha = input("Escolha o número do prato (0 para terminar): \n\n")

            if escolha == "0":
                break

            if escolha.isdigit() and 1 <= int(escolha) <= len(menu):
                prato_escolhido = menu[int(escolha) - 1]       # Pega o prato correto do menu
                pedido = Pedido(cliente_nome, prato_escolhido) # Associa o prato ao cliente
                self.pedidos.append(pedido)                    # Guarda pedido do cliente
                self.pedidos.append(pedido)                  # Guarda pedido globalmente
                print("Adicionado:", prato_escolhido, "para", cliente_nome, "\n")
            else:
                print("Opção inválida. Tente novamente.")    

        # Mostrar pedidos do cliente
        if self.pedidos:
            print("\n--- Os seus pedidos ---")
            for p in self.pedidos:
                if p.cliente_nome == cliente_nome:
                    print(p.prato)
        else:
            print("Nenhum prato selecionado.")
