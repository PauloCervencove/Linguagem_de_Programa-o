int main(void) {
  int i = 12 ,*p1;
  float r = 18.451,*p2;
  char c = 'A',*p3;
  p1  = &i;
  p2  = &r;
  p3  = &c;
      printf("p1 %d\n",*p1);
      printf("p1 %d\n",p1);
      printf("p2 %.2f\n",*p2);
      printf("p2 %d\n",p2);
      printf("p3 %c\n",*p3);
      printf("p3 %d\n",p3);

  *p1 = 21;
  *p2 = 12.123;
  *p3 = 'C';
      printf("p1 %d\n",*p1);
      printf("p1 %d\n",p1);
      printf("p2 %.2f\n",*p2);
      printf("p2 %d\n",p2);
      printf("p3 %c\n",*p3);
      printf("p3 %d\n",p3);

      printf("Inteiro %d\n",i);
      printf("Real %.2f\n",r);
      printf("Char %c\n",c);

  return 0;
}
