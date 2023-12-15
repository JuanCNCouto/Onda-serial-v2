#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <C_I_C.h>


void C_I_C(double ***A, double h, int n) {
  int i, j;
  double x = 0, y = 0;
  // os Loops vão do segundo termo até o penultimo termo
  // por causa das condições de contorno de dirichlet,
  // assim as bordas continuam zero
  for (i = 0; i < n; i++) {
    x = 0;
    for (j = 0; j < n; j++) {
      // condição inicial t=0
      x = x + h;
      A[i][j][0] = (sin(2 * x)) * (sin( y));
    }
    y=y+h;
  }
}
