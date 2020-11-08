/*
Desenvolva fun??es, utilizando passagem de par?metros, que:
*Leia os elementos de uma matriz, de acordo com sua dimens?o.
*Mostre os elementos de uma matriz, de acordo com sua dimens?o.
*Troque os elementos da linha X pela linha Y.
*Troque os elementos da coluna X pela coluna Y.
*Troque os elementos da diagonal principal com a diagonal secund?ria.
*Verifique se uma matriz ? sim?trica.
*Verifique se uma matriz ? um quadrado m?gico.
*Verifique se uma matriz ? quadrado latino.
*Verifique se uma matriz ? matriz de permuta??o
? necess?rio desenvolver uma programa principal, que utilizando os recursos do teclado
(setas, tecla <esc>, tecla <enter>, <F1> para ajuda, etc.), permite ao usu?rio utilizar as
fun??es desenvolvidas. Deve-se utilizar o conceito de passagem de par?metros no
desenvolvimento das fun??es. N?o deve haver impress?o de resultado (matriz resultante)
dentro da fun??o, pois a fun??o deve apenas retornar o solicitado.
*/

// Professora, nos casos 3 e 4 onde é para trocar as linhas e colunas, quando rodo pelo dev ou pelo vs code da numeros estranhos na resposta, porem no compilador online a função responde corretamente! não sei oq pode ser, obrigado!


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include <windows.h>

int matriz1(int x, int y);
int matriz2(int x, int y);
int matriz3(int x, int y);
int matriz4(int x, int y);
int matriz5(int x, int y);
int matriz6();
int matriz7();
int matriz8();
int matriz9();

void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


int main(){
  
    char resp, esc;
    int dimensaoX, dimensaoY, opc;
    int a,b,L,L2;
    do{
        inicio:
        opc=0;
        L=1;L2=1;b=1;
        system("cls");
        system("color 0f");
    
	menu();
    do{
            system("color 2F");
            gotoxy(1,L);
            printf("-->");
            gotoxy(10,6);
            if(kbhit){a=getch();}
            if(a == 80 && b < 9){L2=L;L++;b++;_beep(400,100);}
            if(a == 72 && b > 1){L2=L;L--;b--;_beep(500,100);}
            if(L!=L2){gotoxy(1,L2);printf("   ");L2=L;}
            if(a == 13){opc=b;_beep(500,100);}
			if(a == 27){opc=10;_beep(500,100);}
            }while(opc == 0);
    
    
    switch(opc){
            case 1:
            system("cls");
                printf("Digite o valor X da dimensao da matriz: ");
                scanf("%d",&dimensaoX);
                printf("Digite o valor Y da dimensao da matriz: ");
                scanf("%d",&dimensaoY);
                matriz1(dimensaoX, dimensaoY);
                break;
            case 2:
            system("cls");
                printf("Digite o valor X da dimensao da matriz: ");
                scanf("%d",&dimensaoX);
                printf("Digite o valor Y da dimensao da matriz: ");
                scanf("%d",&dimensaoY);
                matriz1(dimensaoX, dimensaoY);
	            matriz2(dimensaoX, dimensaoY);
	            break;
            case 3:
            system("cls");
                printf("Digite o valor X da dimensao da matriz: ");
                scanf("%d",&dimensaoX);
                printf("Digite o valor Y da dimensao da matriz: ");
                scanf("%d",&dimensaoY);
                matriz1(dimensaoX, dimensaoY);
	            matriz3(dimensaoX, dimensaoY);
	            matriz2(dimensaoX, dimensaoY);
	            break;
            case 4:
            system("cls");
                printf("Digite o valor X da dimensao da matriz: ");
                scanf("%d",&dimensaoX);
                printf("Digite o valor Y da dimensao da matriz: ");
                scanf("%d",&dimensaoY);
                matriz1(dimensaoX, dimensaoY);
                matriz4(dimensaoX, dimensaoY);
                matriz2(dimensaoX, dimensaoY);
                break;
            case 5:
            system("cls");
                printf("Digite a ordem da matriz: ");
                scanf("%d",&dimensaoX);
                dimensaoY = dimensaoX;
                matriz5(dimensaoX, dimensaoY);
                break;
            case 6:
            system("cls");
                matriz6();
                break;
            case 7:
            system("cls");
                matriz7();
                break;
            case 8:
            system("cls");
                matriz8();
                break;
            case 9:
            system("cls");
                matriz9();
                break;
            case 10:
			   system("cls");
			   printf("**Central de ajuda**\n");
			   printf(" 1- Voce deve utilizar as setas do teclador para mover pelo menu e escolher qual topico quer realizar atraves da tecla enter!\n");
			   printf(" 2- Reponda as perguntas de acordo com a matriz desejada.\n");
			   printf("Bom trabalho!!\n");
			   printf("Caso queira repetir ou sair, as instrucoes estarao na tela.");
			   printf("\n______________________________________________________________________________________________");
			   break;
            
            

    }
    printf("\nPara continuar digite 's', para sair digite qualquer tecla");
    resp = getch();
    }while(resp == 115);
}


