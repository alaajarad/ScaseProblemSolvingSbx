//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - TrafficLights problem header file.
///
/// \author Mohammad Nasser (Mohammad.Nasser@lit-co.net)
/// \date   11.7.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef TrafficLights_H
#define TrafficLights_H

/*--------------------------------------------------------------------------*/
/* Includes                                                                 */
/*--------------------------------------------------------------------------*/

// system includes
#include <string>
#include <vector>

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
  *  Get the color of the traffic light by the time a driver reach it
  *  Get the maximum possible numbet out of subtracting a given sequence of numbers.
  *  \param[in] driverTime       An integer refers to the time needed to reach the traffic light.
  *  \parma[in] greenLightTime   An integer refers to the time that the green light lasts.
  *  \parma[in] yellowLightTime  An integer refers to the time that the yellow light lasts.
  *  \parma[in] redLightTime     An integer refers to the time that the red light lasts.
  *  \return the color of the traffic light when the driver reach it.
  */

  // Note: you should implement this function in the cpp file.
  // Note: you are not allowed to modify the signature of this function.
  static std::string GetLightColor(const int driverTime, const int greenLightTime, const int yellowLightTime, const int redLightTime);
};

#endif // TrafficLights_H