#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "practica_5.h"

void Gestor_FarmaDron::IniciarGestion(){

    Almacen a1;
    Almacen a2;
    Almacen a3;
    Almacen a4;
    Almacen a5;
    FarmaDron d1;
    FarmaDron d2;
    FarmaDron d3;
    FarmaDron d4;
    FarmaDron d5;

    Paciente p1, p2,p3,p4,p5,p6,p7,p8,p9,p10;
    Medicamento m1, m2, m3, m4, m5;
    Pedido pe1, pe2, pe3,pe4,pe5,pe6,pe7,pe8,pe9,pe10,pe11,pe12,pe13,pe14,pe15;


    /* nombre y posicion pacientes */
    strcpy(p1.nombre,"Alberto Gomez");
    p1.angulo = 1849;
    p1.distancia = 6704;
    strcpy(p2.nombre,"Jimena Martinez");
    p2.angulo = 874;
    p2.distancia = 5874;
    strcpy(p3.nombre, "Pepe Gonzalez");
    p3.angulo = 25;
    p3.distancia = 9720;
    strcpy(p1.nombre,"Claudia Blanco");
    p4.angulo = 1932;
    p4.distancia = 4129;
    strcpy(p1.nombre,"Avelina Toledano");
    p5.angulo = 375;
    p5.distancia = 192;
    strcpy(p1.nombre,"Hicham Afonso");
    p6.angulo = 836;
    p6.distancia = 620;
    strcpy(p1.nombre,"Victoria Vazquez");
    p7.angulo = 1270;
    p7.distancia = 7985;
    strcpy(p1.nombre,"Maravillas Hermoso");
    p8.angulo = 959;
    p8.distancia = 5150;
    strcpy(p1.nombre,"Fabio Vaca");
    p9.angulo = 949;
    p9.distancia = 10271;
    strcpy(p1.nombre,"Dionisia Tena");
    p10.angulo = 1688;
    p10.distancia = 3360;


    /* nombre y peso medicamentos */

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


    /* pedidos */

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

    pe4.anyo = 2019;
    pe4.dia = 25;
    pe4.mes = 9;
    pe4.medicamentos[0]=m1;
    pe4.medicamentos[1]=m2;
    pe4.medicamentos[2]=m3;
    pe4.cantidad[0] = 1;
    pe4.cantidad[1] = 2;
    pe4.cantidad[2] = 1;
    pe4.nMed = 3;
    pe4.pacienteId = 1;
    pe4.pesoTotal = m1.peso + m2.peso * 2 + m3.peso;

    pe5.anyo = 2019;
    pe5.dia = 10;
    pe5.mes = 11;
    pe5.medicamentos[0]=m1;
    pe5.medicamentos[1]=m2;
    pe5.medicamentos[2]=m3;
    pe5.cantidad[0] = 1;
    pe5.cantidad[1] = 2;
    pe5.cantidad[2] = 1;
    pe5.nMed = 3;
    pe5.pacienteId = 1;
    pe5.pesoTotal = m1.peso + m2.peso * 2 + m3.peso;

    pe6.anyo = 2020;
    pe6.dia = 17;
    pe6.mes = 03;
    pe6.medicamentos[0]=m1;
    pe6.medicamentos[1]=m2;
    pe6.medicamentos[2]=m3;
    pe6.cantidad[0] = 1;
    pe6.cantidad[1] = 2;
    pe6.cantidad[2] = 1;
    pe6.nMed = 3;
    pe6.pacienteId = 1;
    pe6.pesoTotal = m1.peso + m2.peso * 2 + m3.peso;

    pe7.anyo = 2022;
    pe7.dia = 24;
    pe7.mes = 04;
    pe7.medicamentos[0]=m1;
    pe7.medicamentos[1]=m2;
    pe7.medicamentos[2]=m3;
    pe7.cantidad[0] = 1;
    pe7.cantidad[1] = 2;
    pe7.cantidad[2] = 1;
    pe7.nMed = 3;
    pe7.pacienteId = 1;
    pe7.pesoTotal = m1.peso + m2.peso * 2 + m3.peso;

    pe8.anyo = 2022;
    pe8.dia = 06;
    pe8.mes = 06;
    pe8.medicamentos[0] = m3;
    pe8.medicamentos[1] = m2;
    pe8.medicamentos[2] = m5;
    pe8.cantidad[0] = 1;
    pe8.cantidad[1] = 2;
    pe8.cantidad[2] = 1;
    pe8.nMed = 3;
    pe8.pacienteId = 2;
    pe8.pesoTotal = m3.peso + m2.peso * 2 + m5.peso;

    pe9.anyo = 2022;
    pe9.dia = 11;
    pe9.mes = 06;
    pe9.medicamentos[0] = m3;
    pe9.medicamentos[1] = m2;
    pe9.medicamentos[2] = m5;
    pe9.cantidad[0] = 1;
    pe9.cantidad[1] = 2;
    pe9.cantidad[2] = 1;
    pe9.nMed = 3;
    pe9.pacienteId = 2;
    pe9.pesoTotal = m3.peso + m2.peso * 2 + m5.peso;

    pe10.anyo = 2023;
    pe10.dia = 19;
    pe10.mes = 8;
    pe10.medicamentos[0] = m3;
    pe10.medicamentos[1] = m2;
    pe10.medicamentos[2] = m5;
    pe10.cantidad[0] = 1;
    pe10.cantidad[1] = 2;
    pe10.cantidad[2] = 1;
    pe10.nMed = 3;
    pe10.pacienteId = 2;
    pe10.pesoTotal = m3.peso + m2.peso * 2 + m5.peso;

    pe11.anyo = 2024;
    pe11.dia = 1;
    pe11.mes = 7;
    pe11.medicamentos[0] = m3;
    pe11.medicamentos[1] = m2;
    pe11.medicamentos[2] = m5;
    pe11.cantidad[0] = 1;
    pe11.cantidad[1] = 2;
    pe11.cantidad[2] = 1;
    pe11.nMed = 3;
    pe11.pacienteId = 2;
    pe11.pesoTotal = m3.peso + m2.peso * 2 + m5.peso;

    pe12.anyo = 2024;
    pe12.dia = 16;
    pe12.mes = 9;
    pe12.medicamentos[0] = m1;
    pe12.medicamentos[1] = m5;
    pe12.cantidad[0] = 1;
    pe12.cantidad[1] = 4;
    pe12.nMed = 2;
    pe12.pacienteId = 3;
    pe12.pesoTotal = m1.peso +m5.peso*4;

    pe13.anyo = 2025;
    pe13.dia = 28;
    pe13.mes = 01;
    pe13.medicamentos[0] = m1;
    pe13.medicamentos[1] = m5;
    pe13.cantidad[0] = 1;
    pe13.cantidad[1] = 4;
    pe13.nMed = 2;
    pe13.pacienteId = 3;
    pe13.pesoTotal = m1.peso +m5.peso*4;

    pe14.anyo = 2020;
    pe14.dia = 23;
    pe14.mes = 12;
    pe14.medicamentos[0] = m1;
    pe14.medicamentos[1] = m5;
    pe14.cantidad[0] = 1;
    pe14.cantidad[1] = 4;
    pe14.nMed = 2;
    pe14.pacienteId = 3;
    pe14.pesoTotal = m1.peso +m5.peso*4;

    pe15.anyo = 2020;
    pe15.dia = 23;
    pe15.mes = 12;
    pe15.medicamentos[0] = m1;
    pe15.medicamentos[1] = m5;
    pe15.medicamentos[1] = m4;
    pe15.medicamentos[1] = m2;
    pe15.cantidad[0] = 1;
    pe15.cantidad[1] = 4;
    pe15.nMed = 2;
    pe15.pacienteId = 4;
    pe15.pesoTotal = m1.peso + m2.peso + m4.peso + m5.peso;

    a1.dron = d1;
    strcpy(a1.calle,"Calle Enrique Granados, 6");
    strcpy(a1.provincia,"Madrid");
    strcpy(a1.municipio,"Pozuelo de Alarcon");
    strcpy(a1.descripcion,"Almacen com buenas vistas y buen posicionamiento");

    a2.dron = d2;
    strcpy(a2.calle,"Calle Sant Vicent Martir, 22");
    strcpy(a2.provincia,"Valencia");
    strcpy(a2.municipio,"Valencia");
    strcpy(a2.descripcion,"Buen centro logistico para el levante");

    a3.dron = d3;
    strcpy(a3.calle,"Calle Triana, 15");
    strcpy(a3.provincia,"Sevilla");
    strcpy(a3.municipio,"Sevilla");
    strcpy(a3.descripcion,"Una empresa con buen ambiente de trabajo");

    a4.dron = d4;
    strcpy(a4.calle,"Calle Tribaldos, 3");
    strcpy(a4.provincia,"Madrid");
    strcpy(a4.municipio,"Madrid");
    strcpy(a4.descripcion,"Somos juerguistas, punto.");

    a5.dron = d5;
    strcpy(a1.calle,"Calle Joaquin Costa, 12");
    strcpy(a1.provincia,"Zaragoza");
    strcpy(a1.municipio,"Zaragoza");
    strcpy(a1.descripcion,"Menos caro y menos bueno");


    a1.dron.pacientes[0] = p1;
    a1.dron.pacientes[1] = p2;
    a1.dron.pacientes[2] = p3;
    a1.dron.pacientes[3] = p4;
    a1.dron.pacientes[4] = p5;
    a1.dron.pacientes[5] = p6;
    a1.dron.pacientes[6] = p7;
    a1.dron.pacientes[7] = p8;
    a1.dron.pacientes[8] = p9;
    a1.dron.pacientes[9] = p10;

    a1.dron.pedidos[0] = pe1;
    a1.dron.pedidos[1] = pe2;
    a1.dron.pedidos[2] = pe3;
    a1.dron.pedidos[3] = pe4;
    a1.dron.pedidos[4] = pe5;
    a1.dron.pedidos[5] = pe6;
    a1.dron.pedidos[6] = pe7;
    a1.dron.pedidos[7] = pe8;
    a1.dron.pedidos[8] = pe9;
    a1.dron.pedidos[9] = pe10;
    a1.dron.pedidos[10] = pe11;
    a1.dron.pedidos[11] = pe12;
    a1.dron.pedidos[12] = pe13;
    a1.dron.pedidos[13] = pe14;
    a1.dron.pedidos[14] = pe15;
    a1.dron.ultimoPaciente = 10;
    a1.dron.ultimoPedido = 15;

    /* segunda tanda pacientes */
    strcpy(p1.nombre,"Dionisia Tena");
    p1.angulo = 1849;
    p1.distancia = 6704;
    strcpy(p2.nombre,"Gonzalo Puerto");
    p2.angulo = 874;
    p2.distancia = 5874;
    strcpy(p3.nombre, "Abraham Egea");
    p3.angulo = 25;
    p3.distancia = 9720;
    strcpy(p1.nombre,"Almudena Morera");
    p4.angulo = 1932;
    p4.distancia = 4129;
    strcpy(p1.nombre,"Eulalia Campoy");
    p5.angulo = 375;
    p5.distancia = 192;
    strcpy(p1.nombre,"Piedad Ramon");
    p6.angulo = 836;
    p6.distancia = 620;
    strcpy(p1.nombre,"Leopoldo Verdugo");
    p7.angulo = 1270;
    p7.distancia = 7985;
    strcpy(p1.nombre,"Mara Sastre");
    p8.angulo = 959;
    p8.distancia = 5150;
    strcpy(p1.nombre,"Alan Martnez");
    p9.angulo = 949;
    p9.distancia = 10271;
    strcpy(p1.nombre,"Araceli Clemente");
    p10.angulo = 1688;
    p10.distancia = 3360;

    a2.dron.pacientes[0] = p1;
    a2.dron.pacientes[1] = p2;
    a2.dron.pacientes[2] = p3;
    a2.dron.pacientes[3] = p4;
    a2.dron.pacientes[4] = p5;
    a2.dron.pacientes[5] = p6;
    a2.dron.pacientes[6] = p7;
    a2.dron.pacientes[7] = p8;
    a2.dron.pacientes[8] = p9;
    a2.dron.pacientes[9] = p10;

    almacenes[0] = a1;
    almacenes[1] = a2;
    almacenes[2] = a3;
    almacenes[3] = a4;
    almacenes[4] = a5;


    for (int i=0;i<10;i++){
        if (i<5){
            filled[i]=1;
        }
        else{
            filled[i]=NULL;
        }
    }

    return;
}
void Gestor_FarmaDron::AltaAlmacen(){
    Almacen almacen;
    FarmaDron dron;
    int aId;
    char c;
    almacen.dron=dron;
    printf("  Alta nuevo almac%cn:\n",130);
    printf("\tIdentificador almacen (cod. de almacen 1 a 10)? ");
    scanf("%d",&aId);
    getchar();
    if(aId>10 || aId<1){
        printf("Identificador incorrecto, terminando el metodo");
        return;
    }
    aId--;
    printf("\tDireccion almacen? (entre 1 y 48 caracteres) ");
    gets(almacen.calle);

    printf("\tMunicipio almacen? (entre 1 y 48 caracteres) ");
    gets(almacen.municipio);

    printf("\tProvincia almacen? (entre 1 y 16 caracteres) ");
    gets(almacen.provincia);

    printf("\tDescripcion almacen? (entre 1 y 48 caracteres) ");
    gets(almacen.descripcion);

    printf("  Datos correctos (S/N)? ");
    scanf("%s",&c);

    if (c=='S'){
        if (filled[aId]==NULL){
            almacenes[aId]=almacen;
            filled[aId]=1;
            return;
        }
        for (int i=0;i<10;i++){
            if (filled[i]==NULL){
                almacenes[i]=almacen;
                filled[i]=1;
                return;
            }
        }
        printf("Todos los registros estan ocupados, ¿que almacen desea sustituir? ");
        scanf("%d",&aId);


        if(aId>10 || aId<1){
            printf("Identificador incorrecto, terminando el metodo");

            return;
        }
        aId--;
        almacenes[aId]=almacen;
        filled[aId]=1;
        return;
    }

    AltaAlmacen();
}

