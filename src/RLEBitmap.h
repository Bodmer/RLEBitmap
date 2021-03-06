//
//  Copyright 2020 M Hotchin.
//  Released under the MIT license.
//  Code repository:
//
//  Run Length Encoded (RLE) bitmaps.  Each run is encoded as either one or two bytes,
//  with NO PADDING.  Thus, the data for each line of the bitmap is VARIABLE LENGTH, and
//  there is no way of determining where any line other than the first starts without
//  walking though the data.  
//
//  Note that one byte encoding ONLY occurs if the total number of colors is 16 or less,
//  and in that case the 'flags' member of the 'RLEBitmapInfo' will have the first bit
//  set.
//
//  In that case, if the high 4 bits of the first byte are ZERO, then this is a 2 byte
//  run.  The first byte is the index of the color in the color palette, and the second
//  byte is the length.
//
//  Else, the lower 4 bits are the color index, and the upper 4 bits are the run length.
//
//  If the 'flags' member first bit is zero, then ALL runs are 2 byte runs.  The first
//  byte is the palette index, and the second is the run length.
//
//  In order to save PROGMEM for other uses, the bitmap data is placed in a section that
//  occurs near the END of the used FLASH.  So, this data should only be accessed using
//  the 'far' versions of the progmem functions - the usual versions are limited to the
//  first 64K of FLASH.
//

#ifndef _RLEBITMAP_h
#define _RLEBITMAP_h

class TFT_eSPI;

#if not defined PROGMEM_LATE
#if defined ARDUINO_ARCH_AVR
#define PROGMEM_LATE __attribute__ (( __section__(".fini1") ))
#else
#define PROGMEM_LATE PROGMEM
#endif
#endif

//
//  Since the bitmaps live in PROGMEM_LATE, the far addresses of the bitmap data and of
//  the palette can not be generated at link time.  Each bitmap will have a corresponding
//  function to be called that returns the information required to render it, as contained
//  in this structure.
//
struct RLEBitmapInfo
{
	uint32_t pRLEBM_data_far;    //  Far addresses are untyped 32 bit integers.
	uint32_t pRLEBM_palette_far; //
	unsigned int width;          //  Width and height of the bitmap
	unsigned int height;
	byte flags;
};

void 
renderRLEBitmap(
	const RLEBitmapInfo &bitmapInfo, // Bitmap information retreived previously.
	int16_t x, int16_t y,            // Location to render bitmap (top-left corner)
	TFT_eSPI *pGFX,              // Graphics context for rendering.
	bool blackIsTransparent = false, // if 'true', black pixels in the bitmap are skipped.
	uint8_t reduction = 1);          // Factor to reduce the size of the bitmap

bool                                  // false if the bitmap and mask are different sizes.
renderRLEBitmapWithRLEMask(           //
	const RLEBitmapInfo &bitmapInfo,  // Bitmap information retreived previously.
	const RLEBitmapInfo &maskInfo,    // Bitmap that acts as a mask.
	int16_t x, int16_t y,             // Location to render bitmap (top-left corner)
	TFT_eSPI *pGFX,               // Graphics context for rendering.
	bool blackIsTransparent = false); // if 'true', black pixels in the bitmap are skipped.

#endif

