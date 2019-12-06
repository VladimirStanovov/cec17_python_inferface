/* cec17.i */
%module cec17

%{
  #define SWIG_FILE_WITH_INIT
  #include "cec17.h"
extern void GetOptimum(int func_num);
extern void Init(int D, int func_nums);
extern double cec17func(double* x, int n);
%}

%include "numpy.i"

%init %{
import_array();
%}

%apply (double* IN_ARRAY1, int DIM1) {(double* x, int n)};

%include "cec17.h"


