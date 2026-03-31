#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero, n, i, conta, voltar, tabuada, inicio, max;
    float soma, notas[10], media, soma1, soma2, resultado, med1, med;
    double pot;
    char resposta;
    bool continuar = true, continueLoop = true;

    void print_adaptativo(float num)
    {
        if (fmod(num, 1.0) == 0.0)
            printf("%.0f", num);
        else
            printf("%g", num);
    }

    printf("Deseja calcular um número? (Sim/Não): ");
    while (scanf(" %c", &resposta) != 1 || !isalpha(resposta))
    {
        printf("\nInvalido. Digite apenas letras: ");
        while (getchar() != '\n')
            ;
    }
    printf("\033[2J\033[H");

    if (tolower(resposta) != 's')
    {
        printf("Programa finalizado!\n");
        return 0;
    }

    while (1)
    {
        printf(",----------------,--------,\n");
        printf("|%-15s |%-7s |\n", "Conta", "Opção");
        printf("|----------------|--------|\n");
        printf("|%-15s | %-7d|\n", "Soma", 1);
        printf("|%-15s | %-7d|\n", "Subtração", 2);
        printf("|%-15s | %-7d|\n", "Multiplicação  ", 3);
        printf("|%-15s | %-7d|\n", "Divisão", 4);
        printf("|%-15s | %-7d|\n", "Potenciação", 5);
        printf("|%-15s | %-7d|\n", "Média", 6);
        printf("|%-15s | %-7d|\n", "Tabuada", 7);
        printf("|%-15s | %-7d|\n", "Encerrar", 0);
        printf("'----------------^--------'\n");

        printf("\nEscolha uma opção: ");
        while (scanf("%d", &conta) != 1)
        {
            printf("\n\nInvalido. Digite um número: ");
            while (getchar() != '\n')
                ;
        }

        printf("\033[2J\033[H");

        continuar = true;
        continueLoop = true;

        int posresultado()
        {
            {

                printf("\n\n,------------------,--------,\n");
                printf("|%-17s | %-7d|\n", "Repetir", 1);
                printf("|%-17s | %-7d|\n", "Voltar ao inicio", 2);
                printf("|%-17s | %-7d|\n", "Encerrar", 0);
                printf("'------------------^--------'\n");

                printf("\nEscolha uma opção: ");
                while (scanf("%d", &voltar) != 1)
                {
                    printf("\n\nInvalido. Digite um numero: ");
                    while (getchar() != '\n')
                        ;
                }

                printf("\033[2J\033[H");
            }
            switch (voltar)
            {
            case 0:
                printf("Programa finalizado.\n");
                exit(0);
                return 0;
            }

            switch (voltar)
            {
            case 2:
                printf("\033[2J\033[H");
                continuar = false;
                break;
            }

            switch (voltar)
            {
            case 1:
                printf("\033[2J\033[H");
                continuar = true;
                break;
            }
        }

        int posfinal()
        {
            {
                printf("\n,----------,--------,\n");
                printf("|%-9s | %-7d|\n", "Repetir", 1);
                printf("|%-9s | %-7d|\n", "Voltar", 2);
                printf("|%-9s | %-7d|\n", "Início", 3);
                printf("|%-9s | %-7d|\n", "Encerrar", 0);
                printf("'----------^--------'\n");

                printf("\nEscolha uma opção: ");
                while (scanf("%d", &voltar) != 1)
                {
                    printf("\n\nInvalido. Digite um número: ");
                    while (getchar() != '\n')
                        ;
                }

                printf("\033[2J\033[H");
            }
            switch (voltar)
            {
            case 0:
                printf("Programa finalizado.\n");
                exit(0);
                return 0;
            }

            switch (voltar)
            {
            case 1:
                printf("\033[2J\033[H");
                continueLoop = true;
                break;
            }

            switch (voltar)
            {
            case 2:
                printf("\033[2J\033[H");
                continueLoop = false;
                break;
            }

            switch (voltar)
            {
            case 3:
                printf("\033[2J\033[H");
                continueLoop = false;
                continuar = false;
                break;
            }
        }

        switch (conta)
        {
        case 0:
            printf("Programa finalizado.\n");
            return 0;
        }

        printf("\033[2J\033[H");

        switch (conta)
        {
        case 1:
        {

            while (continuar)

            {
                printf("Adicione um número: ");
                scanf("%f", &soma1);

                printf("Somado a: ");
                scanf("%f", &soma2);

                resultado = soma1 + soma2;

                printf("\n");
                print_adaptativo(soma1);
                printf(" + ");
                print_adaptativo(soma2);
                printf(" = ");
                print_adaptativo(resultado);
                printf("\n\n");

                posresultado();
            }
        }
        }

        switch (conta)
        {
        case 2:
        {
            while (continuar)
            {
                printf("Adicione um número: ");
                scanf("%f", &soma1);

                printf("Menos: ");
                scanf("%f", &soma2);

                resultado = soma1 - soma2;

                printf("\n");
                print_adaptativo(soma1);
                printf(" - ");
                print_adaptativo(soma2);
                printf(" = ");
                print_adaptativo(resultado);
                printf("\n\n");

                posresultado();
            }
        }
        }

        switch (conta)
        {

        case 3:
        {
            while (continuar)
            {
                printf("Adicione um número: ");
                scanf("%f", &soma1);

                printf("Multiplicado por: ");
                scanf("%f", &soma2);

                resultado = soma1 * soma2;

                printf("\n");
                print_adaptativo(soma1);
                printf(" x ");
                print_adaptativo(soma2);
                printf(" = ");
                print_adaptativo(resultado);
                printf("\n\n");

                posresultado();
            }
        }
        }

        switch (conta)
        {

        case 4:
        {
            printf("Adicione um número: ");
            scanf("%f", &soma1);

            printf("Dividido por: ");
            scanf("%f", &soma2);

            resultado = soma1 / soma2;

            printf("\n");
            print_adaptativo(soma1);
            printf(" / ");
            print_adaptativo(soma2);
            printf(" = ");
            print_adaptativo(resultado);
            printf("\n\n");

            posresultado();
        }
        }

        switch (conta)
        {

        case 5:
        {
            while (continuar)
            {
                printf("Deseja a tabela de potenciação de qual número? ");
                scanf("%d", &n);

                {
                    printf("\nQual seria a primeira potência? ");
                    scanf("%d", &inicio);

                    printf("\nQual seria a última potência? ");
                    scanf("%d", &max);

                    if (inicio > max)
                    {
                        printf("\nA primemira potência não pode ser maior que a final.\n\nCarregando...\n");
                        fflush(stdout);
                        sleep(5);
                        printf("\033[2J\033[H");
                        fflush(stdout);
                        continue;
                    }

                    printf("\033[2J\033[H");

                    printf("\nAqui esta a tabela de potenciação do número: %d\n\n", n);

                    pot = 1;
                    for (i = 0; i < inicio; i++)
                    {
                        pot *= n;
                    }

                    for (i = inicio; i <= max; i++)
                    {
                        if (pot >= 1e23)
                        {
                            printf("%d^%d = %.5e\n", n, i, pot);
                        }
                        else
                        {
                            printf("%d^%d = %.0f\n", n, i, pot);
                        }
                        pot *= n;
                    }
                    printf("\n");

                    posresultado();
                }
            }
        }
        }

        switch (conta)
        {

        case 6:
        {
            while (continuar)
            { 
                printf("Qual a quantidade de valores: ");
                scanf("%f", &med);
                printf("\n");

                for (i = 0; i < med; i++) {
        			printf("Digite um valor %d: ", i + 1);
        			scanf("%f", &notas[i]);
        			soma += notas[i];
    			}

    			media = soma / med;

                printf("\nMédia: ");
                print_adaptativo(media);

                posresultado();
            }
        }
        }

        switch (conta)
        {

        case 7:
        {
            while (continuar)
            {
                printf(",----------------,--------,\n");
                printf("|%-15s |%-7s |\n", "tabela", "Opção");
                printf("|----------------|--------|\n");
                printf("|%-15s | %-7d|\n", "Soma", 1);
                printf("|%-15s | %-7d|\n", "Subtração", 2);
                printf("|%-15s | %-7d|\n", "Multiplicação  ", 3);
                printf("|%-15s | %-7d|\n", "Divisão", 4);
                printf("|%-15s | %-7d|\n", "Voltar", 0);
                printf("'----------------^--------'\n");
                printf("\nEscolha uma opção: ");
                while (scanf("%d", &tabuada) != 1)
                {
                    printf("\n\nInvalido. Digite um número: ");
                    while (getchar() != '\n');
                }

                printf("\033[2J\033[H");

                switch (tabuada)
                {
                case 0:
                    printf("Programa finalizado.\n");
                    printf("\033[2J\033[H");
                    continuar = false;
                    break;
                }

                switch (tabuada)
                {
                case 1:
                {
                    while (continueLoop)

                    {
                        printf("Deseja a tabuada de soma de qual número? ");
                        scanf("%d", &numero);
                        printf("\033[2J\033[H");

                        printf("Aqui esta a tabuada de soma do número: %d\n\n", numero);

                        printf(",---------------,\n");

                        for (i = 0; i <= 10; i++)
                        {
                            printf("| %-2d + %-2d = %-3d |\n", numero, i, numero + i);
                        }
                        printf("'---------------'\n");

                        posfinal();
                    }
                }
                }

                switch (tabuada)
                {
                case 2:
                {
                    while (continueLoop)
                    {
                        printf("Deseja a tabuada de subtração de qual número? ");
                        scanf("%d", &numero);
                        printf("\033[2J\033[H");

                        printf("Aqui esta a tabuada de subtração do número: %d\n\n", numero);

                        printf(",---------------,\n");

                        for (i = numero; i <= numero + 10; i++)
                        {
                            printf("| %-2d- %-2d = %-3d |\n", i, numero, i - numero);
                        }
                        printf("'---------------'\n");
                        
                        posfinal();
                    }
                }
                }

                switch (tabuada)
                {
                case 3:
                {
                    while (continueLoop)
                    {
                        printf("Deseja a tabuada de multiplicação de qual número? ");
                        scanf("%d", &numero);
                        printf("\033[2J\033[H");

                        printf("Aqui esta a tabuada de multiplicação do número: %d\n\n", numero);

                        printf(",---------------,\n");

                        for (i = 0; i <= 10; i++)
                        {
                            printf("| %-2d x %-2d = %-3d |\n", numero, i, numero * i);
                        }
                        printf("'---------------'\n");
                        
                        posfinal();
                    }
                }
                }

                switch (tabuada)
                {
                case 4:
                {
                    while (continueLoop)
                    {
                        printf("Deseja a tabuada de divisão de qual número? ");
                        scanf("%d", &numero);
                        printf("\033[2J\033[H");

                        printf("\nAqui esta a tabuada de divisão do número: %d\n\n", numero);

                        printf(",---------------,\n");

                        for (i = 0; i <= 10; i++)
                        {
                            printf("| %-2d / %-2d = %-3d |\n", numero * i, numero, i);
                        }
                        printf("'---------------'\n");
                        
						posfinal();
                    }
                }
                }
                continueLoop = true;
            }
        }
        }
    }
}
