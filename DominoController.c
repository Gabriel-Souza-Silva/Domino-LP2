#include "PedraDAO.h"
#include "MesaDAO.h"
#include "JogadorDAO.h"
#include "Jogo.h"
#include "View.h"
#include<stdio.h>

void Iniciar()
{
	int opcao;
	CriarPecas();
	do{
	    opcao = ExibirMenu();
	    DefinirAcaoMenu(opcao);
    }while(opcao != 0);
}

void DefinirAcaoJogador(int opcao)
{
	switch (opcao)
    {
        case 1: IniciarJogo(1);
                break;
        case 2: IniciarJogo(2);
                break;
        case 3: ExibirRegras();  
		        break;
        case 0: break;
        default: printf("Escolha uma op��o v�lida \n");
				break;
    } 
}

void DefinirAcaoMenu(int opcao)
{
	switch (opcao)
    {
        case 1: EmbaralharPecas();
                break;
        case 2: embaralhada == 0 ? ExibirPecas(pecasDisponiveis) : ExibirPecas(pecasEmbaralhadas);
                break;
        case 3: Desembalhar();
                break;
    	case 4: Jogar();
                break;
        //case 5: CarregarJogo();
        //        break;
        case 0: break;
        default: printf("Escolha uma op��o v�lida \n");
				break;
    } 
}

