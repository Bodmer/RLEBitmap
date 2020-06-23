
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
//  Data is from file 'images\320\mask_25_320.bmp'.
//

const byte mask_25_320_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x93, 0xe1, 0x00, 0x9f, 
	0x00, 0x8a, 0x01, 0x14, 0x00, 0xa2, 
	0x00, 0x84, 0x01, 0x18, 0x00, 0xa4, 
	0x00, 0x7f, 0x01, 0x1c, 0x00, 0xa5, 
	0x00, 0x7a, 0x01, 0x20, 0x00, 0xa6, 
	0x00, 0x77, 0x01, 0x22, 0x00, 0xa7, 
	0x00, 0x73, 0x01, 0x25, 0x00, 0xa8, 
	0x00, 0x70, 0x01, 0x28, 0x00, 0xa8, 
	0x00, 0x6d, 0x01, 0x2a, 0x00, 0xa9, 
	0x00, 0x6a, 0x01, 0x2c, 0x00, 0xaa, 
	0x00, 0x67, 0x01, 0x2f, 0x00, 0xaa, 
	0x00, 0x65, 0x01, 0x30, 0x00, 0xab, 
	0x00, 0x62, 0x01, 0x33, 0x00, 0xab, 
	0x00, 0x60, 0x01, 0x34, 0x00, 0xac, 
	0x00, 0x5e, 0x01, 0x36, 0x00, 0xac, 
	0x00, 0x5c, 0x01, 0x37, 0x00, 0xad, 
	0x00, 0x5a, 0x01, 0x39, 0x00, 0xad, 
	0x00, 0x58, 0x01, 0x3b, 0x00, 0xad, 
	0x00, 0x56, 0x01, 0x3c, 0x00, 0xae, 
	0x00, 0x54, 0x01, 0x3e, 0x00, 0xae, 
	0x00, 0x52, 0x01, 0x40, 0x00, 0xae, 
	0x00, 0x50, 0x01, 0x41, 0x00, 0xaf, 
	0x00, 0x4f, 0x01, 0x42, 0x00, 0xaf, 
	0x00, 0x4d, 0x01, 0x43, 0x00, 0xb0, 
	0x00, 0x4b, 0x01, 0x45, 0x00, 0xb0, 
	0x00, 0x4a, 0x01, 0x46, 0x00, 0xb0, 
	0x00, 0x48, 0x01, 0x47, 0x00, 0xb1, 
	0x00, 0x47, 0x01, 0x48, 0x00, 0xb1, 
	0x00, 0x45, 0x01, 0x4a, 0x00, 0xb1, 
	0x00, 0x44, 0x01, 0x4b, 0x00, 0xb1, 
	0x00, 0x42, 0x01, 0x4c, 0x00, 0xb2, 
	0x00, 0x41, 0x01, 0x4d, 0x00, 0xb2, 
	0x00, 0x40, 0x01, 0x4e, 0x00, 0xb2, 
	0x00, 0x3e, 0x01, 0x50, 0x00, 0xb2, 
	0x00, 0x3d, 0x01, 0x50, 0x00, 0xb3, 
	0x00, 0x3c, 0x01, 0x51, 0x00, 0xb3, 
	0x00, 0x3b, 0x01, 0x52, 0x00, 0xb3, 
	0x00, 0x3a, 0x01, 0x52, 0x00, 0xb4, 
	0x00, 0x38, 0x01, 0x54, 0x00, 0xb4, 
	0x00, 0x37, 0x01, 0x55, 0x00, 0xb4, 
	0x00, 0x36, 0x01, 0x56, 0x00, 0xb4, 
	0x00, 0x35, 0x01, 0x57, 0x00, 0xb4, 
	0x00, 0x34, 0x01, 0x57, 0x00, 0xb5, 
	0x00, 0x33, 0x01, 0x58, 0x00, 0xb5, 
	0x00, 0x32, 0x01, 0x59, 0x00, 0xb5, 
	0x00, 0x31, 0x01, 0x5a, 0x00, 0xb5, 
	0x00, 0x30, 0x01, 0x5b, 0x00, 0xb5, 
	0x00, 0x2f, 0x01, 0x5b, 0x00, 0xb6, 
	0x00, 0x2e, 0x01, 0x5c, 0x00, 0xb6, 
	0x00, 0x2d, 0x01, 0x5d, 0x00, 0xb6, 
	0x00, 0x2c, 0x01, 0x5e, 0x00, 0xb6, 
	0x00, 0x2b, 0x01, 0x5f, 0x00, 0xb6, 
	0x00, 0x2a, 0x01, 0x5f, 0x00, 0xb7, 
	0x00, 0x29, 0x01, 0x60, 0x00, 0xb7, 
	0x00, 0x28, 0x01, 0x61, 0x00, 0xb7, 
	0x00, 0x27, 0x01, 0x62, 0x00, 0xb7, 
	0x00, 0x26, 0x01, 0x63, 0x00, 0xb7, 
	0x00, 0x26, 0x01, 0x62, 0x00, 0xb8, 
	0x00, 0x25, 0x01, 0x63, 0x00, 0xb8, 
	0x00, 0x24, 0x01, 0x64, 0x00, 0xb8, 
	0x00, 0x23, 0x01, 0x65, 0x00, 0xb8, 
	0x00, 0x22, 0x01, 0x66, 0x00, 0xb8, 
	0x00, 0x22, 0x01, 0x66, 0x00, 0xb8, 
	0x00, 0x21, 0x01, 0x66, 0x00, 0xb9, 
	0x00, 0x20, 0x01, 0x67, 0x00, 0xb9, 
	0x00, 0x1f, 0x01, 0x68, 0x00, 0xb9, 
	0x00, 0x1f, 0x01, 0x68, 0x00, 0xb9, 
	0x00, 0x1e, 0x01, 0x69, 0x00, 0xb9, 
	0x00, 0x1d, 0x01, 0x6a, 0x00, 0xb9, 
	0x00, 0x1c, 0x01, 0x6b, 0x00, 0xb9, 
	0x00, 0x1c, 0x01, 0x6a, 0x00, 0xba, 
	0x00, 0x1b, 0x01, 0x6b, 0x00, 0xba, 
	0x00, 0x1a, 0x01, 0x6c, 0x00, 0xba, 
	0x00, 0x1a, 0x01, 0x6c, 0x00, 0xba, 
	0x00, 0x19, 0x01, 0x6d, 0x00, 0xba, 
	0x00, 0x19, 0x01, 0x6d, 0x00, 0xba, 
	0x00, 0x18, 0x01, 0x6e, 0x00, 0xba, 
	0x00, 0x17, 0x01, 0x6f, 0x00, 0xba, 
	0x00, 0x17, 0x01, 0x6e, 0x00, 0xbb, 
	0x00, 0x16, 0x01, 0x6f, 0x00, 0xbb, 
	0x00, 0x16, 0x01, 0x6f, 0x00, 0xbb, 
	0x00, 0x15, 0x01, 0x70, 0x00, 0xbb, 
	0x00, 0x14, 0x01, 0x71, 0x00, 0xbb, 
	0x00, 0x14, 0x01, 0x71, 0x00, 0xbb, 
	0x00, 0x13, 0x01, 0x72, 0x00, 0xbb, 
	0x00, 0x13, 0x01, 0x72, 0x00, 0xbb, 
	0x00, 0x12, 0x01, 0x73, 0x00, 0xbb, 
	0x00, 0x12, 0x01, 0x72, 0x00, 0xbc, 
	0x00, 0x11, 0x01, 0x73, 0x00, 0xbc, 
	0x00, 0x11, 0x01, 0x73, 0x00, 0xbc, 
	0x00, 0x10, 0x01, 0x74, 0x00, 0xbc, 
	0x00, 0x10, 0x01, 0x74, 0x00, 0xbc, 
	0xf0, 0x01, 0x75, 0x00, 0xbc, 
	0xf0, 0x01, 0x75, 0x00, 0xbc, 
	0xe0, 0x01, 0x76, 0x00, 0xbc, 
	0xe0, 0x01, 0x76, 0x00, 0xbc, 
	0xe0, 0x01, 0x76, 0x00, 0xbc, 
	0xd0, 0x01, 0x77, 0x00, 0xbc, 
	0xd0, 0x01, 0x76, 0x00, 0xbd, 
	0xc0, 0x01, 0x77, 0x00, 0xbd, 
	0xc0, 0x01, 0x77, 0x00, 0xbd, 
	0xb0, 0x01, 0x78, 0x00, 0xbd, 
	0xb0, 0x01, 0x78, 0x00, 0xbd, 
	0xb0, 0x01, 0x78, 0x00, 0xbd, 
	0xa0, 0x01, 0x79, 0x00, 0xbd, 
	0xa0, 0x01, 0x79, 0x00, 0xbd, 
	0xa0, 0x01, 0x79, 0x00, 0xbd, 
	0x90, 0x01, 0x7a, 0x00, 0xbd, 
	0x90, 0x01, 0x7a, 0x00, 0xbd, 
	0x90, 0x01, 0x7a, 0x00, 0xbd, 
	0x80, 0x01, 0x7b, 0x00, 0xbd, 
	0x80, 0x01, 0x7a, 0x00, 0xbe, 
	0x80, 0x01, 0x7a, 0x00, 0xbe, 
	0x70, 0x01, 0x7b, 0x00, 0xbe, 
	0x70, 0x01, 0x7b, 0x00, 0xbe, 
	0x70, 0x01, 0x7b, 0x00, 0xbe, 
	0x60, 0x01, 0x7c, 0x00, 0xbe, 
	0x60, 0x01, 0x7c, 0x00, 0xbe, 
	0x60, 0x01, 0x7c, 0x00, 0xbe, 
	0x60, 0x01, 0x7c, 0x00, 0xbe, 
	0x50, 0x01, 0x7d, 0x00, 0xbe, 
	0x50, 0x01, 0x7d, 0x00, 0xbe, 
	0x50, 0x01, 0x7d, 0x00, 0xbe, 
	0x50, 0x01, 0x7d, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x30, 0x01, 0x7f, 0x00, 0xbe, 
	0x30, 0x01, 0x7e, 0x00, 0xbf, 
	0x30, 0x01, 0x7e, 0x00, 0xbf, 
	0x30, 0x01, 0x7e, 0x00, 0xbf, 
	0x30, 0x01, 0x7e, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x01, 0x81, 0x00, 0xbf, 
	0x01, 0x81, 0x00, 0xbf, 
	0x01, 0x81, 0x00, 0xbf, 
	0x01, 0x81, 0x00, 0xbf, 
	0x01, 0x81, 0x00, 0xbf, 
	0x01, 0x81, 0x00, 0xbf, 
	0x01, 0x81, 0x00, 0xbf, 
	0x01, 0x81, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x10, 0x01, 0x80, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x20, 0x01, 0x7f, 0x00, 0xbf, 
	0x30, 0x01, 0x7e, 0x00, 0xbf, 
	0x30, 0x01, 0x7e, 0x00, 0xbf, 
	0x30, 0x01, 0x7e, 0x00, 0xbf, 
	0x30, 0x01, 0x7e, 0x00, 0xbf, 
	0x30, 0x01, 0x7f, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x40, 0x01, 0x7e, 0x00, 0xbe, 
	0x50, 0x01, 0x7d, 0x00, 0xbe, 
	0x50, 0x01, 0x7d, 0x00, 0xbe, 
	0x50, 0x01, 0x7d, 0x00, 0xbe, 
	0x50, 0x01, 0x7d, 0x00, 0xbe, 
	0x60, 0x01, 0x7c, 0x00, 0xbe, 
	0x60, 0x01, 0x7c, 0x00, 0xbe, 
	0x60, 0x01, 0x7c, 0x00, 0xbe, 
	0x60, 0x01, 0x7c, 0x00, 0xbe, 
	0x70, 0x01, 0x7b, 0x00, 0xbe, 
	0x70, 0x01, 0x7b, 0x00, 0xbe, 
	0x70, 0x01, 0x7b, 0x00, 0xbe, 
	0x80, 0x01, 0x7a, 0x00, 0xbe, 
	0x80, 0x01, 0x7a, 0x00, 0xbe, 
	0x80, 0x01, 0x7b, 0x00, 0xbd, 
	0x90, 0x01, 0x7a, 0x00, 0xbd, 
	0x90, 0x01, 0x7a, 0x00, 0xbd, 
	0x90, 0x01, 0x7a, 0x00, 0xbd, 
	0xa0, 0x01, 0x79, 0x00, 0xbd, 
	0xa0, 0x01, 0x79, 0x00, 0xbd, 
	0xa0, 0x01, 0x79, 0x00, 0xbd, 
	0xb0, 0x01, 0x78, 0x00, 0xbd, 
	0xb0, 0x01, 0x78, 0x00, 0xbd, 
	0xb0, 0x01, 0x78, 0x00, 0xbd, 
	0xc0, 0x01, 0x77, 0x00, 0xbd, 
	0xc0, 0x01, 0x77, 0x00, 0xbd, 
	0xd0, 0x01, 0x76, 0x00, 0xbd, 
	0xd0, 0x01, 0x77, 0x00, 0xbc, 
	0xe0, 0x01, 0x76, 0x00, 0xbc, 
	0xe0, 0x01, 0x76, 0x00, 0xbc, 
	0xe0, 0x01, 0x76, 0x00, 0xbc, 
	0xf0, 0x01, 0x75, 0x00, 0xbc, 
	0xf0, 0x01, 0x75, 0x00, 0xbc, 
	0x00, 0x10, 0x01, 0x74, 0x00, 0xbc, 
	0x00, 0x10, 0x01, 0x74, 0x00, 0xbc, 
	0x00, 0x11, 0x01, 0x73, 0x00, 0xbc, 
	0x00, 0x11, 0x01, 0x73, 0x00, 0xbc, 
	0x00, 0x12, 0x01, 0x72, 0x00, 0xbc, 
	0x00, 0x12, 0x01, 0x73, 0x00, 0xbb, 
	0x00, 0x13, 0x01, 0x72, 0x00, 0xbb, 
	0x00, 0x13, 0x01, 0x72, 0x00, 0xbb, 
	0x00, 0x14, 0x01, 0x71, 0x00, 0xbb, 
	0x00, 0x14, 0x01, 0x71, 0x00, 0xbb, 
	0x00, 0x15, 0x01, 0x70, 0x00, 0xbb, 
	0x00, 0x16, 0x01, 0x6f, 0x00, 0xbb, 
	0x00, 0x16, 0x01, 0x6f, 0x00, 0xbb, 
	0x00, 0x17, 0x01, 0x6e, 0x00, 0xbb, 
	0x00, 0x17, 0x01, 0x6f, 0x00, 0xba, 
	0x00, 0x18, 0x01, 0x6e, 0x00, 0xba, 
	0x00, 0x19, 0x01, 0x6d, 0x00, 0xba, 
	0x00, 0x19, 0x01, 0x6d, 0x00, 0xba, 
	0x00, 0x1a, 0x01, 0x6c, 0x00, 0xba, 
	0x00, 0x1a, 0x01, 0x6c, 0x00, 0xba, 
	0x00, 0x1b, 0x01, 0x6b, 0x00, 0xba, 
	0x00, 0x1c, 0x01, 0x6a, 0x00, 0xba, 
	0x00, 0x1c, 0x01, 0x6b, 0x00, 0xb9, 
	0x00, 0x1d, 0x01, 0x6a, 0x00, 0xb9, 
	0x00, 0x1e, 0x01, 0x69, 0x00, 0xb9, 
	0x00, 0x1f, 0x01, 0x68, 0x00, 0xb9, 
	0x00, 0x1f, 0x01, 0x68, 0x00, 0xb9, 
	0x00, 0x20, 0x01, 0x67, 0x00, 0xb9, 
	0x00, 0x21, 0x01, 0x66, 0x00, 0xb9, 
	0x00, 0x22, 0x01, 0x66, 0x00, 0xb8, 
	0x00, 0x22, 0x01, 0x66, 0x00, 0xb8, 
	0x00, 0x23, 0x01, 0x65, 0x00, 0xb8, 
	0x00, 0x24, 0x01, 0x64, 0x00, 0xb8, 
	0x00, 0x25, 0x01, 0x63, 0x00, 0xb8, 
	0x00, 0x26, 0x01, 0x62, 0x00, 0xb8, 
	0x00, 0x26, 0x01, 0x63, 0x00, 0xb7, 
	0x00, 0x27, 0x01, 0x62, 0x00, 0xb7, 
	0x00, 0x28, 0x01, 0x61, 0x00, 0xb7, 
	0x00, 0x29, 0x01, 0x60, 0x00, 0xb7, 
	0x00, 0x2a, 0x01, 0x5f, 0x00, 0xb7, 
	0x00, 0x2b, 0x01, 0x5f, 0x00, 0xb6, 
	0x00, 0x2c, 0x01, 0x5e, 0x00, 0xb6, 
	0x00, 0x2d, 0x01, 0x5d, 0x00, 0xb6, 
	0x00, 0x2e, 0x01, 0x5c, 0x00, 0xb6, 
	0x00, 0x2f, 0x01, 0x5b, 0x00, 0xb6, 
	0x00, 0x30, 0x01, 0x5b, 0x00, 0xb5, 
	0x00, 0x31, 0x01, 0x5a, 0x00, 0xb5, 
	0x00, 0x32, 0x01, 0x59, 0x00, 0xb5, 
	0x00, 0x33, 0x01, 0x58, 0x00, 0xb5, 
	0x00, 0x34, 0x01, 0x57, 0x00, 0xb5, 
	0x00, 0x35, 0x01, 0x57, 0x00, 0xb4, 
	0x00, 0x36, 0x01, 0x56, 0x00, 0xb4, 
	0x00, 0x37, 0x01, 0x55, 0x00, 0xb4, 
	0x00, 0x38, 0x01, 0x54, 0x00, 0xb4, 
	0x00, 0x3a, 0x01, 0x52, 0x00, 0xb4, 
	0x00, 0x3b, 0x01, 0x52, 0x00, 0xb3, 
	0x00, 0x3c, 0x01, 0x51, 0x00, 0xb3, 
	0x00, 0x3d, 0x01, 0x50, 0x00, 0xb3, 
	0x00, 0x3e, 0x01, 0x50, 0x00, 0xb2, 
	0x00, 0x40, 0x01, 0x4e, 0x00, 0xb2, 
	0x00, 0x41, 0x01, 0x4d, 0x00, 0xb2, 
	0x00, 0x42, 0x01, 0x4c, 0x00, 0xb2, 
	0x00, 0x44, 0x01, 0x4b, 0x00, 0xb1, 
	0x00, 0x45, 0x01, 0x4a, 0x00, 0xb1, 
	0x00, 0x47, 0x01, 0x48, 0x00, 0xb1, 
	0x00, 0x48, 0x01, 0x47, 0x00, 0xb1, 
	0x00, 0x4a, 0x01, 0x46, 0x00, 0xb0, 
	0x00, 0x4b, 0x01, 0x45, 0x00, 0xb0, 
	0x00, 0x4d, 0x01, 0x43, 0x00, 0xb0, 
	0x00, 0x4f, 0x01, 0x42, 0x00, 0xaf, 
	0x00, 0x50, 0x01, 0x41, 0x00, 0xaf, 
	0x00, 0x52, 0x01, 0x40, 0x00, 0xae, 
	0x00, 0x54, 0x01, 0x3e, 0x00, 0xae, 
	0x00, 0x56, 0x01, 0x3c, 0x00, 0xae, 
	0x00, 0x58, 0x01, 0x3b, 0x00, 0xad, 
	0x00, 0x5a, 0x01, 0x39, 0x00, 0xad, 
	0x00, 0x5c, 0x01, 0x37, 0x00, 0xad, 
	0x00, 0x5e, 0x01, 0x36, 0x00, 0xac, 
	0x00, 0x60, 0x01, 0x34, 0x00, 0xac, 
	0x00, 0x62, 0x01, 0x33, 0x00, 0xab, 
	0x00, 0x65, 0x01, 0x30, 0x00, 0xab, 
	0x00, 0x67, 0x01, 0x2f, 0x00, 0xaa, 
	0x00, 0x6a, 0x01, 0x2c, 0x00, 0xaa, 
	0x00, 0x6d, 0x01, 0x2a, 0x00, 0xa9, 
	0x00, 0x70, 0x01, 0x28, 0x00, 0xa8, 
	0x00, 0x73, 0x01, 0x25, 0x00, 0xa8, 
	0x00, 0x77, 0x01, 0x22, 0x00, 0xa7, 
	0x00, 0x7a, 0x01, 0x20, 0x00, 0xa6, 
	0x00, 0x7f, 0x01, 0x1c, 0x00, 0xa5, 
	0x00, 0x84, 0x01, 0x18, 0x00, 0xa4, 
	0x00, 0x8a, 0x01, 0x14, 0x00, 0xa2, 
	0x00, 0x93, 0xe1, 0x00, 0x9f, 
	
}; // 320x320 Bitmap (102400 pixels) in 1774 bytes

const uint16_t mask_25_320_RLEBM_palette[] PROGMEM_LATE = 
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
inline void get_mask_25_320_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(mask_25_320_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(mask_25_320_RLEBM_palette);
	bmInfo.width = 320;
	bmInfo.height = 320;
	bmInfo.flags = 0x01;
}
