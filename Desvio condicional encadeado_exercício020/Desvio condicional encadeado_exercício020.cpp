// Desvio condicional encadeado_exercício020.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main(){
    float salarioBruto, salarioFamilia, salarioHora,salarioLiquido;
    int  quantidadeHoras, quantidadeFilhos;

    printf("Digite a salariohora \n");
    scanf_s("%f", &salarioHora);
    
    printf("Digite a quantidade horas \n ");
    scanf_s("%d", &quantidadeHoras);
  
    printf("Digite a quantidade de filhos menor de 14 anos \n");
    scanf_s("%d", &quantidadeFilhos);

    salarioBruto = salarioHora * quantidadeHoras;

    if (salarioBruto <= 700)
        salarioFamilia = quantidadeFilhos * 8.50;
    else if (salarioBruto <= 1000)
        salarioFamilia = quantidadeFilhos * 6.50;

    else
        salarioFamilia = quantidadeFilhos * 2.50;

    salarioLiquido = salarioBruto + salarioFamilia;
   
    printf ("Salario Bruto......:R$ %.2f \n", salarioBruto );
    printf("Salario familia...:R$ %.2f \n", salarioFamilia);
    printf("Salario liquido...: R$ %.2f \n", salarioLiquido);
  
       


        


    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
