//================================================================
// File: tdl_library.c
// Author: Benny Saxén
// Date: 2018-02-26
//================================================================
#include <stdio.h>
#include <math.h>
#define N_INP 4
#define N_OUT 3
//================================================================
void mx_mult_v(int n, int m, float mx[N_OUT][N_INP], float v[], float res[])
//================================================================
{
  int i,j;
  float sum;

  for(i=0;i<n;i++)
  {
    sum = 0.0;
    for(j=0;j<m;j++)
    {
      sum = sum + mx[i][j]*v[j];
    }
    res[i] = sum;
  }
  return;
}
//================================================================
float sigmoid(float x)
//================================================================
{
  float exp_value;
  float return_value;

  /*** Exponential calculation ***/
  exp_value = exp((double) -x);

  /*** Final sigmoid value ***/
  return_value = 1 / (1 + exp_value);

  return return_value;
}
//================================================================
float* norm(int n,float v[])
//================================================================
{
  float sum = 0.0;

  for(int i=0;i<n;i++)
  {
    sum = sum + v[i]*v[i];
  }
  sum = sqrt(sum);

  for(int i=0;i<n;i++)
  {
    v[i] = v[i]/sum;
    printf("%d %f\n",i,v[i]);
  }

  sum = 0.0;
  for(int i=0;i<n;i++)
  {
    sum = sum + v[i]*v[i];
  }
  printf("check %f\n",sum);

  return v;
}
//================================================================
void forw_prop()
//================================================================
{
  return;
}
//================================================================
void back_prop()
//================================================================
{
  return;
}
