<<<<<<< HEAD
=======
/**
* @class Almendro
* @brief Atributos del arbol Almendro. Hija de Arbol.
*/
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
#pragma once
#include "stdafx.h"
#include "Carta.h"
using namespace std;

class Deck
{
private:

<<<<<<< HEAD
	list<Carta*> deck;
	Carta * carta;
	int cartasRestantes;
	int v[53];
=======
	list<Carta*> deck; /*!< lista Carta* deck*/

	Carta *carta; /*!< varible Carta* Carta */
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0

public:
	Deck();

	~Deck();

<<<<<<< HEAD
	Carta * obtenerCarta();

	void revolverBaraja();

=======
	Carta* obtenerCarta();

	void revolverBaraja();

	/*void imprimir();*/

>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
};




