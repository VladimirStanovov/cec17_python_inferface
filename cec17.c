/* File : cec17.c */
#include <iostream>
//#include "cec17.h"
using namespace std;

double cec17_test_func(double *,int,int,int,int);
double *OShift,*M,*y,*z,*x_bound;
int ini_flag=0,n_flag,func_flag,*SS;
int GNVars;
int func_num=1;
double tempF[1];
double fopt[1];
double xopt[100];

void GetOptimum(int func_num)
{
    FILE *fpt;
    char FileName[100];
    sprintf(FileName, "input_data/shift_data_%d.txt", func_num);
    //cout<<FileName<<endl;
    fpt = fopen(FileName,"r");
    if (fpt==NULL)
        printf("\n Error: Cannot open input file for reading \n");
    for(int k=0;k<GNVars;k++)
        fscanf(fpt,"%lf",&xopt[k]);
    fclose(fpt);
    fopt[0] = cec17_test_func(xopt, GNVars, 1, func_num, 0);
}
void Init(int D, int new_func_num)
{
    func_num = new_func_num;
    GNVars = D;
    GetOptimum(func_num);
}
double cec17func(double* x, int n) 
{
    return cec17_test_func(x, GNVars, 1, func_num, 1);
}

