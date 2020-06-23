
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
//  Data is from file 'images\240\mask_30_240.bmp'.
//

const byte mask_30_240_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x6d, 0xc1, 0x00, 0x77, 
	0x00, 0x65, 0xa1, 0x00, 0x81, 
	0x00, 0x60, 0x71, 0x00, 0x89, 
	0x00, 0x5b, 0x71, 0x00, 0x8e, 
	0x00, 0x58, 0x61, 0x00, 0x92, 
	0x00, 0x54, 0x61, 0x00, 0x96, 
	0x00, 0x51, 0x61, 0x00, 0x99, 
	0x00, 0x4f, 0x51, 0x00, 0x9c, 
	0x00, 0x4c, 0x61, 0x00, 0x9e, 
	0x00, 0x4a, 0x51, 0x00, 0xa1, 
	0x00, 0x47, 0x61, 0x00, 0xa3, 
	0x00, 0x45, 0x61, 0x00, 0xa5, 
	0x00, 0x43, 0x61, 0x00, 0xa7, 
	0x00, 0x41, 0x61, 0x00, 0xa9, 
	0x00, 0x3f, 0x61, 0x00, 0xab, 
	0x00, 0x3d, 0x61, 0x00, 0xad, 
	0x00, 0x3c, 0x61, 0x00, 0xae, 
	0x00, 0x3a, 0x61, 0x00, 0xb0, 
	0x00, 0x38, 0x71, 0x00, 0xb1, 
	0x00, 0x37, 0x61, 0x00, 0xb3, 
	0x00, 0x35, 0x71, 0x00, 0xb4, 
	0x00, 0x34, 0x61, 0x00, 0xb6, 
	0x00, 0x32, 0x71, 0x00, 0xb7, 
	0x00, 0x31, 0x71, 0x00, 0xb8, 
	0x00, 0x30, 0x61, 0x00, 0xba, 
	0x00, 0x2e, 0x71, 0x00, 0xbb, 
	0x00, 0x2d, 0x71, 0x00, 0xbc, 
	0x00, 0x2c, 0x71, 0x00, 0xbd, 
	0x00, 0x2b, 0x71, 0x00, 0xbe, 
	0x00, 0x2a, 0x71, 0x00, 0xbf, 
	0x00, 0x29, 0x61, 0x00, 0xc1, 
	0x00, 0x27, 0x71, 0x00, 0xc2, 
	0x00, 0x26, 0x71, 0x00, 0xc3, 
	0x00, 0x25, 0x71, 0x00, 0xc4, 
	0x00, 0x24, 0x71, 0x00, 0xc5, 
	0x00, 0x23, 0x71, 0x00, 0xc6, 
	0x00, 0x22, 0x71, 0x00, 0xc7, 
	0x00, 0x21, 0x81, 0x00, 0xc7, 
	0x00, 0x20, 0x81, 0x00, 0xc8, 
	0x00, 0x1f, 0x81, 0x00, 0xc9, 
	0x00, 0x1f, 0x71, 0x00, 0xca, 
	0x00, 0x1e, 0x71, 0x00, 0xcb, 
	0x00, 0x1d, 0x71, 0x00, 0xcc, 
	0x00, 0x1c, 0x81, 0x00, 0xcc, 
	0x00, 0x1b, 0x81, 0x00, 0xcd, 
	0x00, 0x1a, 0x81, 0x00, 0xce, 
	0x00, 0x1a, 0x71, 0x00, 0xcf, 
	0x00, 0x19, 0x81, 0x00, 0xcf, 
	0x00, 0x18, 0x81, 0x00, 0xd0, 
	0x00, 0x17, 0x81, 0x00, 0xd1, 
	0x00, 0x17, 0x71, 0x00, 0xd2, 
	0x00, 0x16, 0x81, 0x00, 0xd2, 
	0x00, 0x15, 0x81, 0x00, 0xd3, 
	0x00, 0x15, 0x81, 0x00, 0xd3, 
	0x00, 0x14, 0x81, 0x00, 0xd4, 
	0x00, 0x13, 0x81, 0x00, 0xd5, 
	0x00, 0x13, 0x81, 0x00, 0xd5, 
	0x00, 0x12, 0x81, 0x00, 0xd6, 
	0x00, 0x11, 0x91, 0x00, 0xd6, 
	0x00, 0x11, 0x81, 0x00, 0xd7, 
	0x00, 0x10, 0x81, 0x00, 0xd8, 
	0x00, 0x10, 0x81, 0x00, 0xd8, 
	0xf0, 0x81, 0x00, 0xd9, 
	0xf0, 0x81, 0x00, 0xd9, 
	0xe0, 0x81, 0x00, 0xda, 
	0xe0, 0x81, 0x00, 0xda, 
	0xd0, 0x81, 0x00, 0xdb, 
	0xd0, 0x81, 0x00, 0xdb, 
	0xc0, 0x81, 0x00, 0xdc, 
	0xc0, 0x81, 0x00, 0xdc, 
	0xb0, 0x91, 0x00, 0xdc, 
	0xb0, 0x81, 0x00, 0xdd, 
	0xa0, 0x91, 0x00, 0xdd, 
	0xa0, 0x81, 0x00, 0xde, 
	0x90, 0x91, 0x00, 0xde, 
	0x90, 0x91, 0x00, 0xde, 
	0x90, 0x81, 0x00, 0xdf, 
	0x80, 0x91, 0x00, 0xdf, 
	0x80, 0x91, 0x00, 0xdf, 
	0x70, 0x91, 0x00, 0xe0, 
	0x70, 0x91, 0x00, 0xe0, 
	0x70, 0x91, 0x00, 0xe0, 
	0x60, 0x91, 0x00, 0xe1, 
	0x60, 0x91, 0x00, 0xe1, 
	0x60, 0x91, 0x00, 0xe1, 
	0x50, 0x91, 0x00, 0xe2, 
	0x50, 0x91, 0x00, 0xe2, 
	0x50, 0x91, 0x00, 0xe2, 
	0x50, 0x91, 0x00, 0xe2, 
	0x40, 0x91, 0x00, 0xe3, 
	0x40, 0x91, 0x00, 0xe3, 
	0x40, 0x91, 0x00, 0xe3, 
	0x40, 0x91, 0x00, 0xe3, 
	0x30, 0x91, 0x00, 0xe4, 
	0x30, 0x91, 0x00, 0xe4, 
	0x30, 0x91, 0x00, 0xe4, 
	0x30, 0x91, 0x00, 0xe4, 
	0x30, 0x91, 0x00, 0xe4, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x10, 0xa1, 0x00, 0xe5, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0xa1, 0x00, 0xe6, 
	0xa1, 0x00, 0xe6, 
	0xa1, 0x00, 0xe6, 
	0xa1, 0x00, 0xe6, 
	0xa1, 0x00, 0xe6, 
	0xa1, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0x91, 0x00, 0xe6, 
	0x10, 0xa1, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x20, 0x91, 0x00, 0xe5, 
	0x30, 0x91, 0x00, 0xe4, 
	0x30, 0x91, 0x00, 0xe4, 
	0x30, 0x91, 0x00, 0xe4, 
	0x30, 0x91, 0x00, 0xe4, 
	0x30, 0x91, 0x00, 0xe4, 
	0x40, 0x91, 0x00, 0xe3, 
	0x40, 0x91, 0x00, 0xe3, 
	0x40, 0x91, 0x00, 0xe3, 
	0x40, 0x91, 0x00, 0xe3, 
	0x50, 0x91, 0x00, 0xe2, 
	0x50, 0x91, 0x00, 0xe2, 
	0x50, 0x91, 0x00, 0xe2, 
	0x50, 0x91, 0x00, 0xe2, 
	0x60, 0x91, 0x00, 0xe1, 
	0x60, 0x91, 0x00, 0xe1, 
	0x60, 0x91, 0x00, 0xe1, 
	0x70, 0x91, 0x00, 0xe0, 
	0x70, 0x91, 0x00, 0xe0, 
	0x70, 0x91, 0x00, 0xe0, 
	0x80, 0x91, 0x00, 0xdf, 
	0x80, 0x91, 0x00, 0xdf, 
	0x90, 0x81, 0x00, 0xdf, 
	0x90, 0x91, 0x00, 0xde, 
	0x90, 0x91, 0x00, 0xde, 
	0xa0, 0x81, 0x00, 0xde, 
	0xa0, 0x91, 0x00, 0xdd, 
	0xb0, 0x81, 0x00, 0xdd, 
	0xb0, 0x91, 0x00, 0xdc, 
	0xc0, 0x81, 0x00, 0xdc, 
	0xc0, 0x81, 0x00, 0xdc, 
	0xd0, 0x81, 0x00, 0xdb, 
	0xd0, 0x81, 0x00, 0xdb, 
	0xe0, 0x81, 0x00, 0xda, 
	0xe0, 0x81, 0x00, 0xda, 
	0xf0, 0x81, 0x00, 0xd9, 
	0xf0, 0x81, 0x00, 0xd9, 
	0x00, 0x10, 0x81, 0x00, 0xd8, 
	0x00, 0x10, 0x81, 0x00, 0xd8, 
	0x00, 0x11, 0x81, 0x00, 0xd7, 
	0x00, 0x11, 0x91, 0x00, 0xd6, 
	0x00, 0x12, 0x81, 0x00, 0xd6, 
	0x00, 0x13, 0x81, 0x00, 0xd5, 
	0x00, 0x13, 0x81, 0x00, 0xd5, 
	0x00, 0x14, 0x81, 0x00, 0xd4, 
	0x00, 0x15, 0x81, 0x00, 0xd3, 
	0x00, 0x15, 0x81, 0x00, 0xd3, 
	0x00, 0x16, 0x81, 0x00, 0xd2, 
	0x00, 0x17, 0x71, 0x00, 0xd2, 
	0x00, 0x17, 0x81, 0x00, 0xd1, 
	0x00, 0x18, 0x81, 0x00, 0xd0, 
	0x00, 0x19, 0x81, 0x00, 0xcf, 
	0x00, 0x1a, 0x71, 0x00, 0xcf, 
	0x00, 0x1a, 0x81, 0x00, 0xce, 
	0x00, 0x1b, 0x81, 0x00, 0xcd, 
	0x00, 0x1c, 0x81, 0x00, 0xcc, 
	0x00, 0x1d, 0x71, 0x00, 0xcc, 
	0x00, 0x1e, 0x71, 0x00, 0xcb, 
	0x00, 0x1f, 0x71, 0x00, 0xca, 
	0x00, 0x1f, 0x81, 0x00, 0xc9, 
	0x00, 0x20, 0x81, 0x00, 0xc8, 
	0x00, 0x21, 0x81, 0x00, 0xc7, 
	0x00, 0x22, 0x71, 0x00, 0xc7, 
	0x00, 0x23, 0x71, 0x00, 0xc6, 
	0x00, 0x24, 0x71, 0x00, 0xc5, 
	0x00, 0x25, 0x71, 0x00, 0xc4, 
	0x00, 0x26, 0x71, 0x00, 0xc3, 
	0x00, 0x27, 0x71, 0x00, 0xc2, 
	0x00, 0x29, 0x61, 0x00, 0xc1, 
	0x00, 0x2a, 0x71, 0x00, 0xbf, 
	0x00, 0x2b, 0x71, 0x00, 0xbe, 
	0x00, 0x2c, 0x71, 0x00, 0xbd, 
	0x00, 0x2d, 0x71, 0x00, 0xbc, 
	0x00, 0x2e, 0x71, 0x00, 0xbb, 
	0x00, 0x30, 0x61, 0x00, 0xba, 
	0x00, 0x31, 0x71, 0x00, 0xb8, 
	0x00, 0x32, 0x71, 0x00, 0xb7, 
	0x00, 0x34, 0x61, 0x00, 0xb6, 
	0x00, 0x35, 0x71, 0x00, 0xb4, 
	0x00, 0x37, 0x61, 0x00, 0xb3, 
	0x00, 0x38, 0x71, 0x00, 0xb1, 
	0x00, 0x3a, 0x61, 0x00, 0xb0, 
	0x00, 0x3c, 0x61, 0x00, 0xae, 
	0x00, 0x3d, 0x61, 0x00, 0xad, 
	0x00, 0x3f, 0x61, 0x00, 0xab, 
	0x00, 0x41, 0x61, 0x00, 0xa9, 
	0x00, 0x43, 0x61, 0x00, 0xa7, 
	0x00, 0x45, 0x61, 0x00, 0xa5, 
	0x00, 0x47, 0x61, 0x00, 0xa3, 
	0x00, 0x4a, 0x51, 0x00, 0xa1, 
	0x00, 0x4c, 0x61, 0x00, 0x9e, 
	0x00, 0x4f, 0x51, 0x00, 0x9c, 
	0x00, 0x51, 0x61, 0x00, 0x99, 
	0x00, 0x54, 0x61, 0x00, 0x96, 
	0x00, 0x58, 0x61, 0x00, 0x92, 
	0x00, 0x5b, 0x71, 0x00, 0x8e, 
	0x00, 0x60, 0x71, 0x00, 0x89, 
	0x00, 0x65, 0xa1, 0x00, 0x81, 
	0x00, 0x6d, 0xc1, 0x00, 0x77, 
	
}; // 240x240 Bitmap (57600 pixels) in 1078 bytes

const uint16_t mask_30_240_RLEBM_palette[] PROGMEM_LATE = 
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
inline void get_mask_30_240_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(mask_30_240_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(mask_30_240_RLEBM_palette);
	bmInfo.width = 240;
	bmInfo.height = 240;
	bmInfo.flags = 0x01;
}
