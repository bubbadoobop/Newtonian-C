# include <stdio.h>
# include <math.h>
/* This part of the program is made to do simple gravitational calculations.*/
float m, t, x, f, v, h, a, w, po, p, ke, pe, a;
float Fg, r, M, m1, m2;
float Gc = 6.67408E-11;
float main(){
  printf("Enter the masses of Mass One and Mass Two, and then the radius of Mass One in that exact order.\nIf you're using scientific notation, then what you can do is use E, or input 'xEy', where x is a decimal number, and y is the power 110 (E) is raised to.\n");
  scanf("%f",&m1);
  scanf("%f",&m2);
  scanf("%f",&r);
  M = m1 + m2;
  v = sqrt((Gc * M) / r);
  a = pow(v, 2) / r;
  Fg = Gc * ((m1 * m2) / pow(r, 2));
  printf("Velocity: v = %f\nAcceleration: a = %f\nForce of Gravity: Fg = %f\n", v, a, Fg);

  return 0;

}