int menu(){
    printf("                       Menu de opcoes:\n");
    printf("     Leia os elementos de uma matriz, de acordo com sua dimensao.\n");
    printf("     Mostre os elementos de uma matriz, de acordo com sua dimensao.\n");
    printf("     Troque os elementos da linha X pela linha Y.\n");
    printf("     Troque os elementos da coluna X pela coluna Y.\n");
    printf("     Troque os elementos da diagonal principal com a diagonal secundaria.\n");
    printf("     Verifique se uma matriz e simetrica.\n");
    printf("     Verifique se uma matriz e um quadrado magico.\n");
    printf("     Verifique se uma matriz e quadrado latino.\n");
    printf("     Verifique se uma matriz e matriz de permutacao.\n");
    printf("\n     Aperte 'esc' para informacoes");


}
	matriz1(int x, int y){
	int Matriz[x][y];
  int linha, coluna;
    for(linha=0;linha<x;linha++){
		for(coluna=0;coluna<y;coluna++){
			printf("Insira o valor do elemento do indice %d%d:  \n",linha,coluna);
			scanf("%d",&Matriz[linha][coluna]);
		}
	}
	return Matriz;
}
matriz2(int x, int y){
    int Matriz[x][y];
    int linha, coluna;
	for(linha=0;linha<x;linha++){
	    printf("\n|");
	    for(coluna=0;coluna<y;coluna++){
		    printf("%4d",Matriz[linha][coluna]);
	    }
	    printf("|");		
    }
}
matriz3(int x, int y){
    int Matriz[x][y];
    int lx,ly;
    int linha, coluna;
   do{ printf("\nDigite as linhas que voce deseja trocas respectivamente: \n");
    scanf("%d",&lx);
    scanf("%d",&ly);}while(lx >= x || ly >= x);
    
    for(coluna=0;coluna<x;coluna++){
        Matriz[lx][coluna] = Matriz[ly][coluna];
        Matriz[ly][coluna] = Matriz[lx][coluna];  
    }
    
        }
matriz4(int x, int y){
int Matriz[x][y];
    int cx,cy;
    int linha, coluna;
    do{printf("\nDigite as colunas que voce deseja trocas respectivamente: \n");
    scanf("%d",&cx);
    scanf("%d",&cy);}while(cx >= y || cy >= y);
    
    for(linha=0;linha<x;linha++){
        Matriz[linha][cx] = Matriz[linha][cy];
        Matriz[linha][cy] = Matriz[linha][cx];  
        }
        }
