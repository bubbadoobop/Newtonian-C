# include <stdio.h>
# include <math.h>
# include <strings.h>
/* This is a physical systems solver used for basic freshman grade physics.
 * It is increadibly basic, and has a primary function of helping kids learn
 * how all this works.
 *
 *
 */



/* This section of the code will be used to establish variables used by 
the main function.*/
float m, t, x, f, v, h, a, w, po, p, ke, pe, a; /* These are the primary physical variables. */

float g = 9.8; // [m/s^2]


// These are just the equations needed in order to perform the calculations.
/*
 v = x / t 
 a = v / t
 f = m * a
 po = m * v
 w = F * x
 p = w / t 
 ke = ( (1 / 2) * m ) * (v * v) 
 pe = m * g * h 
 */
 


float main(){
  printf("\nPhysical Systems Solver for *EXTREMELY* Basic Classical Kinematic Systems\n GNU GPL v. 3, Copyright (c) Ian Mitchell 2017\n");
  printf("-----------------------------------------------------\n\n");

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
