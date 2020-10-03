#include <stdio.h>

#define PI 3.1415

float kerulet(float r) {
	float k = 2 * r * PI;

	return k;
}

float terulet(float r) {
	return r * r * PI;
}

void kerter() {
	float sugar;

	printf("Add meg a kor sugarat pls! r=");
	scanf("%f", &sugar);

	printf("K=%f\n", kerulet(sugar));

	float t = terulet(sugar);
	printf("T=%f\n", t);
}

int main() {
	kerter();
	kerter();
	
	return 0;
}