import requests as rex


ask = int(input("Se quiseres inserir o nome COMPLETO escreve - 1 \nSe quiseres inserir o NOME e o SOBRENOME insere - 2 "))

if ask==1:
    nome_completo=input("\nEscreva o nome completo: ")
elif ask==2:
    nome=input("\nEscreva o primeiro nome: ").strip()
    apelido=input("Escreva o último nome: ").strip()
    

tipo_person=int(input("\nSe queres encontrar um Formando escreve - 1 \nSe queres encontrar um Formador escreve - 2 "))

inicio=int(input("\nQueres começar a procurar a partir de que valor? "))
fim=int(input("Queres procurar até que numero? "))


for i in range(inicio,fim, 1):
    url = f"https://trainingserver.atec.pt/TrainingServer/Mulberry/JSON/Controls/Calendar/getCalendarDataSource.ashx?command=_SelectAllSchedulesDataSetGivenByUserId&oId={i}&idField=DataValueField&titleField=DataTextField&startDateField=DataStartField&endDateField=DataEndField&backgroundColorField=&textColorField=textcolor&eventColorField=color&description=description&picField=pic&urlField=url&start=1771804800&end=1772409600"

    request=rex.get(url)
    
    

    if tipo_person==1 and ask==1: 
        if nome in request.text and "Sessão como Formando" in request.text:
            print(f"Encontrado id {i} com nome {nome_completo}")
            print(request.text)
            break
        else:
            print(f"pessoa nao encontrada, id: {i}")
         
    elif tipo_person == 1 and ask == 2:
        if nome in request.text and apelido in request.text and "Sessão como Formando" in request.text:
            print(f"Encontado id {i} com nome {nome} {apelido}")
            print(request.text)
            break
        else:              
            print(f"pessoa nao encontrada, id: {i}")

    if tipo_person == 2 and ask == 1:
        if nome in request.text and "Sessão como Formador" in request.text:
            print(f"Encontrado id {i} com nome {nome}")
            print(request.text)
            break
        else:              
            print(f"pessoa nao encontrada, id: {i}")
            
    elif tipo_person == 2 and ask == 2:
        if nome in request.text and apelido in request.text and "Sessão como Formador" in request.text:
            print(f"Encontrado id {i} com nome {nome} {apelido}")
            print(request.text)
            break
        else:              
            print(f"pessoa nao encontrada, id: {i}")   
    








   
