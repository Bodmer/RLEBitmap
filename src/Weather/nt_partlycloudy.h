
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
//  Data is from file 'nt_partlycloudy.bmp'.
//

const byte nt_partlycloudy_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x52, 0x51, 0x00, 0x29, 
	0x00, 0x4d, 0xa1, 0x00, 0x29, 
	0x00, 0x4a, 0xd1, 0x00, 0x29, 
	0x00, 0x48, 0xe1, 0x00, 0x2a, 
	0x00, 0x46, 0x01, 0x10, 0x00, 0x2a, 
	0x00, 0x44, 0x01, 0x12, 0x00, 0x2a, 
	0x00, 0x43, 0x01, 0x13, 0x00, 0x2a, 
	0x00, 0x42, 0x01, 0x13, 0x00, 0x2b, 
	0x00, 0x41, 0x01, 0x14, 0x00, 0x2b, 
	0x00, 0x40, 0xd1, 0x10, 0x71, 0x00, 0x2b, 
	0x00, 0x3f, 0xc1, 0x30, 0x71, 0x00, 0x2b, 
	0x00, 0x3e, 0xb1, 0x50, 0x71, 0x00, 0x2b, 
	0x00, 0x3d, 0xb1, 0x60, 0x71, 0x00, 0x2b, 
	0x00, 0x3c, 0xb1, 0x70, 0x71, 0x00, 0x2b, 
	0x00, 0x3c, 0xa1, 0x80, 0x81, 0x00, 0x2a, 
	0x00, 0x3b, 0xa1, 0xa0, 0x71, 0x00, 0x2a, 
	0x00, 0x3a, 0xa1, 0xb0, 0x71, 0x00, 0x2a, 
	0x00, 0x3a, 0x91, 0xc0, 0x71, 0x00, 0x2a, 
	0x00, 0x39, 0x91, 0xd0, 0x81, 0x00, 0x29, 
	0x00, 0x39, 0x91, 0xd0, 0x81, 0x00, 0x29, 
	0x00, 0x39, 0x81, 0xe0, 0x81, 0x00, 0x29, 
	0x00, 0x38, 0x81, 0x00, 0x10, 0x81, 0x00, 0x28, 
	0x00, 0x38, 0x81, 0x00, 0x10, 0x81, 0x00, 0x28, 
	0x00, 0x38, 0x81, 0x00, 0x11, 0x81, 0x00, 0x27, 
	0x00, 0x37, 0x81, 0x00, 0x12, 0x91, 0x00, 0x26, 
	0x00, 0x37, 0x81, 0x00, 0x12, 0xa1, 0x00, 0x25, 
	0x00, 0x37, 0x81, 0x00, 0x13, 0xa1, 0x00, 0x24, 
	0x00, 0x37, 0x71, 0x00, 0x15, 0xa1, 0x00, 0x23, 
	0x00, 0x37, 0x71, 0x00, 0x15, 0xb1, 0x00, 0x22, 
	0x00, 0x37, 0x71, 0x00, 0x16, 0xb1, 0x00, 0x21, 
	0x00, 0x37, 0x71, 0x00, 0x17, 0xc1, 0x00, 0x1f, 
	0x00, 0x37, 0x71, 0x00, 0x18, 0xd1, 0x00, 0x1d, 
	0x00, 0x37, 0x71, 0x00, 0x18, 0xf1, 0x00, 0x1b, 
	0x00, 0x37, 0x71, 0x00, 0x19, 0x01, 0x11, 0x00, 0x18, 
	0x00, 0x37, 0x71, 0x00, 0x1a, 0x01, 0x14, 0x00, 0x14, 
	0x00, 0x37, 0x71, 0x00, 0x1b, 0x01, 0x1d, 0xa0, 
	0x00, 0x37, 0x81, 0x00, 0x1c, 0x01, 0x1b, 0xa0, 
	0x00, 0x38, 0x71, 0x00, 0x1d, 0x01, 0x1a, 0xa0, 
	0x00, 0x38, 0x71, 0x00, 0x1f, 0x01, 0x17, 0xb0, 
	0x00, 0x38, 0x71, 0x00, 0x21, 0x01, 0x15, 0xb0, 
	0x00, 0x39, 0x21, 0x00, 0x27, 0x01, 0x13, 0xb0, 
	0x00, 0x65, 0x01, 0x10, 0xb0, 
	0x00, 0x69, 0xb1, 0xc0, 
	0x00, 0x6b, 0x91, 0xc0, 
	0x00, 0x6b, 0x91, 0xc0, 
	0x00, 0x6a, 0x91, 0xd0, 
	0x00, 0x3b, 0x62, 0x00, 0x29, 0x91, 0xd0, 
	0x00, 0x37, 0xf2, 0x00, 0x23, 0x91, 0xe0, 
	0x00, 0x35, 0x02, 0x13, 0x00, 0x20, 0xa1, 0xe0, 
	0x00, 0x33, 0x02, 0x17, 0x00, 0x1d, 0xa1, 0xf0, 
	0x00, 0x31, 0x02, 0x1b, 0x00, 0x1a, 0xa1, 0x00, 0x10, 
	0x00, 0x30, 0x02, 0x1d, 0x00, 0x18, 0xb1, 0x00, 0x10, 
	0x00, 0x2f, 0x02, 0x1f, 0x00, 0x16, 0xb1, 0x00, 0x11, 
	0x00, 0x2e, 0x02, 0x21, 0x00, 0x13, 0xc1, 0x00, 0x12, 
	0x00, 0x25, 0x62, 0x20, 0xe2, 0x60, 0xf2, 0x00, 0x10, 0xd1, 0x00, 0x13, 
	0x00, 0x21, 0x02, 0x17, 0xc0, 0xd2, 0xd0, 0xe1, 0x00, 0x14, 
	0x00, 0x1f, 0x02, 0x18, 0xf0, 0xb2, 0xa0, 0x01, 0x10, 0x00, 0x15, 
	0x00, 0x1e, 0x02, 0x17, 0x00, 0x12, 0xb2, 0x70, 0x01, 0x10, 0x00, 0x17, 
	0x00, 0x1d, 0x02, 0x17, 0x00, 0x15, 0x92, 0x70, 0xf1, 0x00, 0x18, 
	0x00, 0x1c, 0x02, 0x17, 0x00, 0x16, 0xa2, 0x60, 0xd1, 0x00, 0x1a, 
	0x00, 0x1b, 0x02, 0x17, 0x00, 0x18, 0x92, 0x70, 0xa1, 0x00, 0x1c, 
	0x00, 0x1a, 0x02, 0x18, 0x00, 0x19, 0x92, 0x60, 0x81, 0x00, 0x1e, 
	0x00, 0x1a, 0xb2, 0x50, 0x72, 0x00, 0x1a, 0x92, 0x70, 0x41, 0x00, 0x21, 
	0x00, 0x19, 0xa2, 0x80, 0x62, 0x00, 0x1b, 0x82, 0x00, 0x2c, 
	0x00, 0x19, 0x92, 0xb0, 0x32, 0x00, 0x1c, 0x82, 0x00, 0x2c, 
	0x00, 0x18, 0x92, 0x00, 0x2b, 0x82, 0x00, 0x2c, 
	0x00, 0x18, 0x82, 0x00, 0x2d, 0x82, 0x00, 0x2b, 
	0x00, 0x18, 0x82, 0x00, 0x2d, 0x82, 0x00, 0x2b, 
	0x00, 0x18, 0x82, 0x00, 0x2d, 0x82, 0x00, 0x2b, 
	0x00, 0x17, 0x82, 0x00, 0x2e, 0x82, 0x00, 0x2b, 
	0x00, 0x15, 0xa2, 0x00, 0x2e, 0x82, 0x00, 0x2b, 
	0x00, 0x14, 0xb2, 0x00, 0x2e, 0x92, 0x00, 0x2a, 
	0x00, 0x13, 0xd2, 0x00, 0x2c, 0xc2, 0x00, 0x28, 
	0x00, 0x11, 0xf2, 0x00, 0x2c, 0xe2, 0x00, 0x26, 
	0x00, 0x11, 0xf2, 0x00, 0x2c, 0xf2, 0x00, 0x25, 
	0x00, 0x10, 0x02, 0x10, 0x00, 0x2b, 0x02, 0x11, 0x00, 0x24, 
	0xf0, 0xd2, 0x00, 0x2f, 0x02, 0x12, 0x00, 0x23, 
	0xf0, 0xb2, 0x00, 0x31, 0x02, 0x13, 0x00, 0x22, 
	0xe0, 0xa2, 0x00, 0x33, 0x02, 0x14, 0x00, 0x21, 
	0xe0, 0x92, 0x00, 0x3d, 0xb2, 0x00, 0x21, 
	0xe0, 0x82, 0x00, 0x40, 0xa2, 0x00, 0x20, 
	0xd0, 0x92, 0x00, 0x41, 0x92, 0x00, 0x20, 
	0xd0, 0x82, 0x00, 0x43, 0x92, 0x00, 0x1f, 
	0xd0, 0x82, 0x00, 0x43, 0x92, 0x00, 0x1f, 
	0xd0, 0x82, 0x00, 0x44, 0x82, 0x00, 0x1f, 
	0xd0, 0x82, 0x00, 0x44, 0x82, 0x00, 0x1f, 
	0xd0, 0x82, 0x00, 0x44, 0x82, 0x00, 0x1f, 
	0xd0, 0x82, 0x00, 0x44, 0x82, 0x00, 0x1f, 
	0xd0, 0x82, 0x00, 0x44, 0x82, 0x00, 0x1f, 
	0xd0, 0x92, 0x00, 0x43, 0x82, 0x00, 0x1f, 
	0xe0, 0x82, 0x00, 0x42, 0x92, 0x00, 0x1f, 
	0xe0, 0x92, 0x00, 0x41, 0x82, 0x00, 0x20, 
	0xe0, 0xa2, 0x00, 0x3f, 0x92, 0x00, 0x20, 
	0xf0, 0xa2, 0x00, 0x3d, 0xa2, 0x00, 0x20, 
	0xf0, 0xb2, 0x00, 0x3a, 0xb2, 0x00, 0x21, 
	0x00, 0x10, 0xf2, 0x00, 0x31, 0xe2, 0x00, 0x22, 
	0x00, 0x11, 0x02, 0x4d, 0x00, 0x22, 
	0x00, 0x12, 0x02, 0x4b, 0x00, 0x23, 
	0x00, 0x13, 0x02, 0x49, 0x00, 0x24, 
	0x00, 0x14, 0x02, 0x47, 0x00, 0x25, 
	0x00, 0x15, 0x02, 0x44, 0x00, 0x27, 
	0x00, 0x17, 0x02, 0x40, 0x00, 0x29, 
	0x00, 0x1a, 0x02, 0x3a, 0x00, 0x2c, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	0x00, 0x80, 
	
}; // 128x128 Bitmap (16384 pixels) in 830 bytes

const uint16_t nt_partlycloudy_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 3 entries
	0x0000, 0x75da, 0xffff, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_nt_partlycloudy_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(nt_partlycloudy_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(nt_partlycloudy_RLEBM_palette);
	bmInfo.width = 128;
	bmInfo.height = 128;
	bmInfo.flags = 0x01;
}
