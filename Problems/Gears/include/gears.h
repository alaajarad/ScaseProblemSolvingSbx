//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - Gears problem header file.
///
/// \author Alaa Jarad (a.jarad@lit-co.net)
/// \date   11.5.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef GEARS_H
#define GEARS_H

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
*   \brief Gears problem header file.
*   \note You are free to add any function you find necessary to this class.
*/
/*****************************************************************************/
class Gears
{
public:

  /**
  *  Get the number of distinct pairs of given gears (refer to the problem statement).
  *  \param[in] gears         A list of gears sizes (number of teeth) to find the number of distinct pairs among them.
  *  \return The number of ditinct pairs found.
  */

  // Note: you should implement this function in the cpp file.
  // Note: you are not allowed to modify the signature of this function.
  static int GetNumberOfDistinctPairs(const std::vector<int> &gears);
};

#endif // GEARS_H