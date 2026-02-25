# ESTE FICHEIRO TEM:
# -classes de gestao do restaurante (Mesa, Prato, Restaurante)
# -o gestor gere menu, reservas, mesas e configuracoes do restaurante


from reservas import ConsultarReservas

class Mesa:
    def __init__(self):
        self.tables = {i: None for i in range(1, 11)} 

#10 mesas, num range o numero final n conta
#-None- e para mostra que n ha nenhum valor armazenada sem deixa vazio(pq n pode deixa vazio)

    def show_tables(self):
        print("\nSTATUS DAS MESAS:")
        for key, value in self.tables.items():
            status = f"Reservada por {value}" if value else "Disponível"
            print(f"Mesa {key}: {status}")

#um dictionario e a forma mais fácil a armazenar dados de reservas pq a reserva tem um nome e um numero

    def show_reservas(self):
            ConsultarReservas() #isto  vai chamar a funcao consultareservas do file reservas.py
    
    def book_table(self):
        name = input("\nNome para reserva: ").strip()#.strip e para remover algum espaço desnecessário no input
        if not name:
            print("Nome inválido.")
            return

        self.show_tables()
        try:
            num = int(input("Escolha mesa (1-10): "))
        except ValueError:
            print("Valor inválido.")#se o input n e int, em vez de da erro e para o programa, so vai imprimir que n e valido
            return

        if num not in self.tables:
            print("Mesa inexistente.")
            return

        if self.tables[num]:
            print("Mesa já reservada!")#vai chamar o numero da mesa através a nome associada com ela
        else:
            self.tables[num] = name
            print(f"Mesa {num} reservada com sucesso.")

    def cancel_reserva(self):
        name = input("Nome da reserva a cancelar: ").strip()
        if not name:
            print("Nome inválido.")
            return

        for mesa, cliente in self.tables.items():
            if cliente == name:
                self.tables[mesa] = None #vai tirar o valor inserida e mete -None- outra vez
                print(f"Reserva de {name} anulada na mesa {mesa}.")
                return

        print("Nenhuma reserva encontrada.")


class Prato:
    def __init__(self, nome, descricao, preco, categoria="Indefinida"):
        self.nome = nome
        self.descricao = descricao
        self.preco = preco
        self.categoria = categoria


class Restaurante:
    def __init__(self):
        self.horario_abertura = None #-None para deixa definir por dia como gestor, n e definida-
        self.horario_fecho = None #isto tbm
        self.max_clientes_hora = None #isto tbm
        self.menu = []
        self.pedidos = []
        self.mesas = Mesa()

        # Menu inicial q pode ser editada
        self.comidas = {
            "arroz de pato": {"preco": 3.00, "descricao": "Arroz com pedaços de pato"},
            "frango a bras": {"preco": 4.00, "descricao": "Frango cortado com legumes"},
            "feijoada": {"preco": 3.50, "descricao": "Carne com molho e legumes"},
            "pizza": {"preco": 7.00, "descricao": "Prato italiano com versões vegetarianas"},
            "hamburger": {"preco": 4.50, "descricao": "Hambúrguer no pão de sésamo"},
            "esparguete": {"preco": 5.50, "descricao": "Massa italiana com alho e molho"},
            "empada": {"preco": 4.50, "descricao": "Prato de carne dentro de massa"},
            "lasagna": {"preco": 4.60, "descricao": "Pasta cozida com carne no forno"},
            "batatas fritas": {"preco": 3.00, "descricao": "Batatas cortadas e fritas"},
            "batata puree": {"preco": 3.00, "descricao": "Batatas cozidas e esmagadas"}
        }

        self.sobremesas = {
            "bolo": {"preco": 1.50, "descricao": "Bolos variados"},
            "mousse de chocolate": {"preco": 1.50, "descricao": "Mousse de chocolate cremosa"},
            "pudim": {"preco": 1.50, "descricao": "Pudim de vários sabores"},
            "cheesecake": {"preco": 2.00, "descricao": "Cheesecake variado"},
            "eggnog": {"preco": 1.50, "descricao": "Eggnog tradicional"},
            "donut": {"preco": 1.50, "descricao": "Donut doce"},
            "gelado": {"preco": 1.50, "descricao": "Gelado variado"},
            "jelly": {"preco": 1.50, "descricao": "Gelatina de fruta"},
            "wafer": {"preco": 2.50, "descricao": "Wafer crocante"},
            "torta": {"preco": 1.50, "descricao": "Torta variada"}
        }

