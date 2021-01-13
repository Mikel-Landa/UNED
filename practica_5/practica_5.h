#pragma once
#include "prueba_4/prueba_4.h"
typedef char Calle[49];
typedef char Municipio[49];
typedef char Provincia[17];
typedef char Descripcion[49];
typedef int Lista[11];
typedef struct Almacen{
    FarmaDron dron;
    Calle calle;
    Provincia provincia;
    Municipio municipio;
    Descripcion descripcion;
};

typedef struct Gestor_FarmaDron{
    Almacen almacenes[11];
    Lista filled;
    void GestionarApp();
    void IniciarGestion();
    void AltaAlmacen();
    void AltaPacienteAlmacen(bool fresh);
    void UbicarPacientes();
    void NuevoPedido();
    void ListaDiariaPedidos();
    void ProgramarRutasDron();
    void DibujarRutasDron();
};
