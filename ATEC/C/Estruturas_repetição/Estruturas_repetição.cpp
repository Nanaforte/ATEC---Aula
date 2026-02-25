#include<stdio.h>
#include<windows.h>

main()
{
    SetConsoleOutputCP(65001);   
    
    //estruturas de repetição
    /*
    while
    do-while
    for
    */

    //Gerar 3 listas de numeros de 0 a 30
    
    
    // -------------------WHILE
    int num=0;
    while(num<=30)
    {
    	printf("%d ",num);
    	num++;
    	
    	//num++;      de 1 em 1
    	//num=num+1;
    	//num+=1;
    	
    	//num--;
    	//num=num-1;
    	//num-=1;
    	
    	//++num;
    	//--num;
	}
	
	
	
	printf("\n");
	// -------------------DO-
	
	num=0;
	do{
		printf("%d ",num);
		num++;
	}while(num<=30);
	
	
	
	printf("\n");
	// -------------------FOR
	for(num=0; num<=30; num++)
	{
			printf("%d ", num);
	}

}