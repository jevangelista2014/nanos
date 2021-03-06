/*****************************************************************************
 *  FFTerm - Simple & Platform independent, Thread-Safe Terminal/Console     *
 *  Copyright (C) 2009  James Walmsley (james@worm.me.uk)                    *
 *                                                                           *
 *  This program is free software: you can redistribute it and/or modify     *
 *  it under the terms of the GNU General Public License as published by     *
 *  the Free Software Foundation, either version 3 of the License, or        *
 *  (at your option) any later version.                                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public License        *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.    *
 *                                                                           *
 *  IMPORTANT NOTICE:                                                        *
 *  =================                                                        *
 *  Alternative Licensing is available directly from the Copyright holder,   *
 *  (James Walmsley). For more information consult LICENSING.TXT to obtain   *
 *  a Commercial license.                                                    *
 *                                                                           *
 *  See RESTRICTIONS.TXT for extra restrictions on the use of FFTerm.        *
 *                                                                           *
 *  Removing the above notice is illegal and will invalidate this license.   *
 *****************************************************************************
 *  See http://worm.me.uk/ffterm for more information.                       *
 *  Or  http://ffterm.googlecode.com/ for latest releases and the wiki.      *
 *****************************************************************************/

/**
 *	This file defines some portable types.
 *	You should change these as appropriate for your platform, as necessary.
 *
 *	These types are taken from the FullFAT project, and are compatible.
 **/

#ifndef _FF_TYPES_H_
#define _FF_TYPES_H_

//---------------- BOOLEAN TYPES
typedef	char			FF_T_BOOL;		///< This can be a char if your compiler isn't C99

#define FF_TRUE			1				///< 1 if bool not supported.
#define FF_FALSE		0				///< 0 if bool not supported.

//---------------- 8 BIT INTEGERS
typedef	char			FF_T_INT8;		///< 8 bit default integer
typedef	unsigned char		FF_T_UINT8;		///< 8 bit unsigned integer
typedef signed char		FF_T_SINT8;		///< 8 bit signed integer

//---------------- 16 BIT INTEGERS
typedef	short			FF_T_INT16;
typedef	unsigned short		FF_T_UINT16;
typedef	signed short		FF_T_SINT16;

//---------------- 32 BIT INTEGERS
typedef	long			FF_T_INT32;
typedef	unsigned long		FF_T_UINT32;
typedef	signed long		FF_T_SINT32;

//#ifdef FF_64_NUM_SUPPORT
//---------------- 64 BIT INTEGERS			// If you cannot define these, then make sure you see ff_config.h
typedef long long		FF_T_INT64;		// about 64-bit number support.
typedef unsigned long long	FF_T_UINT64;	// It means that FF_GetVolumeSize() cannot return a size
typedef signed long long	FF_T_SINT64;	// > 4GB in bytes if you cannot support 64-bits integers.											// No other function makes use of 64-bit numbers.
//#endif

#endif // end of include guard
