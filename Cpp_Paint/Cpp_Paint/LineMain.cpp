/*****************************************************************************/
/*  Module     : LineMain                                       Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : Main function for the LineClass, just demonstrates          */
/*               the usage of the LineClass objects                          */
/*                                                                           */
/*  Procedures: main()                                                       */
/*              FunctionWithLocalObject()  ToModify                          */
/*              TestFunction()             ToModify                          */
/*                                                                           */
/*  Author     : I. Oesch                                                    */
/*                                                                           */
/*  History    : 05.03.2001  IO Created                                      */
/*                                                                           */
/*  File       : LineMain.cpp                                                */
/*                                                                           */
/*****************************************************************************/
/* HTA Burgdorf                                                              */
/*****************************************************************************/

/* imports */
#include "LineClass.hpp"
#include <iostream>
#include <stdlib.h>

/* Module constant declaration  */

/* Module Type declaration      */

/* Module data declaration      */

/* Module procedure declaration */

/*****************************************************************************/
/*  Procedure   : FunctionWithLocalObject                                    */
/*****************************************************************************/
/*                                                                           */
/*  Function    : A simple function creating a local LineClass objects. Just */
/*                to show the behaviour (and lifetime) of local objects      */
/*                                                                           */
/*  Type        : global                                                     */
/*                                                                           */
/*  Input Para  : from   Startcoordinate of local lineobject                 */
/*                                                                           */
/*  Output Para : None                                                       */
/*                                                                           */
/*  Author      : I. Oesch                                                   */
/*                                                                           */
/*  History     : 05.03.2001  IO  Created                                    */
/*                                                                           */
/*****************************************************************************/
void FunctionWithLocalObject(int from)
{
	std::cout << "FunctionWithLocalObject\n" << std::endl;

	/* Procedure data declaration      */
	//   LineClass LocalLine(from, from, 11, 11);  // Create our local Lineobject

	/* Procedure code declaration      */
	// Print the object
	//   LocalLine.Print();
}
/*****************************************************************************/
/*  End  Procedure : FunctionWithLocalObject                                 */
/*****************************************************************************/

/*****************************************************************************/
/*  Procedure   : TestFunction                                               */
/*****************************************************************************/
/*                                                                           */
/*  Function    : A simple function accepting a lineclassobject and returning*/
/*                a lineclass object. (Demonstration of copyconstructor)     */
/*                                                                           */
/*  Type        : global                                                     */
/*                                                                           */
/*  Input Para  : Line   a Lineclass object                                  */
/*                                                                           */
/*  Output Para : another LineClass object                                   */
/*                                                                           */
/*  Author      : I. Oesch                                                   */
/*                                                                           */
/*  History     : 05.03.2001  IO  Created                                    */
/*                                                                           */
/*****************************************************************************/
LineClass TestFunction(LineClass Line)
{
	std::cout << "TestFunction\n" << std::endl;

	/* Procedure data declaration      */
	LineClass LocalLine(Line);  // Create our local Lineobject

	/* Procedure code declaration      */
	std::cout << "End of TestFunction\n" << std::endl;
	return LocalLine;
}
/*****************************************************************************/
/*  End  Procedure : TestFunction                                            */
/*****************************************************************************/


/*****************************************************************************/
/*  Procedure   : main                                                       */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Is the entrypoint and the main procedure for the           */
/*                LineClass demonstration. Creates some LineClass objects    */
/*                uses them and destrois them afterwards                     */
/*                                                                           */
/*  Type        : global                                                     */
/*                                                                           */
/*  Input Para  : argc, argv Standard commandline arguments, not used        */
/*                                                                           */
/*  Output Para : Errorcode to the operatingsystem, Allways no error         */
/*                                                                           */
/*  Author      : ingmacmech                                                 */
/*                                                                           */
/*  History     : 21.02.2017      Created                                    */
/*                                                                           */
/*****************************************************************************/
int main(int argc, char *argv[])
{
	/* Procedure data declaration      */

	/* Procedure code declaration      */

	//  Some Informations for the user
	std::cout << "Demo for a Class\n\n" << std::endl;

	// Call the local function
	FunctionWithLocalObject(6);

	// Define a pointer to lineclass objects
	//  LineClass *LinePtr1 = NULL;

	// Create two objects
	LineClass Line1(1,1,11,11);
	//  LineClass Line2(2,2,22,22);
	//  LineClass Line1;  // Delete this, just to make uncompleted Code runnable
	//  LineClass Line2;  // Delete this, just to make uncompleted Code runnable

	// Print the two objects
	Line1.Print();
	//  Line2.Print();

	// Create a new object...
	//  LinePtr1 = new LineClass(3,3,33,33);

	// ...print it...
	//  LinePtr1->Print();
	// ...and delete it
	//  delete LinePtr1;

	// Create another new object
	//  LinePtr1 = new LineClass(4,4,44,44);

	// ...and print it
	//  LinePtr1->Print();

	// Call the local function
	FunctionWithLocalObject(7);

	// delete the dynamic object
	//  delete LinePtr1;

	// Show what copyconstructor does
	std::cout << "\nLet's copyconstruct...\n" << std::endl;
	//Line2 = TestFunction(Line1);

	// Wait for the user to press any key before end the program
	system("Pause");

	// Return No error to the operating system
	return 0;  // at this point, our two local objects are also deletet
}
/*****************************************************************************/
/*  End  Procedure : main                                                    */
/*****************************************************************************/

/*****************************************************************************/
/*  End Module     : LineMain                                                */
/*****************************************************************************/





