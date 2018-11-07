//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise -Traffic lights problem header file.
///
/// \author Ali Daghman (ali.daghman@lit-co.net)
/// \date   11.7.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef TRNFFIC_LIGHTS_H
#define TRNFFIC_LIGHTS_H

/*--------------------------------------------------------------------------*/
/* Includes                                                                 */
/*--------------------------------------------------------------------------*/

// system includes
#include <vector>
#include <iostream>
#include<string>
// project includes


/*****************************************************************************/
/* Class Definition
/**
*
*   \brief Traffic_lights problem header file.
*   \note You are free to add any function you find necessary to this class.
*/
/*****************************************************************************/
class TranfficLights
{
public:

	/**

	*  Get the light color of the traffic light the moment the driver reaches it. (refer to the problem statement).
	*  \param[in] driver         An integer indicating the time until the driver arrives to the traffic light.
	*  \param[in] green			 An integer indicating the duration of the green light.
	*  \param[in] yellow		 An integer indicating the duration of the yellow light.
	*  \param[in] red			 An integer indicating the duration of the red light.
	*  \return The color of the traffic light.

	*/

	// Note: you should implement this function in the cpp file.
	// Note: you are not allowed to modify the signature of this function.
	static std::string checkLight(long driver, long green, long yellow, long red);
};

#endif // GEARS_H
