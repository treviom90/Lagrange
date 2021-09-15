#include<stdlib.h>
#include<stdio.h>

//INTERPOLACION DE LAGRAGE
int main(){
	
	float x[101], y[101],res=0,evaluar=0;
	float prodnumerador=0,prodenominador=0;
	int pares=0,i=0,j=0;
	
	printf("\t----------METODO DE LAGRANGE-----------\n\n");
	printf("\n\t%cCuantos pares ordenados desea ingresar? : ",168);
	scanf("%i",&pares);
	
	for(i=0;i<pares;i++){
		printf("\n\tIngrese el par %i,%i: \n\t",i,i);
		scanf("%f,%f",&x[i], &y[i]);
	}
	
	/*for(i=0;i<pares;i++){
		printf("%ld,%ld",x[i],y[i]);
	}*/
	
	printf("\n\t%cPara que valor de x desea evaluar? : ",168);
	scanf("%f",&evaluar);
	//printf("%f",evaluar );

	for(i=0;i<pares;i++){
		prodnumerador=1;
		prodenominador=1;
		for(j=0;j<pares;j++){
			if(i!=j){
				prodnumerador= prodnumerador*(evaluar-x[j]);
				prodenominador= prodenominador*(x[i]-x[j]);
			}
		}
		res=res+ y[i]*(prodnumerador/prodenominador);
	}
	
	printf("\n\t y(%.3f) = %f",evaluar,res);
	return 0;
}