matriz5(int x, int y){
	
	
        int Matriz[x][y];
    int dgP[x], dgS[x];
    int linha, coluna;
    for(linha=0;linha<x;linha++){
		for(coluna=0;coluna<y;coluna++){
			printf("Insira o valor do elemento do indice %d%d:  \n",linha,coluna);
			scanf("%d",&Matriz[linha][coluna]);
			if (linha==coluna){
				dgP[linha] = Matriz[linha][coluna];
			}
			if (x == y && (linha+coluna) == x-1){
				dgS[linha] = Matriz[linha][coluna];
			}
		}
	}
	for(linha=0;linha<x;linha++){
		for(coluna=0;coluna<y;coluna++){
			if (linha==coluna){
				Matriz[linha][coluna] = dgS[linha];
			}
			if (x == y && (linha+coluna) == x-1){
				Matriz[linha][coluna] = dgP[linha];
			}
		}
	}
    for(linha=0;linha<x;linha++){
	    printf("\n|");
	    for(coluna=0;coluna<y;coluna++){
		    printf("%4d",Matriz[linha][coluna]);
	    }
	    printf("|");		
    }
}


#define NMAX  100
#define TRUE    1
#define FALSE   0
matriz8(){
  int i, j, n, equadlatino, v[NMAX], m[NMAX][NMAX];

  printf ("Digite a ordem da matriz: ");
  scanf ("%d", &n);

  lematriz (m,n,n);
  printf("\n\nMatriz lida:\n");
  imprimematriz (m,n,n);

  equadlatino = TRUE; 
  for (i = 0; i < n && equadlatino == TRUE; i++)
   
    equadlatino = elatina(m[i], n);  
  
  for (j = 0; j < n && equadlatino == TRUE; j++) {
    
    for (i = 0; i < n; i++) 
      v[i] = m[i][j];
    
    equadlatino = elatina(v,n);
  }

  if (equadlatino == TRUE) 
    printf("\n\nA matriz e um quadrado latino.\n");
  else 
    printf("\n\nA matriz nao e um quadrado latino.\n");

  return 0;
}


 
void lematriz (int mat[][NMAX], int nlinhas, int ncolunas) {
  int i, j;

  for (i = 0; i < nlinhas; i++) {
  
    printf("Entre com os elementos da linha no. %d\n", i+1);
    for (j = 0; j < ncolunas; j++) 
      scanf("%d", &mat[i][j]); 
  }
}


void imprimematriz (int mat[][NMAX], int nlinhas, int ncolunas) {
  int i, j;

  for (i = 0; i < nlinhas; i++) {
    for (j = 0; j < ncolunas; j++) 
      printf("%4d", mat[i][j]);
    printf("\n");
  }
}


int estala (int v[], int n, int elemento) {
  int i;
  
  for (i = 0; i < n; i++) 
    if (v[i] == elemento) 
      return TRUE; 

  return FALSE; 
}


int elatina (int v[], int n){
  int i;

  for (i = 0; i < n; i++) 
    if (estala(v,n,i+1) == FALSE) 
      return FALSE;

  return TRUE;
} 

