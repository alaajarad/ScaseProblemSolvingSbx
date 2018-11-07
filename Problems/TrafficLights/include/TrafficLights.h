//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - TrafficLights problem header file.
///
/// \author Ashraf Aljerdy (ashraf.aljerdy@lit-co.net)
/// \date   11.7.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef TRAFFICLIGHTS_H
#define TRAFFICLIGHTS_H

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
*   \brief TrafficLights problem header file.
*   \note You are free to add any function you find necessary to this class.
*/
/*****************************************************************************/
class TrafficLights
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
	static std::string TrafficLights::GetColorOfTrafficLight(const long long int driver, const long long int green, const long long int yellow, const long long int red);
};

#endif // TRAFFICLIGHTS_H