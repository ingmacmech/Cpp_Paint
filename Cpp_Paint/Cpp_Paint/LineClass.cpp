/*****************************************************************************/
/*  Class      : LineClass                                      Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes a line for a drawing program           */
/*                                                                           */
/*                                                                           */
/*  Methodes   : LineClass()  ToDo                                           */
/*              ~LineClass()  ToDo                                           */
/*               Print()      ToDo                                           */
/*                                                                           */
/*  Author     : ingmacmech                                                  */
/*                                                                           */
/*  History    : 21.02.20017    Created                                      */
/*                                                                           */
/*  File       : LineClass.cpp                                               */
/*                                                                           */
/*****************************************************************************/
/* HTA Burgdorf                                                              */
/*****************************************************************************/

/* imports */
#include "LineClass.hpp"
#include <iostream>

/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */


/* Class procedure declaration */


/*****************************************************************************/
/*  Method      : LineClass                                                  */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Constructor for the LineClass, initialices a               */
/*                LineClass object and prints a message to cout              */
/*                                                                           */
/*  Type        : Constructor                                                */
/*                                                                           */
/*  Input Para  : NewX2, NewY2 Endcoordinates of line                        */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 21.02.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/

LineClass::LineClass(int xEnd, int yEnd) : X1(0), Y1(0)
{
	X2 = xEnd;
	Y2 = yEnd;
	printf("Construktor call: with standard start coordinate 0,0\n");
}

/*****************************************************************************/
/*  End  Method : LineClass                                                  */
/*****************************************************************************/

/*****************************************************************************/
/*  Method      : LineClass                                                  */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Constructor for the LineClass, initialices a               */
/*                LineClass object and prints a message to cout              */
/*                                                                           */
/*  Type        : Constructor                                                */
/*                                                                           */
/*  Input Para  : NewX1, NewY1 Startcoordinates of line
/*                NewX2, NewY2 Endcoordinates of line                        */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 21.02.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/

LineClass::LineClass(int xStart, int yStart, int xEnd, int yEnd)
{
	X1 = xStart;
	Y1 = yStart;
	X2 = xEnd;
	Y2 = yEnd;
	printf("Construktor call: with start and end coordinates\n");
}

/*****************************************************************************/
/*  End  Method : LineClass                                                  */
/*****************************************************************************/

/*****************************************************************************/
/*  Method      : Print                                                  */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Prints the coordinates to the consol                       */
/*                                                                           */
/*  Type        : Public                                                     */
/*                                                                           */
/*  Input Para  : None								                         */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 21.02.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
void LineClass::Print()
{
	printf("Startpoint(x,y): (%d,%d)\n", X1, Y1);
	printf("Endpoint  (x,y): (%d,%d)\n", X2, Y2);
}

/*****************************************************************************/
/*  End  Method : Print                                                      */
/*****************************************************************************/

/*****************************************************************************/
/*  Method      : SetLineID                                                 */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Sets a line ID to identify the line                        */
/*                                                                           */
/*  Type        : Public                                                     */
/*                                                                           */
/*  Input Para  : char[10] with ID name				                         */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 22.02.2017     Created                                     */
/*                                                                           */
/*****************************************************************************/
void LineClass::SetLineID(char id[])
{
	strcpy_s(this->id, id);

}

/*****************************************************************************/
/*  End  Method : Print                                                      */
/*****************************************************************************/

/*****************************************************************************/
/*  End Class   : LineClass                                                  */
/*****************************************************************************/






