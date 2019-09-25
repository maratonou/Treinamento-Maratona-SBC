#include <stdio.h>
#include <stdlib.h>


int fib(int n, int *memo)
{
  *memo = *memo+1;
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  return fib(n-1, memo)+fib(n-2, memo);
}
int *fib_din(int n, int **memo)
{
  if (n == 0)
  {
    memo[0][n] = 0;
    memo[1][n] = 1;
  }
  else if (n == 1)
  {
    memo[0][n] = 1;
    memo[1][n] = memo[1][n-1] + 1;
  }
  else
  {
    memo[0][n] = fib(n-1, memo)+ fib(n-2, memo);
  }
}
void resolve_fib()
{
  int info, result;
  int casos, i, n;
  scanf("%d", &casos);
  for (i = 0; i < casos; i++)
  {
    info = 0;
    scanf("%d", &n);
    result = fib(n, &info);
    printf("fib(%d) = %d calls = %d\n", n, info-1, result);
  }
}
int main()
{
  resolve_fib();
  return 0;
}
