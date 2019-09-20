//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H

#include<ostream>
#include <string>

class Libro {
	std::string Id;
	std::string nombre;

private:
		Libro();
		Libro(std::string id ,std:: string nombre);
		virtual~Libro();
		std::string getId();
		void setnombre(std::string Id);
		std::string getnombre();
		void setId(std::string nombre);
		std::string tostring();






};


#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