matriz7(){
    int  i, j,lin,col, retorno;
    
    do {
        printf ("Digite as dimensoes da matriz:\nPrecisa ser uma matriz quadrada!!\n");
        scanf ("%d %d", &lin, &col);
    }while (lin != col);
    int matriz[lin][col], somalin[col], somacol[lin],somadiag1=0, somadiag2=0;
    
    for (i=0; i<lin; i++){
        somalin[i] = 0;
        somacol[i] = 0;
    }
    printf ("Digite os elementos: \n");
    
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            scanf ("%d", &matriz[i][j]);
        }
    }
    
    for (i=0; i<lin; i++) {
        for (j=0; j<col; j++){
            somalin[i] += matriz[i][j];

        }

    }
    
    for (i=0; i<col; i++) {
        for (j=0; j<lin; j++){
            somacol[i] += matriz[j][i];

        }
    }
    
    for (i=0; i<lin; i++) {

        somadiag1 += matriz[i][i];

    }
    
    for (i=0; i<lin; i++) {
        for(j=0;j<lin;j++){

            if(j==(lin-1)-i){
                somadiag2 += matriz[i][j];
            }

        }

    }
    
    retorno = 1;
    if (somadiag1 != somadiag2){
        retorno = 0;
    }
    for (i=0; i<lin; i++){
        if (somalin[i] != somacol[i]){
            retorno = 0;
        }

    }
    for (i=0; i<lin-1; i++){
        if (somalin[i] != somalin[i+1] || somacol[i] != somacol[i+1]){
            retorno = 0;
        }
    }
    if (somalin[0] != somadiag1){
        retorno = 0;
    }
    if (retorno == 0){
        printf ("Nao eh quadrado magico!\n");
    }
    else {
        printf ("Eh quadrado magico!\n");
    }
    
    system ("PAUSE");
    return 0;

}
matriz9(){
    int i, j, n, c0, c1, **mat;

  printf("Digite a ordem da matriz:\n");
  scanf("%d", &n);

  while (n < 1) {
    printf("Digite novamente a ordem da matriz:\n");
    scanf("%d", &n);
  }

  mat = (int **) malloc(sizeof(int *)*n);
  if (mat == NULL) {
    printf("Problema na alocacao da matriz\n");
    return(-1);
  }

  for (i = 0; i < n; i++) {
    mat[i] = (int *) malloc(sizeof(int)*n);
    if (mat[i] == NULL) {
      printf("Problema na alocacao da matriz\n");
      return(-1);
    }
  }

  printf("Digite o elementos da matriz:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &(mat[i][j]));
    }
  }

  for (i = 0; i < n; i++) {
    c0 = 0;
    c1 = 0;
    for (j = 0; j < n; j++) {
      if (mat[i][j] == 0) {
	c0++;
      } 
      else {
	if (mat[i][j] == 1) {
	  c1++;
	}
	else {
	  printf("A matriz nao eh de permutacao\n");
	  return(1);
	}
      }
    }
    
    if (c0 != n-1 || c1 != 1) {
      printf("A matriz nao eh de permutacao\n");
      return(1);
    }
  }

  for (j = 0; j < n; j++) {
    c0 = 0;
    c1 = 0;
    for (i = 0; i < n; i++) {
      if (mat[i][j] == 0) {
	c0++;
      } 
      else {
	if (mat[i][j] == 1) {
	  c1++;
	}
	else {
	  printf("A matriz nao eh de permutacao\n");
	  return(1);
	}
      }
    }
    
    if (c0 != n-1 || c1 != 1) {
      printf("A matriz nao eh de permutacao\n");
      return(1);
    }
  }

  printf("A matriz eh de permutacao\n");

  for (i = 0; i < n; i++) {
    free(mat[i]);
    mat[i] = NULL;
  }

  free(mat);
  mat = NULL;

  return(1);
}

matriz6(){
    int	N,   
        i, j;
   float R[NMAX][NMAX]; 
   
   printf("\nDigitar o numero de linhas da matriz quadrada ");
   scanf("%d", &N);
   if(N>NMAX){
     printf("\nNumero maximo de linhas/colunas foi excedido\n");
     return(0);
     } 
   printf("Digitar os elementos: ");
   for(i=0; i<N; i++){
     for(j=0; j<N; j++){
       scanf("%f", &R[i][j]);
	   }
	 }
   printf("\n");
  
   if( EMatrizSimetrica(R, N)) printf("\nA matriz e' simetrica.\n");
     else printf("\nA matriz nao e' simetrica\n");
return 0;
} 
          
int EMatrizSimetrica(float X[NMAX][NMAX], int N){
   
   int esimetrico; 
   int i,j;
   esimetrico = 1; 
   i = 1;
   while( (esimetrico==1) && (i<N) ){
     j = 0;
     while( (esimetrico==1) && (j<=(i-1)) ){
       if(X[i][j] != X[j][i]) esimetrico = 0; 
       j = j+1;
       } 
     i = i+1;
     } 
   if(esimetrico) return 1;
     else return 0;
  }



