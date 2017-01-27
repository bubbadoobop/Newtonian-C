# include <stdio.h>
# include <math.h>
# include <strings.h>
/*Newtonian-C is a program designed to solve kinematic, gravitational, and
wave systems. None of thus will go beyond high school physics. So, any 
university student may find this program underwhelming.*/

float m, t, x, f, v, h, a, w, po, p, ke, pe, a; /*Basic Kinematic variables*/
float f, A, lambda, omega, T, v; /* Wave variables */;
float Fg, r, M, m1, m2; /* Gravitational variables, v is already in the Kinematic variables.*/
float g = 9.8; /* Gravitational Acceleration*/
float Gc = 6.67408E-11; /* Newton's Gravitational Constant. */
float pi = 3.141592; /*Pi, just pi.*/;
int choice; 
/* Functions for each of the physical systems.  */
float kinematic(); 
float kinematic(){

   printf("Enter Distance, Time, Mass, and Height in that order. Enter 0 if there is none.\n");
    scanf("%f ",&x);
    scanf("%f",&t);
    scanf("%f",&m);
    scanf("%f",&h);
    printf("Distance: x = %f \nTime: t = %f \nMass: m = %f\nHeight: h = \n",x,t,m);

    v = x / t;
    a = v / t;
    f = m * a;
    po = m * v;
    w = f * x;
    p = w / t ;
    ke = ( .5 * m ) * (v * v); 
    pe = m * g * h;
    printf("Velocity: v = %f \nAcceleration: a = %f \nForce: f = %f\nMomentum: p = %f\nWork: w = %f \nPower: po = %f \nKinetic Energy: ke = %f \nPotential Energy: pe = %f \n\n",v,a,f,po,w,p,ke,pe);
     

  return 0;
}


float wave(){
 printf("Please enter the Period (time) of the wave\n> ");
  scanf("%f", &T);
  f = 1 / T;
  omega = (2 * pi) * f;
  A = T / f;
  v = omega * T;
  lambda = v / f;
  printf("Period: T = %f\nFrequency: f = %f\nAngular Frequency: ω = %f\nAmplitude = %f\nVelocity: v = %f\nWavelength: λ = %f\n", T, f, omega, A, v, lambda);
  
 return 0;
}


float gravity(){
  printf("Enter the masses of Mass One and Mass Two, and then the radius of Mass One in that exact order.\nIf you're using scientific notation, then what you can do is use E, or input 'xEy', where x is a decimal number, and y is the power 10 (E) is raised to.\n");
  scanf("%f",&m1);
  scanf("%f",&m2);
  scanf("%f",&r);
  M = m1 + m2;
  v = sqrt((Gc * M) / r);
  a = pow(v, 2) / r;
  Fg = Gc * ((m1 * m2) / pow(r, 2));
  printf("Velocity: v = %f\nAcceleration: a = %f\nForce of Gravity: Fg = %f\n", v, a, Fg);

}

int about();
int about(){
  printf("*TAKEN FROM THE README*\n");
  printf("Newtonian-C is a C program that can make high-school physics a breeze. With its simple usage, and small size. With Newtonian-C, you can work with the basics of... \n\n -Kinematic Systems\n -Newtonian gravitational systems\n -Waves\n\nNow, you can probably take this into college, but, I cannot guarantee that it will get you far.\n");

  printf("A QUICK NOTE ON USAGE\n\nIf you're using scientific notation, then what you can do is use E, or input 'xEy', where x is a decimal number, and y is the power 10 (E) is raised to.\n\n");
}




float main(){
  printf("Newtonian-C, by Ian Mitchell (c) 2017, Gnu GPL v3\n");
  printf("Please pick an option from below\n");
  printf("-------------------------------------------------\n\n");
  printf("1) Kinematic system\n");
  printf("2) Wave system\n");
  printf("3) Gravitational System\n");
  printf("4) About\n\n");
  printf("---> ");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    kinematic();
    break;
  case 2:
    wave();
    break;
  case 3:
    gravity();
    break;
  case 4:
    about();
    break;
  }
}
