#include<math.h>
#include<stdio.h>
#include<stdlib.h>


int main(){

  // defining some crap

  double var=5, value=10;
  double* ptr_var=&var;
  const double c_var=6;
  const double* ptr_c_var=&c_var;
  double* const c_ptr_var=&var;
  const double* const c_ptr_c_var=&c_var;

  // modifiers

  var=value;
  *ptr_var=value;
  c_var=value;
  var=c_var;
  *ptr_c_var=value;
  ptr_c_var=ptr_var;
  *c_ptr_var=value;
  c_ptr_var=ptr_var;
  *c_ptr_c_var=value;
  c_ptr_c_var=ptr_var;  



}
