/*
 * servo.c
 *
 *  Created on: Apr 24, 2021
 *      Author: root
 */

#include "servo.h"

void poz_0(){
	htim1.Instance -> CCR1 = 25;
	htim1.Instance -> CCR2 = 25;
	htim1.Instance -> CCR3 = 25;
	htim1.Instance -> CCR4 = 25;

	htim2.Instance -> CCR1 = 25;
	htim2.Instance -> CCR2 = 25;
	htim2.Instance -> CCR3 = 25;
	htim2.Instance -> CCR4 = 25;

	htim3.Instance -> CCR1 = 25;
	htim3.Instance -> CCR2 = 25;
}

void poz_45(){
	htim1.Instance -> CCR1 = 50;
	htim1.Instance -> CCR2 = 50;
	htim1.Instance -> CCR3 = 50;
	htim1.Instance -> CCR4 = 50;

	htim2.Instance -> CCR1 = 50;
	htim2.Instance -> CCR2 = 50;
	htim2.Instance -> CCR3 = 50;
	htim2.Instance -> CCR4 = 50;

	htim3.Instance -> CCR1 = 50;
	htim3.Instance -> CCR2 = 50;
}

void poz_90(){
	htim1.Instance -> CCR1 = 75;
	htim1.Instance -> CCR2 = 75;
	htim1.Instance -> CCR3 = 75;
	htim1.Instance -> CCR4 = 75;

	htim2.Instance -> CCR1 = 75;
	htim2.Instance -> CCR2 = 75;
	htim2.Instance -> CCR3 = 75;
	htim2.Instance -> CCR4 = 75;

	htim3.Instance -> CCR1 = 75;
	htim3.Instance -> CCR2 = 75;
}

void poz_135(){
	htim1.Instance -> CCR1 = 100;
	htim1.Instance -> CCR2 = 100;
	htim1.Instance -> CCR3 = 100;
	htim1.Instance -> CCR4 = 100;

	htim2.Instance -> CCR1 = 100;
	htim2.Instance -> CCR2 = 100;
	htim2.Instance -> CCR3 = 100;
	htim2.Instance -> CCR4 = 100;

	htim3.Instance -> CCR1 = 100;
	htim3.Instance -> CCR2 = 100;
}

void poz_180(){
	htim1.Instance -> CCR1 = 125;
	htim1.Instance -> CCR2 = 125;
	htim1.Instance -> CCR3 = 125;
	htim1.Instance -> CCR4 = 125;

	htim2.Instance -> CCR1 = 125;
	htim2.Instance -> CCR2 = 125;
	htim2.Instance -> CCR3 = 125;
	htim2.Instance -> CCR4 = 125;

	htim3.Instance -> CCR1 = 125;
	htim3.Instance -> CCR2 = 125;
}
