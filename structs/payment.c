
enum paymentmode
{
   CASH, CARD, UPI
};

struct payment
{
  int invno;
  int amount;
  enum paymentmode mode;
};

void main()
{
 struct payment p;

    p.invno = 1;
    p.amount = 2000;
    p.mode = UPI;

    printf("%d  %d  %d", p.invno, p.amount, p.mode);
}
