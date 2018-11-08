//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - Traffic Lights problem header file.
///
/// \author Ali Hasan (ali.hasan@lit-co.net)
/// \date   11.7.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------




#ifndef TRAFFIC_LIGHTS_H
#define TRAFFIC_LIGHTS_H



/*--------------------------------------------------------------------------*/
/* Includes                                                                 */
/*--------------------------------------------------------------------------*/


// system includes
#include <cstring>
#include <string.h>
#include <string>

// project includes


/*****************************************************************************/
/* Class Definition
/**
*
*   \brief Traffic Lights problem header file.
*   \note This class contains a function which is responsible for solving the Traffic Lights problem.
*/
/*****************************************************************************/
class Traffic_Lights
{
public:
	/**
	*  Get the light that Jarda will find when he arrives.
	*  \param[in] integer                 x.
	*  \param[in] integer                 g.
	*  \param[in] integer                 y.
	*  \param[in] integer                 r.
	*  \return  The light that Jarda will find when he arrives.
	*/



	// Note: This function is implemented in the cpp file.
	// Note: The signature of this function is not modifiable.
	static std::string GetTheAnswer(int x, int g, int y, int r);
};

#endif // TRAFFIC_LIGHTS_H