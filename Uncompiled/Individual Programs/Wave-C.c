# include <stdio.h>
# include <math.h>

/* #define OMEGA "\u03C9" */
/* #define LAMBDA "\u03BB" */

/* This part of the program is made to do calculations with waves.*/

float f, A, lambda, omega, T, v; /* Wave variables */;
float pi = 3.141592; /*Pi, just pi.*/;
float main(){
  printf("Please enter the Period (time) of the wave\n>");
  scanf("%f", &T);
  f = 1 / T;
  omega = (2 * pi) * f;
  A = T / f;
  v = omega * T;
  lambda = v / f;
  printf("Period: T = %f\nFrequency: f = %f\nAngular Frequency: ω = %f\nAmplitude = %f\nVelocity: v = %f\nWavelength: λ = %f\n", T, f, omega, A, v, lambda);
  
 return 0;
}
