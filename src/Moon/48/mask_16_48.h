
//
//  This file is AUTOMATICALLY GENERATED, and should not be edited unless you are certain
//  that it will not be re-generated anytime in the future.  As generated code, the
//  copyright owner(s) of the generating program do NOT claim any copyright on the code
//  generated.
//
//  Run Length Encoded (RLE) bitmaps.  Each run is encoded as either one or two bytes,
//  with NO PADDING.  Thus, the data for each line of the bitmap is VARIABLE LENGTH, and
//  there is no way of determining where any line other than the first starts without
//  walking though the data.  
//
//  Note that one byte encoding ONLY occurs if the total number of colors is 16 or less,
//  and in that case the 'flags' member of the 'RLEBitmapInfo' will have the first bit
//  (0x01) set.
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
//  Data is from file 'images\48\mask_16_48.bmp'.
//

const byte mask_16_48_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x13, 0xa1, 0x00, 0x13, 
	0x00, 0x10, 0x01, 0x11, 0xf0, 
	0xe0, 0x01, 0x15, 0xd0, 
	0xc0, 0x01, 0x19, 0xb0, 
	0xa0, 0x01, 0x1c, 0xa0, 
	0x90, 0x01, 0x1e, 0x90, 
	0x80, 0x01, 0x20, 0x80, 
	0x70, 0x01, 0x22, 0x70, 
	0x60, 0x01, 0x24, 0x60, 
	0x50, 0x01, 0x26, 0x50, 
	0x50, 0x01, 0x27, 0x40, 
	0x40, 0x01, 0x28, 0x40, 
	0x30, 0x01, 0x2a, 0x30, 
	0x30, 0x01, 0x2a, 0x30, 
	0x20, 0x01, 0x2c, 0x20, 
	0x20, 0x01, 0x2c, 0x20, 
	0x20, 0x01, 0x2c, 0x20, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x01, 0x30, 
	0x01, 0x30, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x10, 0x01, 0x2e, 0x10, 
	0x20, 0x01, 0x2c, 0x20, 
	0x20, 0x01, 0x2c, 0x20, 
	0x20, 0x01, 0x2c, 0x20, 
	0x30, 0x01, 0x2a, 0x30, 
	0x30, 0x01, 0x2a, 0x30, 
	0x40, 0x01, 0x28, 0x40, 
	0x50, 0x01, 0x27, 0x40, 
	0x50, 0x01, 0x26, 0x50, 
	0x60, 0x01, 0x24, 0x60, 
	0x70, 0x01, 0x22, 0x70, 
	0x80, 0x01, 0x20, 0x80, 
	0x90, 0x01, 0x1e, 0x90, 
	0xa0, 0x01, 0x1c, 0xa0, 
	0xc0, 0x01, 0x19, 0xb0, 
	0xe0, 0x01, 0x15, 0xd0, 
	0x00, 0x10, 0x01, 0x11, 0xf0, 
	0x00, 0x13, 0xa1, 0x00, 0x13, 
	
}; // 48x48 Bitmap (2304 pixels) in 192 bytes

const uint16_t mask_16_48_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 2 entries
	0x0000, 0xffff, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_mask_16_48_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(mask_16_48_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(mask_16_48_RLEBM_palette);
	bmInfo.width = 48;
	bmInfo.height = 48;
	bmInfo.flags = 0x01;
}
