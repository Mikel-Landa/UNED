#include "prueba_4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "practica_3.h"
typedef Node *pTemp;
Pedido ped;
/* caracteres especiales */
int A = 181;
int a = 160;
int o = 162;
int O = 224;
int ii = 161;
int I = 214;
int e = 130;
int E = 144;
int u = 163;
int U = 233;
int ny=164;
void FarmaDron::nuevoPaciente(){
    Paciente paciente;
    typedef char charArray[21];
    charArray string;
    int distancia;
    bool correcto;
    int angulo;
    char valido;
    int char1;
    char fh;
    identificador nombre;
    printf("  Alta nuevo paciente:\n\n\n");
    printf("\tIdentificador (entre 1 y 20 caracteres) ");
    gets(paciente.nombre);
    printf("\tDistancia (hasta 10000 metros a plena carga)? ");
    scanf("%d",&distancia);
    printf("\t%cngulo (entre 0 y 2000 pi/1000 radianes)? ",A);
    scanf("%d",&angulo);
    printf("\n\n\n");
    if( distancia>12500 || angulo/1000>2*pi){
        printf("  Datos incorrectos, por favor vuelva a intentarlo\n\n\n");
        getchar();
        nuevoPaciente();
        return;
    };
    paciente.distancia=distancia;
    paciente.angulo=angulo;
    printf("  Datos correctos (S/N)? ");
    scanf("%s",&valido);
    if (valido!='S'){
        getchar();
        nuevoPaciente();
        return;
    }
    if (pushPaciente(paciente)==1){
        printf("\n");
        printf("El listado de pacientes esta completo, se va ha terminar la operaci%cn\n\n\n",o);
        return;
    }
    printf("  Otro paciente (S/N)? ");
    scanf("%s",&valido);
    printf("\n\n\n");
    if (valido=='S'){
        getchar();
        nuevoPaciente();
    }
    manejarApp();
}

void FarmaDron::nuevoPedido(bool nuevo_pedido,bool nuevo_paciente,Pedido p){
    Pedido pedido;
    Medicamento medicamento;
    int und;
    char otro;
    pedido.inicializarClase();
    if (nuevo_pedido){
        printf("  Nuevo pedido:\n\n\n");
    }
    if(nuevo_paciente) {
        printf("\tRef. Paciente (entre 1 y 20): ");
        scanf("%d",&pedido.pacienteId);
        if (pedido.pacienteId>ultimoPaciente){
            printf("  Lo sentimos, referencia no v%clida\n\n\n",a);
            nuevoPedido(false,true,ped);
            return;
        }
        printf("\tN%cmero de env%cos? ",u,ii);
        scanf("%d",&pedido.cantidad);

        printf("\tD%ca del env%co? ",ii,ii);
        scanf("%d",&pedido.dia);

        printf("\tMes del env%co?",ii);
        scanf("%d",&pedido.mes);

        printf("\tA%co del envio? ",ny);
        scanf("%d",&pedido.anyo);
        getchar();
    }
    else{
        pedido=p;
    }
    printf("\tNombre f%crmaco (Entre 1 y 20 caracteres)? ",a);
    gets(medicamento.nombre);
    printf("\tPeso f%crmaco (Menor de 3000 gramos)? ",a);
    scanf("%d",&medicamento.peso);
    getchar();
    printf("\tUnidades de f%crmaco? ",a);
    scanf("%d",&und);
    if (und>5){
        getchar();
        printf("El pedido es inv%clido, el %cltimo medicamento no se guardar%c\n",a,u,a);
        nuevoPedido(false,false,pedido);
        return;
    }

    if (pedido.pushMedicamento(medicamento, und)!=0){
        getchar();
        printf("El listado de medicamentos est%c lleno\n",a);
    }
    if (pedido.pesoTotal>3000 || pedido.nMed>4){
        printf("El pedido es inv%clido,int%cntelo otra vez\n",a,e);
        getchar();
        nuevoPedido(false,false,ped);
        return;
    }
    printf("\tOtro f%crmaco (S/N)? ",a);
    scanf("%s",&otro);
    if (otro=='S'){
        getchar();
        nuevoPedido(false,false,pedido);
        return;
    }
    if(pushPedido(pedido)!=0){
        printf("El listado de pedidos est%c lleno, se va a terminar la operaci%cn\n\n\n",a,o);
        return;
    }

    printf("\tOtro pedido (S/N)? ");
    scanf("%s",&otro);
    printf("\n\n\n");
    if (otro=='S'){
        getchar();
        nuevoPedido(false,true,ped);
    }
    manejarApp();
}

