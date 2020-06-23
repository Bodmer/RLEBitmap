
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
//  Data is from file 'images\128\mask_9_128.bmp'.
//

const byte mask_9_128_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x3f, 0xa1, 0x00, 0x37, 
	0x00, 0x3e, 0x01, 0x10, 0x00, 0x32, 
	0x00, 0x3d, 0x01, 0x15, 0x00, 0x2e, 
	0x00, 0x3c, 0x01, 0x19, 0x00, 0x2b, 
	0x00, 0x3c, 0x01, 0x1c, 0x00, 0x28, 
	0x00, 0x3b, 0x01, 0x1f, 0x00, 0x26, 
	0x00, 0x3b, 0x01, 0x21, 0x00, 0x24, 
	0x00, 0x3a, 0x01, 0x24, 0x00, 0x22, 
	0x00, 0x3a, 0x01, 0x26, 0x00, 0x20, 
	0x00, 0x3a, 0x01, 0x28, 0x00, 0x1e, 
	0x00, 0x39, 0x01, 0x2a, 0x00, 0x1d, 
	0x00, 0x39, 0x01, 0x2c, 0x00, 0x1b, 
	0x00, 0x39, 0x01, 0x2d, 0x00, 0x1a, 
	0x00, 0x39, 0x01, 0x2e, 0x00, 0x19, 
	0x00, 0x38, 0x01, 0x30, 0x00, 0x18, 
	0x00, 0x38, 0x01, 0x32, 0x00, 0x16, 
	0x00, 0x38, 0x01, 0x33, 0x00, 0x15, 
	0x00, 0x38, 0x01, 0x34, 0x00, 0x14, 
	0x00, 0x38, 0x01, 0x35, 0x00, 0x13, 
	0x00, 0x37, 0x01, 0x37, 0x00, 0x12, 
	0x00, 0x37, 0x01, 0x38, 0x00, 0x11, 
	0x00, 0x37, 0x01, 0x39, 0x00, 0x10, 
	0x00, 0x37, 0x01, 0x3a, 0xf0, 
	0x00, 0x37, 0x01, 0x3a, 0xf0, 
	0x00, 0x36, 0x01, 0x3c, 0xe0, 
	0x00, 0x36, 0x01, 0x3d, 0xd0, 
	0x00, 0x36, 0x01, 0x3e, 0xc0, 
	0x00, 0x36, 0x01, 0x3e, 0xc0, 
	0x00, 0x36, 0x01, 0x3f, 0xb0, 
	0x00, 0x36, 0x01, 0x40, 0xa0, 
	0x00, 0x36, 0x01, 0x40, 0xa0, 
	0x00, 0x36, 0x01, 0x41, 0x90, 
	0x00, 0x35, 0x01, 0x42, 0x90, 
	0x00, 0x35, 0x01, 0x43, 0x80, 
	0x00, 0x35, 0x01, 0x43, 0x80, 
	0x00, 0x35, 0x01, 0x44, 0x70, 
	0x00, 0x35, 0x01, 0x44, 0x70, 
	0x00, 0x35, 0x01, 0x45, 0x60, 
	0x00, 0x35, 0x01, 0x45, 0x60, 
	0x00, 0x35, 0x01, 0x46, 0x50, 
	0x00, 0x35, 0x01, 0x46, 0x50, 
	0x00, 0x35, 0x01, 0x47, 0x40, 
	0x00, 0x35, 0x01, 0x47, 0x40, 
	0x00, 0x35, 0x01, 0x47, 0x40, 
	0x00, 0x34, 0x01, 0x49, 0x30, 
	0x00, 0x34, 0x01, 0x49, 0x30, 
	0x00, 0x34, 0x01, 0x49, 0x30, 
	0x00, 0x34, 0x01, 0x49, 0x30, 
	0x00, 0x34, 0x01, 0x4a, 0x20, 
	0x00, 0x34, 0x01, 0x4a, 0x20, 
	0x00, 0x34, 0x01, 0x4a, 0x20, 
	0x00, 0x34, 0x01, 0x4a, 0x20, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4c, 
	0x00, 0x34, 0x01, 0x4c, 
	0x00, 0x34, 0x01, 0x4c, 
	0x00, 0x34, 0x01, 0x4c, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4b, 0x10, 
	0x00, 0x34, 0x01, 0x4a, 0x20, 
	0x00, 0x34, 0x01, 0x4a, 0x20, 
	0x00, 0x34, 0x01, 0x4a, 0x20, 
	0x00, 0x34, 0x01, 0x4a, 0x20, 
	0x00, 0x34, 0x01, 0x49, 0x30, 
	0x00, 0x34, 0x01, 0x49, 0x30, 
	0x00, 0x34, 0x01, 0x49, 0x30, 
	0x00, 0x34, 0x01, 0x49, 0x30, 
	0x00, 0x35, 0x01, 0x47, 0x40, 
	0x00, 0x35, 0x01, 0x47, 0x40, 
	0x00, 0x35, 0x01, 0x47, 0x40, 
	0x00, 0x35, 0x01, 0x46, 0x50, 
	0x00, 0x35, 0x01, 0x46, 0x50, 
	0x00, 0x35, 0x01, 0x45, 0x60, 
	0x00, 0x35, 0x01, 0x45, 0x60, 
	0x00, 0x35, 0x01, 0x44, 0x70, 
	0x00, 0x35, 0x01, 0x44, 0x70, 
	0x00, 0x35, 0x01, 0x43, 0x80, 
	0x00, 0x35, 0x01, 0x43, 0x80, 
	0x00, 0x35, 0x01, 0x42, 0x90, 
	0x00, 0x36, 0x01, 0x41, 0x90, 
	0x00, 0x36, 0x01, 0x40, 0xa0, 
	0x00, 0x36, 0x01, 0x40, 0xa0, 
	0x00, 0x36, 0x01, 0x3f, 0xb0, 
	0x00, 0x36, 0x01, 0x3e, 0xc0, 
	0x00, 0x36, 0x01, 0x3e, 0xc0, 
	0x00, 0x36, 0x01, 0x3d, 0xd0, 
	0x00, 0x36, 0x01, 0x3c, 0xe0, 
	0x00, 0x37, 0x01, 0x3a, 0xf0, 
	0x00, 0x37, 0x01, 0x3a, 0xf0, 
	0x00, 0x37, 0x01, 0x39, 0x00, 0x10, 
	0x00, 0x37, 0x01, 0x38, 0x00, 0x11, 
	0x00, 0x37, 0x01, 0x37, 0x00, 0x12, 
	0x00, 0x38, 0x01, 0x35, 0x00, 0x13, 
	0x00, 0x38, 0x01, 0x34, 0x00, 0x14, 
	0x00, 0x38, 0x01, 0x33, 0x00, 0x15, 
	0x00, 0x38, 0x01, 0x32, 0x00, 0x16, 
	0x00, 0x38, 0x01, 0x30, 0x00, 0x18, 
	0x00, 0x39, 0x01, 0x2e, 0x00, 0x19, 
	0x00, 0x39, 0x01, 0x2d, 0x00, 0x1a, 
	0x00, 0x39, 0x01, 0x2c, 0x00, 0x1b, 
	0x00, 0x39, 0x01, 0x2a, 0x00, 0x1d, 
	0x00, 0x3a, 0x01, 0x28, 0x00, 0x1e, 
	0x00, 0x3a, 0x01, 0x26, 0x00, 0x20, 
	0x00, 0x3a, 0x01, 0x24, 0x00, 0x22, 
	0x00, 0x3b, 0x01, 0x21, 0x00, 0x24, 
	0x00, 0x3b, 0x01, 0x1f, 0x00, 0x26, 
	0x00, 0x3c, 0x01, 0x1c, 0x00, 0x28, 
	0x00, 0x3c, 0x01, 0x19, 0x00, 0x2b, 
	0x00, 0x3d, 0x01, 0x15, 0x00, 0x2e, 
	0x00, 0x3e, 0x01, 0x10, 0x00, 0x32, 
	0x00, 0x3f, 0xa1, 0x00, 0x37, 
	
}; // 128x128 Bitmap (16384 pixels) in 678 bytes

const uint16_t mask_9_128_RLEBM_palette[] PROGMEM_LATE = 
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
inline void get_mask_9_128_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(mask_9_128_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(mask_9_128_RLEBM_palette);
	bmInfo.width = 128;
	bmInfo.height = 128;
	bmInfo.flags = 0x01;
}
