#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int idade;
int alert;
int d;
int m;
int a;
int dia;
int mes;
int ano;
/////////////////////////////////Ordem de exibição//////////////////////////////////////
int main()
{
  setlocale(LC_ALL,"");
  system("cls");
menu();
go();
}

/////////////////////////////////tela de Início//////////////////////////////////////
    int menu()
    {printf("\n\n\t--------------------SIMULAÇÃO------------------------\n");
    printf("\tAVISO PARA RENOVAR A HABILITAÇÃO APÓS 3 ANOS OU MAIS\n\n\t\t");
    system("pause");
    system("cls");
    }


int go(){
/////////////////////////////////data atual//////////////////////////////////////
    struct tm *atual;
    time_t segundos;
    time(&segundos);
    atual = localtime(&segundos);
    dia = ("\nData ........: %d/",atual->tm_mday);
    mes = ("%d/",atual->tm_mon+1);
    ano = ("%d\n\n",atual->tm_year+1900);

/////////////////////////////////Idade//////////////////////////////////////
  printf("Qual a sua idade?\n");
    scanf("%d", &idade);

/////////////////////////////////não habilita//////////////////////////////////////
    if(idade <= 17){
        printf("Menor de idade\n");
        system("pause");
   main();
    }

/////////////////////////////////ano da habilitação//////////////////////////////////////
    else{
        printf("digite no formato 00/00/0000 o dia o mês e ano em que tirou a habilitacao:\n");
        scanf("%d/%d/%d", &d, &m, &a);
        alert = ano - a;
        system("pause");
/////////////////////////////////Data inválída//////////////////////////////////////
        if( d>=31|| m>=13){
            printf("\n------Data inválida\n");
            system("pause");
           main();
        }
    }

/////////////////////////////////renova habilitação//////////////////////////////////////
    if(alert==3)
    {
       if ( m>=mes ){
    printf("\n------Está na hora de renovar a habilitação!\n");
    system("pause");
        main();
    }else
    {   printf("\n------Fique atento! em pouco tempo precisará renovar sua habilitação\n");
        system("pause");
       main();
        }
}

    if(alert>=4)
{
    printf("\n------Está na hora de renovar a habilitação!\n");
    system("pause");
    main();
}

/////////////////////////////////não renova//////////////////////////////////////
else{
    printf("\n------Tudo ok ainda não está na hora de renovar a habilitação\n");
    system("pause");
    main();
}


}

