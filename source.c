#include<stdio.h>

int main()

{
    int n,m,i;
    char c[7];

    scanf("%d%d",&n,&m);
    getchar();
    for (i=0;i<m;i++)
    {

     scanf("%s",&c);

      if (strcmp(c,"fechou") == 0)
        n++;
      else
      if (strcmp(c,"clicou") == 0)
      n--;
    }

    printf("%d\n",n);




    return 0;
}
