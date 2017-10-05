#define FALLA_3G 1
#define FALLA_4G 2
#define FALLA_EQUIPO 3

#define INDETERMINADO 1
#define EN_CURSO 2
#define SIN_RESOLVER 3
#define RESUELTO 4

#define DISPONIBLE 0
#define NO_DISPONIBLE 1




typedef struct
{
    int idLlamada;
    int idAbonado;
    int motivo;
    int estado;
    int duracion;
    int flagEstado;

} sReclamo;

typedef struct
{
    unsigned int idAbonado;
    unsigned int numero;
    char nombre[50];
    char apellido[50];
    int flagEstado;

} sAbonado;

typedef struct
{
    int idAbonado;
    int cont;
} sRPC;

typedef struct
{
    int motivo;
    int cont;
    int acumT;
    float promedio;
} eMotivo;


void cargarAbonados(sAbonado[], int);

void inicializarReclamos(sReclamo[], int);

int crearReclamo(sReclamo[], int, int, sAbonado [], int );

int buscarLugar(sReclamo[],int);

int buscarAbonadoxTelefono(sAbonado[],int,int);

sReclamo newReclamo(int, int, int);

void mostrarReclamo(sReclamo,char[],char[]);

void mostrarTodos(sReclamo[], int, sAbonado[], int);

void finalizarLLamada(sReclamo[], int, sAbonado[], int, int);

void masReclamos(sReclamo[], sAbonado[],int,int);

void reclamoPorFalla(sReclamo[], int);

void reclamoPorFallaDuracion(sReclamo[], int);

void borrarPantalla();
