#include <iostream>
#include <windows.h>
#define BG_YELLOW  "\x1B[43m"
#define BG_ORANGE  "\x1B[48;2;255;128;0m"
#define BG_RED     "\x1B[41m"
#define BG_GRAY    "\x1B[48;2;176;174;174m"
#define BG_BLACK   "\x1B[40m"
#define BG_WHITE   "\x1B[47m"
using namespace std;
struct Jugador {
	char* nombre = new char[100];
	char* caracter = new char[1];
}Jugador1, Jugador2;
void contorno() {
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	for (int i = 1; i <= 28; i++) {
		for (int j = 2; j <= 117; j++) {
			c.X = j;
			c.Y = i;
			SetConsoleCursorPosition(salida, c);
			SetConsoleTextAttribute(salida, FOREGROUND_INTENSITY);
			if (i == 1 && j == 2) {
				cout << char(201);
			}
			else if (j == 117 && i == 1) {
				cout << char(187);
			}
			else if (j == 2 && i == 28) {
				cout << char(200);
			}
			else if (j == 117 && i == 28) {
				cout << char(188);
			}
			else if (j == 2 || j == 117) {
				cout << char(186);
			}
			else if (i == 1 || i == 28) {
				cout << char(205);
			}
		}
	}
}
void logo(int* a) {
	contorno();
	char qwe;
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;

	int matriz[12][35] =
	{ {1,1,0,0,0,0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,0,0,0,0,0,0,0,1,1,0,1,1,1,1,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0 },
		{ 1,1,1,1,0,0,0,0,0,0,1,1,0,1,1,0,1,1,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0 },
		{ 1,1,0,1,1,0,0,0,0,0,1,1,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,1,1,1,1 },
		{ 1,1,0,0,1,1,0,0,0,0,1,1,0,1,1,0,0,0,1,1,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1 },
		{ 1,1,0,0,0,1,1,0,0,0,1,1,0,1,1,0,0,0,0,1,1,1,1,0,0,1,1,0,0,0,0,0,0,1,1 },
		{ 1,1,0,0,0,0,1,1,0,0,1,1,0,1,1,0,0,0,0,0,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1 } };
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 35; j++) {
			c.X = 42 + j;
			c.Y = 6 + i;
			SetConsoleCursorPosition(salida, c);
			cout << BG_BLACK;
			if (matriz[i][j] == 1) {
				cout << BG_RED;
				cout << " ";
			}
		}
	}
	cout << BG_BLACK;
	for (int i = 0; i <= 28; i++) {
		for (int j = 0; j <= 117; j++) {
			c.X = j;
			c.Y = i;
			SetConsoleCursorPosition(salida, c);
			SetConsoleTextAttribute(salida, FOREGROUND_RED);
			if (i == 4 && j == 35) {
				cout << char(218);
			}
			else if (j == 83 && i == 4) {
				cout << char(191);
			}
			else if (j == 35 && i == 19) {
				cout << char(192);
			}
			else if (j == 83 && i == 19) {
				cout << char(217);
			}
			else if ((j == 35 || j == 83) && (i >= 4 && i <= 19)) {
				cout << char(179);
			}
			else if ((i == 4 || i == 19) && (j >= 35 && j <= 83)) {
				cout << char(196);
			}
			if (*a == 0) {
				if (i == 22 && j == 5) {
					cout << "	Integrantes:" << endl << endl;
					cout << "	Rojas Cadillo, Cesar Sebastian" << endl;
					cout << "	Cardenas Coronado, Jose Isaac" << endl;
				}
			}
			if (*a == 3) {
				if (i == 21 && j == 51) {
					cout << "JUEGO DEL MOLINO";
				}
				if (i == 23 && j == 57) {
					cout << "Menu" << endl;
				}
				if (i == 24 && j == 48) {
					cout << "   1) Instrucciones" << endl;
				}
				if (i == 25 && j == 48) {
					cout << "   2) Jugar" << endl;
				}
				if (i == 26 && j == 48) {
					cout << "   Elija una opcion: ";
					cin >> qwe;
					if (qwe == '1') {
						*a = 1;
					}
					else if (qwe == '2') {
						*a = 2;
					}
					else {
						*a = 3;
					}
				}
			}
		}
	}
}
void instrucciones() {
	contorno();
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	for (int i = 1; i <= 28; i++) {
		for (int j = 2; j <= 117; j++) {
			c.X = j;
			c.Y = i;
			SetConsoleCursorPosition(salida, c);
			SetConsoleTextAttribute(salida, FOREGROUND_GREEN);
			if (i == 5 && j == 5) {
				cout << "   El objetivo del juego es conseguir que el contrario acabe con solo 2 fichas sobre ";
				cout << "el tablero o que no" << endl;
				cout << "	pueda realizar ningun movimiento por tener todas las fichas bloqueadas. ";
				cout << "Para ello, cada jugador debe" << endl;;
				cout << "	debe intentar hacer molinos (3 en raya, fichas alineadas horizontal, vertical ";
				cout << "o diagonalmente) con las" << endl;
				cout << "	fichas propias, lo que da derecho a capturar cualquier ficha del contrincante." << endl << endl;
				cout << "	Instrucciones:" << endl << endl;
				cout << "	 1.- Cada espacio del tablero tendra una letra indicando su lugar." << endl;
				cout << "	 2.- El jugador que comenzara, se elegira aleatoriamente." << endl;
				cout << "	 3.- En la primera fase no es posible mover las fichas, solo debes colocar las 9 fichas iniciales." << endl;
				cout << "	 4.- Deberas elegir la posicion en el tablero ingresando la letra del lugar que quieres colocarla." << endl;
				cout << "	 5.- Una vez completada las 18 fichas, deberas mover tu ficha a un solo punto adyacente." << endl;
				cout << "	 6.- Cada ficha tendra un numero y para moverlo se tendra que elegir el numero de la ficha y luego la " << endl;
				cout << "	     letra del lugar en el tablero." << endl;
				cout << "	 7.- Para comerte una ficha rival deberas formar una linea de 3 ya sea horizontal, vertical o diagonal" << endl;
				cout << "	     y luego elegiras la posicion de la ficha que te quieres comer, no podras elegir una ficha que forme " << endl;
				cout << "	     un molino" << endl;
				cout << "	 8.- Si hace mas de una linea de 3 a la vez, solo podra comer 1 una en el turno." << endl;
				cout << "	 9.- Cuando un jugador se quede solo con tres fichas comienza el sistema 'vuelo' " << endl;
				cout << "	10.- El sistema vuelo te permite desplazar tu ficha a cualquier punto del tablero." << endl;
				cout << "	11.- Gana cuando su rival tenga 2 fichas en el tablero o no pueda moverse a otro punto." << endl;
				cout << "	12.- Todos los movimientos son con el teclado (NO DAR CLICKS AL JUEGO)." << endl;
			}
		}
	}
}

