#ifndef SOUND_ANALYSIS_H
#define SOUND_ANALYSIS_H

/* Be Careful 1 Must be declare before FHT include 			  */
// TODO Put to 0x01 the one we use
#define OCTAVE                         						0x00
#define LOG_OUT 											0x01 

#include "Arduino.h"

/**************************************************************/
/*                        DEFINE & TYPEDEF                    */
/**************************************************************/

#define REMOVE_NOISE(sound,noise) 							((noise > sound) ? 0 : sound-noise)

#define DIFF_TO_BUILD_SIGNED_INT							0x200
#define FACTOR_TO_BUILD_SIGNED_SHORT						0x06

#define DC_OFFSET  											32 
#define NOISE												0x64	

#define VOLUME_SAMPLES										0x48	

#define TOP 												17 
//#define TOP 										(HEIGHT + 2)  

#define FHT_OCTAVE_NUMBER 									0x08 
//#define FHT_SAMPLE_NUMBER 									256 
#define FHT_SAMPLE_NUMBER 									128 
#define FHT_HALF_SAMPLE_NUMBER 								FHT_SAMPLE_NUMBER/2 

#define MEAN_SOUND_THS										0x05

#define MUSIC_ON											0x00
#define MUSIC_OFF											0x01

#define STATE_MUSIC_OFF										0x00
#define STATE_MUSIC_PAUSE									0x01
#define STATE_MUSIC_ON										0x02	



/**************************************************************/
/*                        PUBLIC DATA                         */
/**************************************************************/

/**************************************************************/
/*                        PUBLIC FUNCTIONS                    */
/**************************************************************/

/*#ifdef __cplusplus
extern "C" {
#endif*/

void InitSoundAnalysis();
int GetSoundLevel(uint16_t *minLvlAvg, uint16_t *maxLvlAvg);
void ProcessSoundAnalysis(int *soundMeasure);
uint16_t MeanSoundAnalysis();

/**************************************************************/
/*                        PRIVATE FUNCTIONS                   */
/**************************************************************/

static void SoundAcquisition();
static void SoundProcessing();
static void SoundDisplay();


/*#ifdef __cplusplus
}
#endif*/

#endif
