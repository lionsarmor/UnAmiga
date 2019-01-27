#include "coleco.h"


/* HAPPY BIRTHDAY SONG : TONE CHANNEL 1 */
static const byte music_hb1[] = {
	0x42,0x1d,0x01,0x10,0x18,0x42,   // tone freq 392,5Hz - vol 15 (max) swept down - lengt  16
	0x42,0x1d,0x01,0x10,0x18,0x42,   // tone freq 392,5Hz - vol 15 (max) swept down - lengt  16
	0x42,0xfe,0x00,0x20,0x18,0x42,   // tone freq 440,4Hz - vol 15 (max) swept down - lengt  32
	0x42,0x1d,0x01,0x20,0x18,0x42,  // tone freq 392,5Hz - vol 15 (max) swept down - lengt  32
	0x42,0xd5,0x00,0x20,0x18,0x42,  // tone freq 525,2Hz - vol 15 (max) swept down - lengt  32
	0x42,0xe2,0x00,0x20,0x18,0x42,  // tone freq 495,0Hz - vol 15 (max) swept down - lengt  32
	0x70,   // rest - lengt  16
	0x70,   // rest - lengt  16
	0x42,0x1d,0x01,0x10,0x18,0x42,   // tone freq 392,5Hz - vol 15 (max) swept down - lengt  16
	0x42,0x1d,0x01,0x10,0x18,0x42,   // tone freq 392,5Hz - vol 15 (max) swept down - lengt  16
	0x42,0xfe,0x00,0x20,0x18,0x42,   // tone freq 440,4Hz - vol 15 (max) swept down - lengt  32
	0x42,0x1d,0x01,0x20,0x18,0x42,  // tone freq 392,5Hz - vol 15 (max) swept down - lengt  32
	0x42,0xbe,0x00,0x20,0x18,0x42,  // tone freq 588,7Hz - vol 15 (max) swept down - lengt  32
	0x42,0xd5,0x00,0x20,0x18,0x42,  // tone freq 525,2Hz - vol 15 (max) swept down - lengt  32
	0x70,   // rest - lengt  16
	0x70,   // rest - lengt  16
	0x42,0x1d,0x01,0x10,0x18,0x42,   // tone freq 392,5Hz - vol 15 (max) swept down - lengt  16
	0x42,0x1d,0x01,0x10,0x18,0x42,   // tone freq 392,5Hz - vol 15 (max) swept down - lengt  16
	0x42,0x8e,0x00,0x20,0x18,0x42,   // tone freq 787,8Hz - vol 15 (max) swept down - lengt  32
	0x42,0xa9,0x00,0x20,0x18,0x42,   // tone freq 661,9Hz - vol 15 (max) swept down - lengt  32
	0x42,0xd5,0x00,0x20,0x18,0x42,   // tone freq 525,2Hz - vol 15 (max) swept down - lengt  32
	0x42,0xe2,0x00,0x20,0x18,0x42,   // tone freq 495,0Hz - vol 15 (max) swept down - lengt  32
	0x42,0xfe,0x00,0x20,0x18,0x42,   // tone freq 440,4Hz - vol 15 (max) swept down - lengt  32
	0x70,   // rest - lengt  16
	0x70,   // rest - lengt  16
	0x42,0xa0,0x00,0x10,0x18,0x42,   // tone freq 699,1Hz - vol 15 (max) swept down - lengt  16
	0x42,0xa0,0x00,0x10,0x18,0x42,   // tone freq 699,1Hz - vol 15 (max) swept down - lengt  16
	0x42,0xa9,0x00,0x20,0x18,0x42,   // tone freq 661,9Hz - vol 15 (max) swept down - lengt  32
	0x42,0xd5,0x00,0x20,0x18,0x42,   // tone freq 525,2Hz - vol 15 (max) swept down - lengt  32
	0x42,0xbe,0x00,0x20,0x18,0x42,   // tone freq 588,7Hz - vol 15 (max) swept down - lengt  32
	0x42,0xd5,0x00,0x20,0x18,0x42,   // tone freq 525,2Hz - vol 15 (max) swept down - lengt  32
	0x42,0xd5,0x00,0x20,0x18,0x42,   // tone freq 525,2Hz - vol 15 (max) swept down - lengt  32
	0x50   // end
}; 
 
