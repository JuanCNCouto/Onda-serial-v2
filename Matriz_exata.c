#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "Matriz_exata.h"
#include <omp.h>

void matriz_exata(double **y,int  n,double c,double h,double t){
 	int i,j;
 	double aux;
 	aux=c*sqrt(5);
	aux=cos(aux);
	#pragma omp parallel for shared(y,n) private(i,j)
  	for(i=0;i<n;i++){
    		for(j=0;j<n;j++){
      			y[i][j]= aux*sin(2*(i*h))*sin(j*h);
    		}
  	}
	
 }
