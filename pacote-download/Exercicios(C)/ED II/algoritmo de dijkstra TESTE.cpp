#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXVERTICES 100

void dijkstra(int vertices,int origem,int destino,int *custos)
{ int i,v,    /* vari?veis auxiliares */
      ant[MAXVERTICES],   /* vetor dos antecessores */
      z[MAXVERTICES];     /* v?rtices para os quais se conhece o caminho m?nimo */
  double min, /* vari?vel auxiliar */
       dist[MAXVERTICES]; /* vetor com os custos dos caminhos */

/* OBS: O usu?rio enxerga os v?rtices como rotulados de 1 a "v?rtices",  */
/* mas o programa armazena as informa??es usando os elementos 0 dos */
/* dos vetores. Dessa formar ? preciso subtrair 1 de "origem" e "destino" */
/* ao mape?-los nos vetores. */

  /* Inicializa??o */

  for (i=0;i<vertices;i++) {
    if (custos[(origem-1)*vertices+i]!=-1) {
      ant[i]=origem-1; 
      dist[i]=custos[(origem-1)*vertices+i];
    }
    else {
      ant[i]=-1;
      dist[i]=HUGE_VAL;
    }
    z[i]=0;
  }
  z[origem-1]=1;
  dist[origem-1]=0;

  /* La?o principal */

  do {

    /* Encontrando o v?rtice que deve entrar em z */

    min=HUGE_VAL;
    for (i=0;i<vertices;i++)
      if (!z[i])
        if (dist[i]>=0 && dist[i]<min) {min=dist[i];v=i;}

    /* Calculando as dist?ncias dos novos vizinhos de z */

    if (min!=HUGE_VAL && v!=destino-1) {
      z[v]=1;
      for (i=0;i<vertices;i++)
        if (!z[i]) {
          if (custos[v*vertices+i]!=-1 && dist[v]+custos[v*vertices+i]<dist[i])
            { dist[i]=dist[v]+custos[v*vertices+i];ant[i]=v; }
        }
    }
  } while (v!=destino-1 && min!=HUGE_VAL);

  /* Imprimindo o resultado  */

  if (min==HUGE_VAL)
    printf("\nNo digrafo dado n?o existe caminho entre os v?rtices %d e %d !!\n",origem,destino);
  else {
    printf("\nO caminho de custo m?nimo entre os v?rtices %d e %d  ? (na ordem reversa):\n",
           origem,destino);
    i=destino;
    printf("%d",i);
    i=ant[i-1];
    while (i!=-1) {
      printf("<-%d",i+1);
      i=ant[i];
    }
    printf("\nO custo deste caminho ?: %d\n",(int) dist[destino-1]);
  }
  
} /* dijsktra */


main(int argc, char **argv) {
	FILE *file;
	file = fopen("grafo_ponderado.txt","r");
	if(file == NULL){
		printf("Arquivo nao pode ser abeto\n");
		system("pause");
		return 0;
	}
char opcao,lixo[50];   /* vari?veis auxiliares */
int i,custo,           /* vari?veis auxiliares */
    vertices=0,        /* n?mero de v?rtices do grafo */
    origem,            /* v?rtice origem */
    destino,           /* v?rtice destino */
    *custos=NULL,      /* matriz de incid?ncia */
     a, b, c, d, e, f, g, h, i;/*vari?veis do arquivo texto*/

do {

  /* Menu principal */

  printf("\n      Solucionador para o problema do caminho de custo m?nimo em digrafos\n");
  printf("(Algoritmo proposto por Dijkstra e implementado por Glauber Cintra em 11set1998)\n\n");
  printf("Escolha sua op??o:\n");
  printf("     1. Digitar um digrafo\n");
  printf("     2. Resolver uma inst?ncia\n");
  printf("     3. Sair do programa\n\n");
  printf("Op??o: ");
  gets(&opcao);

  /* Digitar novo grafo */

  if (opcao==49) {
    do {
      printf("\nN?mero de v?rtices (entre 2 e %d): ",MAXVERTICES);
      scanf("%d",&vertices);
    } while (vertices<2 || vertices>MAXVERTICES);

    if (!custos)
      free(custos);
    custos=(int *) malloc(sizeof(int)*vertices*vertices);
    for (i=0;i<=vertices*vertices;i++) custos[i]=-1;
    printf("Digite agora as arestas\n");
    do {

      do {
        printf("Origem da aresta (entre 1 e %d ou 0 para sair): ",vertices);
        scanf("%d",&origem);
      } while (origem<0 || origem>vertices);

      if (origem) {

        do {
          printf("Destino da aresta (entre 1 e %d, menos %d): ",vertices,origem);
          scanf("%d",&destino);
        } while (destino<1 || destino>vertices || destino==origem);

        do {
          printf("Custo (positivo) da aresta do v?rtice %d para o v?rtice %d: ",origem,destino);
          scanf("%d",&custo);
	} while (custo<0);
      custos[(origem-1)*vertices+destino-1]=custo;
      }

    } while (origem);
    gets(lixo);
  }

  /* Achar caminho m?nimo entre 2 v?rtices */

  if (opcao==50 && vertices>0) {
    printf("\nDigite os v?rtices origem e destino do caminho\n");
    do {
      printf("V?rtice origem (entre 1 e %d): ",vertices);
      scanf("%d",&origem);
    } while (origem<1 || origem>vertices);
  
    do {
      printf("V?rtice destino (entre 1 e %d, menos %d): ",vertices,origem);
      scanf("%d",&destino);
    } while (destino<1 || destino>vertices || destino==origem);

    dijkstra(vertices,origem,destino,custos);
    gets(lixo);
  }

} while (opcao!=51);

/*Leitura do arquivo texto*/
fscanf(file,"%d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);
	printf("%d %d %d\n %d %d %d\n %d %d %d\n", a, b, c, d, e, f, g, h, i);
	
	fclose(file);

} /* Fim do programa */
