#include <stdio.h>
#include <math.h>

int convert(float angle){
	float radian = angle;
	radian = (radian / 180) * M_PI;
	if(angle > 360){
		printf("%.2f radians\n", radian - (2 * M_PI));
	}else if(angle < 0){
		printf("%.2f radians\n", radian + (2 * M_PI));
	}else{
		printf("%.2f radians\n", radian);
	}
}

int main (void){
	float degree = 0;

	printf("Enter an angle in degrees: ");
	scanf("%f", &degree);

	convert(degree);
}