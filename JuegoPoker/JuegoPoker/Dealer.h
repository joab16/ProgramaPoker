#pragma once

class Dealer
{
private:
	int turnoActual;
	//list cartasComunitarias;
	int bote;
	int ciegaPequenna;
	int ciegaGrande;
	int apuestaPequenna;
	int apuestaGrande;

public:
	Dealer();
	~Dealer();

	void inicializarJuego();

	void repartirCartas();

	void solicitarDecisiones();

	char* seleccionarGanador();

	void repartirDinero();

	void revelar();
};