// Animalese library
// 
// Based of the Talkie Library. 
// Changes:
// 	-All data has been moved back into a .h file to better facilitate voice change
//	-The only vocabulary available are letters A-Z and numbers 0-9 since these are all that is needed for Animalese
//
// Origirnal Talkie header as follows:
//      Talkie library
//      Copyright 2011 Peter Knight
//      This code is released under GPLv2 license.
//
//      Armin Joachimsmeyer 11/2018 converted to .c and .h files
//
//      The following phrases are derived from those built into the
//      Texas Instruments TI99/4A Speech System add-on from 1979.
//
//      A deep male voice with a southern USA accent.
//
//      Due to the large vocabulary, this file takes up 32Kbytes of flash.
//      It will not fit in most Arduinos as is, so just copy and paste
//      out the words you need.
//
//      Note that some words/letters are repeated with different spellings.
//      eg. 'TWO', 'TO', 'TOO' or 'YOU' and 'U'

#ifndef ANIMALESE_VOCAB_US_TI99_H_
#define ANIMALESE_VOCAB_US_TI99_H_

#include <stdint.h>
#include <avr/pgmspace.h>

const uint8_t sp_PAUSE1[]    		 PROGMEM = {0x08,0x14,0xC1,0xDD,0x45,0x64,0x03,0x00,0xFC,0x4A,0x56,0x26,0x3A,0x06,0x0A};
const uint8_t sp_PAUSE2[]    		 PROGMEM = {0x08,0x14,0xC1,0xDD,0x45,0x64,0x03,0x00,0x00,0x00,0xC0,0xFF,0x4A,0x46,0x51,0x39,0x79,0x15,0x0A};
const uint8_t sp_A[]                 PROGMEM ={ 0xA7,0x8A,0xCE,0x25,0xA7,0x2A,0xDD,0x62,0xE7,0x3B,0xBF,0xF9,0xAD,0x56,0xD5,0x72,0xA0,0x44,0x7D,0x99,0x4D,0xED,0xFC,0xE0,0x87,0x07,0x00,0x00};
const uint8_t sp_B[]                 PROGMEM ={0xAB,0xED,0xD1,0x14,0x5D,0xBB,0xAD,0xB6,0x45,0x57,0xF0,0xDE,0x3A,0x9A,0x59,0x94,0x31,0x62,0xCD,0x6E,0x76,0xB3,0x9B,0xD9,0xF4,0xB6,0xB6,0xB1,0xB7,0x3D,0xEF,0x1F,0x00,0x00};
const uint8_t sp_C[]                 PROGMEM ={0x08,0xD0,0xB4,0x42,0x00,0x8B,0x88,0x3A,0xE0,0x2B,0xD5,0x00,0xFC,0x18,0xE6,0x81,0x08,0x78,0xC0,0x00,0x4F,0xAB,0x1C,0xA7,0xF8,0x60,0x31,0x7D,0x73,0xE2,0x1A,0x93,0xD8,0xED,0xEB,0x8D,0x6F,0x72,0xB3,0x51,0xF4,0x9A,0x02,0x1A,0x6F,0x77,0xB5,0xEB,0xD9,0x94,0xB6,0x34,0x22,0xA9,0xA9,0x93,0xBB,0xD0,0x25,0xC7,0x94,0x97,0xA1,0x4D,0xE7,0x95,0xF0,0x9E,0x18,0x35,0x5D,0xF4,0xA0,0xD3,0x29,0x4C,0x75,0xC1,0x82,0x86,0xB9,0xB3,0x07};
const uint8_t sp_D[]                 PROGMEM ={0x0C,0x10,0xD2,0x62,0x64,0xD9,0x2B,0x4B,0xE6,0xE9,0x91,0xE5,0x28,0x2C,0x53,0x83,0x56,0x96,0x8D,0x88,0x6E,0x4D,0x1A,0x59,0x09,0xC2,0xB2,0x35,0x79,0xE6,0xA3,0xEA,0x49,0x19,0xAA,0xC7,0xF4,0xAA,0xD7,0xBD,0xAD,0x9D,0x1F,0xDC,0xD4,0x92,0x12,0x76,0x0F,0x71,0xFD,0x88,0x82,0x32,0x55,0xE5,0x01};
const uint8_t sp_E[]                 PROGMEM ={0x21,0x2A,0x81,0x49,0xB7,0x2B,0xD7,0xB4,0xA7,0x33,0xDB,0xD9,0xCE,0x77,0xBE,0xF3,0x51,0xD4,0x22,0x84,0x5D,0x4B,0x66,0xD5,0xAB,0x5A,0x31,0x80,0x59,0x79,0x53,0x3B,0x61,0xE6,0xE7,0x35,0x1F};
const uint8_t sp_F[]                 PROGMEM ={0x2B,0x8B,0x25,0x4A,0xAC,0x13,0xEF,0xEC,0xE6,0xB7,0xB8,0xD5,0xAD,0x6E,0xBD,0x5A,0x1F,0x23,0xD8,0x63,0xD2,0xEE,0xFA,0xE8,0x80,0x68,0x4D,0x3C,0x60,0x01,0x0D,0x68,0x80,0x02,0x0F};
const uint8_t sp_G[]                 PROGMEM ={0xAA,0xBE,0xAB,0x90,0xC1,0xD4,0x05,0x60,0x47,0x86,0x51,0xED,0xE2,0xC2,0x6C,0xD9,0x57,0xD5,0x53,0x08,0x81,0x6E,0x5D,0x45,0x2B,0x41,0x64,0xBE,0x66,0x17,0xBB,0xD8,0xD5,0xAE,0x76,0xD3,0xDA,0x92,0x05,0xA5,0xF2,0x76,0x6D,0x53,0x97,0xB5,0xB2,0x5E,0xD4,0x72,0x5D,0xD4,0xCC,0x79,0x11,0xD2,0x77,0xBA,0x93,0xFD,0x03};
const uint8_t sp_H[]                 PROGMEM ={0x27,0x2F,0xC1,0x55,0xAB,0x26,0x9F,0x22,0x47,0x55,0xAB,0x9E,0x7A,0x8A,0x92,0x8C,0x74,0x7B,0xF2,0xAD,0x56,0xD5,0x83,0x11,0x75,0x3D,0xAE,0xB5,0xAC,0x01,0x1C,0x30,0x23,0xAB,0x03,0xF6,0xCE,0xB0,0x00,0x03,0xCE,0xE9,0x14,0xC0,0x9A,0x96,0x0F};
const uint8_t sp_I[]                 PROGMEM ={0x23,0x09,0xDE,0x27,0x82,0xBB,0xED,0xEC,0x16,0xB7,0xBE,0xF5,0x6D,0x4E,0x13,0xB2,0x97,0x5B,0xB4,0xDD,0xDD,0xEA,0x42,0xF6,0x70,0x8F,0x39,0xAD,0x8F,0x85,0xDB,0xBC,0xCB,0x94,0x3E,0x64,0xD5,0x1C,0x0B,0x95,0x07,0x37,0x78,0x27,0xB9,0xA9,0x86,0x4D,0x1F,0x3C,0xD3,0xA4,0x1B,0x96,0x35,0xAF,0xE1,0x01,0x00,0x00};
const uint8_t sp_J[]                 PROGMEM ={0xA1,0xBD,0xAB,0x90,0xC1,0xD4,0x19,0x60,0x47,0x86,0x56,0xED,0xE2,0xC2,0x6C,0xD9,0x57,0x15,0xB2,0xA9,0x68,0x35,0xB9,0xD5,0xAE,0x76,0xB5,0xAA,0x14,0x4C,0x3C,0xAA,0xC5,0xAC,0x66,0x33,0xDA,0x9A,0x9C,0x2D,0xA2,0x71,0x1F,0xD2,0x10,0x23,0x71,0x55,0x47,0x0A,0xA3,0x31,0x66,0x3D,0x6E,0x29,0x8C,0x41,0x8B,0x54,0x87,0xE9,0x07};
const uint8_t sp_K[]                 PROGMEM ={0x09,0xE8,0x51,0x25,0x02,0x0E,0xC8,0xD1,0x78,0x44,0xB9,0x99,0x89,0x57,0x93,0x9D,0xDC,0xF4,0x64,0xA5,0xAA,0xAA,0x65,0x9D,0x9B,0xDF,0xE2,0xD6,0xAB,0xF3,0x56,0xBC,0xBB,0x42,0xF7,0x21,0x0F,0x61,0x4C,0x5E,0x24,0x36,0x2B,0xC5,0xC9,0x4E,0x0F};
const uint8_t sp_L[]                 PROGMEM ={0x27,0x8F,0x25,0xDC,0xA4,0x5B,0x9F,0x3C,0xE5,0x08,0xA7,0x6A,0x73,0xF2,0x10,0xCB,0x83,0xAB,0xCE,0xCD,0x4F,0xE5,0xE4,0x8D,0xA9,0x74,0xBA,0x55,0xA9,0xF8,0x3E,0x11,0xCF,0x4A,0xB5,0xCE,0x75,0xAE,0x43,0xC3,0xCF,0x84,0x70,0xD6,0x72,0x0D,0xDB,0x67,0xE4,0x11,0xDB,0x35,0xBC,0x7C,0x92,0x6A,0x63,0xD5,0xB2,0xB8,0xAE,0xA2,0xB6,0x79,0xFB};
const uint8_t sp_M[]                 PROGMEM ={0x2D,0xCA,0x5E,0x34,0xAA,0x4A,0xAD,0x34,0x27,0x15,0xCF,0x1A,0x75,0xD3,0x95,0xE5,0x24,0x69,0x9E,0xB5,0x4E,0x11,0x5D,0xA6,0xAB,0xA6,0xD9,0xD5,0x68,0x4C,0x1A,0x77,0xB1,0x54,0xA9,0xD5,0x96,0xCA,0xB9,0xB3,0xE5,0x2E,0xF7,0xB1,0xB7,0xBD,0x1D,0xF4,0x08,0x0F,0x00,0x00};
const uint8_t sp_N[]                 PROGMEM ={0xAB,0x48,0x3A,0x55,0x3F,0x62,0x9D,0x3C,0x15,0x57,0xB3,0x9A,0x7A,0xF2,0xD4,0x2C,0xD8,0x27,0xF6,0xCD,0x77,0xB1,0xAB,0xD3,0xA4,0xEC,0x21,0xEA,0xB3,0x77,0xDB,0x7A,0x13,0xD4,0x55,0xB3,0xB6,0x1F,0xEC,0x60,0x47,0x33,0x7A,0x4F,0xAE,0x9C,0x4E,0xF5,0xC4,0x26,0xA9,0xB9,0x5A,0xD2,0xF2,0x03,0x00,0x00};
const uint8_t sp_O[]                 PROGMEM ={0xA7,0x72,0x3A,0xDF,0x95,0xF3,0xDE,0x6A,0x57,0xA3,0xB2,0x3C,0x3F,0x14,0xFD,0xCF,0xAA,0xD7,0xBD,0x49,0x9D,0xD2,0xF3,0x24,0xD4,0x2D,0xF6,0xBE,0x57,0x3D,0x8B,0x37,0xA2,0xD8,0xD8,0x0C,0xDC,0xD7,0x96,0x60,0x68,0x35,0x08,0x97,0xDB,0x28,0x92,0x45,0x2F,0x8D,0x57,0x71,0xC8,0x56,0x5D,0x4E,0xCC,0x2A,0xEE,0xE4,0x01};
const uint8_t sp_P[]                 PROGMEM ={0x60,0x00,0xEB,0x4C,0x05,0xE0,0xAC,0xE0,0x49,0x72,0x14,0xD1,0xCC,0xB9,0x27,0x9D,0x45,0x99,0x3C,0x9F,0xEE,0x6C,0x17,0xB3,0x6E,0x4D,0x8F,0xCC,0x5C,0x75,0x27,0x75,0xC5,0xA0,0xFA,0x64,0x15,0xD7,0x3B,0x41,0xDD,0x19,0x76,0x4C,0x1F,0x15,0x44,0x77,0x88,0x31,0x83,0x57,0x64,0x1D,0x66,0xFB,0x01};
const uint8_t sp_Q[]                 PROGMEM ={0x0E,0xB0,0xD1,0x38,0x02,0x06,0x80,0xBE,0xDD,0x01,0xCC,0x58,0x6B,0x60,0x45,0x25,0x2A,0x53,0xF8,0x9A,0x13,0x15,0xEF,0x0C,0xED,0x5D,0x6E,0xB4,0xE2,0xEC,0x9D,0xA9,0x74,0xCF,0x4A,0x93,0x71,0xA5,0x92,0xBD,0x33,0x1F,0x55,0xE0,0x9E,0x5C,0xDA,0xB5,0xD7,0xA9,0xE3,0xA1,0xDC,0x42,0x17,0xC5,0xCE,0x75,0x2C,0xB6,0x87,0xE9,0x02,0xD3,0x09,0xDB,0x6E,0x46,0x33,0x55,0xAB,0xAC,0xF4,0x90,0xC6,0x79,0x00,0x00};
const uint8_t sp_R[]                 PROGMEM ={0xA7,0x70,0xB1,0xCE,0x29,0xD2,0xDD,0xFC,0xE6,0x37,0xBF,0xC5,0xA9,0x7C,0xC8,0x4E,0x95,0xE6,0xB7,0x3A,0x8D,0xAF,0x1E,0x19,0x9C,0xFC,0x76,0xAD,0xB3,0x43,0x32,0xDD,0xEA,0xE4,0xCE,0xF5,0xBE,0x2A,0x6B,0x73,0x22,0xD3,0xC5,0xE9,0x2C,0xCA,0xAE,0x1E,0x00,0x00};
const uint8_t sp_S[]                 PROGMEM ={0x04,0x48,0x49,0x74,0x14,0x21,0x4A,0x7A,0x6D,0xAC,0x53,0xA5,0xA2,0x29,0xB1,0x4D,0x4E,0x15,0xB3,0x34,0x6D,0x27,0x3A,0x55,0xC8,0xDA,0x12,0xEB,0xFA,0x56,0xA7,0x8E,0x29,0xC2,0xF1,0xDD,0x84,0xD6,0x3B,0x6D,0x91,0x97,0x25,0x80,0xA3,0xC3,0x2C,0x60,0x80,0x2B,0x53,0x34,0x60,0x01,0x07,0x7C,0xEB,0xEE,0x80,0xEF,0xCC,0x1C,0xF0,0x8D,0x85,0x02,0xBE,0x30,0xC3,0xC0,0x03};
const uint8_t sp_T[]                 PROGMEM ={0x09,0x58,0xCC,0x3C,0x00,0x2F,0x85,0x96,0x70,0xC6,0x50,0x62,0x69,0xB2,0x92,0x91,0x82,0xC1,0xE3,0xED,0x4D,0x4E,0x3A,0xA2,0x32,0x46,0x3E,0xD9,0xF9,0xAC,0x5A,0x3D,0x2C,0x33,0x77,0xCE,0x4E,0x4D,0x51,0xCC,0xB6,0x59,0xC6,0x35,0x46,0x88,0x4F,0xAB,0x55,0xD5,0x38,0x26,0x3E,0x23,0x66,0x1F,0x00,0x00};
const uint8_t sp_U[]                 PROGMEM ={0xA5,0xDA,0x0D,0x98,0x23,0x6F,0xF4,0x6A,0x55,0x33,0xA9,0x82,0xC6,0xEB,0x91,0xF5,0x68,0x02,0x11,0x5B,0x67,0x36,0x32,0x2B,0xA2,0x24,0x75,0x75,0xCF,0x7B,0xD5,0x9B,0xD6,0x5A,0x61,0xE5,0x49,0xDD,0x6A,0x97,0xFB,0xD8,0xFB,0x5E,0x77,0xA2,0xB3,0x2C,0x45,0x25,0x8D,0x3C,0x00,0x00};
const uint8_t sp_V[]                 PROGMEM ={0xA5,0x4A,0x3E,0x44,0x58,0x9D,0xAD,0xAA,0xA4,0x10,0x56,0x69,0x7A,0x8B,0x5B,0x9C,0xA2,0x95,0x20,0xD4,0x78,0xBA,0x8A,0x96,0x9C,0xC8,0xF3,0xE9,0xA8,0x5A,0x76,0xC4,0xA8,0xA7,0xA3,0x6A,0xD1,0x11,0x33,0xEF,0xB4,0xBA,0x07,0x23,0xAA,0xBA,0xDD,0x9A,0x16,0x14,0x29,0xEB,0x4E,0x68,0x6A,0x14,0x94,0xAA,0x29,0x0F,0x00,0x00};
const uint8_t sp_W[]                 PROGMEM ={0xAC,0xC1,0xAA,0xA2,0xB2,0x1C,0x0F,0x67,0x98,0x08,0x56,0x4F,0x77,0x0A,0x5B,0xD5,0xA3,0xBA,0xD5,0xC8,0x74,0xB7,0xF4,0xDA,0x58,0x23,0x55,0x2D,0xD3,0xAC,0x67,0xC6,0xD4,0xE4,0xC2,0x7F,0xA8,0x7A,0xCB,0x5E,0x8C,0x4A,0xA9,0x6D,0x73,0xE9,0x35,0x2A,0xAB,0x33,0x2D,0xF0,0xCF,0x6A,0xAA,0xF1,0xE4,0x20,0xFF,0xAD,0x9D,0x9E,0x1C,0xB5,0x5B,0xF7,0x2E,0xF5,0xC5,0xAB,0x42,0xFB,0xEB,0xDE,0xB7,0x3E,0x15,0x61,0x29,0xDB,0x53,0x86,0x98,0x54,0xE4,0xE4,0x4B,0x19,0xAC,0x75,0xD7,0x95,0xCF,0x61,0xD0,0xD6,0xDD,0x47,0x76,0xBB,0x51,0x86,0xD4,0x32,0xDB,0x6D,0x46,0xA5,0xDB,0x3A,0xD4,0xAF,0x19,0x9D,0x71,0x99,0x54,0x37,0xAA,0xF5,0x5A,0xA5,0x5C,0x94,0x3C};
const uint8_t sp_X[]                 PROGMEM ={0xA5,0x28,0xB1,0x4C,0x2C,0xDE,0xDC,0xEA,0xD4,0xA9,0x84,0x99,0xF6,0x9C,0x5B,0xDF,0x7A,0x36,0xB1,0x05,0x00,0x00,0x30,0xC0,0x4B,0x6E,0x0A,0xF8,0x55,0x5D,0x02,0x1C,0xE0,0x00,0x06,0x30,0xF0};
const uint8_t sp_Y[]                 PROGMEM ={0xA2,0xC3,0xBE,0x5F,0xC1,0xEC,0xBA,0x86,0xBB,0x7C,0x13,0x72,0x53,0x1A,0x11,0xFB,0x59,0x38,0xCF,0xAA,0x75,0xDD,0x52,0x89,0xA6,0xBB,0xDE,0xF5,0xA9,0x83,0x99,0x35,0xF5,0x2A,0xB7,0x5E,0xB5,0x0F,0x53,0x66,0x51,0x65,0xD5,0x31,0x6C,0x68,0x6A,0xAD,0x5D,0x8D,0x2A,0x54,0x35,0xAD,0xB6,0xDD,0xAB,0x5C,0xA5,0x2A,0x45,0x51,0xF6,0x8A,0x64,0x2B,0x5D,0x3D,0x00,0x00};
const uint8_t sp_Z[]                 PROGMEM ={0xA5,0x4A,0x24,0xCC,0x38,0x73,0x8F,0x7A,0x73,0x37,0x65,0xF6,0xBB,0x9B,0xD6,0x7C,0x6F,0x6A,0xA8,0xEE,0x56,0xD1,0x4D,0xA9,0xB0,0xF4,0x39,0x79,0xC9,0x29,0xC2,0xB6,0xF9,0x64,0x35,0x39,0x72,0xE4,0x93,0x9B,0xAD,0xBC,0x46,0x41,0xC9,0x9E,0xB3,0xAB,0x59,0xCD,0xA6,0x77,0xA1,0xCB,0x8E,0x38,0x7A,0x46,0x3F};
const uint8_t sp_ZERO[]              PROGMEM ={0xAD,0x59,0x3A,0xC8,0x18,0xFD,0x9E,0xA2,0x99,0x34,0x23,0xE9,0x77,0xB2,0xE0,0xDD,0xC4,0xAA,0xCD,0x49,0x5C,0x36,0xB3,0xAC,0x36,0x2B,0xB1,0x45,0xD2,0x33,0x72,0xEF,0x6C,0x54,0xA6,0x73,0x79,0x49,0xDE,0xD5,0xD8,0x2A,0xE9,0xA9,0xDE,0x67,0xEF,0x06,0x99,0xBB,0xA4,0x2D,0x75,0x19,0x54,0xB4,0x2F,0xD1,0xB4,0x79,0xF0,0x83,0x1F,0xFC,0xEC,0x17,0xBB,0x3C,0x00,0x00};
const uint8_t sp_ONE[]               PROGMEM ={0xA6,0xA5,0x36,0xDF,0x89,0xEC,0xA5,0x86,0xDB,0xF9,0x42,0x56,0x9A,0x2A,0xE1,0xFB,0x0B,0x38,0x7D,0x6F,0x46,0x63,0x7C,0x9D,0x62,0x25,0x9E,0xCD,0x28,0x5C,0xAC,0x32,0xEA,0x38,0xBB,0x1A,0x4D,0x88,0x56,0x2A,0x53,0x67,0x76,0x79,0x70,0x83,0xF3,0x94,0x6C,0xE9,0xD6,0x0C,0xCE,0x61,0x8A,0xB4,0x3B,0x36,0xCA,0x20,0x1A,0xDC,0xAD,0xCD,0x28,0x8D,0x78,0x7B,0x5B,0x26,0x93,0x10,0x6A,0x95,0x9E,0xDA,0x4C,0x25,0x85,0x9A,0x5A,0x9A,0x07};
const uint8_t sp_TWO[]               PROGMEM ={0x02,0xD8,0x51,0x3C,0x00,0xC7,0x7A,0x18,0x20,0x85,0xE2,0xE5,0x16,0x61,0x45,0x65,0xD9,0x6F,0xBC,0xE3,0x99,0xB4,0x34,0x51,0x6B,0x49,0xC9,0xDE,0xAB,0x56,0x3B,0x11,0xA9,0x2E,0xD9,0x73,0xEB,0x7A,0x69,0x2A,0xCD,0xB5,0x9B,0x1A,0x58,0x2A,0x73,0xF3,0xCD,0x6A,0x90,0x62,0x8A,0xD3,0xD3,0xAA,0x41,0xF1,0x4E,0x77,0x75,0xF2};
const uint8_t sp_THREE[]             PROGMEM ={0x0C,0x08,0xCA,0x44,0x02,0x1A,0xB0,0x40,0xC8,0x4D,0x15,0x73,0xCB,0xB4,0x39,0x0F,0xB9,0xE9,0x14,0xE6,0xAD,0xBE,0xE4,0x7E,0x50,0x50,0xA9,0xDF,0x91,0xE5,0x25,0x05,0x21,0x79,0x47,0x5E,0x7A,0x18,0x09,0xBD,0x5F,0x45,0xCB,0xC1,0xA8,0xF6,0x76,0x56,0xAD,0x2D,0x41,0x98,0xB3,0xEF,0xD4,0x2E,0x0C,0x5E,0x89,0xE5,0x66,0x65,0x3F,0xB8,0xC1,0x6B,0xF2,0x9A,0x0E,0x63,0x46,0xAF,0x38,0xAB,0x53,0xCC,0x03};
const uint8_t sp_FOUR[]              PROGMEM ={0xC0,0x00,0x23,0x2D,0x24,0xA0,0x01,0x0B,0x58,0x20,0xC5,0xBC,0xF7,0x11,0x4C,0x9A,0x9A,0xA4,0x84,0xF6,0x39,0x85,0x6E,0x97,0x93,0x98,0x84,0x8C,0xF5,0x5E,0x45,0xCD,0xDE,0x2A,0x91,0x63,0xD2,0x58,0x7D,0x6B,0x55,0xB1,0xF2,0x26,0xED,0xA9,0xE7,0xDB,0xC2,0x4B,0xFC,0xBA,0x49,0x2E,0x89,0x55,0xF4,0xE3,0x66,0xB5,0x95,0xAB,0xCC,0xBB,0x9B,0xED,0x30,0xF6,0x11,0x35,0x76,0x7B,0x00,0x00};
const uint8_t sp_FIVE[]              PROGMEM ={0xC0,0x80,0xE8,0xCD,0x46,0xEE,0x9C,0x6F,0x31,0x66,0x39,0xB9,0xF3,0x35,0x45,0xD6,0xF4,0x64,0xDE,0x77,0x27,0x79,0xDD,0x93,0x7A,0xDF,0x1D,0x14,0x45,0x4E,0xE6,0x43,0x97,0x73,0x05,0x3D,0x45,0x08,0x5D,0xC5,0x15,0xE5,0x54,0x21,0x56,0x06,0x67,0x90,0x53,0xC7,0x54,0x15,0x14,0x75,0x4F,0x1B,0xAB,0x17,0x43,0x25,0x59,0x5D,0x6C,0x5E,0xAA,0x59,0x75,0xF4,0xA9,0x59,0x69,0xD5,0xD4,0xD1,0xC7,0x6A,0xA1,0x5E,0x53,0xDB,0x10,0x8B,0x86,0x46,0x5D,0x6D,0x43,0x28,0x1A,0x1A,0x35,0xB4,0xF4,0x2E,0x4B,0xA9,0x75,0x62,0x33,0x98,0xA2,0xC6,0x5A,0x09,0xD9,0x20,0x95,0x7B,0x99,0xBB,0x06,0x04,0x38,0x27,0x84,0x00,0xE5,0xD5,0x1F};
const uint8_t sp_SIX[]               PROGMEM ={0x06,0x98,0xB6,0xC4,0x01,0x2F,0x66,0x46,0x20,0x01,0xD3,0x96,0x18,0x40,0x04,0xAF,0x96,0xA4,0x60,0xA1,0x52,0x8B,0x6F,0xB2,0x92,0x58,0xC4,0xC5,0x67,0xC9,0x4E,0x46,0x95,0x9A,0xB8,0x44,0x2D,0x76,0x7D,0x48,0xD8,0x13,0x15,0x03,0x00,0x10,0x60,0xA2,0x8B,0x00,0x8E,0xAD,0x52,0xC0,0xCF,0x9E,0x1A,0x10,0xC0,0x8F,0xE6,0x0F,0x00,0x00};
const uint8_t sp_SEVEN[]             PROGMEM ={0x0C,0xF8,0xDE,0x4C,0x02,0x1A,0xD0,0x80,0x05,0x2C,0xB0,0x62,0x17,0x2D,0x43,0x2B,0xF1,0x4D,0x6E,0xB2,0xD3,0x92,0x19,0x1F,0x6E,0xEC,0x51,0x5C,0xE5,0xB9,0x5A,0x58,0x3A,0x76,0x95,0xF7,0x9E,0x1E,0x30,0xAF,0x77,0x65,0xB2,0x29,0x42,0x2C,0xA6,0xB8,0xD9,0x64,0xCD,0x90,0x8A,0xE5,0x66,0x13,0x38,0x8C,0xD3,0x9D,0x58,0xB4,0x17,0x1B,0x29,0xF7,0x62,0x31,0x5E,0xC5,0x24,0xD3,0x88,0xCD,0x79,0xD6,0x90,0x71,0xF7};
const uint8_t sp_EIGHT[]             PROGMEM ={0x2D,0x2F,0xC5,0x54,0xA3,0x63,0xB5,0xBC,0x54,0x55,0xCD,0x1E,0x32,0xB2,0x5A,0x85,0xB8,0xBA,0xCE,0xCE,0x66,0x36,0x8B,0x56,0xD5,0x22,0xC8,0x55,0x73,0x63,0x2F,0x07,0x00,0x00,0x02,0x44,0x6D,0xCA,0x01,0x04,0x18,0x21,0x86,0x81,0x07};
const uint8_t sp_NINE[]              PROGMEM ={0x80,0x52,0xAA,0x32,0x2B,0xDA,0xB6,0xA9,0xAC,0x95,0x69,0xCD,0x48,0xAE,0xB1,0x5E,0xC7,0xAD,0x4D,0xAE,0x3A,0xBA,0x0C,0x51,0xAA,0x72,0xAA,0xE0,0x3B,0x25,0xB0,0xCD,0xA9,0x6C,0x9C,0x34,0xCD,0x2A,0x2B,0x77,0x61,0xD2,0x2C,0xEB,0x8C,0xDC,0xFB,0x49,0xD2,0x29,0x32,0x0A,0x17,0xC7,0xCD,0x22,0xEA,0xA9,0x62,0xA8,0x70,0xC9,0x7A,0xA7,0x4D,0x39,0x33,0x58,0x9B,0x8E,0x2E,0x76,0x0D,0xD5,0xA8,0xD3,0xFA,0xD0,0x43,0xB4,0x35,0x76,0x19,0x52,0x96,0xD0,0xCC,0xC8,0x65,0x88,0x43,0x45,0x23,0xAA,0xBA,0x31,0x0C,0x23,0xCD,0x18,0xC3,0x46,0x19,0x25,0x52,0xB3,0xA6,0x1A,0xB4,0xE3,0x48,0xA9,0x88,0x66,0x14,0x56,0x3D,0x22,0x1B,0x86,0xD1,0x29,0x37,0xCA,0x8C,0x0B,0x00,0xF0};







#endif /* ANIMALESE_VOCAB_US_TI99_H_ */
