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
/////////////////////////////////Ordem de exibi��o//////////////////////////////////////
int main()
{
  setlocale(LC_ALL,"");
  system("cls");
menu();
go();
}

/////////////////////////////////tela de In�cio//////////////////////////////////////
    int menu()
    {printf("\n\n\t--------------------SIMULA��O------------------------\n");
    printf("\tAVISO PARA RENOVAR A HABILITA��O AP�S 3 ANOS OU MAIS\n\n\t\t");
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

/////////////////////////////////n�o habilita//////////////////////////////////////
    if(idade <= 17){
        printf("Menor de idade\n");
        system("pause");
   main();
    }

/////////////////////////////////ano da habilita��o//////////////////////////////////////
    else{
        printf("digite no formato 00/00/0000 o dia o m�s e ano em que tirou a habilitacao:\n");
        scanf("%d/%d/%d", &d, &m, &a);
        alert = ano - a;
        system("pause");
/////////////////////////////////Data inv�l�da//////////////////////////////////////
        if( d>=31|| m>=13){
            printf("\n------Data inv�lida\n");
            system("pause");
           main();
        }
    }

/////////////////////////////////renova habilita��o//////////////////////////////////////
    if(alert==3)
    {
       if ( m>=mes ){
    printf("\n------Est� na hora de renovar a habilita��o!\n");
    system("pause");
        main();
    }else
    {   printf("\n------Fique atento! em pouco tempo precisar� renovar sua habilita��o\n");
        system("pause");
       main();
        }
}

    if(alert>=4)
{
    printf("\n------Est� na hora de renovar a habilita��o!\n");
    system("pause");
    main();
}

/////////////////////////////////n�o renova//////////////////////////////////////
else{
    printf("\n------Tudo ok ainda n�o est� na hora de renovar a habilita��o\n");
    system("pause");
    main();
}


}

