import requests as rex

for i in range(6000,7144):
    url = f"https://trainingserver.atec.pt/TrainingServer/Mulberry/JSON/Controls/Calendar/getCalendarDataSource.ashx?command=_SelectAllSchedulesDataSetGivenByUserId&oId={i}&idField=DataValueField&titleField=DataTextField&startDateField=DataStartField&endDateField=DataEndField&backgroundColorField=&textColorField=textcolor&eventColorField=color&description=description&picField=pic&urlField=url&start=1771804800&end=1772409600&_={1771940484594}"

    requests=rex.get(url)

    print(i)

    if "Pedro Carlos Mestre dos Santos" in requests.text: 
        print(f"id stor {i}")
        break
    

   
