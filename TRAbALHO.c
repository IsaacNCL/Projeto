
  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include <time.h>

void menuemprestimo()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°              EMPRESTIMOS                    °\n");
printf("\t\t°              1. NOVO EMPRESTIMO             °\n");
printf("\t\t°              2. CONFIRMAR DEVOLUCAO         °\n");
printf("\t\t°              3. CANCELAR EMPRESTIMO         °\n");
printf("\t\t°              4. LISTAR EMPRESTIMOS          °\n");
printf("\t\t°              4. VOLTAR                      °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°                                             °\n");
printf("\t\t°               DIGITE SUA OPCAO:             °\n");
printf("\t\t°                                             °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void listaemprestimo()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°              LISTAR EMPRESTIMOS POR:        °\n");
printf("\t\t°              1. LISTAR TODOS                °\n");
printf("\t\t°              2. LISTAR POR LIVRO            °\n");
printf("\t\t°              3. LISTAR POR ALUNO            °\n");
printf("\t\t°              4. VOLTAR                      °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°                                             °\n");
printf("\t\t°               DIGITE SUA OPCAO:             °\n");
printf("\t\t°                                             °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void menu()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°              MENU DE OPCOES                 °\n");
printf("\t\t°                1. ACERVO                    °\n");
printf("\t\t°                2. ALUNO                     °\n");
printf("\t\t°                3. EMPRESTIMO                °\n");
printf("\t\t°                4. SAIR                      °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°                                             °\n");
printf("\t\t°               DIGITE SUA OPCAO:             °\n");
printf("\t\t°                                             °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void menuacervo()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°                   ACERVO                    °\n");
printf("\t\t°             1. CADASTRAR LIVRO              °\n");
printf("\t\t°             2. EDITAR LIVRO                 °\n");
printf("\t\t°             3. REMOVER LIVRO                °\n");
printf("\t\t°             4. LISTA LIVROS                 °\n");
printf("\t\t°             5. VOLTAR                       °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°                                             °\n");
printf("\t\t°               DIGITE SUA OPCAO:             °\n");
printf("\t\t°                                             °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
void menuaalunos()
{
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°                   ALUNOS                    °\n");
printf("\t\t°             1. CADASTRAR ALUNO              °\n");
printf("\t\t°             2. REMOVER ALUNO                °\n");
printf("\t\t°             3. EDITAR ALUNO                 °\n");
printf("\t\t°             4. LISTAR ALUNOS                °\n");
printf("\t\t°             5. VOLTAR                       °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\n\n\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\t\t°                                             °\n");
printf("\t\t°               DIGITE SUA OPCAO:             °\n");
printf("\t\t°                                             °\n");
printf("\t\t°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\t\t\t\t");
}
main()
{
int opcao,opcao2;
    do
    {
        menu();
        scanf("%d",&opcao);
        system("cls");
            switch(opcao){

                case 1:{
                        do{
                            menuacervo();

                            scanf("%d",&opcao2);
                            system("cls");

                                switch(opcao2){
                                    case 1:{
                                    printf("CADASTRO\n");
                                    system("cls");break;
                                    }break;
                                    case 2:{
                                    printf("EDITAR LIVRO\n");
                                    system("cls");}break;
                                    case 3:{
                                    printf("REMOVER LIVRO\n");
                                    system("cls");}break;
                                    case 4:{
                                    printf("LISTAR LIVROS CADASTRADOS");
                                    system("cls");}break;
                                    case 5:
                                    system("cls");break;}}
                        while(opcao2>=1&&opcao2<5);}break;
                case 2: {
                        do{
                            menuaalunos();
                            scanf("%d",&opcao2);
                            system("cls");
                                switch (opcao2)
                                {
                                    case 1:{
                                     printf("CADASTRAR ALUNO\n");
                                     system("cls");}break;
                                    case 2:{
                                     printf("REMOVER ALUNO\n");
                                     system ("cls");}break;
                                    case 3:{
                                     printf("EDITAR ALUNO\n");
                                     system("cls");}break;
                                    case 4:{
                                     printf("LISTAR ALUNOS \n");
                                     system("cls");}break;
                                     case 5:{
                                     printf("VOLTAR\n");
                                     system("cls");}break;
                                }
                        }while(opcao2>=1&&opcao2<5);}
                case 3:  {do{
                          menuemprestimo();
                          scanf("%d",&opcao2);
                          system("cls");
                            switch(opcao2)
                            {
                                    case 1:{
                                    printf("NOVO EMPRESTIMO\n");
                                    system("cls");}break;
                                    case 2:{
                                    printf("CONFIRMAR DEVOLUCAO\n");
                                    system("cls");}break;
                                    case 3:{
                                    printf("CANCELAR EMPRESTIMO\n");
                                    system("cls");
                                    }break;
                                    case 4:
                                    case 5:{
                                    printf("VOLTAR\n");
                                    system("cls");
                                    }break;
                            }



                          }while(opcao2>=1&&opcao2<5);}
                case 4: {
                    // adicionar a funçao time...
                        printf("OPERACAO ENCERRADA\n");
                        system("cls");
                        }break;
    }
    }
while(opcao>=1&&opcao<4);

printf("OPCAO INVALIDA");

 }

