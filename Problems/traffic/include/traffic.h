//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - Traffic problem header file.
///
/// \author Arwa Fahoud (arwa.fahoud@lit-co.net)
/// \date   11.5.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef TRAFFIC_H
#define TRAFFIC_H

/*--------------------------------------------------------------------------*/
/* Includes                                                                 */
/*--------------------------------------------------------------------------*/

// system includes
#include <string>

// project includes


/*****************************************************************************/
/* Class Definition
/**
*
*   \brief Traffic problem header file.
*   \note You are free to add any function you find necessary to this class.
*/
/*****************************************************************************/
class Traffic
{
public:

  /**
  *  Get the light of a traffic light after a period of time (refer to the problem statement).
  *  \param[in] x  the time to get to the traffic light , the period of green light.
  *  \param[in] g the period of green light.
  *  \param[in] y the period of the yellow light .
  *  \param[in] r  the period of the red light.
  *  \return a string representing the light.
  */

  // Note: you should implement this function in the cpp file.
  // Note: you are not allowed to modify the signature of this function.
  static std::string GetColor(int x , int g , int y, int r);
};

#endif // TRAFFIC_H
