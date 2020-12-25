# pragma once
typedef char identificador[21];
const float pi=3.1415;
typedef struct Medicamento
{
    identificador nombre;
    int peso;
};
typedef struct Paciente
{
    identificador nombre;
    int distancia;
    int angulo;
};
typedef int Array[6];
typedef struct Pedido
{
    Array cantidad;
    Medicamento medicamentos[6];
    int pacienteId;
    int dia;
    int mes;
    int anyo;
    int nMed;
    int pesoTotal;
    int pushMedicamento(Medicamento m,int c);
    void inicializarClase();
};





typedef struct Node
{
    Pedido pedido;
    Node* next;
};


typedef struct Queue
{
    Node *root;
    Node *last;
    int counter;
    void enqueue(Pedido p);
    void dequeue();
    Pedido getNext();
};


typedef struct FarmaDron{
    Paciente pacientes[21];
    Pedido pedidos[101];
    int ultimoPedido;
    int ultimoPaciente;

    int pushPaciente(Paciente p);
    int pushPedido(Pedido p);
    void nuevoPaciente();
    void ubicarPacientes();
    void nuevoPedido(bool nuevo_pedido,bool nuevo_paciente);
    void inicializarClase();
    void listaDiaria();
    void ordenarPedidos();
    int calcularOrden(Pedido p);
    void calendarioMensual(int m, int y);
    void manejarApp();
};
