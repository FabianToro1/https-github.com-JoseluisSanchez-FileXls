/*
 * Harbour 3.1.0dev (Rev. 17025)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "XLSFUNC.PRG"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( _CELL );
HB_FUNC( _SUM );
HB_FUNC( _MULT );
HB_FUNC( _ABS );
HB_FUNC( _INTE );
HB_FUNC( _MOD );
HB_FUNC( _ROUND );
HB_FUNC( _SIGN );
HB_FUNC( _SQRT );
HB_FUNC( _EXP );
HB_FUNC( _LN );
HB_FUNC( _LOG );
HB_FUNC( _PI );
HB_FUNC( _RANDOM );
HB_FUNC( _SIN );
HB_FUNC( _COS );
HB_FUNC( _TAN );
HB_FUNC( _ASIN );
HB_FUNC( _ACOS );
HB_FUNC( _ATAN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XLSFUNC )
{ "_CELL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( _CELL )}, NULL },
{ "_SUM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _SUM )}, NULL },
{ "_MULT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _MULT )}, NULL },
{ "_ABS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _ABS )}, NULL },
{ "_INTE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _INTE )}, NULL },
{ "_MOD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _MOD )}, NULL },
{ "_ROUND", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _ROUND )}, NULL },
{ "_SIGN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _SIGN )}, NULL },
{ "_SQRT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _SQRT )}, NULL },
{ "_EXP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _EXP )}, NULL },
{ "_LN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _LN )}, NULL },
{ "_LOG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _LOG )}, NULL },
{ "_PI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _PI )}, NULL },
{ "_RANDOM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _RANDOM )}, NULL },
{ "_SIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _SIN )}, NULL },
{ "_COS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _COS )}, NULL },
{ "_TAN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _TAN )}, NULL },
{ "_ASIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _ASIN )}, NULL },
{ "_ACOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _ACOS )}, NULL },
{ "_ATAN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _ATAN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XLSFUNC, "XLSFUNC.PRG", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XLSFUNC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XLSFUNC )
   #include "hbiniseg.h"
#endif

HB_FUNC( _CELL )
{
	static const HB_BYTE pcode[] =
	{
		36,41,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _SUM )
{
	static const HB_BYTE pcode[] =
	{
		36,43,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _MULT )
{
	static const HB_BYTE pcode[] =
	{
		36,44,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _ABS )
{
	static const HB_BYTE pcode[] =
	{
		36,48,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _INTE )
{
	static const HB_BYTE pcode[] =
	{
		36,49,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _MOD )
{
	static const HB_BYTE pcode[] =
	{
		36,50,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _ROUND )
{
	static const HB_BYTE pcode[] =
	{
		36,51,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _SIGN )
{
	static const HB_BYTE pcode[] =
	{
		36,52,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _SQRT )
{
	static const HB_BYTE pcode[] =
	{
		36,54,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _EXP )
{
	static const HB_BYTE pcode[] =
	{
		36,55,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _LN )
{
	static const HB_BYTE pcode[] =
	{
		36,56,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _LOG )
{
	static const HB_BYTE pcode[] =
	{
		36,57,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _PI )
{
	static const HB_BYTE pcode[] =
	{
		36,59,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _RANDOM )
{
	static const HB_BYTE pcode[] =
	{
		36,60,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _SIN )
{
	static const HB_BYTE pcode[] =
	{
		36,62,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _COS )
{
	static const HB_BYTE pcode[] =
	{
		36,63,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _TAN )
{
	static const HB_BYTE pcode[] =
	{
		36,64,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _ASIN )
{
	static const HB_BYTE pcode[] =
	{
		36,65,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _ACOS )
{
	static const HB_BYTE pcode[] =
	{
		36,66,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( _ATAN )
{
	static const HB_BYTE pcode[] =
	{
		36,67,0,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

