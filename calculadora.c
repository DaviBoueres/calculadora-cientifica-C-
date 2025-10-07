#include <stdio.h> //biblioteca de saida e entrada de dados 
#include <math.h> //biblioteca que vai importar as funções matematicas
#include <stdlib.h> //biblioteca Importa funções utilitárias (como conversões, alocação de memória, etc

//inicio do bloco de comando
int main() {
	//1 definir as variaveis do tipo double
	double pnumero, snumero, tnumero, qnumero, delta, resultado, resultado2, pcima1, pbaixo, pcima2, acao;//variavel do tipo double para maior precisão das casas decimais 
	//variaveis do tipo inteiro
	int escolha, continuar = 0; //
	const double  pi = 3.1415926535897;//const para que o valor de pi não possa ser alterado durante o programa
	double *array; //para as funcoes de soma, subtração e multiplicação 
	int tamanho;//variavel auxiliar para funcões que usam array 
	
	while (continuar <= 0)	{ //inicio do loop, se continuar igual a 1 ele reinicia.
		pnumero = 0.0;
        snumero = 0.0;
        tnumero = 0.0;
        qnumero = 0.0;
        delta = 0.0;
        resultado = 0.0;    // todos os valores voltam a ser 0 para evitar lixo da mamoria.
        resultado2 = 0.0;
        pcima1 = 0.0;
        pbaixo = 0.0;
        pcima2 = 0.0;
        acao = 0.0;
        escolha = 0;
        tamanho = 0;
	
    printf("\n===========================================================================\n");
    printf("                          CALCULADORA CIENTIFICA\n");
    printf("===========================================================================\n\n");
    printf("  [ 1] Adicao             [ 2] Subtracao             [ 3] Multiplicacao\n");
    printf("  [ 4] Divisao            [ 5] Exponenciacao         [ 6] Modulo (Resto)\n");
    printf("  [ 7] Porcentagem        [ 8] Hipotenusa            [ 9] Raiz Quadrada\n");
    printf("  [10] Raiz Cubica        [11] Seno                  [12] Cosseno\n");
    printf("  [13] Tangente           [14] Arcseno               [15] Arccosseno\n");
    printf("  [16] Arctangente        [17] Logaritmo base 10     [18] Logaritmo Natural\n");
    printf("  [19] Fatorial           [20] Radianos para Graus   [21] Arredondar p Baixo\n");
    printf("  [22] Arredondar p Cima  [23] Graus para Radianos   [24] Teorema de Pitagoras\n");
    printf("  [25] Bhaskara\n\n");
    printf("===========================================================================\n\n");


    printf("Digite o numero da operacao desejada: ");
    scanf("%d", &escolha); // "%d" especificador de numero com casas decimais "&" auxilia os dados lidos pelo scanf().
    
    //otimizações para evitar repetições.
    
    if (escolha >= 5 && escolha <= 8) {			// funções que usam 2 numeros 
        printf("Digite o primeiro numero: ");
        scanf("%lf", &pnumero);
        printf("Digite o segundo numero: ");
        scanf("%lf", &snumero);
    } 
    else if (escolha >= 9 && escolha <= 23) {  	// funçoes que usam somente 1 numero
        printf("Digite o numero: ");
        scanf("%lf", &pnumero);
    }
	else if (escolha == 24 || escolha == 25) {		// funções que usam 3 numeros
		printf("Digite o A: ");
		scanf("%lf", &pnumero);
		printf("Digite o B: ");
		scanf("%lf", &snumero);
		printf("Digite o C: ");
		scanf("%lf", &tnumero);
	}
	
	switch (escolha){ //switch (botão) de escolha das funçoes
		case 1: // Adição
    printf("Digite o total de números que deseja somar: ");
    scanf("%d", &tamanho);

    acao = 0; // Inicializa a variável de soma

    array = (int *) malloc(tamanho * sizeof(int)); // Aloca memória para o array

    if (array == NULL) {
        printf("Erro ao alocar memória.\n");
        break;
    }

    printf("Digite %d elementos:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
        acao += array[i]; // Soma o valor à variável acao
    }

    printf("Resultado da soma: %d\n", acao); // Exibe o resultado

    free(array); // Libera a memória alocada
    break;

    break;
		case 2: // SubtraÃ§Ã£o
            printf("Digite o valor inicial: ");
            scanf("%lf", &acao); 							// Primeiro valor e dado, sendo ele o valor primÃ¡rio.

            printf("Quantos numeros deseja subtrair desse valor? ");  
            scanf("%d", &tamanho);

            if (tamanho > 0) {
            printf("Digite os %d numeros a serem subtraidos:\n", tamanho);
            for (int i = 0; i < tamanho; i++) {
            double subtracao;								// Uma variÃ¡vel Ã© feita somente para essa funÃ§Ã£o.
            printf("Subtrair o valor %d: ", i + 1);
            scanf("%lf", &subtracao);
            acao -= subtracao; 								// A cada ciclo uma nova subtraÃ§Ã£o Ã© feita no valor primÃ¡rio
                }
            }

            printf("\nResultado: %g\n", acao);
            break;
        case 3:// MultiplicaÃ§Ã£o
            printf("Digite o total de nÃºmeros a Multiplicar:");
			scanf("%d", &tamanho);
			
			acao = 1;										// AÃ§Ã£o Ã© inicialmente 1 porque nÃ£o dÃ¡ para multiplicar por zero e continuar a funÃ§Ã£o.

			array = (int *) malloc(tamanho * sizeof(int));
			
			printf("Digite %d elementos:\n", tamanho);
			for (int i = 0; i < tamanho; i++) {
			printf("Elemento %d: ", i + 1);
			scanf("%d", &array[i]);
			acao *= array[i]; 
			}
			
			printf("\nResultado: %g\n", acao);
			free(array);
            break;
        case 4:// DivisÃ£o
            if (snumero == 0) {
                printf("\nNÃ£o Ã© possÃ­vel dividir por zero.\n");		// Tratamento de erro caso o segundo nÃºmero seja 0 Ã© dado um aviso.
            } else {
                resultado = pnumero / snumero;
                printf("\nResultado: %g\n", resultado);
            }
            break;
        case 5:// ExponenciaÃ§Ã£o
            resultado = pow(pnumero, snumero);				//Foram Ãºtilizadas muitas das funÃ§Ãµes da biblioteca math.h daqui para frente.
            printf("\nResultado: %g\n", resultado);
            break;
        case 6:// Modulo resto da divisÃ£o
            resultado = fmod(pnumero, snumero);
            printf("\nResultado: %g\n", resultado);
            break;
        case 7:// Porcentagem
            resultado = (pnumero / 100.0) * snumero;		//Praticamente uma regra de 3 feita em cÃ³digo.
            printf("\nresultado: %g\n", resultado);
            break;
        case 8:// Hipotenusa
            resultado = hypot(pnumero, snumero);			
            printf("\nResultado: %g\n", resultado);
            break;
        case 9:// Raiz quadrada
            resultado = sqrt(pnumero);
            printf("\nResultado: %g\n", resultado);
            break;
        case 10:// Raiz cubica
            resultado = cbrt(pnumero);
            printf("\nResultado: %g\n", resultado);
            break;
        case 11:{// Seno
            double radianos = pnumero * (pi / 180.0);		//EquaÃ§Ã£o para transformar graus em radianos, jÃ¡ que ele sÃ³ aceita radianos.
            resultado = sin(radianos);
            printf("\nresultado: %g\n", resultado);
		}
            break;
        case 12:{// Cosseno
            double radianos = pnumero * (pi / 180.0);
            resultado = cos(radianos);
            printf("\nResultado: %g\n", resultado);
		}
            break;
        case 13:{ // Tangente
            double radianos = pnumero * (pi / 180.0);
            resultado = tan(radianos);
            printf("\nResultado: %g\n", resultado);
		}
            break;
        case 14:// Arcseno
            resultado = asin(pnumero) * (180.0 / pi);
            printf("\nResultado (em graus): %g\n", resultado);
            break;
        case 15:// Arccosseno
            resultado = acos(pnumero) * (180.0 / pi);
            printf("\nResultado (em graus): %g\n", resultado);
            break;
        case 16:// Arctangente
            resultado = atan(pnumero) * (180.0 / pi);
            printf("\nResultado (em graus): %g\n", resultado);
            break;
        case 17:// Logaritmo na base 10
            resultado = log10(pnumero);
            printf("\nResultado: %g\n", resultado);
            break;
        case 18:// Logaritmo natural
            resultado = log(pnumero);
            printf("\nResultado: %g\n", resultado);
            break;
        case 19:// Fatorial
            resultado = 1;
                for (int i = 1; i <= (int)pnumero; i++) {
                    resultado *= i;
                }
                printf("\nResultado: %g\n", resultado);
            break;
        case 20:// Radianos para Graus
            resultado = pnumero * (180.0 / pi);
            printf("\nResultado graus: %g\n", resultado);
            break;
        case 21:// Arredondar para baixo
            resultado = floor(pnumero);
            printf("\nResultado: %g\n", resultado);
            break;
        case 22:// Arredondar 
            resultado = ceil(pnumero);
            printf("\nresultado: %g\n", resultado);
            break;
        case 23:// Graus para radianos
            resultado = pnumero * (pi / 180.0);
            printf("\nResultado radianos: %g\n", resultado);
            break;
        case 24:// Teorema de Pitagoras ;; Cada passo da equaÃ§Ã£o foi feito para cada possÃ­vel icognita.
			    if (pnumero == 0) {
				pnumero = (snumero * snumero) + (tnumero * tnumero);		
				resultado = sqrt(pnumero);
				printf("\nResultado: %g\n", resultado);
			} else if (snumero == 0) {
				pcima1 = (tnumero * tnumero);
				pbaixo = (pnumero * pnumero);
				pcima2 = pbaixo - pcima1;
				resultado = sqrt(pcima2);
				printf("\nResultado: %g\n", resultado);
			} else if (tnumero == 0) {
				pcima1 = (snumero * snumero);
				pbaixo = (pnumero * pnumero);
				pcima2 = pbaixo - pcima1;
				resultado = sqrt(pcima2);
				printf("\nResultado: %g\n", resultado);
			}
            break;
        case 25:// EquaÃ§Ã£o de segundo grau usando baskara, tem tratamento de erro para cada possÃ­vel delta.
			delta = pow(snumero, 2) - (4 * (pnumero * tnumero));
			if (delta > 0) {
				pcima1 = -snumero + sqrt(delta);
				pcima2 = -snumero - sqrt(delta);
				pbaixo = 2 * pnumero;
				resultado = pcima1 / pbaixo;
				resultado2 = pcima2 / pbaixo;
				printf("\nPrimeiro Resultado %.2lf \n", resultado);
				printf("Segundo Resultado %.2lf\n", resultado2);
				
			} else if (delta == 0) {
			resultado = -snumero / (2 * pnumero);
        
			printf("A equacao possui uma unica raiz real:\n");
			printf("x = %.2lf\n", resultado);
				
			} else if (delta < 0) {
			printf("Delta negativo.\n");
			printf("A raiz nÃ£o estÃ¡ nos nÃºmeros reais.\n");
				
			}
            break;
        default:
            printf("\nOperaÃ§Ã£o invalida.\n");	
	}
	printf("\n Continuar Calculando?\n 1 para sim \n 2 para nÃ£o \n Resposta: ");  // parte do loop while, onde o valor de continuar e dado.
	scanf("%d", &continuar);
		
	}
	return 0;
}