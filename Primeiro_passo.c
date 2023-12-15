#include <stdio.h>
#include<stdlib.h>
#include "Primeiro_passo.h"

double ***P_P(double ***M,double n,double h, double ratio,double c){
       	int i,j;
	double ***y;
	y=M;
	for (i = 1; i < n-1; i++) { // para o primeiro passo                                                                            
		for (j = 1; j < n-1; j++) {
			y[i][j][1] = y[i][j][0] + 0.5*ratio* (y[i + 1][j][0] + y[i - 1][j][0] + y[i][j + 1][0] + y[i][j - 1][0] - 4.0 * y[i][j][0]);
		}
	}
	return y;
}