void FarmaDron::ubicarPacientes(){
    printf("  Lista de pacientes y su ubicaci%cn:\n\n\n",o);
    printf("\t%-7s %-20s %10s %10s", "Ref.", "Identificador", "Distancia", "Angulo");
    printf("\n\n\n");
    for (int i = 0; i < ultimoPaciente;i++){
        printf("\t%-7d %-20s %10d %10d", i, pacientes[i].nombre, pacientes[i].distancia, pacientes[i].angulo);
        printf("\n");
    }
    printf("\n\n\n");
    manejarApp();
}

void FarmaDron::listaDiaria(){

    int mes, anyo, dia;
    int sum;
    printf("  D%ca? ",ii);
    scanf("%d",&dia);
    printf("  Mes? ");
    scanf("%d",&mes);
    printf("  A%co? ",ny);
    scanf("%d",&anyo);
    sum = anyo*10000+mes*100+dia;
    for (int i=0; i < ultimoPedido;i++){
        if(calcularOrden(pedidos[i])==sum){
        printf("\tPedido %d\n", i);
        printf("  Ubicaci%cn destino: Distancia: %d y Angulo: %d\n", o, pacientes[pedidos[i].pacienteId].distancia, pacientes[pedidos[i].pacienteId].angulo);
        for (int k = 0;k<pedidos[i].nMed;k++){
            printf("\t%d Unidades\t%-10s\t\tPeso: %4d gramos\n", pedidos[i].cantidad[k], pedidos[i].medicamentos[k].nombre, pedidos[i].medicamentos[k].peso);
        }
        printf("\t\t        Peso total del env%co: %12d gramos" ,ii, pedidos[i].pesoTotal);
        printf("\n\n\n");
        }
    }
    manejarApp();
}
int maxf(int a,int b){
    if (a>b){
      return a;
    }
    return b;
}

void FarmaDron::calendarioMensual()
{
    PrintDays days;
    int dia;
    int m;
    int y;
    int min;
    int max;
    printf("Mes?");
    scanf("%d",&m);
    printf("A%co?",ny);
    scanf("%d",&y);
    min = y * 10000 + m * 100;
    max = y * 10000 + (m + 1) * 100;

    for (int i=0; i < maxf(ultimoPedido,31);i++)
    {
        if (min<calcularOrden(pedidos[i]) && calcularOrden(pedidos[i])<max){
            dia=pedidos[i].dia-1;
            days[dia]=1;
            if (days[i]!=1){
              days[i]=0;
            }

        }
        else if (i<31){
          if (days[i]!=1){
            days[i]=0;
          }
        }
    }

    PrintCalendar(days,m,y);
    manejarApp();

}

void FarmaDron::manejarApp(){
    char respuesta;
    printf("  FarmaDron: Distribuci%cn de F%crmacos con Dron\n", o, a);
    printf("\tAlta nuevo paciente\t\t   (Pulsar A)\n",' ');
    printf("\tUbicar pacientes\t\t   (Pulsar U)\n",' ');
    printf("\tNuevo pedido\t\t\t   (Pulsar N)\n",' ');
    printf("\tLista diaria de pedidos\t\t   (Pulsar L)\n",' ');
    printf("\tCalendario mensual de pedidos\t   (Pulsar C)\n",' ');
    printf("\tSalir\t\t\t\t   (Pulsar S)\n",' ');
    printf("  Teclear una opci%Cn v%clida (A|U|N|L|C|S)? ",o, a);

    scanf("%s",&respuesta);
    getchar();
    switch (respuesta)
    {
    case 'A':
        nuevoPaciente();
        break;
    case 'U':
        ubicarPacientes();
        break;
    case 'N':
        nuevoPedido(true,true,ped);
        break;
    case 'L':
        listaDiaria();
        break;
    case 'C':
        calendarioMensual();
        break;
    case 'S':
        printf("Terminando programa...");
        break;

    default:
        printf("  Opci%cn incorrecta, por f%cvor int%cntelo otra vez\n\n", o,a, e);
        manejarApp();

    }
}

/* -----------OPERACIONES------------------------------------------------------- */



/* Operaciones FarmaDron */
void FarmaDron::inicializarClase(){
    ultimoPedido = 0;
    ultimoPaciente = 0;
}

int FarmaDron::pushPedido(Pedido p){
    if(ultimoPedido>99){
        return 1;
    }
    pedidos[ultimoPedido] = p;
    ultimoPedido++;
    ordenarPedidos();
    return 0;
}

