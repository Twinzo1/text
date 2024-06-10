/* COPYRIGHT Dassault Systemes 2004
//===================================================================
//
// predefined.h
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
//
//  Jul 2004  Creation: Code generated by the CAA wizard  fgw
//===================================================================
*/
#ifndef AUTLciVMPredefined_H
#define AUTLciVMPredefined_H



#include "AUTLciVMExterns.h"
#define ARCH_SUPPORTS_64_BIT_VALUE
/*types redefinitions*/
#ifdef _WIN32
#define LCM_WORD64_T unsigned _int64
#define LCM_UINT64_T unsigned _int64
#define LCM_INT64_T _int64
#define LCM_FLOAT128_T long double
#endif
/* end of types redefinitions*/
#include "AUTLciVMPredefinedTypes.h"

ExportedByAUTLciVMExternsC void print_or_raise_failure (char *s);
/* -------------------------------------------------------*/
/* bool --------------------------------------------------*/

#define TRUE    1
#define FALSE   0

ExportedByAUTLciVMExternsC void assign_LCMBool(LCMBool *x, LCMBool y);
ExportedByAUTLciVMExternsC char* LCMBool_to_text (LCMBool *x);
ExportedByAUTLciVMExternsC void text_to_LCMBool(LCMBool *x, char* s);
ExportedByAUTLciVMExternsC LCMBool eq_LCMBool(LCMBool x, LCMBool y);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMBool(void);

ExportedByAUTLciVMExternsC LCMBool not(LCMBool x);
ExportedByAUTLciVMExternsC LCMBool and(LCMBool x, LCMBool y);
ExportedByAUTLciVMExternsC LCMBool or(LCMBool x, LCMBool y);

/* -------------------------------------------------------*/
/* pure --------------------------------------------------*/


ExportedByAUTLciVMExternsC void assign_pure(pure * x,pure y) ;
ExportedByAUTLciVMExternsC void text_to_pure(pure * x,char *y) ;
ExportedByAUTLciVMExternsC char * pure_to_text(pure *x);
ExportedByAUTLciVMExternsC LCMBool eq_pure(pure x, pure y);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_pure(void);


