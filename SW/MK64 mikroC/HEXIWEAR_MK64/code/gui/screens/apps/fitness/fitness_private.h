// File: fitness_private.h

// Declarations of resources used in the fitness gui module.

#ifndef _fitness_private_h_
#define _fitness_private_h_

////////////////////////////////////////////////////////////////////////////////
// Header file inclusions.                                                    //
////////////////////////////////////////////////////////////////////////////////

#include "gui_driver.h"

////////////////////////////////////////////////////////////////////////////////
// Macro definitions.                                                         //
////////////////////////////////////////////////////////////////////////////////
 
#define FITNESS_QUEUE_SIZE (3)

////////////////////////////////////////////////////////////////////////////////
// Global variable declarations.                                              //
////////////////////////////////////////////////////////////////////////////////

extern const uint8_t test_bmp[OLED_GRAM_SIZE + 6];

extern const uint8_t fitness_screen_bmp[OLED_GRAM_SIZE + 6];

extern const uint8_t Exo_2_Light_Condensed13x20_Regular[];

extern guiLabel_t fitness_labelStepCounter;

extern guiLabel_t fitness_labelSteps;

////////////////////////////////////////////////////////////////////////////////
// Global function declarations.                                              //
////////////////////////////////////////////////////////////////////////////////

//void fitness_Init( void* param );
//void fitness_CreateTasks( void* param );
//void fitness_DestroyTasks( void* param );
//
//void test_Init( void* param );

#endif