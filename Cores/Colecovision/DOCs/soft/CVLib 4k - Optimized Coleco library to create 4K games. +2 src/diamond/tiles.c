/********************************************/
/*                                          */
/*   GRAPHICS TABLES  -  WIN ICVGM v3.00    */
/*                                          */
/*        WARNING : RLE COMPRESSION         */
/*                                          */
/********************************************/

#include <coleco.h>

byte NAMERLE[] = {
  0x00, 0x00, 0x88, 0x20, 0x01, 0x13, 0x14, 0x88, 0x01, 0x01, 0x15, 0x16, 0x87, 0x20, 0x81,
  0x00, 0x03, 0x20, 0x0A, 0x0E, 0x0B, 0x83, 0x20, 0x00, 0x12, 0x8C, 0x01, 0x00, 0x17, 0x86, 0x20,
  0x81, 0x00, 0x03, 0x20, 0x0F, 0x09, 0x0F, 0x82, 0x20, 0x00, 0x12, 0x85, 0x01, 0x87, 0x02, 0x01,
  0x08, 0x16, 0x83, 0x20, 0x0A, 0x18, 0x1A, 0x00, 0x00, 0x20, 0x0C, 0x0E, 0x0D, 0x18, 0x1A, 0x12,
  0x86, 0x01, 0x82, 0x02, 0x86, 0x01, 0x07, 0x17, 0x20, 0x18, 0x19, 0x1A, 0x20, 0x00, 0x00, 0x84,
  0x20, 0x00, 0x11, 0x87, 0x01, 0x82, 0x02, 0x87, 0x01, 0x00, 0x17, 0x83, 0x20, 0x81, 0x00, 0x05,
  0x20, 0x18, 0x19, 0x1A, 0x20, 0x10, 0x93, 0x01, 0x05, 0x15, 0x16, 0x20, 0x20, 0x00, 0x00, 0x83,
  0x20, 0x00, 0x12, 0x96, 0x01, 0x03, 0x17, 0x20, 0x00, 0x00, 0x82, 0x20, 0x00, 0x12, 0x98, 0x01,
  0x05, 0x15, 0x00, 0x00, 0x20, 0x13, 0x14, 0x9A, 0x01, 0x81, 0x00, 0x00, 0x12, 0x9C, 0x01, 0x81,
  0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81,
  0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81,
  0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81, 0x00, 0x9D, 0x01, 0x81,
  0x00, 0x9D, 0x01, 0x84, 0x00, 0x00, 0x05, 0x86, 0x00, 0x00, 0x1C, 0x87, 0x00, 0x00, 0x1E, 0x89,
  0x00, 0xFF};

