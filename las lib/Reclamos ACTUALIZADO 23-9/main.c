#include <stdio.h>
#include <stdlib.h>
#include "lib.h"


int main()
{
    sAbonado abonados[5];
    sReclamo reclamos[5];
    int guardo;
    int i;
    int ultimoId=1;
    int telefono;
    int idAbonado;

    int opcion;


    inicializarReclamos(reclamos, 5);
    cargarAbonados(abonados, 5);


    do
    {
        printf("1. Alta ABONADO\n2. Modificar ABONADO\n3. Baja ABONADO\n%d. Ingresar llamada\n5. Finalizar llamada\n6. Listar\n7.Salir\n",RESUELTO);
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 4:
            guardo = crearReclamo(reclamos,5, ultimoId, abonados, 5);
            if(guardo!=-1)
            {
                printf("Reclamo cargado correctamente");
                ultimoId++;
            }
            else
            {
                printf("Error en reclamo... llame luego");
            }


            break;
        case 5:
            printf("Ingrese numero de telefono: ");
            scanf("%d", &telefono);

            finalizarLLamada(reclamos, 5, abonados, 5, telefono);

            break;

        case 6:

            // mostrarReclamo(reclamos, 5, abonados,5);
            printf("Reclamos por clientes\n");

            masReclamos(reclamos,abonados,5,5);

            printf("\nmotivo con mas reclamos\n");
            reclamoPorFalla(reclamos, 5);

            printf("Reclamo que mas tarda en promedio: \n");
            reclamoPorFallaDuracion(reclamos,5);

            break;

        }
        borrarPantalla();
    }
    while(opcion!=7);




    return 0;
}
