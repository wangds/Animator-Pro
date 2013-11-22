/* cursorda.c - my collection of icons, some of them going back to 
   the Aegis Animator.  Not used for cursors any more.  (Cursors
   are fixed size and found in brush.c) */

#include "jimk.h"
#include "flicmenu.h"


static UBYTE izin[] = { /* 6x6 */
0xff^0x80, 0xff^0xe0, 0xff^0xe0, 0xff^0xd8, 0xff^0xb8, 0xff^0x7c, };
struct cursor zin = {0, izin, 6, 6, 3, 3};

static UBYTE izout[] = { /* 6x6 */
0xff^0xf8, 0xff^0x74, 0xff^0x6c, 0xff^0x1c, 0xff^0x1c, 0xff^0x4, };
struct cursor zout = {0, izout, 6, 6, 3, 3};

static UBYTE idown[] = 
	{
	0x10, 0x10, 0x10, 0x92, 0x7C, 0x38, 0x10,
	};
struct cursor cdown = 	{ 0, idown, 7, 7, 3, 3};

static UBYTE ileft[] = 
	{
	0x10,0x20,0x60,0xff,0x60,0x20,0x10,
	};
struct cursor cleft = 	{ 0, ileft, 8, 7, 4, 3};


static UBYTE iright[] = 
	{
	0x08,0x04,0x06,0xFF,0x06,0x04,0x08,
	};
struct cursor cright = 	{ 0, iright, 8, 7, 4, 3};

static UBYTE iup[] = 
	{
	0x10,0x38,0x7C,0x92,0x10,0x10,0x10,
	};
struct cursor cup = 	{ 0, iup, 8, 7, 4, 3};

static UBYTE icright2[] = 
	{
	0x84,0x00, 0x42,0x00, 0x63, 0x00, 0x73, 0x80,
	0x63,0x00, 0x42,0x00, 0x84,0x00,
	};
struct cursor cright2 = 	{ 0, icright2, 9, 7, 5, 3};

static UBYTE ictridown[] = 
	{
	0xff,0x80, 0x7f,0x00, 0x3e,0x00, 0x1c,0x00, 
	0x08,0x00,
	};
struct cursor ctridown = 	{ 0, ictridown, 9, 5, 4, 2};

static UBYTE ictriup[] = 
	{
	0x08,0x00, 0x1c,0x00, 0x3e,0x00, 0x7f,0x00, 
	0xff,0x80,
	};
struct cursor ctriup = 	{ 0, ictriup, 9, 5, 4, 2};


