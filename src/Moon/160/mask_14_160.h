
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
//  Data is from file 'images\160\mask_14_160.bmp'.
//

const byte mask_14_160_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x48, 0x01, 0x12, 0x00, 0x46, 
	0x00, 0x42, 0x01, 0x1e, 0x00, 0x40, 
	0x00, 0x3e, 0x01, 0x26, 0x00, 0x3c, 
	0x00, 0x3b, 0x01, 0x2d, 0x00, 0x38, 
	0x00, 0x38, 0x01, 0x33, 0x00, 0x35, 
	0x00, 0x35, 0x01, 0x38, 0x00, 0x33, 
	0x00, 0x33, 0x01, 0x3d, 0x00, 0x30, 
	0x00, 0x31, 0x01, 0x41, 0x00, 0x2e, 
	0x00, 0x2f, 0x01, 0x45, 0x00, 0x2c, 
	0x00, 0x2d, 0x01, 0x49, 0x00, 0x2a, 
	0x00, 0x2c, 0x01, 0x4c, 0x00, 0x28, 
	0x00, 0x2a, 0x01, 0x4f, 0x00, 0x27, 
	0x00, 0x29, 0x01, 0x52, 0x00, 0x25, 
	0x00, 0x27, 0x01, 0x55, 0x00, 0x24, 
	0x00, 0x26, 0x01, 0x58, 0x00, 0x22, 
	0x00, 0x25, 0x01, 0x5a, 0x00, 0x21, 
	0x00, 0x23, 0x01, 0x5e, 0x00, 0x1f, 
	0x00, 0x22, 0x01, 0x60, 0x00, 0x1e, 
	0x00, 0x21, 0x01, 0x62, 0x00, 0x1d, 
	0x00, 0x20, 0x01, 0x64, 0x00, 0x1c, 
	0x00, 0x1f, 0x01, 0x66, 0x00, 0x1b, 
	0x00, 0x1e, 0x01, 0x68, 0x00, 0x1a, 
	0x00, 0x1d, 0x01, 0x6a, 0x00, 0x19, 
	0x00, 0x1c, 0x01, 0x6c, 0x00, 0x18, 
	0x00, 0x1b, 0x01, 0x6e, 0x00, 0x17, 
	0x00, 0x1a, 0x01, 0x70, 0x00, 0x16, 
	0x00, 0x19, 0x01, 0x72, 0x00, 0x15, 
	0x00, 0x19, 0x01, 0x73, 0x00, 0x14, 
	0x00, 0x18, 0x01, 0x75, 0x00, 0x13, 
	0x00, 0x17, 0x01, 0x77, 0x00, 0x12, 
	0x00, 0x16, 0x01, 0x79, 0x00, 0x11, 
	0x00, 0x16, 0x01, 0x79, 0x00, 0x11, 
	0x00, 0x15, 0x01, 0x7b, 0x00, 0x10, 
	0x00, 0x14, 0x01, 0x7d, 0xf0, 
	0x00, 0x14, 0x01, 0x7e, 0xe0, 
	0x00, 0x13, 0x01, 0x7f, 0xe0, 
	0x00, 0x12, 0x01, 0x81, 0xd0, 
	0x00, 0x12, 0x01, 0x81, 0xd0, 
	0x00, 0x11, 0x01, 0x83, 0xc0, 
	0x00, 0x11, 0x01, 0x84, 0xb0, 
	0x00, 0x10, 0x01, 0x85, 0xb0, 
	0x00, 0x10, 0x01, 0x86, 0xa0, 
	0xf0, 0x01, 0x87, 0xa0, 
	0xf0, 0x01, 0x88, 0x90, 
	0xe0, 0x01, 0x89, 0x90, 
	0xe0, 0x01, 0x8a, 0x80, 
	0xd0, 0x01, 0x8b, 0x80, 
	0xd0, 0x01, 0x8c, 0x70, 
	0xc0, 0x01, 0x8d, 0x70, 
	0xc0, 0x01, 0x8e, 0x60, 
	0xc0, 0x01, 0x8e, 0x60, 
	0xb0, 0x01, 0x8f, 0x60, 
	0xb0, 0x01, 0x90, 0x50, 
	0xb0, 0x01, 0x90, 0x50, 
	0xa0, 0x01, 0x91, 0x50, 
	0xa0, 0x01, 0x92, 0x40, 
	0xa0, 0x01, 0x92, 0x40, 
	0x90, 0x01, 0x93, 0x40, 
	0x90, 0x01, 0x94, 0x30, 
	0x90, 0x01, 0x94, 0x30, 
	0x90, 0x01, 0x94, 0x30, 
	0x80, 0x01, 0x95, 0x30, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x96, 0x20, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x99, 
	0x60, 0x01, 0x9a, 
	0x60, 0x01, 0x9a, 
	0x70, 0x01, 0x99, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x70, 0x01, 0x98, 0x10, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x96, 0x20, 
	0x80, 0x01, 0x95, 0x30, 
	0x90, 0x01, 0x94, 0x30, 
	0x90, 0x01, 0x94, 0x30, 
	0x90, 0x01, 0x94, 0x30, 
	0x90, 0x01, 0x93, 0x40, 
	0xa0, 0x01, 0x92, 0x40, 
	0xa0, 0x01, 0x92, 0x40, 
	0xa0, 0x01, 0x91, 0x50, 
	0xb0, 0x01, 0x90, 0x50, 
	0xb0, 0x01, 0x90, 0x50, 
	0xb0, 0x01, 0x8f, 0x60, 
	0xc0, 0x01, 0x8e, 0x60, 
	0xc0, 0x01, 0x8e, 0x60, 
	0xc0, 0x01, 0x8d, 0x70, 
	0xd0, 0x01, 0x8c, 0x70, 
	0xd0, 0x01, 0x8b, 0x80, 
	0xe0, 0x01, 0x8a, 0x80, 
	0xe0, 0x01, 0x89, 0x90, 
	0xf0, 0x01, 0x88, 0x90, 
	0xf0, 0x01, 0x87, 0xa0, 
	0x00, 0x10, 0x01, 0x86, 0xa0, 
	0x00, 0x10, 0x01, 0x85, 0xb0, 
	0x00, 0x11, 0x01, 0x84, 0xb0, 
	0x00, 0x11, 0x01, 0x83, 0xc0, 
	0x00, 0x12, 0x01, 0x81, 0xd0, 
	0x00, 0x12, 0x01, 0x81, 0xd0, 
	0x00, 0x13, 0x01, 0x7f, 0xe0, 
	0x00, 0x14, 0x01, 0x7e, 0xe0, 
	0x00, 0x14, 0x01, 0x7d, 0xf0, 
	0x00, 0x15, 0x01, 0x7b, 0x00, 0x10, 
	0x00, 0x16, 0x01, 0x79, 0x00, 0x11, 
	0x00, 0x16, 0x01, 0x79, 0x00, 0x11, 
	0x00, 0x17, 0x01, 0x77, 0x00, 0x12, 
	0x00, 0x18, 0x01, 0x75, 0x00, 0x13, 
	0x00, 0x19, 0x01, 0x73, 0x00, 0x14, 
	0x00, 0x19, 0x01, 0x72, 0x00, 0x15, 
	0x00, 0x1a, 0x01, 0x70, 0x00, 0x16, 
	0x00, 0x1b, 0x01, 0x6e, 0x00, 0x17, 
	0x00, 0x1c, 0x01, 0x6c, 0x00, 0x18, 
	0x00, 0x1d, 0x01, 0x6a, 0x00, 0x19, 
	0x00, 0x1e, 0x01, 0x68, 0x00, 0x1a, 
	0x00, 0x1f, 0x01, 0x66, 0x00, 0x1b, 
	0x00, 0x20, 0x01, 0x64, 0x00, 0x1c, 
	0x00, 0x21, 0x01, 0x62, 0x00, 0x1d, 
	0x00, 0x22, 0x01, 0x60, 0x00, 0x1e, 
	0x00, 0x23, 0x01, 0x5e, 0x00, 0x1f, 
	0x00, 0x25, 0x01, 0x5a, 0x00, 0x21, 
	0x00, 0x26, 0x01, 0x58, 0x00, 0x22, 
	0x00, 0x27, 0x01, 0x55, 0x00, 0x24, 
	0x00, 0x29, 0x01, 0x52, 0x00, 0x25, 
	0x00, 0x2a, 0x01, 0x4f, 0x00, 0x27, 
	0x00, 0x2c, 0x01, 0x4c, 0x00, 0x28, 
	0x00, 0x2d, 0x01, 0x49, 0x00, 0x2a, 
	0x00, 0x2f, 0x01, 0x45, 0x00, 0x2c, 
	0x00, 0x31, 0x01, 0x41, 0x00, 0x2e, 
	0x00, 0x33, 0x01, 0x3d, 0x00, 0x30, 
	0x00, 0x35, 0x01, 0x38, 0x00, 0x33, 
	0x00, 0x38, 0x01, 0x33, 0x00, 0x35, 
	0x00, 0x3b, 0x01, 0x2d, 0x00, 0x38, 
	0x00, 0x3e, 0x01, 0x26, 0x00, 0x3c, 
	0x00, 0x42, 0x01, 0x1e, 0x00, 0x40, 
	0x00, 0x48, 0x01, 0x12, 0x00, 0x46, 
	
}; // 160x160 Bitmap (25600 pixels) in 786 bytes

const uint16_t mask_14_160_RLEBM_palette[] PROGMEM_LATE = 
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
inline void get_mask_14_160_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(mask_14_160_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(mask_14_160_RLEBM_palette);
	bmInfo.width = 160;
	bmInfo.height = 160;
	bmInfo.flags = 0x01;
}