/* -------------------------------------------------------*/
/* word8 -------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMWord8(LCMWord8 *x, LCMWord8 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMWord8(LCMWord8 x, LCMWord8 y);
ExportedByAUTLciVMExternsC void text_to_LCMWord8(LCMWord8 * x,char *y) ;
ExportedByAUTLciVMExternsC char * LCMWord8_to_text(LCMWord8 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMWord8(void);

ExportedByAUTLciVMExternsC LCMWord8 and_bits_LCMWord8(LCMWord8 x, LCMWord8 y);
ExportedByAUTLciVMExternsC LCMWord8 or_bits_LCMWord8(LCMWord8 x, LCMWord8 y);
ExportedByAUTLciVMExternsC LCMWord8 xor_bits_LCMWord8(LCMWord8 x, LCMWord8 y);
ExportedByAUTLciVMExternsC LCMWord8 not_bits_LCMWord8(LCMWord8 x);

ExportedByAUTLciVMExternsC LCMWord8 shl_LCMWord8(LCMWord8 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord8 shr_LCMWord8(LCMWord8 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord8 ror_LCMWord8(LCMWord8 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord8 rol_LCMWord8(LCMWord8 x, LCMInt32 y);


/* -------------------------------------------------------*/
/* LCMWord16 ------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMWord16(LCMWord16 *x, LCMWord16 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMWord16(LCMWord16 x, LCMWord16 y);
ExportedByAUTLciVMExternsC void text_to_LCMWord16(LCMWord16 * x,char *y) ;
ExportedByAUTLciVMExternsC char * LCMWord16_to_text(LCMWord16 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMWord16(void);

ExportedByAUTLciVMExternsC LCMWord16 and_bits_LCMWord16(LCMWord16 x, LCMWord16 y);
ExportedByAUTLciVMExternsC LCMWord16 or_bits_LCMWord16(LCMWord16 x, LCMWord16 y);
ExportedByAUTLciVMExternsC LCMWord16 xor_bits_LCMWord16(LCMWord16 x, LCMWord16 y);
ExportedByAUTLciVMExternsC LCMWord16 not_bits_LCMWord16(LCMWord16 x);

ExportedByAUTLciVMExternsC LCMWord16 shl_LCMWord16(LCMWord16 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord16 shr_LCMWord16(LCMWord16 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord16 ror_LCMWord16(LCMWord16 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord16 rol_LCMWord16(LCMWord16 x, LCMInt32 y);


/* -------------------------------------------------------*/
/* word32 ------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMWord32(LCMWord32 *x, LCMWord32 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMWord32(LCMWord32 x, LCMWord32 y);
ExportedByAUTLciVMExternsC void text_to_LCMWord32(LCMWord32 * x,char *y) ;
ExportedByAUTLciVMExternsC char * LCMWord32_to_text(LCMWord32 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMWord32(void);

ExportedByAUTLciVMExternsC LCMWord32 and_bits_LCMWord32(LCMWord32 x, LCMWord32 y);
ExportedByAUTLciVMExternsC LCMWord32 or_bits_LCMWord32(LCMWord32 x, LCMWord32 y);
ExportedByAUTLciVMExternsC LCMWord32 xor_bits_LCMWord32(LCMWord32 x, LCMWord32 y);
ExportedByAUTLciVMExternsC LCMWord32 not_bits_LCMWord32(LCMWord32 x);

ExportedByAUTLciVMExternsC LCMWord32 shl_LCMWord32(LCMWord32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord32 shr_LCMWord32(LCMWord32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord32 ror_LCMWord32(LCMWord32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord32 rol_LCMWord32(LCMWord32 x, LCMInt32 y);


/* -------------------------------------------------------*/
/* word64 ------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMWord64(LCMWord64 *x, LCMWord64 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMWord64(LCMWord64 x, LCMWord64 y);
ExportedByAUTLciVMExternsC void text_to_LCMWord64(LCMWord64 * x,char *y) ;
ExportedByAUTLciVMExternsC char * LCMWord64_to_text(LCMWord64 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMWord64(void);

ExportedByAUTLciVMExternsC LCMWord64 and_bits_LCMWord64(LCMWord64 x, LCMWord64 y);
ExportedByAUTLciVMExternsC LCMWord64 or_bits_LCMWord64(LCMWord64 x, LCMWord64 y);
ExportedByAUTLciVMExternsC LCMWord64 xor_bits_LCMWord64(LCMWord64 x, LCMWord64 y);
ExportedByAUTLciVMExternsC LCMWord64 not_bits_LCMWord64(LCMWord64 x);

ExportedByAUTLciVMExternsC LCMWord64 shl_LCMWord64(LCMWord64 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord64 shr_LCMWord64(LCMWord64 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord64 ror_LCMWord64(LCMWord64 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMWord64 rol_LCMWord64(LCMWord64 x, LCMInt32 y);


/* -------------------------------------------------------*/
/* int8 --------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMInt8(LCMInt8 *x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC void text_to_LCMInt8(LCMInt8 *x, char* s);
ExportedByAUTLciVMExternsC char* LCMInt8_to_text (LCMInt8 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMInt8(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 plus_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 minus_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 times_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 div_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 mod_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 pow_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 land_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 lor_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 lnot_LCMInt8(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMInt8 lxor_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 shiftleft_LCMInt8(LCMInt8 x, LCMInt8 y);
ExportedByAUTLciVMExternsC LCMInt8 shiftright_LCMInt8(LCMInt8 x, LCMInt8 y);


/* -------------------------------------------------------*/
/* int16 -------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMInt16(LCMInt16 *x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC void text_to_LCMInt16(LCMInt16 *x, char* s);
ExportedByAUTLciVMExternsC char* LCMInt16_to_text (LCMInt16 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMInt16(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 plus_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 minus_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 times_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 div_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 mod_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 pow_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 land_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 lor_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 lnot_LCMInt16(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMInt16 lxor_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 shiftleft_LCMInt16(LCMInt16 x, LCMInt16 y);
ExportedByAUTLciVMExternsC LCMInt16 shiftright_LCMInt16(LCMInt16 x, LCMInt16 y);


/* -------------------------------------------------------*/
/* int32 -------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMInt32(LCMInt32 *x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC void text_to_LCMInt32(LCMInt32 *x, char* s);
ExportedByAUTLciVMExternsC char* LCMInt32_to_text (LCMInt32 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMInt32(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 plus_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 minus_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 times_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 div_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 mod_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 pow_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 land_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 lor_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 lnot_LCMInt32(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMInt32 lxor_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 shiftleft_LCMInt32(LCMInt32 x, LCMInt32 y);
ExportedByAUTLciVMExternsC LCMInt32 shiftright_LCMInt32(LCMInt32 x, LCMInt32 y);

/* -------------------------------------------------------*/
/* int64 -------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMInt64(LCMInt64 *x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC void text_to_LCMInt64(LCMInt64 *x, char* s);
ExportedByAUTLciVMExternsC char* LCMInt64_to_text (LCMInt64 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMInt64(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 plus_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 minus_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 times_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 div_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 mod_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 pow_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 land_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 lor_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 lnot_LCMInt64(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMInt64 lxor_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 shiftleft_LCMInt64(LCMInt64 x, LCMInt64 y);
ExportedByAUTLciVMExternsC LCMInt64 shiftright_LCMInt64(LCMInt64 x, LCMInt64 y);


/* -------------------------------------------------------*/
/* uint8 -------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMUint8(LCMUint8 *x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC void text_to_LCMUint8(LCMUint8 *x, char* s);
ExportedByAUTLciVMExternsC char* LCMUint8_to_text (LCMUint8 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMUint8(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 plus_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 minus_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 times_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 div_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 mod_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 pow_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 land_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 lor_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 lnot_LCMUint8(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMUint8 shiftleft_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 shiftright_LCMUint8(LCMUint8 x, LCMUint8 y);
ExportedByAUTLciVMExternsC LCMUint8 lxor_LCMUint8(LCMUint8 x, LCMUint8 y);


/* -------------------------------------------------------*/
/* uint16 ------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMUint16(LCMUint16 *x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMBool less_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC void text_to_LCMUint16(LCMUint16 *x, char* s);
ExportedByAUTLciVMExternsC char* LCMUint16_to_text (LCMUint16 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMUint16(void);

ExportedByAUTLciVMExternsC LCMBool lessequal_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 plus_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 minus_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 times_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 div_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 mod_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 pow_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 land_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 lor_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 lnot_LCMUint16(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMUint16 shiftleft_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 shiftright_LCMUint16(LCMUint16 x, LCMUint16 y);
ExportedByAUTLciVMExternsC LCMUint16 lxor_LCMUint16(LCMUint16 x, LCMUint16 y);

/* -------------------------------------------------------*/
/* uint32 ------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMUint32(LCMUint32 *x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC void text_to_LCMUint32(LCMUint32 *x, char* s);
ExportedByAUTLciVMExternsC char* LCMUint32_to_text (LCMUint32 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMUint32(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 plus_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 minus_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 times_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 div_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 mod_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 pow_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 land_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 lor_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 lnot_LCMUint32(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMUint32 shiftleft_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 shiftright_LCMUint32(LCMUint32 x, LCMUint32 y);
ExportedByAUTLciVMExternsC LCMUint32 lxor_LCMUint32(LCMUint32 x, LCMUint32 y);


/* -------------------------------------------------------*/
/* uint64 ------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMUint64(LCMUint64 *x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC void text_to_LCMUint64(LCMUint64 *x, char* s);
ExportedByAUTLciVMExternsC char* LCMUint64_to_text (LCMUint64 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMUint64(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 plus_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 minus_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 times_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 div_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 mod_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 pow_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 land_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 lor_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 lnot_LCMUint64(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMUint64 shiftleft_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 shiftright_LCMUint64(LCMUint64 x, LCMUint64 y);
ExportedByAUTLciVMExternsC LCMUint64 lxor_LCMUint64(LCMUint64 x, LCMUint64 y);


/* -------------------------------------------------------*/
/* float32 -------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMFloat32(LCMFloat32 *x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC void text_to_LCMFloat32(float *x, char *s) ;
ExportedByAUTLciVMExternsC char* LCMFloat32_to_text (LCMFloat32 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMFloat32(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMFloat32(LCMFloat32 x, LCMFloat32 y);

ExportedByAUTLciVMExternsC LCMFloat32 plus_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMFloat32 minus_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMFloat32 times_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMFloat32 div_LCMFloat32(LCMFloat32 x, LCMFloat32 y);

ExportedByAUTLciVMExternsC LCMFloat32 pow_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMFloat32 sin_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 cos_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 sqrt_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 exp_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 log_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 log10_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 tan_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 acos_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 asin_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 atan_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 atan2_LCMFloat32(LCMFloat32 x, LCMFloat32 y);
ExportedByAUTLciVMExternsC LCMFloat32 cosh_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 sinh_LCMFloat32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMFloat32 tanh_LCMFloat32(LCMFloat32 x);

/* -------------------------------------------------------*/
/* float64 -------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMFloat64(LCMFloat64 *x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC char* copy_LCMFloat64_to_text (LCMFloat64 *x);
ExportedByAUTLciVMExternsC void text_to_LCMFloat64(LCMFloat64 *x, char *s) ;
ExportedByAUTLciVMExternsC char* LCMFloat64_to_text (LCMFloat64 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMFloat64(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMFloat64(LCMFloat64 x, LCMFloat64 y);

ExportedByAUTLciVMExternsC LCMFloat64 plus_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMFloat64 minus_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMFloat64 times_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMFloat64 div_LCMFloat64(LCMFloat64 x, LCMFloat64 y);

ExportedByAUTLciVMExternsC LCMFloat64 pow_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMFloat64 sin_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 cos_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 sqrt_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 exp_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 log_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 log10_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 tan_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 acos_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 asin_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 atan_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 atan2_LCMFloat64(LCMFloat64 x, LCMFloat64 y);
ExportedByAUTLciVMExternsC LCMFloat64 cosh_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 sinh_LCMFloat64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat64 tanh_LCMFloat64(LCMFloat64 x);



/* -------------------------------------------------------*/
/* float128 -------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMFloat128(LCMFloat128 *x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC void text_to_LCMFloat128(LCMFloat128 *x, char *s) ;
ExportedByAUTLciVMExternsC char* LCMFloat128_to_text (LCMFloat128 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMFloat128(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMFloat128(LCMFloat128 x, LCMFloat128 y);

ExportedByAUTLciVMExternsC LCMFloat128 plus_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMFloat128 minus_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMFloat128 times_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMFloat128 div_LCMFloat128(LCMFloat128 x, LCMFloat128 y);

ExportedByAUTLciVMExternsC LCMFloat128 pow_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMFloat128 sin_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 cos_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 sqrt_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 exp_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 log_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 log10_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 tan_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 acos_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 asin_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 atan_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 atan2_LCMFloat128(LCMFloat128 x, LCMFloat128 y);
ExportedByAUTLciVMExternsC LCMFloat128 cosh_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 sinh_LCMFloat128(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat128 tanh_LCMFloat128(LCMFloat128 x);

/* -------------------------------------------------------*/
/* string8 ------------------------------------------------- */

