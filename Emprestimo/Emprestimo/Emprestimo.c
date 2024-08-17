#include <stdio.h>

int main() {
  float rendaMensal, valorEmprestimo;
  char historicoCredito, estabilidadeEmprego;
  int valorEntrada;

  printf("Digite sua renda mensal: ");
  scanf("%f", &rendaMensal);

  printf("Digite o valor do emprestimo: ");
  scanf("%f", &valorEmprestimo);

  printf("Digite seu historico de credito (B=Bom, R=Ruim): ");
  scanf(" %c", &historicoCredito);

  printf("Digite a sua estabilidade no emprego (E=Estavel, I=Instavel): ");
  scanf(" %c", &estabilidadeEmprego);

  printf("Digite o valor da entrada: ");
  scanf("%d", &valorEntrada);

  // Aqui você pode implementar a lógica para avaliar os critérios de liberação do crédito
  // com base nos dados coletados. Por exemplo:

  if (rendaMensal >= 1000 && valorEmprestimo <= 5000 && historicoCredito == 'B' && estabilidadeEmprego == 'E' && valorEntrada >= 100) {
    printf("Parabens! Seu credito foi aprovado.\n");
  } else {
    printf("Seu credito foi negado. Por favor, revise suas informacoes e tente novamente.\n");
  }

  return 0;
}
