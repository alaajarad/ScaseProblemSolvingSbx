//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - TrraficLIghts problem header file.
///
/// \author Lamees Kaber (lamees.kaber@lit-co.net)
/// \date   11.7.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef TrafficLights_h
#define TrafficLights_h

/*--------------------------------------------------------------------------*/
/* Includes                                                                 */
/*--------------------------------------------------------------------------*/

// system includes
//#include <iostream>
#include <string>

// project includes


/*****************************************************************************/
/* Class Definition
/**
*
*   \brief TrafficLights problem header file.
*   \note You are free to add any function you find necessary to this class.
*/
/*****************************************************************************/
class TrafficLights
{
public:

  /**
  *  Get the lighted color which is on when jarda arrives at the x second.
  *  \params[in] x        A given integer which jarda needs to arrive the traffic lights.
  *  \params[in] g        A given integer which indicates much seconds the green light will still on.
  *  \params[in] y        A given integer which indicates much seconds the green light will still on.
  *  \params[in] r        A given integer which indicates much seconds the green light will still on.
  *  \return string indicates the lighted color
  */

  // Note: you should implement this function in the cpp file.
  // Note: you are not allowed to modify the signature of this function.
 static std::string GetStatus(int x, int g, int y, int r);
};

#endif // TrafficLights_h
