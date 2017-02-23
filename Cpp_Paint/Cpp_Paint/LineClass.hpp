#ifndef LINE_CLASS_HPP
#define LINE_CLASS_HPP
/*****************************************************************************/
/*  Header     : LineClass                                      Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes a line for a drawing program           */
/*                                                                           */
/*                                                                           */
/*  Methodes   : LineClass()     ToDo                                        */
/*              ~LineClass()     ToDo                                        */
/*               Print()         ToDo                                        */
/*                                                                           */
/*  Author     : I. Oesch                                                    */
/*                                                                           */
/*  History    : 05.03.2001  IO Created                                      */
/*                                                                           */
/*  File       : LineClass.hpp                                               */
/*                                                                           */
/*****************************************************************************/
/* HTA Burgdorf                                                              */
/*****************************************************************************/

/* imports */

/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */

/* Class definition            */


class LineClass {

	// Data
	int X1;
	int X2;
	int Y1;
	int Y2;
	char id[10];

	// Methods
public:
	// Constructor
	LineClass(int xEnd, int yEnd);
	LineClass(int xStart, int yStart, int xStop, int yStop);
	

	// Methode
	void SetLineID(char id[]);
	void Print();

};

/*****************************************************************************/
/*  End Header  : LineClass                                                  */
/*****************************************************************************/
#endif