byte PATTERNRLE[] = {
  0x88, 0x00, 0x2F, 0x20, 0x42, 0x04, 0x80, 0x00, 0x10, 0x00, 0x00, 0x20, 0x42, 0x04, 0x80,
  0x00, 0x10, 0x00, 0x18, 0x3C, 0x7E, 0xFF, 0xFF, 0x7E, 0x3C, 0x18, 0x18, 0x3C, 0x7E, 0xFF, 0xFF,
  0x7E, 0x3C, 0x18, 0x18, 0x3C, 0x7E, 0xFF, 0xFF, 0x7E, 0x3C, 0x18, 0x5F, 0xA3, 0x41, 0x81, 0x41,
  0x81, 0x41, 0x81, 0x7E, 0x85, 0xDB, 0x10, 0x7E, 0x5F, 0xA3, 0x7D, 0xBD, 0x7D, 0xBD, 0x7D, 0xBD,
  0x3C, 0x7E, 0xDB, 0xFF, 0xDB, 0xE7, 0x7E, 0x3C, 0x82, 0x00, 0x04, 0x10, 0x0C, 0x0F, 0x07, 0x07,
  0x82, 0x00, 0x09, 0x08, 0x30, 0xF0, 0xE0, 0xE0, 0x07, 0x07, 0x0F, 0x0C, 0x10, 0x82, 0x00, 0x81,
  0xE0, 0x02, 0xF0, 0x30, 0x08, 0x83, 0x00, 0x81, 0x18, 0x81, 0x3C, 0x81, 0x18, 0x82, 0x00, 0x1D,
  0x18, 0x7E, 0x7E, 0x18, 0x00, 0x00, 0x0F, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x00, 0x00,
  0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0x84, 0x00,
  0x11, 0x03, 0x0F, 0x3F, 0xFF, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x10, 0x00, 0xFF, 0x3F, 0x0F, 0x03,
  0x00, 0x00, 0x10, 0x85, 0x00, 0x0C, 0xC0, 0xF0, 0xFC, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC,
  0xFE, 0xC3, 0xA1, 0x82, 0x40, 0x07, 0x00, 0x80, 0xC0, 0xFF, 0xFF, 0xC3, 0xA1, 0x40, 0x82, 0x00,
  0x82, 0xFF, 0x04, 0xC3, 0xA1, 0x40, 0x00, 0x01, 0x8F, 0x00, 0x03, 0x22, 0x08, 0x52, 0x10, 0x83,
  0x38, 0x03, 0x88, 0x20, 0x94, 0x10, 0x83, 0x38, 0x02, 0x49, 0x92, 0x92, 0x84, 0xDB, 0x88, 0x00,
  0x19, 0x31, 0x4A, 0x42, 0x5B, 0x4A, 0x32, 0x00, 0x00, 0x91, 0x5B, 0x55, 0xD1, 0x51, 0x51, 0x00,
  0x00, 0x78, 0x42, 0x74, 0x40, 0x40, 0x78, 0x00, 0x00, 0x0C, 0x52, 0x82, 0x12, 0x10, 0x0C, 0x00,
  0x00, 0x8B, 0x8A, 0x8B, 0x52, 0x52, 0x23, 0x00, 0x00, 0xDC, 0x12, 0x92, 0x1C, 0x12, 0xD2, 0x89,
  0x00, 0x00, 0x72, 0x83, 0x4A, 0x0C, 0x72, 0x00, 0x00, 0x64, 0x96, 0x95, 0xF4, 0x94, 0x94, 0x00,
  0x00, 0x4C, 0xD2, 0x82, 0x52, 0x0B, 0x4C, 0x00, 0x00, 0x97, 0xD4, 0xB4, 0x94, 0x94, 0x97, 0x00,
  0x00, 0x27, 0x83, 0x84, 0x68, 0x17, 0x00, 0x00, 0x18, 0xA5, 0xA4, 0xBC, 0xA4, 0x25, 0x00, 0x00,
  0xE9, 0x09, 0xCF, 0x29, 0x29, 0xC9, 0x00, 0x00, 0x12, 0x36, 0x24, 0x00, 0x48, 0x48, 0x00, 0x3C,
  0x42, 0x42, 0x00, 0x42, 0x42, 0x3C, 0x00, 0x00, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, 0x3C,
  0x02, 0x02, 0x3C, 0x40, 0x40, 0x3C, 0x00, 0x3C, 0x02, 0x02, 0x3C, 0x02, 0x02, 0x3C, 0x00, 0x00,
  0x42, 0x42, 0x3C, 0x02, 0x02, 0x00, 0x00, 0x3C, 0x40, 0x40, 0x3C, 0x02, 0x02, 0x3C, 0x00, 0x3C,
  0x40, 0x40, 0x3C, 0x42, 0x42, 0x3C, 0x00, 0x3C, 0x02, 0x02, 0x00, 0x02, 0x02, 0x00, 0x00, 0x3C,
  0x42, 0x42, 0x3C, 0x42, 0x42, 0x3C, 0x00, 0x3C, 0x42, 0x42, 0x3C, 0x02, 0x02, 0x3C, 0xB0, 0x00,
  0x81, 0x18, 0x1D, 0x7E, 0x5A, 0x18, 0x3C, 0x26, 0x60, 0x18, 0x18, 0x7E, 0x5A, 0x18, 0x3C, 0x64,
  0x06, 0x18, 0x18, 0x7E, 0x5A, 0x18, 0x3C, 0x24, 0x66, 0x18, 0x18, 0x7E, 0x5A, 0x18, 0x3C, 0x26,
  0x64, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE,
  0x00, 0xFE, 0x00, 0xFE, 0x00, 0xFE, 0x00, 0xEA, 0x00, 0xFF};

byte COLORRLE[] = {
  0x87, 0x41, 0x87, 0x1E, 0x87, 0x41, 0x81, 0x31, 0x15, 0x21, 0x31, 0x21, 0x31, 0x21, 0xC1,
  0x91, 0x91, 0x81, 0x91, 0x81, 0x91, 0x81, 0x61, 0xF1, 0xF1, 0x71, 0xF1, 0x71, 0xF1, 0x71, 0x51,
  0x88, 0x61, 0x05, 0xEF, 0x86, 0x96, 0x96, 0x86, 0xEF, 0x88, 0x61, 0x81, 0xB5, 0x03, 0xB4, 0xB5,
  0xB9, 0xB8, 0xB1, 0xB5, 0x9F, 0xE5, 0x83, 0x5E, 0x83, 0x1E, 0x83, 0x5E, 0x83, 0x1E, 0x8F, 0xE5,
  0x86, 0x5F, 0x00, 0x5E, 0x86, 0x5F, 0x00, 0x5E, 0x86, 0x5F, 0x00, 0x5E, 0x8F, 0x41, 0x13, 0xB1,
  0xF1, 0xB1, 0xF1, 0x61, 0x81, 0x81, 0x61, 0xB1, 0xF1, 0xB1, 0xF1, 0x61, 0x81, 0x81, 0x61, 0xF1,
  0xF1, 0xB1, 0x61, 0x82, 0x81, 0x00, 0x61, 0x87, 0x45, 0xAF, 0x1E, 0x87, 0x41, 0xBF, 0x1E, 0xCF,
  0xF1, 0xAF, 0x41, 0x9F, 0xF1, 0xFE, 0x41, 0xFE, 0x41, 0xFE, 0x41, 0xFE, 0x41, 0xFE, 0x41, 0xFE,
  0x41, 0xFE, 0x41, 0xFE, 0x41, 0xFE, 0x41, 0xFE, 0x41, 0xFE, 0x41, 0xEA, 0x41, 0xFF};