void ganador(char* letrasgana, int numgana) {
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	int matriz[24][41] =
	{ {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1},
	{1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1},
	{1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1},
	{0,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0},
	{0,0,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,0,0},
	{0,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,0},
	{0,0,0,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0},
	{0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0} };
	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 41; j++) {
			c.X = 39 + j;
			c.Y = 3 + i;
			SetConsoleCursorPosition(salida, c);
			cout << BG_BLACK;
			if (matriz[i][j] == 1) {
				cout << BG_YELLOW;
				cout << " ";
			}
		}
	}
	for (int i = 1; i <= 28; i++) {
		for (int j = 2; j <= 117; j++) {
			c.X = j;
			c.Y = i;
			SetConsoleCursorPosition(salida, c);
			SetConsoleTextAttribute(salida, FOREGROUND_RED);
			cout << BG_YELLOW;
			if ((i == 6) && (j == 56)) {
				cout << "GANADOR";
			}
		}
	}
	for (int i = 0; i < numgana - 1; i++) {
		c.X = 60 - int((numgana - 1) / 2.00 + 0.5) + i;
		c.Y = 7;
		SetConsoleCursorPosition(salida, c);
		SetConsoleTextAttribute(salida, FOREGROUND_RED);
		cout << BG_YELLOW;
		cout << letrasgana[i];
	}
	cout << BG_BLACK;
	contorno();
}
void tablero() {
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	int matriz[27][86] =
	{ {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,1,1,1,1,1,1,1,1},
		{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,4,4,4,4,4,1,1,1,1,1,1,1,1,4,4,4,4,4,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,4,4,4,4,4,1,1,1,1,1,1,1,1,4,4,4,4,4,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,4,4,4,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,1,1,4,4,4,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 1,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,3,3,3,3,3,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,1,1,1,1,1,3,3,3,3,3,1,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
		{ 1,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,3,3,3,3,3,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,1,1,1,1,1,1,1,1,3,3,3,3,3,1,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,4,4,4,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,1,1,4,4,4,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2},
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,4,4,4,4,4,1,1,1,1,1,1,1,1,4,4,4,4,4,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,4,4,4,4,4,1,1,1,1,1,1,1,1,4,4,4,4,4,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,3,3,3,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,3,3,3,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 2,2,2,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,2,2,2 },
		{ 1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1 } };

	for (int i = 0; i < 27; i++) {
		for (int j = 0; j < 86; j++) {
			c.X = 6 + j;
			c.Y = 2 + i;
			SetConsoleCursorPosition(salida, c);
			if (matriz[i][j] == 1) {
				cout << BG_GRAY;
				cout << " ";
			}
			if (matriz[i][j] == 2) {
				cout << BG_YELLOW;
				cout << " ";
			}
			if (matriz[i][j] == 3) {
				cout << BG_ORANGE;
				cout << " ";
			}
			if (matriz[i][j] == 4) {
				cout << BG_RED;
				cout << " ";
			}
			cout << BG_BLACK;
		}
	}
	cout << BG_BLACK;
	for (int i = 1; i <= 28; i++) {
		for (int j = 2; j <= 117; j++) {
			c.X = j;
			c.Y = i;
			SetConsoleCursorPosition(salida, c);
			SetConsoleTextAttribute(salida, FOREGROUND_GREEN);
			cout << BG_GRAY;
			if ((i == 2) && (j == 6)) {
				cout << "A";
			}
			if ((i == 2) && (j == 45)) {
				cout << "B";
			}
			if ((i == 2) && (j == 84)) {
				cout << "C";
			}
			if ((i == 6) && (j == 19)) {
				cout << "D";
			}
			if ((i == 6) && (j == 45)) {
				cout << "E";
			}
			if ((i == 6) && (j == 71)) {
				cout << "F";
			}
			if ((i == 10) && (j == 32)) {
				cout << "G";
			}
			if ((i == 10) && (j == 45)) {
				cout << "H";
			}
			if ((i == 10) && (j == 58)) {
				cout << "I";
			}
			if ((i == 14) && (j == 6)) {
				cout << "J";
			}
			if ((i == 14) && (j == 19)) {
				cout << "K";
			}
			if ((i == 14) && (j == 32)) {
				cout << "L";
			}
			if ((i == 14) && (j == 58)) {
				cout << "M";
			}
			if ((i == 14) && (j == 71)) {
				cout << "N";
			}
			if ((i == 14) && (j == 84)) {
				cout << "O";
			}
			if ((i == 18) && (j == 32)) {
				cout << "P";
			}
			if ((i == 18) && (j == 45)) {
				cout << "Q";
			}
			if ((i == 18) && (j == 58)) {
				cout << "R";
			}
			if ((i == 22) && (j == 19)) {
				cout << "S";
			}
			if ((i == 22) && (j == 45)) {
				cout << "T";
			}
			if ((i == 22) && (j == 71)) {
				cout << "U";
			}
			if ((i == 26) && (j == 6)) {
				cout << "V";
			}
			if ((i == 26) && (j == 45)) {
				cout << "W";
			}
			if ((i == 26) && (j == 84)) {
				cout << "X";
			}
		}
	}
	cout << BG_BLACK;
}
void preguntas(Jugador Jugador1, int* letrasb, Jugador Jugador2, int* letrasn) {
	contorno();
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	int k = -1, l = -1;
	for (int i = 1; i <= 28; i++) {
		for (int j = 2; j <= 117; j++) {
			c.X = j;
			c.Y = i;
			SetConsoleCursorPosition(salida, c);
			SetConsoleTextAttribute(salida, FOREGROUND_GREEN);
			if (i == 5 && j == 5) {
				cout << "   Escriba el nombre del jugador de fichas blancas (El nombre debe acabar en un punto) " << endl;
				cout << "	Ejemplo: Sebastian. " << endl;
				cout << "	Despues de colocar el nombre pulse enter " << endl;
				cout << "	Ingrese su nombre: ";
			}
			if (i == 8 && j == 28 + k) {
				k++;
				cin >> Jugador1.nombre[k];
				Jugador1.nombre[k] = toupper(Jugador1.nombre[k]);
				*letrasb += 1;
				if (Jugador1.nombre[k] == '.') break;
			}
			if (i == 9 && j == 5) {
				cout << "	Elija un caracter para su ficha: " << endl;
			}
			if (i == 9 && j == 41) {
				cin >> Jugador1.caracter[0];
			}
			if (i == 11 && j == 5) {
				cout << "	Escriba el nombre del jugador de fichas negras (El nombre debe acabar en un punto) " << endl;
				cout << "	Ejemplo: Sebastian. " << endl;
				cout << "	Despues de colocar el nombre pulse enter " << endl;
				cout << "	Ingrese su nombre: ";
			}
			if (i == 14 && j == 28 + l) {
				l++;
				cin >> Jugador2.nombre[l];
				Jugador2.nombre[l] = toupper(Jugador2.nombre[l]);
				*letrasn += 1;
				if (Jugador2.nombre[l] == '.') break;
			}
			if (i == 15 && j == 5) {
				cout << "	Elija un caracter para su ficha: " << endl;
			}
			if (i == 15 && j == 41) {
				cin >> Jugador2.caracter[0];
			}
		}
	}
}
bool ocupado(char* jugadorblanco, char* jugadornegro, int fichablanca, int fichanegra, int b, int* lugocupado) {
	int k;
	switch (b) {
	case 1: k = jugadorblanco[fichablanca] - 65;
		break;
	case 0: k = jugadornegro[fichanegra] - 65;
	}
	if (k < 0 || 23 < k) {
		return true;
	}
	if (lugocupado[k] < 1) {
		return false;
	}
	return true;
}
bool ocupadoeliminar(char* jugadorblanco, char* jugadornegro, int b, char posicion) {
	int pos = int(posicion) - 65;
	for (int i = 0; i < 9; i++) {
		switch (b) {
		case 1:
			if (jugadorblanco[i] == posicion) {
				return true;
			};
			break;
		case 0:
			if (jugadornegro[i] == posicion) {
				return true;
			}
		}
		if (pos < 0 || 23 < pos) {
			return true;
		}
		for (int i = 0; i < 9; i++) {
			switch (b) {
			case 1:
				if (jugadornegro[i] == posicion) {
					return false;
				};
				break;
			case 0: if (jugadorblanco[i] == posicion) {
				return false;
			}
			}
		}
	}
}
void agregar(char posicion, int* abc) {
	switch (posicion) {
	case 'A':	abc[0] = 0;
		abc[1] = 0;
		abc[2] = 0;
		break;
	case 'B': abc[0] = 0;
		abc[3] = 0;
		break;
	case 'C': abc[0] = 0;
		abc[4] = 0;
		abc[5] = 0;
		break;
	case 'D':	abc[1] = 0;
		abc[6] = 0;
		abc[7] = 0;
		break;
	case 'E': abc[3] = 0;
		abc[6] = 0;
		break;
	case 'F': abc[5] = 0;
		abc[6] = 0;
		abc[8] = 0;
		break;
	case 'G':	abc[1] = 0;
		abc[9] = 0;
		abc[10] = 0;
		break;
	case 'H': abc[3] = 0;
		abc[9] = 0;
		break;
	case 'I': abc[5] = 0;
		abc[9] = 0;
		abc[11] = 0;
		break;
	case 'J':abc[2] = 0;
		abc[12] = 0;
		break;
	case 'K': abc[7] = 0;
		abc[12] = 0;
		break;
	case 'L': abc[10] = 0;
		abc[12] = 0;
		break;
	case 'M':abc[11] = 0;
		abc[13] = 0;
		break;
	case 'N': abc[8] = 0;
		abc[13] = 0;
		break;
	case 'O': abc[4] = 0;
		abc[13] = 0;
		break;
	case 'P': abc[10] = 0;
		abc[14] = 0;
		abc[15] = 0;
		break;
	case 'Q': abc[14] = 0;
		abc[16] = 0;
		break;
	case 'R': abc[11] = 0;
		abc[14] = 0;
		abc[17] = 0;
		break;
	case 'S': abc[7] = 0;
		abc[15] = 0;
		abc[18] = 0;
		break;
	case 'T': abc[16] = 0;
		abc[18] = 0;
		break;
	case 'U': abc[8] = 0;
		abc[17] = 0;
		abc[18] = 0;
		break;
	case 'V': abc[19] = 0;
		abc[2] = 0;
		abc[15] = 0;
		break;
	case 'W': abc[16] = 0;
		abc[19] = 0;
		break;
	case 'X': abc[4] = 0;
		abc[17] = 0;
		abc[19] = 0;
	}
}
void limitar(char posicion, int* abc) {
	posicion = toupper(posicion);
	switch (posicion) {
	case 'A':	abc[0] = 1;
		abc[1] = 1;
		abc[2] = 1;
		break;
	case 'B': abc[0] = 1;
		abc[3] = 1;
		break;
	case 'C': abc[0] = 1;
		abc[4] = 1;
		abc[5] = 1;
		break;
	case 'D':	abc[1] = 1;
		abc[6] = 1;
		abc[7] = 1;
		break;
	case 'E': abc[3] = 1;
		abc[6] = 1;
		break;
	case 'F': abc[5] = 1;
		abc[6] = 1;
		abc[8] = 1;
		break;
	case 'G':	abc[1] = 1;
		abc[9] = 1;
		abc[10] = 1;
		break;
	case 'H': abc[3] = 1;
		abc[9] = 1;
		break;
	case 'I': abc[5] = 1;
		abc[9] = 1;
		abc[11] = 1;
		break;
	case 'J':abc[2] = 1;
		abc[12] = 1;
		break;
	case 'K': abc[7] = 1;
		abc[12] = 1;
		break;
	case 'L': abc[10] = 1;
		abc[12] = 1;
		break;
	case 'M':abc[11] = 1;
		abc[13] = 1;
		break;
	case 'N': abc[8] = 1;
		abc[13] = 1;
		break;
	case 'O': abc[4] = 1;
		abc[13] = 1;
		break;
	case 'P': abc[10] = 1;
		abc[14] = 1;
		abc[15] = 1;
		break;
	case 'Q': abc[14] = 1;
		abc[16] = 1;
		break;
	case 'R': abc[11] = 1;
		abc[14] = 1;
		abc[17] = 1;
		break;
	case 'S': abc[7] = 1;
		abc[15] = 1;
		abc[18] = 1;
		break;
	case 'T': abc[16] = 1;
		abc[18] = 1;
		break;
	case 'U': abc[8] = 1;
		abc[17] = 1;
		abc[18] = 1;
		break;
	case 'V': abc[19] = 1;
		abc[2] = 1;
		abc[15] = 1;
		break;
	case 'W': abc[16] = 1;
		abc[19] = 1;
		break;
	case 'X': abc[4] = 1;
		abc[17] = 1;
		abc[19] = 1;
	}
}
bool molinocreado(char posicion, int* abc, int a) {
	if (a == 6) {
		return false;
	}
	switch (posicion) {
	case 'A':	if (abc[0] == 1 || abc[1] == 1 || abc[2] == 1) {
		return true;
	}
			break;
	case 'B': if (abc[0] == 1 || abc[3] == 1) {
		return true;
	}
			break;
	case 'C': if (abc[0] == 1 || abc[4] == 1 || abc[5] == 1) {
		return true;
	}
			break;
	case 'D':	if (abc[1] == 1 || abc[6] == 1 || abc[7] == 1) {
		return true;
	}
			break;
	case 'E': if (abc[3] == 1 || abc[6] == 1) {
		return true;
	}
			break;
	case 'F': if (abc[5] == 1 || abc[6] == 1 || abc[8] == 1) {
		return true;
	}
			break;
	case 'G':	if (abc[1] == 1 || abc[8] == 1 || abc[10] == 1) {
		return true;
	}
			break;
	case 'H': if (abc[3] == 1 || abc[9] == 1) {
		return true;
	}
			break;
	case 'I': if (abc[5] == 1 || abc[9] == 1 || abc[11] == 1) {
		return true;
	}
			break;
	case 'J':if (abc[12] == 1 || abc[2] == 1) {
		return true;
	};
			break;
	case 'K': if (abc[12] == 1 || abc[7] == 1) {
		return true;
	}
			break;
	case 'L': if (abc[10] == 1 || abc[12] == 1) {
		return true;
	}
			break;
	case 'M':if (abc[11] == 1 || abc[13] == 1) {
		return true;
	}
			break;
	case 'N': if (abc[8] == 1 || abc[13] == 1) {
		return true;
	}
			break;
	case 'O': if (abc[4] == 1 || abc[13] == 1) {
		return true;
	}
			break;
	case 'P': if (abc[10] == 1 || abc[14] == 1 || abc[15] == 1) {
		return true;
	}
			break;
	case 'Q': if (abc[14] == 1 || abc[16] == 1) {
		return true;
	}
			break;
	case 'R': if (abc[11] == 1 || abc[14] == 1 || abc[17] == 1) {
		return true;
	}
			break;
	case 'S': if (abc[7] == 1 || abc[15] == 1 || abc[18] == 1) {
		return true;
	}
			break;
	case 'T': if (abc[16] == 1 || abc[18] == 1) {
		return true;
	}
			break;
	case 'U': if (abc[8] == 1 || abc[17] == 1 || abc[18] == 1) {
		return true;
	}
			break;
	case 'V': if (abc[19] == 1 || abc[2] == 1 || abc[15] == 1) {
		return true;
	}
			break;
	case 'W': if (abc[16] == 1 || abc[19] == 1) {
		return true;
	}
			break;
	case 'X': if (abc[4] == 1 || abc[17] == 1 || abc[18] == 1) {
		return true;
	}
	}
	return false;
}
void coordenada(char posicion, int& x, int& y) {
	switch (posicion) {
	case 'A':	x = 2;
		y = 7;
		break;
	case 'B': x = 2;
		y = 46;
		break;
	case 'C': x = 2;
		y = 85;
		break;
	case 'D':	x = 6;
		y = 20;
		break;
	case 'E': x = 6;
		y = 46;
		break;
	case 'F': x = 6;
		y = 72;
		break;
	case 'G':	x = 10;
		y = 33;
		break;
	case 'H': x = 10;
		y = 46;
		break;
	case 'I': x = 10;
		y = 59;
		break;
	case 'J':	x = 14;
		y = 7;
		break;
	case 'K': x = 14;
		y = 20;
		break;
	case 'L': x = 14;
		y = 33;
		break;
	case 'M':	x = 14;
		y = 59;
		break;
	case 'N': x = 14;
		y = 72;
		break;
	case 'O': x = 14;
		y = 85;
		break;
	case 'P': x = 18;
		y = 33;
		break;
	case 'Q': x = 18;
		y = 46;
		break;
	case 'R': x = 18;
		y = 59;
		break;
	case 'S': x = 22;
		y = 20;
		break;
	case 'T': x = 22;
		y = 46;
		break;
	case 'U': x = 22;
		y = 72;
		break;
	case 'V': x = 26;
		y = 7;
		break;
	case 'W': x = 26;
		y = 46;
		break;
	case 'X': x = 26;
		y = 85;
	}
}
void pintar(char* jugadorblanco, char* jugadornegro, int b, int* lugocupado, int* abc) {
	int x, y, posi;
	char posicion;
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	c.X = 99;
	c.Y = 6;
	SetConsoleCursorPosition(salida, c);
	cout << "Puede eliminar una ";
	c.X = 99;
	c.Y = 7;
	SetConsoleCursorPosition(salida, c);
	cout << "ficha";
	int a = 0;
	for (int i = 0; i < 9; i++) {
		if (b == 0) {
			if (jugadorblanco[i] == 'Z') a++;
		}
		if (b == 1) {
			if (jugadornegro[i] == 'Z') a++;
		}
	}
	do {
		do {
			for (int l = 0; l < 25; l++) {
				c.X = 99 + l;
				c.Y = 8;
				SetConsoleCursorPosition(salida, c);
				cout << " ";
			}
			c.X = 99;
			c.Y = 8;
			SetConsoleCursorPosition(salida, c);
			cout << "La posicion es: ";
			cin >> posicion;
			posicion = toupper(posicion);
		} while (molinocreado(posicion, abc, a));
	} while (ocupadoeliminar(jugadorblanco, jugadornegro, b, posicion));
	for (int i = 0; i < 9; i++) {
		switch (b) {
		case 1:
			if (jugadornegro[i] == posicion) {
				jugadornegro[i] = 'Z';
			};
			break;
		case 0: if (jugadorblanco[i] == posicion) {
			jugadorblanco[i] = 'Z';
		}
		}
	}
	posi = posicion - 'A';
	lugocupado[posi] = 0;
	for (int l = 0; l < 20; l++) {
		for (int k = 0; k < 4; k++) {
			c.X = 99 + l;
			c.Y = 6 + k;
			SetConsoleCursorPosition(salida, c);
			cout << " ";
		}
	}
	agregar(posicion, abc);
	coordenada(posicion, x, y);
	cout << BG_GRAY;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			c.X = y + j;
			c.Y = x + i;
			SetConsoleCursorPosition(salida, c);
			cout << " ";
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			c.X = y + j;
			c.Y = x + i;
			SetConsoleCursorPosition(salida, c);
			if (i == 1 && j == 2) {
				cout << "  ";
			}
		}
	}
	a = 0;
	cout << BG_BLACK;
}
void eliminar(char* jugadorblanco, char* jugadornegro, int fichablanca, int fichanegra, int b, int* lugocupado, int* abc, char rar) {
	int* conteo = new int[24];
	int* busqueda = new int[9];
	for (int m = 0; m < 24; m++) {
		conteo[m] = 0;
		if (m < 9) busqueda[m] = 0;
		if (m < 9) {
			switch (b) {
			case 1:
				busqueda[m] = (int)(jugadorblanco[m] - 65);
				break;
			case 0:
				busqueda[m] = (int)(jugadornegro[m] - 65);
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		conteo[busqueda[i]]++;
	}
	agregar(rar, abc);
	if (conteo[0] == 1 && conteo[1] == 1 && conteo[2] == 1) {
		if (abc[0] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[0] == 1 && conteo[3] == 1 && conteo[6] == 1) {
		if (abc[1] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[0] == 1 && conteo[9] == 1 && conteo[21] == 1) {
		if (abc[2] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[1] == 1 && conteo[4] == 1 && conteo[7] == 1) {
		if (abc[3] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[2] == 1 && conteo[14] == 1 && conteo[23] == 1) {
		if (abc[4] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[2] == 1 && conteo[5] == 1 && conteo[8] == 1) {
		if (abc[5] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[3] == 1 && conteo[4] == 1 && conteo[5] == 1) {
		if (abc[6] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[3] == 1 && conteo[10] == 1 && conteo[18] == 1) {
		if (abc[7] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[5] == 1 && conteo[13] == 1 && conteo[20] == 1) {
		if (abc[8] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[6] == 1 && conteo[7] == 1 && conteo[8] == 1) {
		if (abc[9] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[6] == 1 && conteo[11] == 1 && conteo[15] == 1) {
		if (abc[10] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[8] == 1 && conteo[12] == 1 && conteo[17] == 1) {
		if (abc[11] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[9] == 1 && conteo[10] == 1 && conteo[11] == 1) {
		if (abc[12] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[12] == 1 && conteo[14] == 1 && conteo[13] == 1) {
		if (abc[13] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[15] == 1 && conteo[16] == 1 && conteo[17] == 1) {
		if (abc[14] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[15] == 1 && conteo[18] == 1 && conteo[21] == 1) {
		if (abc[15] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);;
		}
	}
	if (conteo[16] == 1 && conteo[19] == 1 && conteo[22] == 1) {
		if (abc[16] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[17] == 1 && conteo[20] == 1 && conteo[23] == 1) {
		if (abc[17] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[18] == 1 && conteo[19] == 1 && conteo[20] == 1) {
		if (abc[18] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	if (conteo[21] == 1 && conteo[22] == 1 && conteo[23] == 1) {
		if (abc[19] == 0) {
			pintar(jugadorblanco, jugadornegro, b, lugocupado, abc);
			limitar(rar, abc);
		}
	}
	delete[]conteo;
	delete[]busqueda;
}
void colocar(char* jugadorblanco, char* jugadornegro, int fichablanca, int fichanegra, int b, Jugador Jugador1, Jugador Jugador2) {
	char q, l;
	int d, x, y;
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	switch (b) {
	case 1:
		q = jugadorblanco[fichablanca];
		d = fichablanca;
		l = Jugador1.caracter[0];
		cout << BG_WHITE;
		break;
	case 0:
		q = jugadornegro[fichanegra];
		d = fichanegra;
		l = Jugador2.caracter[0];
		cout << BG_BLACK;
	}
	coordenada(q, x, y);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			c.X = y + j;
			c.Y = x + i;
			SetConsoleCursorPosition(salida, c);
			cout << l;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			c.X = y + j;
			c.Y = x + i;
			SetConsoleCursorPosition(salida, c);
			if (i == 1 && j == 2) {
				cout << d + 1 << ")";
			}
		}
	}
	cout << BG_BLACK;
}
void preguntarcolocacion(char* jugadorblanco, char* jugadornegro, Jugador Jugador1, int* letrasb, Jugador Jugador2,
	int* letrasn, int* lugocupado, int* abc, int pol) {
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	int fichanegra = -1, fichablanca = -1, b, pos;
	char rar;
	b = pol;
	for (int i = 1; i < 19; i++) {
		b = b % 2;
		if (b == 1)fichablanca++;
		if (b == 0)fichanegra++;
		switch (b) {
		case 1:
			for (int i = 0; i < *letrasb - 1; i++) {
				c.X = 99 + i;
				c.Y = 3;
				SetConsoleCursorPosition(salida, c);
				cout << Jugador1.nombre[i];
			}
			c.X = 99;
			c.Y = 4;
			SetConsoleCursorPosition(salida, c);
			cout << "Ficha " << fichablanca + 1;
			do {
				for (int l = 0; l < 25; l++) {
					c.X = 99 + l;
					c.Y = 5;
					SetConsoleCursorPosition(salida, c);
					cout << " ";
				}
				c.X = 99;
				c.Y = 5;
				SetConsoleCursorPosition(salida, c);
				cout << "Su posicion es: ";
				cin >> jugadorblanco[fichablanca];
				jugadorblanco[fichablanca] = toupper(jugadorblanco[fichablanca]);
			} while (ocupado(jugadorblanco, jugadornegro, fichablanca, fichanegra, b, lugocupado));
			rar = jugadorblanco[fichablanca];
			pos = (int)(jugadorblanco[fichablanca] - 'A');
			lugocupado[pos] = 1;
			break;
		case 0:
			for (int l = 0; l < *letrasn - 1; l++) {
				c.X = 99 + l;
				c.Y = 3;
				SetConsoleCursorPosition(salida, c);
				cout << Jugador2.nombre[l];
			}
			c.X = 99;
			c.Y = 4;
			SetConsoleCursorPosition(salida, c);
			cout << "Ficha " << fichanegra + 1;
			do {
				for (int i = 0; i < 25; i++) {
					c.X = 99 + i;
					c.Y = 5;
					SetConsoleCursorPosition(salida, c);
					cout << " ";
				}
				c.X = 99;
				c.Y = 5;
				SetConsoleCursorPosition(salida, c);
				cout << "Su posicion es: ";
				cin >> jugadornegro[fichanegra];
				jugadornegro[fichanegra] = toupper(jugadornegro[fichanegra]);
			} while (ocupado(jugadorblanco, jugadornegro, fichablanca, fichanegra, b, lugocupado));
			rar = jugadornegro[fichanegra];
			pos = (int)(jugadornegro[fichanegra] - 'A');
			lugocupado[pos] = 1;
		}
		colocar(jugadorblanco, jugadornegro, fichablanca, fichanegra, b, Jugador1, Jugador2);
		eliminar(jugadorblanco, jugadornegro, fichablanca, fichanegra, b, lugocupado, abc, rar);
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 25; j++) {
				c.X = 99 + j;
				c.Y = 2 + i;
				SetConsoleCursorPosition(salida, c);
				cout << " ";
			}
		}
		b += 1;
	}
}
bool restricciones(char rar, char rarnew, char* jugadorblanco, char* jugadornegro, int b) {
	int a = 0;
	for (int i = 0; i < 9; i++) {
		if (b == 1) {
			if (jugadorblanco[i] == 'Z') a++;
		}
		if (b == 0) {
			if (jugadornegro[i] == 'Z') a++;
		}
	}
	if (a == 6) {
		return false;
	}
	switch (rar) {
	case 'A':	if (rarnew == 'B' || rarnew == 'J') return false;
		break;
	case 'B': if (rarnew == 'A' || rarnew == 'E' || rarnew == 'C') return false;
		break;
	case 'C': if (rarnew == 'B' || rarnew == 'O') return false;
		break;
	case 'D': if (rarnew == 'K' || rarnew == 'E') return false;
		break;
	case 'E': if (rarnew == 'B' || rarnew == 'D' || rarnew == 'F' || rarnew == 'H') return false;
		break;
	case 'F': if (rarnew == 'E' || rarnew == 'N') return false;
		break;
	case 'G': if (rarnew == 'H' || rarnew == 'L') return false;
		break;
	case 'H': if (rarnew == 'E' || rarnew == 'G' || rarnew == 'I') return false;
		break;
	case 'I': if (rarnew == 'H' || rarnew == 'M') return false;
		break;
	case 'J': if (rarnew == 'A' || rarnew == 'V' || rarnew == 'K') return false;
		break;
	case 'K': if (rarnew == 'J' || rarnew == 'D' || rarnew == 'L' || rarnew == 'S') return false;
		break;
	case 'L': if (rarnew == 'K' || rarnew == 'G' || rarnew == 'P') return false;
		break;
	case 'M': if (rarnew == 'I' || rarnew == 'R' || rarnew == 'N') return false;
		break;
	case 'N': if (rarnew == 'F' || rarnew == 'M' || rarnew == 'O' || rarnew == 'U') return false;
		break;
	case 'O': if (rarnew == 'C' || rarnew == 'N' || rarnew == 'X') return false;
		break;
	case 'P':if (rarnew == 'L' || rarnew == 'Q') return false;
		break;
	case 'Q': if (rarnew == 'P' || rarnew == 'R' || rarnew == 'T') return false;
		break;
	case 'R': if (rarnew == 'M' || rarnew == 'Q') return false;
		break;
	case 'S': if (rarnew == 'K' || rarnew == 'T') return false;
		break;
	case 'T': if (rarnew == 'Q' || rarnew == 'S' || rarnew == 'U' || rarnew == 'W') return false;
		break;
	case 'U': if (rarnew == 'T' || rarnew == 'N') return false;
		break;
	case 'V': if (rarnew == 'J' || rarnew == 'W') return false;
		break;
	case 'W': if (rarnew == 'T' || rarnew == 'V' || rarnew == 'X') return false;
		break;
	case 'X': if (rarnew == 'W' || rarnew == 'O') return false;
	}
	a = 0;
	return true;
}
void borrarhuella(char rar) {
	int x, y;
	char yu;
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	coordenada(rar, x, y);
	cout << BG_GRAY;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			c.X = y + j;
			c.Y = x + i;
			SetConsoleCursorPosition(salida, c);
			cout << " ";
		}
	}
	cout << BG_BLACK;
}
int convertir(char qwe) {
	int c;
	switch (qwe) {
	case '1': c = 0;
		break;
	case '2': c = 1;
		break;
	case '3': c = 2;
		break;
	case '4': c = 3;
		break;
	case '5': c = 4;
		break;
	case '6': c = 5;
		break;
	case '7': c = 6;
		break;
	case '8': c = 7;
		break;
	case '9': c = 8;
		break;
	default: c = -1;
	}
	return c;

}
bool sepuedemover(char rar, char* jugadorblanco, char* jugadornegro, int b, int* lugocupado) {
	int a = 0, k = 0;
	char rarnew;
	for (int i = 0; i < 9; i++) {
		if (b == 1) {
			if (jugadorblanco[i] == 'Z') a++;
		}
		if (b == 0) {
			if (jugadornegro[i] == 'Z') a++;
		}
	}
	if (a == 6) {
		return false;
	}
	for (int i = 0; i < 24; i++) {
		rarnew = char(i + 'A');
		if (a <= 5 && a >= 0) {
			switch (rar) {
			case 'A':	if (rarnew == 'B' || rarnew == 'J') {
				if (lugocupado[1] == 0 || lugocupado[9] == 0) {
					return false;
				}
			}
					break;
			case 'B': if (rarnew == 'A' || rarnew == 'E' || rarnew == 'C') {
				if (lugocupado[0] == 0 || lugocupado[4] == 0 || lugocupado[2] == 0) {
					return false;
				}
			}
					break;
			case 'C': if (rarnew == 'B' || rarnew == 'O') {
				if (lugocupado[1] == 0 || lugocupado[14] == 0) {
					return false;
				}
			}
					break;
			case 'D': if (rarnew == 'K' || rarnew == 'E') {
				if (lugocupado[10] == 0 || lugocupado[4] == 0) {
					return false;
				}
			}
					break;
			case 'E': if (rarnew == 'B' || rarnew == 'D' || rarnew == 'F' || rarnew == 'H') {
				if (lugocupado[1] == 0 || lugocupado[3] == 0 || lugocupado[5] == 0 || lugocupado[7] == 0) {
					return false;
				}
			}
					break;
			case 'F': if (rarnew == 'E' || rarnew == 'N') {
				if (lugocupado[4] == 0 || lugocupado[13] == 0) {
					return false;
				}
			}
					break;
			case 'G': if (rarnew == 'H' || rarnew == 'L') {
				if (lugocupado[7] == 0 || lugocupado[11] == 0) {
					return false;
				}
			}
					break;
			case 'H': if (rarnew == 'E' || rarnew == 'G' || rarnew == 'I') {
				if (lugocupado[4] == 0 || lugocupado[6] == 0 || lugocupado[8] == 0) {
					return false;
				}
			}
					break;
			case 'I': if (rarnew == 'H' || rarnew == 'M') {
				if (lugocupado[7] == 0 || lugocupado[12] == 0) {
					return false;
				}
			}
					break;
			case 'J': if (rarnew == 'A' || rarnew == 'V' || rarnew == 'K') {
				if (lugocupado[0] == 0 || lugocupado[10] == 0 || lugocupado[21] == 0) {
					return false;
				}
			}
					break;
			case 'K': if (rarnew == 'J' || rarnew == 'D' || rarnew == 'L' || rarnew == 'S') {
				if (lugocupado[9] == 0 || lugocupado[3] == 0 || lugocupado[11] == 0 || lugocupado[18] == 0) {
					return false;
				}
			}
					break;
			case 'L': if (rarnew == 'K' || rarnew == 'G' || rarnew == 'P') {
				if (lugocupado[6] == 0 || lugocupado[10] == 0 || lugocupado[15] == 0) {
					return false;
				}
			}
					break;
			case 'M': if (rarnew == 'I' || rarnew == 'R' || rarnew == 'N') {
				if (lugocupado[8] == 0 || lugocupado[13] == 0 || lugocupado[17] == 0) {
					return false;
				}
			}
					break;
			case 'N': if (rarnew == 'F' || rarnew == 'M' || rarnew == 'O' || rarnew == 'U') {
				if (lugocupado[5] == 0 || lugocupado[12] == 0 || lugocupado[14] == 0 || lugocupado[20] == 0) {
					return false;
				}
			}
					break;
			case 'O': if (rarnew == 'C' || rarnew == 'N' || rarnew == 'X') {
				if (lugocupado[2] == 0 || lugocupado[13] == 0 || lugocupado[23] == 0) {
					return false;
				}
			}
					break;
			case 'P':if (rarnew == 'L' || rarnew == 'Q') {
				if (lugocupado[11] == 0 || lugocupado[16] == 0) {
					return false;
				}
			}
					break;
			case 'Q': if (rarnew == 'P' || rarnew == 'R' || rarnew == 'T') {
				if (lugocupado[15] == 0 || lugocupado[17] == 0 || lugocupado[19] == 0) {
					return false;
				}
			}
					break;
			case 'R': if (rarnew == 'M' || rarnew == 'Q') {
				if (lugocupado[12] == 0 || lugocupado[16] == 0) {
					return false;
				}
			}
					break;
			case 'S': if (rarnew == 'K' || rarnew == 'T') {
				if (lugocupado[10] == 0 || lugocupado[19] == 0) {
					return false;
				}
			}
					break;
			case 'T': if (rarnew == 'Q' || rarnew == 'S' || rarnew == 'U' || rarnew == 'W') {
				if (lugocupado[16] == 0 || lugocupado[18] == 0 || lugocupado[20] == 0 || lugocupado[22] == 0) {
					return false;
				}
			}
					break;
			case 'U': if (rarnew == 'T' || rarnew == 'N') {
				if (lugocupado[19] == 0 || lugocupado[13] == 0) {
					return false;
				}
			}
					break;
			case 'V': if (rarnew == 'J' || rarnew == 'W') {
				if (lugocupado[9] == 0 || lugocupado[22] == 0) {
					return false;
				}
			}
					break;
			case 'W': if (rarnew == 'T' || rarnew == 'V' || rarnew == 'X') {
				if (lugocupado[19] == 0 || lugocupado[21] == 0 || lugocupado[23] == 0) {
					return false;
				}
			}
					break;
			case 'X': if (rarnew == 'W' || rarnew == 'O') {
				if (lugocupado[22] == 0 || lugocupado[14] == 0) {
					return false;
				}
			}
			}
		}
	}
	a = 0;
	return true;
}
bool saberquiengana(char* jugadorblanco, char* jugadornegro, int b, int* lugocupado, int z) {
	int ku = 0;
	char rar;
	if (z == 7) {
		return false;
	}
	for (int i = 0; i < 9; i++) {
		if (b == 1) {
			rar = jugadorblanco[i];
		}
		else {
			rar = jugadornegro[i];
		}
		switch (rar) {
		case 'A':
			if (lugocupado[1] == 1 && lugocupado[9] == 1) {
				ku++;
			}
			break;
		case 'B':
			if (lugocupado[0] == 1 && lugocupado[4] == 1 && lugocupado[2] == 1) {
				ku++;
			}

			break;
		case 'C':
			if (lugocupado[1] == 1 && lugocupado[14] == 1) {
				ku++;
			}

			break;
		case 'D':
			if (lugocupado[10] == 1 && lugocupado[4] == 1) {
				ku++;
			}

			break;
		case 'E':
			if (lugocupado[1] == 1 && lugocupado[3] == 1 && lugocupado[5] == 1 && lugocupado[7] == 1) {
				ku++;
			}

			break;
		case 'F':
			if (lugocupado[4] == 1 && lugocupado[13] == 1) {
				ku++;
			}

			break;
		case 'G':
			if (lugocupado[7] == 1 && lugocupado[11] == 1) {
				ku++;
			}

			break;
		case 'H':
			if (lugocupado[4] == 1 && lugocupado[6] == 1 && lugocupado[8] == 1) {
				ku++;
			}

			break;
		case 'I':
			if (lugocupado[7] == 1 && lugocupado[12] == 1) {
				ku++;
			}

			break;
		case 'J':
			if (lugocupado[0] == 1 && lugocupado[10] == 1 && lugocupado[21] == 1) {
				ku++;
			}

			break;
		case 'K':
			if (lugocupado[9] == 1 && lugocupado[3] == 1 && lugocupado[11] == 1 && lugocupado[18] == 1) {
				ku++;
			}

			break;
		case 'L':
			if (lugocupado[6] == 1 && lugocupado[10] == 1 && lugocupado[15] == 1) {
				ku++;
			}

			break;
		case 'M':
			if (lugocupado[8] == 1 && lugocupado[13] == 1 && lugocupado[17] == 1) {
				ku++;
			}

			break;
		case 'N':
			if (lugocupado[5] == 1 && lugocupado[12] == 1 && lugocupado[14] == 1 && lugocupado[20] == 1) {
				ku++;
			}

			break;
		case 'O':
			if (lugocupado[2] == 1 && lugocupado[13] == 1 && lugocupado[23] == 1) {
				ku++;
			}

			break;
		case 'P':
			if (lugocupado[11] == 1 && lugocupado[16] == 1) {
				ku++;
			}

			break;
		case 'Q':
			if (lugocupado[15] == 1 && lugocupado[17] == 1 && lugocupado[19] == 1) {
				ku++;
			}

			break;
		case 'R':
			if (lugocupado[12] == 1 && lugocupado[16] == 1) {
				ku++;
			}

			break;
		case 'S':
			if (lugocupado[10] == 1 && lugocupado[19] == 1) {
				ku++;
			}

			break;
		case 'T':
			if (lugocupado[16] == 1 && lugocupado[18] == 1 && lugocupado[20] == 1 && lugocupado[22] == 1) {
				ku++;
			}
			break;
		case 'U':
			if (lugocupado[19] == 1 && lugocupado[13] == 1) {
				ku++;
			}

			break;
		case 'V':
			if (lugocupado[9] == 1 && lugocupado[22] == 1) {
				ku++;
			}

			break;
		case 'W':
			if (lugocupado[19] == 1 && lugocupado[21] == 1 && lugocupado[23] == 1) {
				ku++;
			}

			break;
		case 'X':
			if (lugocupado[22] == 1 && lugocupado[14] == 1) {
				ku++;
			} break;
		default:;
		}
	}
	if (ku == 9 - z) {
		return false;
	}
	ku = 0;
	return true;
}
void preguntarmover(char* jugadorblanco, char* jugadornegro, Jugador Jugador1, int* letrasb, Jugador Jugador2,
	int* letrasn, int* lugocupado, int* abc, int pol) {
	char* letrasgana = new char[100];
	int numgana, pos;
	HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	char qwe, rar, rarnew;
	int fichanegra = 0, fichablanca = 0, b, tat, movb = 0, movn = 0, a = 0, z = 0;
	bool asd = true;
	b = pol;
	for (int i = 1; i < 10000 && asd != false; i++) {
		b = b % 2;
		if (b == 1) {
			for (int i = 0; i < 9; i++) {
				if (jugadorblanco[i] == 'Z') z++;
			}
			for (int i = 0; i < *letrasb; i++) {
				letrasgana[i] = Jugador2.nombre[i];
			}
			numgana = *letrasb;
		}
		if (b == 0) {
			for (int i = 0; i < 9; i++) {
				if (jugadornegro[i] == 'Z') z++;
			}
			for (int i = 0; i < *letrasb; i++) {
				letrasgana[i] = Jugador1.nombre[i];
			}
			numgana = *letrasb;
		}
		asd = saberquiengana(jugadorblanco, jugadornegro, b, lugocupado, z);
		if (asd != false) {
			switch (b) {
			case 1:
				do {
					for (int l = 0; l < 5; l++) {
						for (int k = 0; k < 25; k++) {
							c.X = 99 + k;
							c.Y = 3 + l;
							SetConsoleCursorPosition(salida, c);
							cout << " ";
						}
					}
					for (int i = 0; i < *letrasb - 1; i++) {
						c.X = 99 + i;
						c.Y = 3;
						SetConsoleCursorPosition(salida, c);
						cout << Jugador1.nombre[i];
					}
					c.X = 99;
					c.Y = 4;
					SetConsoleCursorPosition(salida, c);
					cout << "MOVER ";
					do {
						for (int l = 0; l < 25; l++) {
							c.X = 99 + l;
							c.Y = 5;
							SetConsoleCursorPosition(salida, c);
							cout << " ";
						}
						c.X = 99;
						c.Y = 5;
						SetConsoleCursorPosition(salida, c);
						cout << "Numero de ficha: ";
						cin >> qwe;
						fichablanca = convertir(qwe);
						rar = jugadorblanco[fichablanca];
					} while (rar == 'Z' || 0 > fichablanca || 8 < fichablanca);
				} while (sepuedemover(rar, jugadorblanco, jugadornegro, b, lugocupado));
				do {
					do {
						for (int l = 0; l < 25; l++) {
							c.X = 99 + l;
							c.Y = 6;
							SetConsoleCursorPosition(salida, c);
							cout << " ";
						}
						c.X = 99;
						c.Y = 6;
						SetConsoleCursorPosition(salida, c);
						cout << "Nueva posicion: ";
						cin >> jugadorblanco[fichablanca];
						jugadorblanco[fichablanca] = toupper(jugadorblanco[fichablanca]);
						rarnew = jugadorblanco[fichablanca];
					} while (ocupado(jugadorblanco, jugadornegro, fichablanca, fichanegra, b, lugocupado));
				} while (restricciones(rar, rarnew, jugadorblanco, jugadornegro, b));
				pos = (int)(rarnew - 'A');
				lugocupado[pos] = 1;
				movb++;
				break;
			case 0:
				do {
					for (int l = 0; l < 5; l++) {
						for (int k = 0; k < 25; k++) {
							c.X = 99 + k;
							c.Y = 3 + l;
							SetConsoleCursorPosition(salida, c);
							cout << " ";
						}
					}
					for (int i = 0; i < *letrasn - 1; i++) {
						c.X = 99 + i;
						c.Y = 3;
						SetConsoleCursorPosition(salida, c);
						cout << Jugador2.nombre[i];
					}
					c.X = 99;
					c.Y = 4;
					SetConsoleCursorPosition(salida, c);
					cout << "MOVER ";
					do {
						for (int l = 0; l < 25; l++) {
							c.X = 99 + l;
							c.Y = 5;
							SetConsoleCursorPosition(salida, c);
							cout << " ";
						}
						c.X = 99;
						c.Y = 5;
						SetConsoleCursorPosition(salida, c);
						cout << "Numero de ficha: ";
						cin >> qwe;
						fichanegra = convertir(qwe);
						rar = jugadornegro[fichanegra];
					} while (rar == 'Z' || 0 > fichanegra || 8 < fichanegra);
				} while (sepuedemover(rar, jugadorblanco, jugadornegro, b, lugocupado));
				do {
					do {
						for (int l = 0; l < 25; l++) {
							c.X = 99 + l;
							c.Y = 6;
							SetConsoleCursorPosition(salida, c);
							cout << " ";
						}
						c.X = 99;
						c.Y = 6;
						SetConsoleCursorPosition(salida, c);
						cout << "Nueva posicion: ";
						cin >> jugadornegro[fichanegra];
						jugadornegro[fichanegra] = toupper(jugadornegro[fichanegra]);
						rarnew = jugadornegro[fichanegra];
					} while (ocupado(jugadorblanco, jugadornegro, fichablanca, fichanegra, b, lugocupado));
				} while (restricciones(rar, rarnew, jugadorblanco, jugadornegro, b));
				movn++;
				pos = (int)(rarnew - 'A');
				lugocupado[pos] = 1;
			}
			tat = int(rar) - 'A';
			lugocupado[tat] = 0;
			agregar(rar, abc);
			borrarhuella(rar);
			colocar(jugadorblanco, jugadornegro, fichablanca, fichanegra, b, Jugador1, Jugador2);
			eliminar(jugadorblanco, jugadornegro, fichablanca, fichanegra, b, lugocupado, abc, rarnew);
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 25; j++) {
					c.X = 99 + j;
					c.Y = 2 + i;
					SetConsoleCursorPosition(salida, c);
					cout << " ";
				}
			}
		}
		c.X = 99;
		c.Y = 15;
		SetConsoleCursorPosition(salida, c);
		cout << "Movimientos: ";
		c.X = 99;
		c.Y = 16;
		SetConsoleCursorPosition(salida, c);
		cout << "Blanco: " << movb;
		c.X = 99;
		c.Y = 17;
		SetConsoleCursorPosition(salida, c);
		cout << "Negro: " << movn;
		b += 1;
		a = 0;
		z = 0;
	}
	system("cls");
	ganador(letrasgana, numgana);
	delete[]letrasgana;
}
void jugar() {
	char* jugadorblanco = new char[9];
	char* jugadornegro = new char[9];
	int* letrasb = new int;
	*letrasb = 0;
	int* letrasn = new int;
	*letrasn = 0;
	int* lugocupado = new int[24];
	int* abc = new int[20];
	int pol;
	srand(time(NULL));
	pol = rand() % 2;
	for (int i = 0; i < 24; i++) {
		lugocupado[i] = 0;
	}
	for (int i = 0; i < 19; i++) {
		abc[i] = 0;
	}
	contorno();
	preguntas(Jugador1, letrasb, Jugador2, letrasn);
	system("cls");
	tablero();
	preguntarcolocacion(jugadorblanco, jugadornegro, Jugador1, letrasb, Jugador2, letrasn, lugocupado, abc, pol);
	preguntarmover(jugadorblanco, jugadornegro, Jugador1, letrasb, Jugador2, letrasn, lugocupado, abc, pol);
	delete letrasb;
	delete letrasn;
	delete[]lugocupado;
	delete[]abc;
}
void menu(int* a) {
	do {
		logo(a);
		system("cls");
		switch (*a) {
		case 1:instrucciones();
			Sleep(10000);
			system("cls");
			break;
		case 2: jugar(); break;
		default: *a = 3;
		}
		if (*a != 2) *a = 3;
	} while (*a != 2);
}
int main() {
	int* a = new int;
	*a = 0;
	logo(a);
	Sleep(2000);
	system("cls");
	*a = 3;
	menu(a);
	delete a;
	return 0;
}