void Gestor_FarmaDron::AltaPacienteAlmacen(bool fresh){
    int aId;
    char c;
    Paciente p;
    if (fresh){
        printf("  Alta nuevo paciente: \n\n");
    printf("\tCodigo almacen? (entre 1-10) ");
    }
    scanf("%d", &aId);
    printf("\n\n  Datos paciente:\n\n");
    if(aId>10 || aId<1){
        printf("Identificador incorrecto, terminando el metodo");
        return;
    }
    aId--;
    printf("\tIdentificador paciente (entre 1 y 20 caracteres)? ");
    getchar();
    gets(p.nombre);
    printf("\tDistancia (hasta 10000 metros a plena carga)? ");
    scanf("%d", &p.distancia);
    printf("\tAngulo (entre 0 y 2000 milesimas de pi radianes)? ");
    scanf("%d", &p.angulo);

    if (p.angulo>2000 || p.distancia>12500 || p.distancia<1 ||p.angulo<0){
        printf("  El angulo o la distancia son incorrectos");
        return;
    }
    printf("\n\n  Datos correctos (S/N)? ");
    scanf("%s", &c);
    if (c=='N'){
        printf("\n\n\n");
        AltaPacienteAlmacen(false);
        return;
    }
    almacenes[aId].dron.pushPaciente(p);
    printf("  Otro paciente mismo almacen (S/N)? ");
    scanf("%s", &c);
    if (c=='S'){
        printf("\n\n\n");
        AltaPacienteAlmacen(false);
        return;
    }
    return;
}

