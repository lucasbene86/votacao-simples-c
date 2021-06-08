/*Acadêmico: João Lucas Benevides Gomes
  Disciplina: ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    int ve_joao = 0,
        ve_maria = 0,
        ve_ze = 0,
        voto_nulo_vereador = 0,
        voto_nulo_prefeito = 0,
        pre_zureta = 0,
        pre_gomes = 0,
        opcao_menu = 0,
        opcao = 0,
        validador = 0,
        voto = 0, 
        total_nulo = 0,
        total_prefeito = 0;

    while (opcao_menu != 3){
    	// Menu
        printf("1 -> Votar\n");
        printf("2 -> Apuração dos votos\n");
        printf("3 -> Sair\n");
        printf("> ");
        scanf("%d", &opcao);

        switch (opcao){
        // Votação
        case 1:
            // Votar em vereador
			do {
				system("cls");
	            printf("Vereadores:\n\n");
	            printf("111 - Vereador João do Frete\n");
	            printf("222 - Vereadora Maria da Pamonha\n");
	            printf("333 - Vereador Zé da Farmácia\n");
	            printf("444 - Votar Nulo\n");
	            printf("> ");
	            scanf("%d", &voto);
	            fflush(stdin);

	            switch (voto){
		            case 111:
		                ve_joao++;
		                validador = 0;
		                break;
		            case 222:
		                ve_maria++;
		                validador = 0;
		                break;
		            case 333:
		                ve_ze++;
		                validador = 0;
		                break;
		            case 444:
		                voto_nulo_vereador++;
		                validador = 0;
		                break;
		            default:
		            	validador = 1;
		            	system("cls");
		            	printf("Número inválido!");
		            	Sleep(1500);
		                break;
	            }
        	} while (validador == 1);

			// Votar em prefeito
        	do {
	            system("cls");
	            printf("Prefeito:\n\n");
	            printf("11 - Prefeito Dr. Zureta\n");
	            printf("22 - Prefeito Senhor Gomes\n");
	            printf("44 - Voto Nulo\n");
	            printf("> ");
	            scanf("%d", &voto);
	            fflush(stdin);

	            switch (voto){
		            case 11:
		                pre_zureta++;
		                validador = 0;
		                break;
		            case 22:
		                pre_gomes++;
		                validador = 0;
		                break;
		            case 44:
		                voto_nulo_prefeito++;
		                validador = 0;
		                break;
		            default:
		            	validador = 1;
		            	system("cls");
		            	printf("Número inválido!");
		            	Sleep(1500);
		                break;
	            }
			} while (validador == 1);

			system("cls");
			printf("Voto computado com sucesso!");
			Sleep(1500);
            system("cls");
            break;
        // Apuração dos votos
        case 2:
            system("cls");
            printf("Total de votos computados:\n\n");
            printf("\tVereadores:\n");
            printf("Vereador João do Frete: %d votos\n", ve_joao);
            printf("Vereador Maria da Pamonha: %d votos\n", ve_maria);
            printf("Vereador Zé da Farmacia: %d votos\n", ve_ze);
            printf("Votos Nulo: %d votos\n\n", voto_nulo_vereador);

            printf("\tPrefeitos:\n");
            printf("Prefeito Dr. Zureta: %d votos\n", pre_zureta);
            printf("Prefeito Senhor Gomes: %d votos\n", pre_gomes);
            printf("Votos Nulo: %d votos\n\n", voto_nulo_prefeito);

            system("pause");
            system("cls");
            break;
        // Sair do programa
        case 3:
            opcao_menu = 3;
            break;
        default:
        	printf("Opção invalida!");
        	Sleep(1500);
        	system("cls");
            break;
        }
    }

    return 0;
}
