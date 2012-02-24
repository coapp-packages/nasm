/* Automatically generated from ./pptok.dat by ./pptok.pl */
/* Do not edit */

enum preproc_token {
    PP_ELIF          =   0,
    PP_ELIFN         =   1,
    PP_ELIFCTX       =   2,
    PP_ELIFNCTX      =   3,
    PP_ELIFDEF       =   4,
    PP_ELIFNDEF      =   5,
    PP_ELIFEMPTY     =   6,
    PP_ELIFNEMPTY    =   7,
    PP_ELIFENV       =   8,
    PP_ELIFNENV      =   9,
    PP_ELIFID        =  10,
    PP_ELIFNID       =  11,
    PP_ELIFIDN       =  12,
    PP_ELIFNIDN      =  13,
    PP_ELIFIDNI      =  14,
    PP_ELIFNIDNI     =  15,
    PP_ELIFMACRO     =  16,
    PP_ELIFNMACRO    =  17,
    PP_ELIFNUM       =  18,
    PP_ELIFNNUM      =  19,
    PP_ELIFSTR       =  20,
    PP_ELIFNSTR      =  21,
    PP_ELIFTOKEN     =  22,
    PP_ELIFNTOKEN    =  23,
    PP_IF            =  32,
    PP_IFN           =  33,
    PP_IFCTX         =  34,
    PP_IFNCTX        =  35,
    PP_IFDEF         =  36,
    PP_IFNDEF        =  37,
    PP_IFEMPTY       =  38,
    PP_IFNEMPTY      =  39,
    PP_IFENV         =  40,
    PP_IFNENV        =  41,
    PP_IFID          =  42,
    PP_IFNID         =  43,
    PP_IFIDN         =  44,
    PP_IFNIDN        =  45,
    PP_IFIDNI        =  46,
    PP_IFNIDNI       =  47,
    PP_IFMACRO       =  48,
    PP_IFNMACRO      =  49,
    PP_IFNUM         =  50,
    PP_IFNNUM        =  51,
    PP_IFSTR         =  52,
    PP_IFNSTR        =  53,
    PP_IFTOKEN       =  54,
    PP_IFNTOKEN      =  55,
    PP_WHILE         =  64,
    PP_WHILEN        =  65,
    PP_WHILECTX      =  66,
    PP_WHILENCTX     =  67,
    PP_WHILEDEF      =  68,
    PP_WHILENDEF     =  69,
    PP_WHILEEMPTY    =  70,
    PP_WHILENEMPTY   =  71,
    PP_WHILEENV      =  72,
    PP_WHILENENV     =  73,
    PP_WHILEID       =  74,
    PP_WHILENID      =  75,
    PP_WHILEIDN      =  76,
    PP_WHILENIDN     =  77,
    PP_WHILEIDNI     =  78,
    PP_WHILENIDNI    =  79,
    PP_WHILEMACRO    =  80,
    PP_WHILENMACRO   =  81,
    PP_WHILENUM      =  82,
    PP_WHILENNUM     =  83,
    PP_WHILESTR      =  84,
    PP_WHILENSTR     =  85,
    PP_WHILETOKEN    =  86,
    PP_WHILENTOKEN   =  87,
    PP_ARG           =  96,
    PP_ASSIGN        =  97,
    PP_CLEAR         =  98,
    PP_COMMENT       =  99,
    PP_DEFINE        = 100,
    PP_DEFSTR        = 101,
    PP_DEFTOK        = 102,
    PP_DEPEND        = 103,
    PP_ELSE          = 104,
    PP_ENDCOMMENT    = 105,
    PP_ENDIF         = 106,
    PP_ENDM          = 107,
    PP_ENDMACRO      = 108,
    PP_ENDREP        = 109,
    PP_ENDWHILE      = 110,
    PP_ERROR         = 111,
    PP_EXITMACRO     = 112,
    PP_EXITREP       = 113,
    PP_EXITWHILE     = 114,
    PP_FATAL         = 115,
    PP_FINAL         = 116,
    PP_IASSIGN       = 117,
    PP_IDEFINE       = 118,
    PP_IDEFSTR       = 119,
    PP_IDEFTOK       = 120,
    PP_IMACRO        = 121,
    PP_INCLUDE       = 122,
    PP_IRMACRO       = 123,
    PP_IXDEFINE      = 124,
    PP_LINE          = 125,
    PP_LOCAL         = 126,
    PP_MACRO         = 127,
    PP_PATHSEARCH    = 128,
    PP_POP           = 129,
    PP_PUSH          = 130,
    PP_REP           = 131,
    PP_REPL          = 132,
    PP_RMACRO        = 133,
    PP_ROTATE        = 134,
    PP_STACKSIZE     = 135,
    PP_STRCAT        = 136,
    PP_STRLEN        = 137,
    PP_SUBSTR        = 138,
    PP_UNDEF         = 139,
    PP_UNIMACRO      = 140,
    PP_UNMACRO       = 141,
    PP_USE           = 142,
    PP_WARNING       = 143,
    PP_XDEFINE       = 144,
    PP_INVALID       =  -1
};