int FarmaDron::pushPaciente(Paciente p){
    if(ultimoPaciente>19){
        return 1;
    }
    pacientes[ultimoPaciente] = p;
    ultimoPaciente++;
    return 0;
}

int FarmaDron::calcularOrden(Pedido p){
    return p.anyo * 10000 + p.mes * 100 + p.dia;
}

void FarmaDron::ordenarPedidos(){
    Pedido temp;
    for (int i = 1; i < ultimoPedido; i++){
        if (calcularOrden(pedidos[i-1])>calcularOrden(pedidos[i])){
            temp = pedidos[i];
            pedidos[i] = pedidos[i - 1];
            pedidos[i - 1] = temp;
        }
    }
}

/* Operaciones Pedido */
void Pedido::inicializarClase(){
    nMed = 0;
    pesoTotal = 0;
}

int Pedido::pushMedicamento(Medicamento m,int c){
    if( nMed>4){
        return 1;
    }
    medicamentos[nMed] = m;
    cantidad[nMed] = c;
    pesoTotal = pesoTotal + (m.peso * c);
    nMed++;
    return 0;
}


/* Queue */

void Queue::enqueue(Pedido p){
    Node n;
    pTemp temp;
    n.pedido = p;

    temp=last;
    if (false){
        counter = 1;
        root = &n;
        return;
    }

    last = &n;
    temp->next=&n;
    counter++;
}

void Queue::dequeue(){
    if(!root){
        return;
    }
    root = root->next;
    counter--;
}

Pedido Queue::getNext(){
    return root->pedido;
}


/* inicializar algunos pacientes y pedidos */
FarmaDron inicializarPrograma(){
    Paciente p1, p2,p3;
    Medicamento m1, m2, m3, m4, m5;
    Pedido pe1, pe2, pe3;
    FarmaDron dron;

    strcpy(p1.nombre,"Alberto Gomez");
    p1.angulo = 123;
    p1.distancia = 1235;
    strcpy(p2.nombre,"Jimena martinez");
    p2.angulo = 874;
    p2.distancia = 5874;
    strcpy(p3.nombre, "Pepe Gonzalez");
    p3.angulo = 25;
    p3.distancia = 9720;

    strcpy(m1.nombre,"Analgesico");
    m1.peso = 300;
    strcpy(m2.nombre,"Liztin");
    m2.peso = 2;
    strcpy(m3.nombre,"Aspirina");
    m3.peso = 150;
    strcpy(m4.nombre,"Ibuprofeno");
    m4.peso = 125;
    strcpy(m5.nombre,"Soparin");
    m5.peso = 195;

    pe1.anyo = 2020;
    pe1.dia = 15;
    pe1.mes = 12;
    pe1.medicamentos[0]=m1;
    pe1.medicamentos[1]=m2;
    pe1.medicamentos[2]=m3;
    pe1.cantidad[0] = 1;
    pe1.cantidad[1] = 2;
    pe1.cantidad[2] = 1;
    pe1.nMed = 3;
    pe1.pacienteId = 1;
    pe1.pesoTotal = m1.peso + m2.peso * 2 + m3.peso;

    pe2.anyo = 2020;
    pe2.dia = 8;
    pe2.mes = 12;
    pe2.medicamentos[0] = m3;
    pe2.medicamentos[1] = m2;
    pe2.medicamentos[2] = m5;
    pe2.cantidad[0] = 1;
    pe2.cantidad[1] = 2;
    pe2.cantidad[2] = 1;
    pe2.nMed = 3;
    pe2.pacienteId = 2;
    pe2.pesoTotal = m3.peso + m2.peso * 2 + m5.peso;

    pe3.anyo = 2020;
    pe3.dia = 23;
    pe3.mes = 12;
    pe3.medicamentos[0] = m1;
    pe3.medicamentos[1] = m5;
    pe3.cantidad[0] = 1;
    pe3.cantidad[1] = 4;
    pe3.nMed = 2;
    pe3.pacienteId = 3;
    pe3.pesoTotal = m1.peso +m5.peso*4;

    dron.pacientes[0] = p1;
    dron.pacientes[1] = p2;
    dron.pacientes[2] = p3;
    dron.pedidos[0] = pe1;
    dron.pedidos[1] = pe2;
    dron.pedidos[2] = pe3;
    dron.ultimoPaciente = 3;
    dron.ultimoPedido = 3;
    return dron;
}

int main(){
    FarmaDron dron;
    dron = inicializarPrograma();
    dron.manejarApp();
    /* dron.ubicarPacientes();
    dron.listaDiaria();
    dron.calendarioMensual(12,2020); */
    return 0;
}



