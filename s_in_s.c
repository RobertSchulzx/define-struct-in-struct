#include <stdio.h>

struct foo{
    int a;
    int b;
    struct bar{
        float d;
        double e;
    } bar;
};

int main()
{
   struct foo foobar;
   struct bar barfoo;

   foobar.bar.e = 11.3;
   barfoo.e = 12.9;

   printf("%f\n",foobar.bar.e);
   printf("%f",barfoo.e);
   return 0; 
}
