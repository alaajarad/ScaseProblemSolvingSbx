//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - traffic_lights header file.
///
/// \author Alaa Jarad (a.jarad@lit-co.net)
/// \date   11.5.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef TRAFFIC_LIGHTS_H
#define TRAFFIC_LIGHTS_H

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
class traffic_lights
{
public:

  /**
  *  Get current color when Alex arrives to the traffic light out of operations on a given sequence of periods.
  *  \param[in] sequence         A given sequence of periods 
  *  \return The current color when Alex arrives to the traffic light.
  */

  // Note: you should implement this function in the cpp file.
  // Note: you are not allowed to modify the signature of this function.
  static std :: string GetColor(const  std::vector<int> &sequence);
};

#endif // TRAFFIC_LIGHTS_H