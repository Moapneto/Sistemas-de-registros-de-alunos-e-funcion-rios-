#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //bilbioteca responsálvel por cuidar das string 

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
	
	strcpy(arquivo, cpf); //responsável por copiar os valores das string
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

int consultar() //função
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
		printf("Arquivo não encontrado.\n\n");
    }
    
    printf("\nInformações do usuário: \n");

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
    	printf("CPF não encontrado!.\n");
    	fclose(file);
    	
    	system("pause");
    
	}
	
	if(file != NULL)
	{
		(remove(cpf) == 0);
		printf("\nUsário deletado com sucesso!.\n\n");
		fclose(file);
		
		system("pause");
	}
	
	
}


int main()
    {
	
	 int opcao=0; //definindo as variáveis
	 int x=1;
	
	 for(x=1;x=1;)
	 {
	   
	    system("cls"); //limpeza de tela	
		
	    setlocale(LC_ALL, "portuguese"); //definindo a região
	
	    printf("***Registro da EBAC ***\n\n"); //inicio do menu de boas vindas
	    printf("Escolha a opção desejada do menu:\n\n"); //texto de opções
	    printf("\t1 - Registrar nomes\n"); 
	    printf("\t2 - Consutar nomes\n");
	    printf("\t3 - Deletar nomes\n\n");
	    printf("\t4 - Sair do sistema\n\n");
	    printf("Opção:"); //fim do menu
	
        scanf("%d", &opcao); // armazenando a escolha do usuário
     
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
		printf("Essa opção não existe, tente novamente!\n");
    	system("pause");
		break;
	 } //fim da seleção
	 

	 }
	
}
