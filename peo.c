#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float perimetroCirculo(float a){
	if( a == 0){
		printf("Ingrese otro valor\n");
	}
	else{
		float result;
		result = 2 * PI * a;
		return result;
	}
}

float areaCirculo(float a){
	if( a == 0){
		printf("Ingrese otro valor\n");
	}
	else{
		float result;
		result = PI * pow(a, 2);
		return result;
	}
}

float perimetroCuadrado(float a){
	if( a == 0){
		printf("Ingrese otro valor\n");
	}
	else{
		float result;
		result = a *4;
		return result;
	}
}

float areaCuadrado(float a){
	if( a == 0){
		printf("Ingrese otro valor\n");
	}
	else{
		float result;
		result = pow(a, 2);
		return result;
	}
}

float perimetroTriangulo(float a, float b, float c){
	if( a == 0){
		printf("Ingrese otro valor\n");
	}
	else{
		float result;
		result = a + b + c;
		return result;
	}
}

float areaTriangulo(float a, float b){
	if( a == 0){
		printf("Ingrese otro valor\n");
	}
	else{
		float result;
		result = (a * b)/2;
		return result;
	}
}


int main(){
	printf("CALCULADORA DE AREAS Y PERIMETROS DE FIGURAS GEOMETRICAS\n");
	printf("Selecciona tu figura.\n");
	printf("1. Circulo.\n");
	printf("2. Cuadrado.\n");
	printf("3. Triangulo.\n");
	int x;
	scanf("%d", &x);
	if(x == 1){
		int r;
		printf("Ingresa radio de circulo");
		scanf("%d", &r);
		float periCir = perimetroCirculo(r);
		float areaCir = areaCirculo(r);
		printf("El perimetro del circulo es %f\n", periCir);
		printf("El area del circulo es %f\n", areaCir);
	}
	else if(x == 2){
		int c;
		printf("Ingrese lado cuadrado\n");
		scanf("%d", &c);
		float periCuadr = perimetroCuadrado(c);
		float areaCuadr = areaCuadrado(c);
		printf("El perimetro del cuadrado es %f\n", periCuadr);
		printf("El area del cuadrado es %f\n", areaCuadr);
	}
	else if(x == 3){
		int t1, t2, t3;
		printf("Ingrese los lados del triangulo rectangulo\n");
		printf("Base: ");
		scanf("%d", &t1);
		printf("Altura: ");
		scanf("%d", &t2);
		printf("Hipotenusa ");
		scanf("%d", &t3);
		float periTrian = perimetroTriangulo(t1, t2 ,t3);
		float areaTrian = areaTriangulo(t1, t2);
		printf("El perimetro del triangulo es %f\n", periTrian);
		printf("El area del triangulo es %f\n", areaTrian);
	}
	else{
		printf("Ingrese un valor valido.\n");
	}
}