//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#define LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#include <ostream>
#include "Nodo.h"


class ListaLibros {
	Nodo* primero;
	Nodo* actual;

public:
	ListaLibros();

	virtual ~ListaLibros();


	void insertarFinal(const Libro& _libro);
	bool eliminarFinal();
	bool  encontrarlib(std::string id);
	std::string obtenerLibr(std::string id);
	


	Nodo* getPrimero() const;

	void setPrimero(Nodo* primero);

	Nodo* getActual() const;

	void setActual(Nodo* actual);

	std::string toString();
};
};


#endif //LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
