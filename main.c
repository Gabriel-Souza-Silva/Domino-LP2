#include<stdio.h>
#include <stdlib.h> 
#include "DominoController.h"

/***********************************************************************************************************/
/*                            		PROJETO DOMIN�                                                         */
/*                            								                                               */
/*                                  INTEGRANTE:				                                               */
/*                             GABRIEL SOUZA DA SILVA                                                      */
/*                             	JULIA FERREIRA SILVA                                                       */
/*                             NICOLAS DE AGUIAR CALISTO                                                   */
/*                                THAIN� CRUZ SILVA                                                         */
/***********************************************************************************************************/


void main()
{
    Iniciar();
}

void Jogar()
{
	int opcao;
	EmbaralharPecas();
	InicializarMesa();
	
	do
	{
		opcao = DefinirNumeroJogadores();
		DefinirAcaoJogador(opcao);
		
	}while(opcao != 0);
	
	CriarPecas();
}















