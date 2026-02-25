"""
Autores: Ana Forte, Ionela Frunza, Jordan Okeke

Funções para guardar reservas em ficheiro JSON.
"""

import json

#isto será o nome do fichiero que será criado e onde ficará guardado as reservas
ficheiro_reservas = "reservas.json"

def AdicionarReserva(nome, numero_pessoas, data, hora, mesa_atribuida):
    #aqui criei um dicionario com os dados para fazer a reserva
    nova_reserva = {
        "nome": nome,
        "numero_pessoas": numero_pessoas,
        "data": data,
        "hora": hora,
        "mesa": mesa_atribuida
    }

    #aqui tenta abrir o ficheiro json e carregar as reservas que existem nelas
    try:
        with open(ficheiro_reservas, "r") as i:
            reservas = json.load(i)    #aqui carrega a lista existente e le todas as reservas que ja existem 
    except FileNotFoundError:
        #caso o ficheiro nao exista criasse lista vazia para start
        reservas = []

    #nova reserva add à lista
    reservas.append(nova_reserva)

    #e abre o file e guarda as reservas no ficheiro
    with open(ficheiro_reservas, "w") as i:   #write
        json.dump(reservas, i, indent=4)   #o indent=4 serve para deixar o ficheiro fácil de ler


def ConsultarReservas():
    """
    Usado pelo gestor:
    -Lê o ficheiro JSON com as reservas guardadas
    -Mostra todas as reservas
    """
    print("\n========== Lista de Reservas ==========")

    #tentamos abrir o file das reservas
    try:
        with open(ficheiro_reservas, "r") as i:  #read
            reservas = json.load(i)    #lemos todas as reservas que estao guardadas 
    except FileNotFoundError:
        #se ainda nao existir reservas aparece uma mensagem
        print("Ainda não existem reservas!")
        input("\nPressione Enter para continuar...")
        return

    #aqui mostra cada reserva de forma "organizada"
    for r in reservas:
        print(f"Cliente: {r['nome']} | Nº Pessoas: {r['numero_pessoas']} | "
              f"Data: {r['data']} | Hora: {r['hora']}")
    
    input("\nPressione Enter para continuar...")
