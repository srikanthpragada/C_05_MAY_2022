// Net amount

#include <stdio.h>

void main()
{
  float qty, price, discount, amount, net_amount;

     printf("Enter price : ");
     scanf("%f",&price);

     printf("Enter qty  : ");
     scanf("%f",&qty);

     amount = qty * price;
     discount = amount * 15 / 100;
     net_amount = amount - discount;

     printf("Amount      : %8.2f\n", amount);
     printf("- Discount  : %8.2f\n", discount);
     printf("Net amount  : %8.2f", net_amount);


}
