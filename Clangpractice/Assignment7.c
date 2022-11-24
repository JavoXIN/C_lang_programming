#include <stdio.h>

int main(void)

{
  double NowonBankInvest = 100;
  double SeoulTechBankInvest = 100;
  int years=0;
  
  do
  {
	NowonBankInvest += 10;
	SeoulTechBankInvest +=  0.05*SeoulTechBankInvest;
	years++;
	printf("After year %d \n", years);
	printf("Investment of Nowon Bank: $%.f \n", NowonBankInvest);
	printf("Investment of SeoulTech Bank: $%.3f \n", SeoulTechBankInvest);
  }
  while (NowonBankInvest > SeoulTechBankInvest);
    printf("Years required for SeoulTech Bank's investment to overtake Nowon Bank's investment are: %d ", years);
    
  return 0;
}