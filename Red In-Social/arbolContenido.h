#ifndef ARBOLCONTENIDO_H_INCLUDED
#define ARBOLCONTENIDO_H_INCLUDED

#include "stContenido.h"
#include "stUsuario.h"

///ESTRUCTURA ARBOL DE CONTENIDO

typedef struct _nodoArbolContenido{
    stContenido contenido;
    struct _nodoArbolContenido* izquierda;
    struct _nodoArbolContenido* derecha;
} nodoArbolContenido;


/*###############PROTOTIPOS FUNCIONES DE MANEJO ARBOL CONTENIDO#################*/

nodoArbolContenido* inicArbolContenido ();
nodoArbolContenido* crearNodoArbolContenido (stContenido nuevoContenido);
nodoArbolContenido* deArchiToArbolContenido (nodoArbolContenido* arbol, FILE* archi);
void imprimirPreorderArbolContenido (nodoArbolContenido* raiz);
void imprimirInorderArbolContenido (nodoArbolContenido* raiz);
void imprimirPostorderArbolContenido (nodoArbolContenido* raiz);
int contarNodos(nodoArbolContenido* raiz);
nodoArbolContenido* buscarNodoArbolContenido (nodoArbolContenido* arbol, int idBuscado);
nodoArbolContenido* insertarNuevoNodoContenido (nodoArbolContenido* arbol, nodoArbolContenido* nuevoNodo);
nodoArbolContenido* eliminarNodoContenido (nodoArbolContenido* arbol, int idNodoABorrar);
int esHojaContenido (nodoArbolContenido* arbol);
nodoArbolContenido* nodoMasDerecho (nodoArbolContenido* arbol);
nodoArbolContenido* nodoMasIzquierdo(nodoArbolContenido* arbol);
nodoArbolContenido* deArregloBalanceadoToArbol (nodoArbolContenido* raiz, stContenido* arregloContenido, int posInicio, int posFinal);
int esMedio(int validos);
nodoArbolContenido* crearNuevoContenido (nodoArbolContenido* raiz);
void guardarArbolContenidoEnArchivo (nodoArbolContenido* raiz, FILE* pArchiArbol);
void guardarInorderContenido (nodoArbolContenido* raiz, FILE* archi);
void eliminarArbolContenido (nodoArbolContenido* raiz);
nodoArbolContenido* agregarNuevoContenidoAutoincremental (nodoArbolContenido* arbol);
void mostrarContenidosSegunPreferencias(stUsuario user, nodoArbolContenido* arbol);
int compararCategoriaConPreferencias (char categoriasPreferidas [3][30], char categoria [30]);
/*#############################################################################*/


#endif // ARBOLCONTENIDO_H_INCLUDED