ExportedByAUTLciVMExternsC void assign_LCMString8(LCMString8 *x, LCMString8 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMString8(LCMString8 x, LCMString8 y);
ExportedByAUTLciVMExternsC void text_to_LCMString8(LCMString8* x, char *y);
ExportedByAUTLciVMExternsC char* LCMString8_to_text(LCMString8 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMString8(void);

ExportedByAUTLciVMExternsC LCMString8 concat_LCMString8 (LCMString8 x, LCMString8 y);
ExportedByAUTLciVMExternsC LCMString8 LCMString8_of_lit (char *x);

ExportedByAUTLciVMExternsC LCMBool less_LCMString8 (LCMString8 x, LCMString8 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMString8 (LCMString8 x, LCMString8 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMString8 (LCMString8 x, LCMString8 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMString8 (LCMString8 x, LCMString8 y);


/* -------------------------------------------------------*/
/* char8 ------------------------------------------------*/

ExportedByAUTLciVMExternsC void assign_LCMChar8(LCMChar8 *x, LCMChar8 y);
ExportedByAUTLciVMExternsC LCMBool eq_LCMChar8(LCMChar8 x, LCMChar8 y);
ExportedByAUTLciVMExternsC void text_to_LCMChar8(LCMChar8 *x, char *y);
ExportedByAUTLciVMExternsC char * LCMChar8_to_text(LCMChar8 *x);
ExportedByAUTLciVMExternsC AUTLcmxScalarPtr info_LCMChar8(void);

ExportedByAUTLciVMExternsC LCMBool less_LCMChar8(LCMChar8 x, LCMChar8 y);
ExportedByAUTLciVMExternsC LCMBool greater_LCMChar8(LCMChar8 x, LCMChar8 y);
ExportedByAUTLciVMExternsC LCMBool lessequal_LCMChar8(LCMChar8 x, LCMChar8 y);
ExportedByAUTLciVMExternsC LCMBool greaterequal_LCMChar8(LCMChar8 x, LCMChar8 y);





ExportedByAUTLciVMExternsC LCMFloat64 LCMFloat32_to_LCMFloat64(LCMFloat32 x) ;
ExportedByAUTLciVMExternsC LCMFloat128 LCMFloat32_to_LCMFloat128(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMFloat32_to_LCMInt8(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMFloat32_to_LCMInt16(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMFloat32_to_LCMInt32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMFloat32_to_LCMInt64(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMFloat32_to_LCMUint8(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMFloat32_to_LCMUint16(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMFloat32_to_LCMUint32(LCMFloat32 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMFloat32_to_LCMUint64(LCMFloat32 x);

ExportedByAUTLciVMExternsC LCMFloat32 LCMFloat64_to_LCMFloat32(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMFloat64_to_LCMFloat128(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMFloat64_to_LCMInt8(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMFloat64_to_LCMInt16(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMFloat64_to_LCMInt32(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMFloat64_to_LCMInt64(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMFloat64_to_LCMUint8(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMFloat64_to_LCMUint16(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMFloat64_to_LCMUint32(LCMFloat64 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMFloat64_to_LCMUint64(LCMFloat64 x);

ExportedByAUTLciVMExternsC LCMFloat32 LCMFloat128_to_LCMFloat32(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMFloat128_to_LCMFloat64(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMFloat128_to_LCMInt8(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMFloat128_to_LCMInt16(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMFloat128_to_LCMInt32(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMFloat128_to_LCMInt64(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMFloat128_to_LCMUint8(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMFloat128_to_LCMUint16(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMFloat128_to_LCMUint32(LCMFloat128 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMFloat128_to_LCMUint64(LCMFloat128 x);


ExportedByAUTLciVMExternsC LCMFloat32 LCMInt8_to_LCMFloat32(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMInt8_to_LCMFloat64(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMInt8_to_LCMFloat128(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMInt8_to_LCMInt16(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMInt8_to_LCMInt32(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMInt8_to_LCMInt64(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMInt8_to_LCMUint8(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMInt8_to_LCMUint16(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMInt8_to_LCMUint32(LCMInt8 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMInt8_to_LCMUint64(LCMInt8 x);

ExportedByAUTLciVMExternsC LCMFloat32 LCMInt16_to_LCMFloat32(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMInt16_to_LCMFloat64(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMInt16_to_LCMFloat128(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMInt16_to_LCMInt8(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMInt16_to_LCMInt32(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMInt16_to_LCMInt64(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMInt16_to_LCMUint8(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMInt16_to_LCMUint16(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMInt16_to_LCMUint32(LCMInt16 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMInt16_to_LCMUint64(LCMInt16 x);

ExportedByAUTLciVMExternsC LCMFloat32 LCMInt32_to_LCMFloat32(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMInt32_to_LCMFloat64(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMInt32_to_LCMFloat128(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMInt32_to_LCMInt8(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMInt32_to_LCMInt16(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMInt32_to_LCMInt64(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMInt32_to_LCMUint8(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMInt32_to_LCMUint16(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMInt32_to_LCMUint32(LCMInt32 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMInt32_to_LCMUint64(LCMInt32 x);

ExportedByAUTLciVMExternsC LCMFloat32 LCMInt64_to_LCMFloat32(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMInt64_to_LCMFloat64(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMInt64_to_LCMFloat128(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMInt64_to_LCMInt8(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMInt64_to_LCMInt16(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMInt64_to_LCMInt32(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMInt64_to_LCMUint8(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMInt64_to_LCMUint16(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMInt64_to_LCMUint32(LCMInt64 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMInt64_to_LCMUint64(LCMInt64 x);


ExportedByAUTLciVMExternsC LCMFloat32 LCMUint8_to_LCMFloat32(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMUint8_to_LCMFloat64(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMUint8_to_LCMFloat128(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMUint8_to_LCMInt8(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMUint8_to_LCMInt16(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMUint8_to_LCMInt32(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMUint8_to_LCMInt64(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMUint8_to_LCMUint16(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMUint8_to_LCMUint32(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMUint8_to_LCMUint64(LCMUint8 x);

ExportedByAUTLciVMExternsC LCMFloat32 LCMUint16_to_LCMFloat32(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMUint16_to_LCMFloat64(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMUint16_to_LCMFloat128(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMUint16_to_LCMInt8(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMUint16_to_LCMInt16(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMUint16_to_LCMInt32(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMUint16_to_LCMInt64(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMUint16_to_LCMUint8(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMUint16_to_LCMUint32(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMUint16_to_LCMUint64(LCMUint16 x);

ExportedByAUTLciVMExternsC LCMFloat32 LCMUint32_to_LCMFloat32(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMUint32_to_LCMFloat64(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMUint32_to_LCMFloat128(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMUint32_to_LCMInt8(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMUint32_to_LCMInt16(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMUint32_to_LCMInt32(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMUint32_to_LCMInt64(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMUint32_to_LCMUint8(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMUint32_to_LCMUint16(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMUint32_to_LCMUint64(LCMUint32 x);

ExportedByAUTLciVMExternsC LCMFloat32 LCMUint64_to_LCMFloat32(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMFloat64 LCMUint64_to_LCMFloat64(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMFloat128 LCMUint64_to_LCMFloat128(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMInt8 LCMUint64_to_LCMInt8(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMInt16 LCMUint64_to_LCMInt16(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMInt32 LCMUint64_to_LCMInt32(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMInt64 LCMUint64_to_LCMInt64(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMUint64_to_LCMUint8(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMUint64_to_LCMUint16(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMUint64_to_LCMUint32(LCMUint64 x);

ExportedByAUTLciVMExternsC LCMWord16 LCMUint16_to_LCMWord16(LCMUint16 x);
ExportedByAUTLciVMExternsC LCMWord32 LCMUint32_to_LCMWord32(LCMUint32 x);
ExportedByAUTLciVMExternsC LCMWord64 LCMUint64_to_LCMWord64(LCMUint64 x);
ExportedByAUTLciVMExternsC LCMWord8 LCMUint8_to_LCMWord8(LCMUint8 x);
ExportedByAUTLciVMExternsC LCMUint16 LCMWord16_to_LCMUint16(LCMWord16 x);
ExportedByAUTLciVMExternsC LCMWord32 LCMWord16_to_LCMWord32(LCMWord16 x);
ExportedByAUTLciVMExternsC LCMWord64 LCMWord16_to_LCMWord64(LCMWord16 x);
ExportedByAUTLciVMExternsC LCMWord8 LCMWord16_to_LCMWord8(LCMWord16 x);
ExportedByAUTLciVMExternsC LCMUint32 LCMWord32_to_LCMUint32(LCMWord32 x);
ExportedByAUTLciVMExternsC LCMWord16 LCMWord32_to_LCMWord16(LCMWord32 x);
ExportedByAUTLciVMExternsC LCMWord64 LCMWord32_to_LCMWord64(LCMWord32 x);
ExportedByAUTLciVMExternsC LCMWord8 LCMWord32_to_LCMWord8(LCMWord32 x);
ExportedByAUTLciVMExternsC LCMUint64 LCMWord64_to_LCMUint64(LCMWord64 x);
ExportedByAUTLciVMExternsC LCMWord16 LCMWord64_to_LCMWord16(LCMWord64 x);
ExportedByAUTLciVMExternsC LCMWord32 LCMWord64_to_LCMWord32(LCMWord64 x);
ExportedByAUTLciVMExternsC LCMWord8 LCMWord64_to_LCMWord8(LCMWord64 x);
ExportedByAUTLciVMExternsC LCMUint8 LCMWord8_to_LCMUint8(LCMWord8 x);
ExportedByAUTLciVMExternsC LCMWord16 LCMWord8_to_LCMWord16(LCMWord8 x);
ExportedByAUTLciVMExternsC LCMWord32 LCMWord8_to_LCMWord32(LCMWord8 x);
ExportedByAUTLciVMExternsC LCMWord64 LCMWord8_to_LCMWord64(LCMWord8 x);

/* -----------------------------------------------------------*/
/* -----------------------------------------------------------*/

/* Cycle time */
ExportedByAUTLciVMExternsC LCMInt32 _get_cycle_time(pure);
ExportedByAUTLciVMExternsC void _set_cycle_time (LCMInt32 newCycleTime);

ExportedByAUTLciVMExternsC LCMInt32 LCMRandMax;
ExportedByAUTLciVMExternsC LCMInt32 LCMRand(pure);
ExportedByAUTLciVMExternsC pure LCMSRand(LCMUint32 seed);





#endif /* _PREDEFINED_TYPES */
