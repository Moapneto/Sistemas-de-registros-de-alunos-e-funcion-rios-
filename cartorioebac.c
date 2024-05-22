#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //bilbioteca respons�lvel por cuidar das string 

int registrar()
{
	char arquivo[40];
    char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	char idade[40];
	char email[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s",cpf); //armazenando dentro de uma string	
	
	strcpy(arquivo, cpf); //respons�vel por copiar os valores das string
	FILE *file; //cria arquivo
    
	file = fopen(arquivo,"w"); //cria arquivo
	fprintf(file,"\n");
	fprintf(file,"CPF: ");
    fprintf(file,cpf); //salvo o valor da variavel
    fclose(file); //fecha arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,"\nNOME: ");
    fclose(file);
    
    printf("Digite o nome: ");
    scanf("%s",&nome);
    
    file = fopen(arquivo,"a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,"\nSOBRENOME: ");
    fclose(file);
    
    
    printf("Digite o sobrenome: ");
    scanf("%s",&sobrenome);
    
    file = fopen(arquivo,"a");
    fprintf(file, &sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,"\nIDADE: ");
    fclose(file);
    
   
    printf("Digite a idade: ");
    scanf("%s", &idade);
    
    file = fopen(arquivo,"a");
    fprintf(file,idade);
    fclose(file);
    
    file = fopen(arquivo,"a");
    fprintf(file,"\nEMAIL: ");
    fclose(file);
    
    
    printf("Digite o email: ");
    scanf("%s", &email);
    
    file = fopen(arquivo,"a");
    fprintf(file, email);
    fclose(file);
    
    file = fopen(arquivo,"a");
    fprintf(file,"\nCARGO: ");
    fclose(file);
    
    
    printf("Digite o cargo: ");
    scanf("%s", &cargo);
    
    file = fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file);
    
	file = fopen(arquivo, "a");
	fprintf(file,"\n");
    fclose(file);
    
    system("pause");
    
    
    
    
}

int consultar() //fun��o
{
	
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF: ");
	scanf("%s",cpf);
	
	 
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Arquivo n�o encontrado.\n\n");
    }
    
    printf("\nInforma��es do usu�rio: \n");

	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("%s",conteudo);
		printf("\n");
		
		
	}
	
	    
	    system("pause");
	    
	


    }
	


int deletar()
{
    char cpf[40];
    
    printf("Digite o cpf:");
    scanf("%s",cpf);
    
    
    FILE *file;
    file = fopen(cpf,"r");
    fclose(file);
    
	    
    
if(file == NULL)
    {
    	printf("CPF n�o encontrado!.\n");
    	fclose(file);
    	
    	system("pause");
    
	}
	
	if(file != NULL)
	{
		(remove(cpf) == 0);
		printf("\nUs�rio deletado com sucesso!.\n\n");
		fclose(file);
		
		system("pause");
	}
	
	
}


int main()
    {
	
	 int opcao=0; //definindo as vari�veis
	 int x=1;
	
	 for(x=1;x=1;)
	 {
	   
	    system("cls"); //limpeza de tela	
		
	    setlocale(LC_ALL, "portuguese"); //definindo a regi�o
	
	    printf("***Registro da EBAC ***\n\n"); //inicio do menu de boas vindas
	    printf("Escolha a op��o desejada do menu:\n\n"); //texto de op��es
	    printf("\t1 - Registrar nomes\n"); 
	    printf("\t2 - Consutar nomes\n");
	    printf("\t3 - Deletar nomes\n\n");
	    printf("\t4 - Sair do sistema\n\n");
	    printf("Op��o:"); //fim do menu
	
        scanf("%d", &opcao); // armazenando a escolha do usu�rio
     
        system("cls"); //sistema operacional //limpeza de tela
     
     
	 switch(opcao)
	 {
	 	case 1:
	 	registrar();
     	break;
     	
     	case 2:
     	consultar();
	    break;
	    
	    case 3:
        deletar();
		break;
		
		case 4:
	    printf("Obrigado por usar esse sistema!\n");
	    return 0;
	    break;
		
		default:
		printf("Essa op��o n�o existe, tente novamente!\n");
    	system("pause");
		break;
	 } //fim da sele��o
	 

	 }
	
}