/* HAPPY BIRTHDAY SONG : TONE CHANNEL 2 */
static const byte music_hb2[] = {
	0xb0,   // rest - lengt  16
	0xb0,   // rest - lengt  16
	0x82,0x56,0x23,0x10,0x1c,0x21,   // tone freq 131,0Hz - vol 13 swept down - lengt  16
	0x82,0x53,0x21,0x10,0x1c,0x21,   // tone freq 330,0Hz - vol 13 swept down - lengt  16
	0x82,0xab,0x21,0x10,0x1c,0x21,   // tone freq 262,0Hz - vol 13 swept down - lengt  16
	0x82,0x53,0x21,0x10,0x1c,0x21,   // tone freq 330,0Hz - vol 13 swept down - lengt  16
	0x82,0x56,0x23,0x10,0x1c,0x21,   // tone freq 131,0Hz - vol 13 swept down - lengt  16
	0x82,0xa9,0x20,0x10,0x1c,0x21,   // tone freq 661,9Hz - vol 13 swept down - lengt  16
	0x82,0x3a,0x22,0x10,0x1c,0x21,   // tone freq 196,2Hz - vol 13 swept down - lengt  16
	0x82,0xbe,0x20,0x10,0x1c,0x21,   // tone freq 588,7Hz - vol 13 swept down - lengt  16
	0x82,0xe2,0x20,0x10,0x1c,0x21,   // tone freq 495,0Hz - vol 13 swept down - lengt  16
	0x82,0xa0,0x20,0x10,0x1c,0x21,   // tone freq 699,1Hz - vol 13 swept down - lengt  16
	0xb0,   // rest - lengt  16
	0xb0,   // rest - lengt  16
	0x82,0xf9,0x22,0x10,0x1c,0x21,   // tone freq 147,0Hz - vol 13 swept down - lengt  16
	0x82,0x40,0x21,0x10,0x1c,0x21,   // tone freq 349,6Hz - vol 13 swept down - lengt  16
	0x82,0x7c,0x21,0x10,0x1c,0x21,   // tone freq 294,4Hz - vol 13 swept down - lengt  16
	0x82,0x40,0x21,0x10,0x1c,0x21,   // tone freq 349,6Hz - vol 13 swept down - lengt  16
	0x82,0x8e,0x20,0x10,0x1c,0x21,   // tone freq 787,8Hz - vol 13 swept down - lengt  16
	0x82,0xa0,0x20,0x10,0x1c,0x21,   // tone freq 699,1Hz - vol 13 swept down - lengt  16
	0x82,0xa9,0x20,0x20,0x1c,0x21,   // tone freq 661,9Hz - vol 13 swept down - lengt  32
	0x82,0x8e,0x20,0x10,0x1c,0x21,   // tone freq 787,8Hz - vol 13 swept down - lengt  16
	0x82,0xa0,0x20,0x10,0x1c,0x21,   // tone freq 699,1Hz - vol 13 swept down - lengt  16
	0x82,0xa9,0x20,0x10,0x1c,0x21,   // tone freq 661,9Hz - vol 13 swept down - lengt  16
	0x82,0xbe,0x20,0x10,0x1c,0x21,   // tone freq 588,7Hz - vol 13 swept down - lengt  16
	0x82,0x56,0x23,0x10,0x1c,0x21,   // tone freq 131,0Hz - vol 13 swept down - lengt  16
	0x82,0xc4,0x21,0x10,0x1c,0x21,   // tone freq 247,5Hz - vol 13 swept down - lengt  16
	0x82,0xfc,0x21,0x10,0x1c,0x21,   // tone freq 220,2Hz - vol 13 swept down - lengt  16
	0x82,0x40,0x21,0x10,0x1c,0x21,   // tone freq 349,6Hz - vol 13 swept down - lengt  16
	0x82,0x1d,0x21,0x10,0x1c,0x21,   // tone freq 392,5Hz - vol 13 swept down - lengt  16
	0x82,0xa9,0x20,0x10,0x1c,0x21,   // tone freq 661,9Hz - vol 13 swept down - lengt  16
	0x82,0xa0,0x20,0x20,0x1c,0x21,   // tone freq 699,1Hz - vol 13 swept down - lengt  32
	0x82,0xd5,0x20,0x20,0x1c,0x21,   // tone freq 525,2Hz - vol 13 swept down - lengt  32
	0xb0,   // rest - lengt  16
	0xb0,   // rest - lengt  16
	0x82,0x80,0x22,0x10,0x1c,0x21,   // tone freq 174,8Hz - vol 13 swept down - lengt  16
	0x82,0x40,0x21,0x10,0x1c,0x21,   // tone freq 349,6Hz - vol 13 swept down - lengt  16
	0x82,0xab,0x21,0x10,0x1c,0x21,   // tone freq 262,0Hz - vol 13 swept down - lengt  16
	0x82,0xc4,0x21,0x10,0x1c,0x21,   // tone freq 247,5Hz - vol 13 swept down - lengt  16
	0x82,0xfc,0x21,0x10,0x1c,0x21,   // tone freq 220,2Hz - vol 13 swept down - lengt  16
	0x82,0xbe,0x20,0x10,0x1c,0x21,   // tone freq 588,7Hz - vol 13 swept down - lengt  16
	0x82,0x8e,0x20,0x10,0x1c,0x21,   // tone freq 787,8Hz - vol 13 swept down - lengt  16
	0x82,0xa0,0x20,0x10,0x1c,0x21,   // tone freq 699,1Hz - vol 13 swept down - lengt  16
	0x82,0xa9,0x20,0x10,0x1c,0x21,   // tone freq 661,9Hz - vol 13 swept down - lengt  16
	0x82,0x1d,0x21,0x10,0x1c,0x21,   // tone freq 392,5Hz - vol 13 swept down - lengt  16
	0x82,0x53,0x21,0x20,0x1c,0x21,   // tone freq 330,0Hz - vol 13 swept down - lengt  32
	0x90   // end
 };

 
 
const sound_t snd_table[] = {
	{music_hb1, SOUNDAREA1},
	{music_hb2, SOUNDAREA2}
};
