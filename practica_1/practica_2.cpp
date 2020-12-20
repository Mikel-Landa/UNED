/**************************************
* NOMBRE: #Mikel#
* PRIMER APELLIDO: #Landa#
* SEGUNDO APELLIDO: #Cantera#
* DNI: #53840164Q#
* EMAIL: #mlanda34@alumno.uned.es#
***************************************/
#include <stdio.h>
#include <string.h>
int main(){
  char a ='@';
  char o ='o';
  char p ='.';
  char act;
  char ult;
  char pen;
  int lado;
  int toFill;
  int numChars=-1;
  int simNum;
  int k;

  printf("Lado del Rombo?");
  scanf("%i",&lado);
  printf("\n");
  if(lado<1 || lado>20){
    printf("\n");
    return 0;
  }
  for(int i=0;i<lado*2-1;i++){

    if (i>lado-1){
      numChars= numChars -2;
    }
    else{
      numChars= numChars +2;

    }
    simNum=i-1;
    toFill=(lado*2-1-numChars)/2;

  for (int j=0;j<toFill;j++){
     printf(" ");
  }

  printf("@");

  for (int j=0;j<numChars-2;j++){

    if (j>=numChars/2 && numChars>9 && i%2==1){
      k=(j+2)%4;
    }
    else{
      k=j%4;
    }
    if (k==3 && numChars>7){
      act=a;
      ult=a;
      pen=p;
    }
    else if (k==0){
      act=p;
      ult=p;
      pen=a;
    }

    else if (k==2 && ult!=p){
      act=p;
      ult=p;
      pen=o;
    }
    else{
      act=o;
      ult=o;
      pen=p;
    }
    printf("%c",act);

  }
  if (i!=0 && i!=lado*2-2){
   printf("@");
  }



  printf("\n");





  }
  printf("\n");
  return 0;
}
