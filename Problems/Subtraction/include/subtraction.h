//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - Subtraction problem header file.
///
/// \author Alaa Jarad (a.jarad@lit-co.net)
/// \date   11.5.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef SUBSTRACTION_H
#define SUBSTRACTION_H

/*--------------------------------------------------------------------------*/
/* Includes                                                                 */
/*--------------------------------------------------------------------------*/

// system includes
#include <vector>

// project includes


/*****************************************************************************/
/* Class Definition
/**
*
*   \brief Subtraction problem header file.
*   \note You are free to add any function you find necessary to this class.
*/
/*****************************************************************************/
class Subtraction
{
public:

  /**
  *  Get the maximum possible numbet out of subtracting a given sequence of numbers.
  *  \param[in] sequence         A given sequence of numbers to substract.
  *  \return The maximum possible number after substracting the given sequence.
  */

  // Note: you should implement this function in the cpp file.
  // Note: you are not allowed to modify the signature of this function.
  static int GetMaxNumber(const std::vector<int> &sequence);
};

#endif // SUBSTRACTION_H