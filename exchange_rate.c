#include <stdio.h>

int main() {

  float dailyUSD = 0.19; //USD quotation on the 30th March, 2023
  float dailyBRL = 5.14; //BRL quotation on the 30th March, 2023
  float amountUSD, amountBRL;
  int choices;
  char continueYN = 'y';

  while (continueYN == 'y') {
    printf("\nCurrency converter USD & BRL: ");
    printf("\nEnter the currency to convert: \n[1] USD to BRL \n[2] BRL to USD\n:");
    scanf("%i", &choices);

    if (choices == 1) {
      printf("\nEnter the amount of USD to convert into BRL: ");
      scanf("%f", &amountUSD);
      amountUSD = (amountUSD*dailyBRL);
      printf("\nThe quotation BRL of the day is: %.2f ", dailyBRL);
      printf("\nYour value in BRL is equal to: %.2f ", amountUSD);
    }
    else if (choices == 2) {
      printf("\nEnter the amount of BRL to convert into USD: ");
      scanf("%f", &amountBRL);
      amountBRL = (amountBRL*dailyUSD);
      printf("\nThe quotation of USD of the day is %.2f", dailyUSD);
      printf("\nYour value in USD is equal to: %.2f", amountBRL);
    }
    else {
      printf("\n\nValue not recognized, please try again and type [1] or [2]: \n[1] USD to BRL \n[2] BRL to USD\n");
    }
    printf("\nDo you want to convert again? (y/n)\n:");
    scanf(" %c", &continueYN);
  }
  printf("\n\nThanks for using the program.");
  return 0;
}
