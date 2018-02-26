//================================================================
// File: hello_world.c
// Author: Benny Saxén
// Date: 2018-02-26
// gcc -o hello_world hello_world.c -lm
//================================================================

#include "tdl_library.c"

float a[N_INP] = {1,2,3,4};
float b[N_OUT] = {0,0,0};

float mx[N_OUT][N_INP] = {
    {1, 1, 1, 1},
    {2, 2, 2, 2},
    {3, 3, 3, 3}
};

int main()
{
  printf("Hello World\n");
  mx_mult_v(N_INP, N_OUT, mx, a, b);
  for(int i=0;i<N_OUT;i++)
  {
    printf("%d %f\n",i,b[i]);
  }
  float res = sigmoid(0.5);
  printf("sigmoid=%f\n",res);
  norm(10,a);
}
