//
// Created by Maikol Guzman  on 2019-09-16.
//

#include <sstream>
#include "ListaLibros.h"

ListaLibros::ListaLibros() {
	primero = nullptr;
	actual = nullptr;
}

ListaLibros::~ListaLibros() {
	while (primero != nullptr) {
		actual = primero;
		primero = primero->getSiguiente();
		delete(actual);
	}
}



void ListaLibros::insertarFinal(const Libro& _libro) {
	actual = primero;
	if (primero == nullptr) {
		primero = new Nodo(_libro, nullptr);
	}
	else {
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}
		actual->setSiguiente(new Nodo(_libro, nullptr));
	}
}

bool ListaLibros::eliminarFinal() {
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
			delete actual;
		}
		return true;
	}
}

std::string ListaLibros::obtenerLibr(std::string id)
{
	return std::string();
}

bool ListaLibros::encontrarlib(std::string id)
{
	if (primero == nullptr) {
		return false;
	}
	else {
		actual = primero;
		while (actual->getLibro->getId == id) {
			actual = actual->getSiguiente();
			return true;

	}
		return false;
}





Nodo* ListaLibros::getPrimero() const {
	return primero;
}

void ListaLibros::setPrimero(Nodo* primero) {
	ListaLibros::primero = primero;
}

Nodo* ListaLibros::getActual() const {
	return actual;
}

void ListaLibros::setActual(Nodo* actual) {
	ListaLibros::actual = actual;
}
