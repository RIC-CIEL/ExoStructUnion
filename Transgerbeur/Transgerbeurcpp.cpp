#include<stdio.h>
#include<iostream>

using namespace std;

enum EEtat {vide, palette, rouleau};

struct Spalette {
	int poids;
	char reference[20];
};

struct SRouleau {
	float longueur;
	int numero;
};


struct SCasier {
	int px;
	int py;
	UContenu cont;
	EEtat etat;
};


union UContenu {
	Spalette pal;
	SRouleau roul;
};



int main()
{
	cout << "Bienvenue dans le Transgerbeur";
	SCasier tabCasier[9];
}