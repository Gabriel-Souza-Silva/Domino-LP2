void ExibirPecas(PEDRA pecas[])
{
	int i;
    for(i = 0; i < 28; i++)
    {
    	if(i + 1 >= 10)
        	printf("Pe�a %d: %d | %d \n",i+1,pecas[i].ladoesquerdo,pecas[i].ladodireito);
        else
        	printf("Pe�a %d:  %d | %d \n",i+1,pecas[i].ladoesquerdo,pecas[i].ladodireito);
    } 
}

void ExibirMenu()
{
	int opcao;
	do{
        printf("[1] - Embaralhar peças \n");
        printf("[2] - Exibir peças \n");
        printf("[3] - Desembalhar as pe�as \n");
        printf("[0] - Sair \n");
        scanf("%d", &opcao);
        

        switch (opcao)
        {
            case 1: EmbaralharPecas();
                    break;
            case 2: embaralhada == 0 ? ExibirPecas(pecasDisponiveis) : ExibirPecas(pecasEmbaralhadas);
                    break;
            case 3: Desembalhar();
                    break;
            case 0: break;
            default: printf("Escolha uma op��o v�lida \n");
					break;
        } 
		
		
    }while(opcao != 0);
}
