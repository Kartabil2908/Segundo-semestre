#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Data {
    int dia, mes, ano;
};

struct Datas {
    int dias[3];
    struct Data data[3];
};






int q_01 (int m, int n, int a [])
{ 
  int x=0;
  if (0 < m && m < n-1 && a[m-1] - a[m] > 0 && a[m] - a[m+1] < 0) 
  {x = 1;}
    
  if (0 < m && m < n)
  {
    if (x >= 0)
    { 
        x = x + q_01 (m-1, n, a); 
    }
    else
    { x =-m; }
  }
  return (x);
}

void q_02 (char *p, char *q)
{ 
    char *r = calloc(strlen(p) * strlen(q) + 1,sizeof(char));
    int k = 0;
    for (int x = 0; x < strlen(p); x++)
    { 
        for (int y = 0; y < strlen(q); y++)
        { 
            if (x == strlen(p)/2)
            {
                r[k] = p[x]; 
                r[k+1] = q[y]; 
                k= k + 2;
                if ( k > 6) 
                {
                    y=strlen(q); x=strlen(p); 
                } 
            } 
        } 
    }
    printf ("[%s]\n", r);
}

void q_03 (int a, int b, int c, char m [][3][7])
{ 
  for (int x=0;x<a; x++) 
  { 
    for (int y=0;y<b;y++) 
    { 
      if ('A'<m[x][0][0] && m[x][0][0]<'Z') 
      { 
        printf ("%8s", m[x][2]); 
        y=b; 
      } 
      printf ("\n"); 
    }
  }
}

void q_04 (char* p) 
{
  int x=0;
    
  for (int y=0; y < strlen(p); y = y+1) 
  {
    if ( y < strlen(p) - 1 && p[y] == 'a' || p[y] =='o')
    {
      for (int z=y; z < strlen(p); z = z+1)
      {
        p[z] = p[z+1]; 
      }
    }
      
  }
    printf ("[%s]\n", p);
}


char* q_05 (int x, int y, char*p)
{ 
    char c = '_';
    if(0<=x && x<strlen(p) && 0<=y && y<strlen(p))
    {
        c = p[x]; 
        p[x] = p[y]; 
        p[y] = c; 
    }
    return (p);
}

int isopsefia(char *nome)
{
  int soma = 0;
  int tamanho = strlen(nome);

  for (int i = 0; i < tamanho; i++)
  {
    char letra = toupper(nome[i]); // Converter para maiúscula

    // Utilize uma tabela de acordo com o valor numérico da letra
    int tabela[26] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    soma = soma + tabela[letra - 'A']; // assim que descobre a letra, é pela tabela ASCII, tentei fazer de outro jeito que não fosse preenchendo uma matriz;
  }

  // Se a soma for maior que 9, soma os dígitos
  if (soma > 9) {
    int digito1 = soma / 10;
    int digito2 = soma % 10;
    soma = digito1 + digito2;
  }

  return soma;
}



void metodo1()
{
    int a[6] = {7, 9, 6, 8, 3, 5};
    int n = 6;

    printf("\nx = %d\n", q_01(n-1, n , a));

    //x = 2 //

}

void metodo2()
{
    char p[8] = "goiabada";
    char q[6] = "queijo";

    // letra c = [bqbubebi]

    q_02(p, q);
    
}

void metodo3()
{
    char m [][3][7]=
    {
        {{"Azul" }, {"Blue" },{"Blau" }},
        {{"Branco"}, {"White" },{"Weiss"}},
        {{"Verde"},{"Green"}, {"Grun" }}
    };
        
    q_03 (3, 3, 7, m);

    // Weiss Grun // 

}

void metodo4()
{
    char p[13] = "acastanholada";

    q_04(p); 

    //[cstnhlda]//
    
}

/*
void metodo5()
{
    char* p = "perda";

    p = q_05 (1, 4, q_05 (2, 3, p));
    printf ("[%s]\n", p);
    p = q_05 (2, 3, q_05 (1, 4, p));
    printf ("[%s]\n", p);
    
} meu método está dando erro e não sei o porquê, por favor, peço uma explicação */


void metodo6()
{
   char nome[100];

  printf("Digite um nome: ");
  scanf("%s", nome);

  int resultado = isopsefia(nome);

  printf("O número correspondente é: %d\n", resultado);

    //não sei o porquê o MARIA DA SILVA sempre sai 6 // // deve ser porque eu estou tentando fazer de um jeito diferente //
    
}

void metodo7()
{
    struct Datas professores;
    
    int dias_vividos[3] = {9876, 8967, 6789};
    
    int ano, mes, dia;

    // Atribuindo os dias vividos
    for(int i = 0; i < 3; i++)
    {
        professores.dias[i] = dias_vividos[i];
    }

    // Calculando as datas de aniversário
    
    for (int i = 0; i < 3; i++)
    {
        ano = professores.dias[i] / 365;
        
        professores.dias[i] %= 365;
        
        mes = professores.dias[i] / 30;
        
        professores.dias[i] %= 30;
        
        dia = professores.dias[i];
        
        professores.data[i].dia = dia;
        
        professores.data[i].mes = mes;
        
        professores.data[i].ano = ano;
    }

    // Encontrando o professor que fará aniversário primeiro
    int professor_mais_proximo = 0;
    
    for (int i = 1; i < 3; i++)
    {
        if (professores.data[i].ano < professores.data[professor_mais_proximo].ano)
        {
            professor_mais_proximo = i;
            
        }
        else if(professores.data[i].ano == professores.data[professor_mais_proximo].ano)
        {
            if (professores.data[i].mes < professores.data[professor_mais_proximo].mes)
            {
                professor_mais_proximo = i;
                
            }
            else if (professores.data[i].mes == professores.data[professor_mais_proximo].mes)
            {
                if(professores.data[i].dia < professores.data[professor_mais_proximo].dia)
                {
                    professor_mais_proximo = i;
                }
            }
        }
    }

    printf("O professor %d fará aniversário primeiro.\n", professor_mais_proximo + 1);

    // professor 3 //
    
}


void metodo8()
{
    FILE *dados, *resultado;
    int numero;
    
  dados = fopen("DADOS.TXT", "r");
    
  resultado = fopen("RESULTADO.TXT", "w");

  while (fscanf(dados, "%d", &numero) != EOF)
  {
    if (numero % 2 != 0)
    {
      fprintf(resultado, "%d\n", numero);
    }
  }

  // Redefine o ponteiro do arquivo de dados para o início
  rewind(dados);

  // Lê os números do arquivo de dados e escreve os pares no arquivo de resultado
  while (fscanf(dados, "%d", &numero) != EOF)
  {
    if (numero % 2 == 0)
    {
      fprintf(resultado, "%d\n", numero);
    }
  }
    
  fclose(dados);
  fclose(resultado);
    
}

