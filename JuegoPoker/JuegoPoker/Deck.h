/**
* @class Deck
* @brief Lista de cartas para el juego.
*/
#pragma once
#include "stdafx.h"
#include "Carta.h"
using namespace std;

class Deck
{
private:

<<<<<<< HEAD
	list<Carta*> deck; /*!< lista Carta* deck*/

	Carta *carta; /*!< varible Carta* Carta */
=======
	list<Carta*> deck;
	Carta * carta;
	int cartasRestantes;
	int v[53];
>>>>>>> master

public:

	Deck();

	~Deck();

<<<<<<< HEAD
	Carta* obtenerCarta();
=======
	Carta * obtenerCarta();
>>>>>>> master

	void revolverBaraja();

	void imprimir();

};