enum pp_conditional {
    PPC_IF           =   0,
    PPC_IFCTX        =   2,
    PPC_IFDEF        =   4,
    PPC_IFEMPTY      =   6,
    PPC_IFENV        =   8,
    PPC_IFID         =  10,
    PPC_IFIDN        =  12,
    PPC_IFIDNI       =  14,
    PPC_IFMACRO      =  16,
    PPC_IFNUM        =  18,
    PPC_IFSTR        =  20,
    PPC_IFTOKEN      =  22,
};

#define PP_COND(x)     ((enum pp_conditional)((x) & 0x1e))
#define PP_IS_COND(x)  ((unsigned int)(x) < PP_ARG)
#define PP_NEGATIVE(x) ((x) & 1)

#define CASE_PP_ELIF \
	case PP_ELIF: \
	case PP_ELIFN:\
	case PP_ELIFCTX: \
	case PP_ELIFNCTX:\
	case PP_ELIFDEF: \
	case PP_ELIFNDEF:\
	case PP_ELIFEMPTY: \
	case PP_ELIFNEMPTY:\
	case PP_ELIFENV: \
	case PP_ELIFNENV:\
	case PP_ELIFID: \
	case PP_ELIFNID:\
	case PP_ELIFIDN: \
	case PP_ELIFNIDN:\
	case PP_ELIFIDNI: \
	case PP_ELIFNIDNI:\
	case PP_ELIFMACRO: \
	case PP_ELIFNMACRO:\
	case PP_ELIFNUM: \
	case PP_ELIFNNUM:\
	case PP_ELIFSTR: \
	case PP_ELIFNSTR:\
	case PP_ELIFTOKEN: \
	case PP_ELIFNTOKEN
#define CASE_PP_IF \
	case PP_IF: \
	case PP_IFN:\
	case PP_IFCTX: \
	case PP_IFNCTX:\
	case PP_IFDEF: \
	case PP_IFNDEF:\
	case PP_IFEMPTY: \
	case PP_IFNEMPTY:\
	case PP_IFENV: \
	case PP_IFNENV:\
	case PP_IFID: \
	case PP_IFNID:\
	case PP_IFIDN: \
	case PP_IFNIDN:\
	case PP_IFIDNI: \
	case PP_IFNIDNI:\
	case PP_IFMACRO: \
	case PP_IFNMACRO:\
	case PP_IFNUM: \
	case PP_IFNNUM:\
	case PP_IFSTR: \
	case PP_IFNSTR:\
	case PP_IFTOKEN: \
	case PP_IFNTOKEN
#define CASE_PP_WHILE \
	case PP_WHILE: \
	case PP_WHILEN:\
	case PP_WHILECTX: \
	case PP_WHILENCTX:\
	case PP_WHILEDEF: \
	case PP_WHILENDEF:\
	case PP_WHILEEMPTY: \
	case PP_WHILENEMPTY:\
	case PP_WHILEENV: \
	case PP_WHILENENV:\
	case PP_WHILEID: \
	case PP_WHILENID:\
	case PP_WHILEIDN: \
	case PP_WHILENIDN:\
	case PP_WHILEIDNI: \
	case PP_WHILENIDNI:\
	case PP_WHILEMACRO: \
	case PP_WHILENMACRO:\
	case PP_WHILENUM: \
	case PP_WHILENNUM:\
	case PP_WHILESTR: \
	case PP_WHILENSTR:\
	case PP_WHILETOKEN: \
	case PP_WHILENTOKEN