void Gestor_FarmaDron::UbicarPacientes(){
    int aId;
    printf("  Lista de pacientes y su ubicacion: \n\n");
    printf("\tCodigo almacen? ");
    scanf("%d", &aId);
    printf("\n\n");
    almacenes[aId].dron.ubicarPacientes();
    return;
}
void Gestor_FarmaDron::GestionarApp(){
    char respuesta;
    printf("\n\n\n");
    printf("  GESTION DE FarmaDrones: Distribuci%cn de F%crmacos\n",162, 160);
    printf("\tIniciar gestion\t\t\t\t (Pulsar I)\n");
    printf("\tAlta almacen\t\t\t\t (Pulsar M)\n");
    printf("\tAlta paciente almacen\t\t\t (Pulsar A)\n");
    printf("\tUbicar pacientes\t\t\t (Pulsar U)\n");
    printf("\tNuevo pedido\t\t\t\t (Pulsar N)\n");
    printf("\tLista diaria de pedidos\t\t\t (Pulsar L)\n");
    printf("\tProgramar rutas diarias del dron\t (Pulsar P)\n");
    printf("\tRepresentar rutas diarias del dron\t (Pulsar R)\n");
    printf("\tSalir\t\t\t\t\t (Pulsar S)\n");
    printf("  Teclear una opcion valida (I|M|A|U|N|L|C|P|R|S)? ");
    scanf("%s",&respuesta);
    printf("\n\n\n");
    switch (respuesta)
    {
    case 'A':
        AltaPacienteAlmacen(true);
        GestionarApp();
        break;
    case 'U':
        UbicarPacientes();
        GestionarApp();
        break;
    // case 'N':
    //     NuevoPedido();
    //     GestionarApp();
    //     break;
    // case 'L':
    //     ListaDiariaPedidos();
    //     GestionarApp();
    //     break;
    // case 'P':
    //     ProgramarRutasDron();
    //     GestionarApp();
    //     break;
    // case 'R':
    //     DibujarRutasDron();
    //     GestionarApp();
    //     break;
    case 'M':
        AltaAlmacen();
        GestionarApp();
        break;
    case 'I':
        IniciarGestion();
        GestionarApp();
        break;
    case 'S':
        printf("  Terminando programa...");
        break;

    default:
        printf("  Opcion incorrecta, por facvor intentelo otra vez\n\n\n");
        GestionarApp();

    }
    return;
}
int main(){
    Gestor_FarmaDron gestor;
    gestor.IniciarGestion();
    printf("%s", gestor.almacenes[0].dron.pacientes[0].nombre);
    gestor.GestionarApp();

    return 0;
}
