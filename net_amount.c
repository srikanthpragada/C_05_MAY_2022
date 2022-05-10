// Net amount

#include <stdio.h>

void main()
{
  int qty, price, discount, amount, net_amount;

     printf("Enter price : ");
     scanf("%d",&price);

     printf("Enter qty  : ");
     scanf("%d",&qty);

     amount = qty * price;
     discount = amount * 15 / 100;
     net_amount = amount - discount;

     printf("Net amount = %d", net_amount);


}