#um dictionary e ideal para escrever o menu pq tem valores associados com uns aos outros (tipo um comida sempre tem um preço e um descricao), tbm fiz um dictionário de preços e desricacoes e armazenei num maior dicionário em vez de usar listas diferentes pq e mais fácil e poupa tempo e espaço

    def DefinirHorario(self):
        print("\n--- Definir Horário do Restaurante ---")
        abertura = input("Escreva o horario de abertura (Horas:Minutos): ")
        fechamento = input("Escreva o horario de fecho (Horas:Minutos): ")
        self.horario_abertura = abertura
        self.horario_fecho = fechamento
        print(f"Horário atualizado: {self.horario_abertura} - {self.horario_fecho}\n")

    def DefinirMaxClientes(self):
        print("\n--- Definir Máximo de Clientes por Hora ---")
        while True:
            try:
                max_clientes = int(input("Escreva o número máximo de clientes por hora: "))
                if max_clientes > 0:
                    self.max_clientes_hora = max_clientes
                    print(f"Número máximo de clientes por hora definido para {self.max_clientes_hora}\n")
                    break
                else:
                    print("O valor deve ser maior que 0. Tente novamente.")# n pode meter um valor de zero, tem que ter clientes
            except ValueError:
                print("Valor inválido. Digite um número inteiro.")





    # Para gerir cada menu

    def listar_menu(self):
        print("\n\n========== MENU COMPLETO ==========")

        print("\n---- PRATOS PRINCIPAIS (DEFAULT) ----")
        for prato, info in self.comidas.items():
            print(f"{prato}: {info['preco']}€")#para imprimir o preco ao lado da comida
            print(f"Descrição: {info['descricao']}")
            print("----------------------")

        print("\n------------ SOBREMESAS (DEFAULT) -----------")
        for sobremesa, info in self.sobremesas.items():
            print(f"{sobremesa}: {info['preco']}€")#para imprimir o preço ao lado da comida
            print(f"Descrição: {info['descricao']}")
            print("----------------------")

    def adicionar_prato(self):
        nome = input("Nome do prato: ")
        descricao = input("Descrição: ")
        try:
            preco = float(input("Preço: "))
        except:
            print("Preço inválido.")
            return

        self.comidas[nome] = {"preco": preco, "descricao": descricao}
        print(f"Prato '{nome}' adicionado ao menu.")

    def remover_prato(self):
        nome = input("Nome do prato a remover: ")
        if nome in self.comidas:
            del self.comidas[nome]
            print(f"Prato '{nome}' removido do menu.")
        else:
            print("Prato não encontrado.")

    def atualizar_prato(self):
        nome = input("Nome do prato a atualizar: ").strip().casefold()# pode mudar o preço e descricao de uma comida se quiseres
        if nome in self.comidas:
            descricao = input("Nova descrição: ")
            try:
                preco = float(input("Novo preço: "))
            except:
                print("Preço inválido.")
                return

            self.comidas[nome] = {"preco": preco, "descricao": descricao}
            print(f"Prato '{nome}' atualizado.")
        else:
            print("Prato não encontrado.")

    def adicionar_sobremesa(self):
        nome = input("Nome da sobremesa: ")
        descricao = input("Descrição: ")
        try:
            preco = float(input("Preço: "))
        except:
            print("Preço inválido.")
            return

        self.sobremesas[nome] = {"preco": preco, "descricao": descricao}
        print(f"Sobremesa '{nome}' adicionada ao menu.")

    def remover_sobremesa(self):
        nome = input("Nome da sobremesa a remover: ")
        if nome in self.sobremesas:
            del self.sobremesas[nome]
            print(f"Sobremesa '{nome}' removida do menu.")
        else:
            print("Sobremesa não encontrada.")

    def atualizar_sobremesa(self):
        nome = input("Nome da sobremesa a atualizar: ")
        if nome in self.sobremesas:
            descricao = input("Nova descrição: ")
            try:
                preco = float(input("Novo preço: "))
            except:
                print("Preço inválido.")
                return

            self.sobremesas[nome] = {"preco": preco, "descricao": descricao}
            print(f"Sobremesa '{nome}' atualizada.")
        else:
            print("Sobremesa não encontrada.")
