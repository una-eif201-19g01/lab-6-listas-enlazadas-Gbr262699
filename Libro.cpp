//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Libro.h"

Libro::Libro()
{
}
Libro::Libro(std::string id, std::string nombre):Id(id),nombre(nombre)
{
}

Libro::~Libro(){
}

std::string Libro::getnombre() {
	return nombre;
}
std::string Libro::getId() {
	return Id;

}

void Libro::setnombre(std::string nombre) {

}

void Libro::setId(std::string Id) {

}

std::string Libro::tostring() {
	std::string resultado;

	resultado = "id" + Id + "nombre" + nombre +"\n";

	return resultado;
}