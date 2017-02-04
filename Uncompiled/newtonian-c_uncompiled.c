# include <stdio.h>
# include <math.h>
# include <strings.h>
/*Newtonian-C is a program designed to solve kinematic, gravitational, and
wave systems. None of thus will go beyond high school physics. So, any 
university student may find this program underwhelming.*/

float m, t, x, f, v, h, a, w, po, p, ke, pe, a; /*Basic Kinematic variables*/
float f, A, lambda, omega, T, v; /* Wave variables */;
float Fg, r, M, m1, m2; /* Gravitational variables, v is already in the Kinematic variables.*/
float mf, hi, ho, fp, rf, d0, di; /*Optics variables*/
float theta; /*Angle*/
float E, Etheta, cs; /*Quantum variables*/
float I, V, R; /*Electronic variables*/
float g = 9.8; /* Gravitational Acceleration*/
float Gc = 6.67408E-11; /* Newton's Gravitational Constant. */
float pi = 3.141592; /*Pi, just pi.*/;
float c = 299792458; /*The speed of light in a vacuum*/
float hc = 6.63E-34; /*Plank's constant*/
float hr = 1.05E-16; /*Plank's reduced constant*/
float Me = 9.11E-31; /*Electron rest mass*/
int choice;
int choice2;
int choice3;
int choice4;
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

float optic(){
  printf("Optical system\n");
  printf("--------------\n");
  printf("1) Mirror to image distance\n");
  printf("2) Refraction\n");
  printf("3) Focal length");
  printf("\n--> ");
  scanf("%d",&choice2);
  switch (choice2){
  case 1:
    printf("Please input the distance from the mirror and the distance from the image.\n");
    scanf("%f",&d0);
    scanf("%f",&di);
    mf = (1 / d0) + (1 / di);
    printf("Distance of mirror to the image: 1/f = %f\n",mf);
    break;

  case 2:
    printf("Please input the speed of light in your medium...\n");
    scanf("%f",&v);
    rf = c / v;
    printf("Refraction index: rf = %f\n",rf);
    break;

  case 3:
      printf("Concave or convex?\n");
      printf("------------------\n");
      printf("1) Concave\n");
      printf("2) Convex\n> ");
      scanf("%d",&choice3);
      switch (choice3){
      case 1:
	printf("Input radius\n");
	scanf("%f", &r);
	fp = .5 * r;
	printf("Focal length: fl = %f\n",fp);
	break;
      case 2:
	printf("Input radius\n");
	scanf("%f", &r);
	fp = -(.5 * r);
	printf("Focal length: fl = %f\n",fp);
	break;
	
      }
      
    }
    
  }


float quantum(){
  printf("Quantum system (in ħ = c = 1 units)\n");
  printf("--------------\n");
  printf("1) Action of a particle\n2) Compton scattering\n--> ");
  scanf("%d",&choice2);
  switch (choice2) {
  case 1:
    printf("Input momentum and mass in that exact order (in ħ = c = 1 units)\n");
    scanf("%f",&p);
    scanf("%f", &m);
    lambda = m * 1 / p;
    f = 1 / lambda;
    E = ((1 / (2 * pi)) / lambda);
    Etheta = 1 * ((2 / pi) * f);
    printf("Wavelength: λ = %f\nFrequency: f = %f\nEnergy: E = %f\nEnergy with angular frequency: Eθ = %f\n", lambda, f, E, Etheta);
    break;
  case 2:
    printf("Please enter your scattering angle and mass in that order (in ħ = c = 1 units).\n");
    scanf("%f",&theta);
    scanf("%f",&m);
    cs = ( 1 / m ) * (1 - cos( theta ) );
    printf("λ' -  λ = %f\n\n",cs);
    
}
}
float electricity(){
  printf("What do you wish to find out?\n");
  printf("-----------------------------\n");
  printf("1) Current\n2) Resistance\n3) Voltage\n\n--> ");
  scanf("%d",&choice2);
  switch (choice2) {
  case 1:
    printf("Please input voltage and resistance in that exact order.\n");
    scanf("%f", &V);
    scanf("%f", &R);
    I = V / R;
    printf("Current: I = %f\nVoltage: V = %f\nResistance: R = %f\n", I, V, R);
    break;
  case 2:
    printf("Please enter current and voltage in that exact order.\n");
    scanf("%f", &V);
    scanf("%f", &I);
    R = I / V;
    printf("Current: I = %f\nVoltage: V = %f\nResistance: R = %f\n", I, V, R);
    break;
  case 3:
    printf("Enter resistance and current in that exact order.\n");
    scanf("%f", &R);
    scanf("%f", &I);
    V = I * R;
    printf("Current: I = %f\nVoltage: V = %f\nResistance: R = %f\n", I, V, R);
  }
  
}


float about(){
  printf("*TAKEN FROM THE README*\n");
  printf("Newtonian-C is a C program that can make high-school physics a breeze. With its simple usage, and small size. \nWith Newtonian-C, you can work with the basics of... \n\n -Kinematic Systems\n -Newtonian gravitational systems\n -Waves\n\nNow, you can probably take this into college, but, I cannot guarantee that it will get you far.\n\n");
  printf("About ħ = c = 1 units\nħ = c = 1 units are the natural units used by particle physicists in their study of the indescribably tiny. So tiny,\ninfact, that the units they use are incredbly minute. To combat this, physicists divised a derivable system of units for the high energy conditions of the subatomic world (c, the speed of light), and, for the incredibly small action \n(ħ)\n\n");

  printf("A QUICK NOTE ON USAGE\n\nIf you're using scientific notation, then what you can do is use E, or input 'xEy', where x is a decimal number, and y is the power 10 (E) is raised to.\n\n");
}




float main(){
  printf("Newtonian-C, by Ian Mitchell (c) 2017, Gnu GPL v3\n");
  printf("Please pick an option from below\n");
  printf("-------------------------------------------------\n\n");
  printf("1) Kinematic system\n");
  printf("2) Wave system\n");
  printf("3) Gravitational System\n");
  printf("4) Geometric Optical System\n");
  printf("5) Quantum System\n");
  printf("6) Electromagenetic System\n");
  printf("7) About\n\n");
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
    optic();
    break;
  case 5:
    quantum();
    break;
  case 6:
    electricity();
    break;
  case 7:
    about();
    break;
  }
}

