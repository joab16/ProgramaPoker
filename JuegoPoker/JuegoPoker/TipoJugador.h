#pragma once

class TipoJugador
{
private:
	int apuestaMinima;
	int apuestaMaxima;
	double probabilidadMinimaRetiro;
	//Deck

public:
	TipoJugador();

	~TipoJugador();

	int tomarDecision(float);

	/*list*/void revelar();
};
