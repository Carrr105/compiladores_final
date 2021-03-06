/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     VARS = 259,
     IF = 260,
     ELSE = 261,
     PRINT = 262,
     CHAR = 263,
     MAIN = 264,
     FUNCTION = 265,
     COMMA = 266,
     RETURN = 267,
     READ = 268,
     WRITE = 269,
     WHILE = 270,
     GREATEREQUAL = 271,
     INT = 272,
     FLOAT = 273,
     ID = 274,
     SEMICOLON = 275,
     PLUS = 276,
     MINUS = 277,
     DIVIDE = 278,
     MULTIPLY = 279,
     EQUALS = 280,
     QUOTATIONMARK = 281,
     FOR = 282,
     LESSEQUAL = 283,
     OPENPARENTHESES = 284,
     CLOSEPARENTHESES = 285,
     DOT = 286,
     TWODOTS = 287,
     OPENBRACKET = 288,
     CLOSEBRACKET = 289,
     DO = 290,
     AND = 291,
     OPENBRACE = 292,
     CLOSEBRACE = 293,
     DIFFERENT = 294,
     GREATER = 295,
     LESS = 296,
     CTEF = 297,
     CTEI = 298,
     CTESTRING = 299,
     THEN = 300,
     TO = 301,
     OR = 302,
     EQUALS_BOOLEAN = 303,
     IDENT = 304
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define VARS 259
#define IF 260
#define ELSE 261
#define PRINT 262
#define CHAR 263
#define MAIN 264
#define FUNCTION 265
#define COMMA 266
#define RETURN 267
#define READ 268
#define WRITE 269
#define WHILE 270
#define GREATEREQUAL 271
#define INT 272
#define FLOAT 273
#define ID 274
#define SEMICOLON 275
#define PLUS 276
#define MINUS 277
#define DIVIDE 278
#define MULTIPLY 279
#define EQUALS 280
#define QUOTATIONMARK 281
#define FOR 282
#define LESSEQUAL 283
#define OPENPARENTHESES 284
#define CLOSEPARENTHESES 285
#define DOT 286
#define TWODOTS 287
#define OPENBRACKET 288
#define CLOSEBRACKET 289
#define DO 290
#define AND 291
#define OPENBRACE 292
#define CLOSEBRACE 293
#define DIFFERENT 294
#define GREATER 295
#define LESS 296
#define CTEF 297
#define CTEI 298
#define CTESTRING 299
#define THEN 300
#define TO 301
#define OR 302
#define EQUALS_BOOLEAN 303
#define IDENT 304




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

  #include "SymT.h" 
  extern FILE* yyin;
  int yylex();
  void yyerror(const char *s);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 211 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   319

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  233

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    16,    22,    27,    34,    40,    42,
      44,    46,    58,    69,    80,    91,   102,   112,   122,   132,
     142,   152,   162,   171,   180,   189,   198,   206,   212,   214,
     219,   226,   230,   232,   234,   236,   238,   243,   248,   253,
     255,   257,   259,   261,   263,   265,   267,   273,   278,   284,
     290,   294,   300,   304,   310,   314,   327,   339,   351,   360,
     368,   370,   372,   381,   389,   400,   410,   415,   423,   431,
     439,   441,   445,   449,   451,   455,   459,   464,   466,   468,
     470,   474,   476,   480,   484,   486,   490,   494,   498,   502,
     506
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,     3,    19,    20,    55,    54,    52,    -1,
       3,    19,    20,    55,    52,    -1,     3,    19,    20,    54,
      52,    -1,     3,    19,    20,    52,    -1,     9,    29,    30,
      37,    59,    38,    -1,     9,    29,    30,    37,    38,    -1,
      17,    -1,    18,    -1,     8,    -1,    10,    53,    19,    29,
      56,    30,    20,    55,    37,    59,    38,    -1,    10,    19,
      29,    56,    30,    20,    55,    37,    59,    38,    -1,    10,
      53,    19,    29,    30,    20,    55,    37,    59,    38,    -1,
      10,    53,    19,    29,    56,    30,    20,    37,    59,    38,
      -1,    10,    53,    19,    29,    56,    30,    20,    55,    37,
      38,    -1,    10,    19,    29,    30,    20,    55,    37,    59,
      38,    -1,    10,    19,    29,    56,    30,    20,    37,    59,
      38,    -1,    10,    19,    29,    56,    30,    20,    55,    37,
      38,    -1,    10,    53,    19,    29,    30,    20,    37,    59,
      38,    -1,    10,    53,    19,    29,    30,    20,    55,    37,
      38,    -1,    10,    53,    19,    29,    56,    30,    20,    37,
      38,    -1,    10,    19,    29,    30,    20,    37,    59,    38,
      -1,    10,    19,    29,    56,    30,    20,    37,    38,    -1,
      10,    53,    19,    29,    30,    20,    37,    38,    -1,    10,
      19,    29,    30,    20,    55,    37,    38,    -1,    10,    19,
      29,    30,    20,    37,    38,    -1,     4,    53,    32,    56,
      20,    -1,    19,    -1,    19,    33,    57,    34,    -1,    19,
      33,    57,    34,    11,    56,    -1,    19,    11,    56,    -1,
      43,    -1,    19,    -1,    58,    -1,    19,    -1,    19,    33,
      43,    34,    -1,    19,    33,    19,    34,    -1,    19,    33,
      58,    34,    -1,    69,    -1,    60,    -1,    61,    -1,    62,
      -1,    63,    -1,    65,    -1,    66,    -1,    19,    29,    56,
      30,    20,    -1,    19,    29,    30,    20,    -1,    12,    29,
      70,    30,    20,    -1,    13,    29,    56,    30,    20,    -1,
      14,    29,    64,    -1,    26,    44,    26,    11,    64,    -1,
      70,    11,    64,    -1,    26,    44,    26,    30,    20,    -1,
      70,    30,    20,    -1,     5,    29,    70,    30,    45,    37,
      59,    38,     6,    37,    59,    38,    -1,     5,    29,    70,
      30,    45,    37,    38,     6,    37,    59,    38,    -1,     5,
      29,    70,    30,    45,    37,    59,    38,     6,    37,    38,
      -1,     5,    29,    70,    30,    45,    37,    59,    38,    -1,
       5,    29,    70,    30,    45,    37,    38,    -1,    67,    -1,
      68,    -1,    15,    29,    70,    30,    35,    37,    59,    38,
      -1,    15,    29,    70,    30,    35,    37,    38,    -1,    27,
      19,    25,    70,    46,    70,    35,    37,    59,    38,    -1,
      27,    19,    25,    70,    46,    70,    35,    37,    38,    -1,
      19,    25,    70,    20,    -1,    19,    33,    43,    34,    25,
      70,    20,    -1,    19,    33,    19,    34,    25,    70,    20,
      -1,    19,    33,    58,    34,    25,    70,    20,    -1,    71,
      -1,    71,    21,    70,    -1,    71,    22,    70,    -1,    72,
      -1,    72,    24,    71,    -1,    72,    23,    71,    -1,    19,
      29,    56,    30,    -1,    19,    -1,    42,    -1,    43,    -1,
      29,    73,    30,    -1,    74,    -1,    74,    36,    73,    -1,
      74,    47,    73,    -1,    70,    -1,    70,    40,    70,    -1,
      70,    41,    70,    -1,    70,    39,    70,    -1,    70,    48,
      70,    -1,    70,    28,    70,    -1,    70,    16,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    22,    23,    24,    27,    28,    31,    32,
      33,    36,    38,    40,    42,    44,    46,    48,    50,    52,
      54,    56,    58,    60,    62,    64,    66,    70,    73,    74,
      75,    76,    79,    80,    81,    84,    85,    86,    87,    90,
      91,    92,    93,    94,    95,    96,    99,   100,   103,   106,
     109,   112,   113,   114,   115,   118,   120,   122,   124,   125,
     128,   129,   132,   133,   136,   137,   140,   141,   142,   143,
     146,   147,   181,   213,   214,   243,   289,   290,   291,   292,
     293,   296,   297,   298,   301,   302,   303,   304,   305,   306,
     307
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "VARS", "IF", "ELSE", "PRINT",
  "CHAR", "MAIN", "FUNCTION", "COMMA", "RETURN", "READ", "WRITE", "WHILE",
  "GREATEREQUAL", "INT", "FLOAT", "ID", "SEMICOLON", "PLUS", "MINUS",
  "DIVIDE", "MULTIPLY", "EQUALS", "QUOTATIONMARK", "FOR", "LESSEQUAL",
  "OPENPARENTHESES", "CLOSEPARENTHESES", "DOT", "TWODOTS", "OPENBRACKET",
  "CLOSEBRACKET", "DO", "AND", "OPENBRACE", "CLOSEBRACE", "DIFFERENT",
  "GREATER", "LESS", "CTEF", "CTEI", "CTESTRING", "THEN", "TO", "OR",
  "EQUALS_BOOLEAN", "IDENT", "$accept", "programa", "bloque", "tipo",
  "funciones", "vars", "params", "paramsP", "params_index", "estatuto",
  "llamada", "retorno", "lectura", "escritura", "escrituraP", "decision",
  "repeticion", "condicional", "no_condicional", "asignacion", "exp",
  "termino", "factor", "h_exp", "s_exp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    51,    51,    52,    52,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    56,    56,
      56,    56,    57,    57,    57,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    61,    62,
      63,    64,    64,    64,    64,    65,    65,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    73,    74,    74,    74,    74,    74,    74,
      74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     5,     5,     4,     6,     5,     1,     1,
       1,    11,    10,    10,    10,    10,     9,     9,     9,     9,
       9,     9,     8,     8,     8,     8,     7,     5,     1,     4,
       6,     3,     1,     1,     1,     1,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     5,     5,
       3,     5,     3,     5,     3,    12,    11,    11,     8,     7,
       1,     1,     8,     7,    10,     9,     4,     7,     7,     7,
       1,     3,     3,     1,     3,     3,     4,     1,     1,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     5,
       0,     0,    10,     8,     9,     0,     0,     0,     0,     4,
       3,     0,     0,     0,     0,     0,     2,    28,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     7,     0,    40,    41,    42,    43,    44,
      45,    60,    61,    39,     0,     0,     0,     0,    31,    33,
      32,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,    29,
      77,     0,    78,    79,     0,    70,    73,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    47,     0,
       0,     0,     0,     0,    22,    25,     0,    23,     0,     0,
      24,     0,     0,     0,     0,    37,    36,    38,    30,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
      71,    72,    75,    74,    48,    49,     0,    52,    54,     0,
      46,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,     0,    21,     0,     0,    76,    90,    89,    87,    85,
      86,    88,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,    14,    15,     0,    59,     0,    51,
      53,    63,     0,    68,    67,    69,     0,    11,     0,    58,
      62,     0,     0,     0,    65,     0,     0,     0,    64,    56,
      57,     0,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     9,    15,    10,    11,    28,    61,    62,    44,
      45,    46,    47,    48,    90,    49,    50,    51,    52,    53,
      91,    85,    86,   114,   115
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int16 yypact[] =
{
      18,     7,    48,    51,  -124,   152,   128,     9,    65,  -124,
      77,    96,  -124,  -124,  -124,    42,    73,    78,    91,  -124,
    -124,    77,   103,   101,   110,   131,  -124,    64,   168,     1,
     173,   160,   111,   103,   -12,  -124,   143,   145,   167,   174,
     175,    75,   183,  -124,   171,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,     8,   190,   191,   176,  -124,   179,
    -124,   184,  -124,    38,    38,   103,    59,    38,    38,   125,
      34,   194,  -124,    22,   185,    13,    14,   200,    36,   214,
     197,    38,  -124,  -124,   198,   142,   147,   204,   205,   192,
    -124,    12,   208,   207,   221,   212,   144,   209,   210,    38,
    -124,   213,    49,   104,   215,   120,   217,    15,   146,   216,
     223,   103,   103,   242,   229,    -3,   222,    38,    38,    38,
      38,   240,   246,   245,    59,   248,   238,  -124,  -124,   254,
     251,   253,   255,   233,  -124,  -124,   237,  -124,   247,   138,
    -124,   249,   154,   170,   252,  -124,  -124,  -124,  -124,   256,
      38,    38,    38,    38,    38,    38,  -124,    38,    38,   258,
    -124,  -124,  -124,  -124,  -124,  -124,    35,  -124,  -124,   259,
    -124,    38,    38,    38,    38,  -124,  -124,  -124,   261,  -124,
    -124,   262,  -124,   263,   186,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,   202,    59,   277,   218,   282,   283,
     284,   270,  -124,  -124,  -124,  -124,   269,   302,   271,  -124,
    -124,  -124,   272,  -124,  -124,  -124,   274,  -124,   275,   307,
    -124,   234,   279,   278,  -124,   276,   280,   250,  -124,  -124,
    -124,   281,  -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,   116,   308,   306,   -51,   -22,  -124,    50,   -73,
    -124,  -124,  -124,  -124,  -123,  -124,  -124,  -124,  -124,  -124,
     -59,    67,  -124,    37,  -124
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     101,   167,    31,    74,    84,    87,    36,    59,    92,    93,
      57,    58,     6,    37,    38,    39,    40,     6,     6,     6,
      41,     1,   113,   124,   104,   106,     3,    36,    42,   136,
     138,    60,   141,   157,    37,    38,    39,    40,    16,    43,
     133,    41,   125,    88,   158,    73,   195,    95,     4,    42,
     103,   105,   143,    96,    36,   108,   144,    80,   160,   161,
     100,    37,    38,    39,    40,   196,   178,    81,    41,   181,
     183,     5,   209,    12,    22,    33,    42,    97,    80,   109,
      82,    83,    13,    14,    17,    89,     7,   135,    81,   148,
     149,   186,   187,   188,   189,   190,   191,    34,   113,   113,
      68,    82,    83,    23,    69,     7,     8,    24,    70,    36,
      25,   206,   198,   199,   200,   201,    37,    38,    39,    40,
      98,   208,    27,    41,   212,    36,    19,    20,   110,    27,
      27,    42,    37,    38,    39,    40,    12,    26,    29,    41,
      30,    56,   137,    36,    27,    13,    14,    42,   225,   226,
      37,    38,    39,    40,   231,    94,     6,    41,   140,    36,
      32,     7,     8,   117,   118,    42,    37,    38,    39,    40,
     119,   120,    63,    41,    64,    36,   177,    78,   130,    78,
     145,    42,    37,    38,    39,    40,   162,   163,    35,    41,
      55,    36,   180,    54,   192,   193,    65,    42,    37,    38,
      39,    40,    71,    66,    67,    41,    77,    36,   182,    72,
      75,    76,    78,    42,    37,    38,    39,    40,    79,    99,
     107,    41,   102,    36,   205,   111,   112,   127,   116,    42,
      37,    38,    39,    40,   121,   122,   123,    41,   126,    36,
     207,   128,   129,   131,   132,    42,    37,    38,    39,    40,
     146,   134,   139,    41,   142,    36,   211,   147,   150,   156,
     164,    42,    37,    38,    39,    40,   165,   159,   168,    41,
     151,   166,   224,   169,   170,   175,   171,    42,   172,   174,
     173,   152,   153,   154,    36,   176,   185,   179,   230,   184,
     155,    37,    38,    39,    40,   194,   197,   210,    41,   202,
     203,   204,   213,   214,   215,   216,    42,   217,   218,   219,
     220,   221,   222,   223,   228,   227,    18,    21,   229,   232
};

static const yytype_uint8 yycheck[] =
{
      73,   124,    24,    54,    63,    64,     5,    19,    67,    68,
      32,    33,     4,    12,    13,    14,    15,     4,     4,     4,
      19,     3,    81,    11,    75,    76,    19,     5,    27,   102,
     103,    43,   105,    36,    12,    13,    14,    15,    29,    38,
      99,    19,    30,    65,    47,    37,    11,    69,     0,    27,
      37,    37,    37,    19,     5,    19,   107,    19,   117,   118,
      38,    12,    13,    14,    15,    30,   139,    29,    19,   142,
     143,    20,   195,     8,    32,    11,    27,    43,    19,    43,
      42,    43,    17,    18,    19,    26,     9,    38,    29,   111,
     112,   150,   151,   152,   153,   154,   155,    33,   157,   158,
      25,    42,    43,    30,    29,     9,    10,    29,    33,     5,
      19,   184,   171,   172,   173,   174,    12,    13,    14,    15,
      70,   194,    19,    19,   197,     5,    10,    11,    78,    19,
      19,    27,    12,    13,    14,    15,     8,    21,    37,    19,
      30,    30,    38,     5,    19,    17,    18,    27,   221,   222,
      12,    13,    14,    15,   227,    30,     4,    19,    38,     5,
      29,     9,    10,    21,    22,    27,    12,    13,    14,    15,
      23,    24,    29,    19,    29,     5,    38,    33,    34,    33,
      34,    27,    12,    13,    14,    15,   119,   120,    20,    19,
      30,     5,    38,    20,   157,   158,    29,    27,    12,    13,
      14,    15,    19,    29,    29,    19,    30,     5,    38,    38,
      20,    20,    33,    27,    12,    13,    14,    15,    34,    25,
      20,    19,    37,     5,    38,    11,    29,    20,    30,    27,
      12,    13,    14,    15,    30,    30,    44,    19,    30,     5,
      38,    20,    30,    34,    34,    27,    12,    13,    14,    15,
      34,    38,    37,    19,    37,     5,    38,    34,    16,    30,
      20,    27,    12,    13,    14,    15,    20,    45,    20,    19,
      28,    26,    38,    35,    20,    38,    25,    27,    25,    46,
      25,    39,    40,    41,     5,    38,    30,    38,    38,    37,
      48,    12,    13,    14,    15,    37,    37,    20,    19,    38,
      38,    38,    20,    20,    20,    35,    27,    38,     6,    38,
      38,    37,    37,     6,    38,    37,     8,    11,    38,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    51,    19,     0,    20,     4,     9,    10,    52,
      54,    55,     8,    17,    18,    53,    29,    19,    53,    52,
      52,    54,    32,    30,    29,    19,    52,    19,    56,    37,
      30,    56,    29,    11,    33,    20,     5,    12,    13,    14,
      15,    19,    27,    38,    59,    60,    61,    62,    63,    65,
      66,    67,    68,    69,    20,    30,    30,    56,    56,    19,
      43,    57,    58,    29,    29,    29,    29,    29,    25,    29,
      33,    19,    38,    37,    55,    20,    20,    30,    33,    34,
      19,    29,    42,    43,    70,    71,    72,    70,    56,    26,
      64,    70,    70,    70,    30,    56,    19,    43,    58,    25,
      38,    59,    37,    37,    55,    37,    55,    20,    19,    43,
      58,    11,    29,    70,    73,    74,    30,    21,    22,    23,
      24,    30,    30,    44,    11,    30,    30,    20,    20,    30,
      34,    34,    34,    70,    38,    38,    59,    38,    59,    37,
      38,    59,    37,    37,    55,    34,    34,    34,    56,    56,
      16,    28,    39,    40,    41,    48,    30,    36,    47,    45,
      70,    70,    71,    71,    20,    20,    26,    64,    20,    35,
      20,    25,    25,    25,    46,    38,    38,    38,    59,    38,
      38,    59,    38,    59,    37,    30,    70,    70,    70,    70,
      70,    70,    73,    73,    37,    11,    30,    37,    70,    70,
      70,    70,    38,    38,    38,    38,    59,    38,    59,    64,
      20,    38,    59,    20,    20,    20,    35,    38,     6,    38,
      38,    37,    37,     6,    38,    59,    59,    37,    38,    38,
      38,    59,    38
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 21 "parser.y"
    {printf("OK ! Good Grammar\n");}
    break;

  case 28:
#line 73 "parser.y"
    {/* install( $1, $<tipo>0 ); */}
    break;

  case 71:
#line 147 "parser.y"
    {/*
                                        if(($1->type==int) && ($3->type==int)) {
                                            uVal value;
                                            value.i_value = 0;
                                            $$ = createTempConstant(value, int);
                                        }
                                        else if(($1->type==float) && ($3->type==float)) {
                                            uVal value;
                                            value.r_value = 0;
                                            $$ = createTempConstant(value, float);
                                        }
                                        else {
                                            if($$->type == float) {
                                                if(($1->type==float) && ($3->type==float)) {
                                                    uVal value;
                                                    value.r_value = 0;
                                                    $$ = createTempConstant(value, float);
                                                }
                                                else if(($1->type==int) && ($3->type==float)) {
                                                    uVal value;
                                                    value.r_value = 0;
                                                    $$ = createTempConstant(value, float);
                                                }
                                                else {
                                                    printf("Error Line %d: Non compatible types\n" ,yylineno);
                                                    exit(EXIT_FAILURE);
                                                }
                                            }
                                            else {
                                                printf("Error Line %d: Non compatible types\n" ,yylineno);
                                                exit(EXIT_FAILURE);
                                            }
                                        }*/
                                    }
    break;

  case 72:
#line 181 "parser.y"
    {/*
                                        if(($1->type==int) && ($3->type==int)) {
                                            uVal value;
                                            value.i_value = 0;
                                            $$ = createTempConstant(value, int);
                                        }
                                        else if(($1->type==float) && ($3->type==float)) {
                                            uVal value;
                                            value.r_value = 0;
                                            $$ = createTempConstant(value, float);
                                        }
                                        else {
                                            if($$->type == float) {
                                                if(($1->type==float) && ($3->type==int)){
                                                    uVal value;
                                                    value.r_value = 0;
                                                    $$ = createTempConstant(value, float);
                                                }
                                                else if(($1->type==int) && ($3->type==float)){
                                                    uVal value;
                                                    value.r_value = 0;
                                                    $$ = createTempConstant(value, float);
                                                }
                                                else{
                                                    printf("Error Line %d: Non compatible types\n" ,yylineno);
                                                    exit(EXIT_FAILURE);
                                                }
                                            }
                                        }*/
                                    }
    break;

  case 74:
#line 214 "parser.y"
    {/*
                                    if(($1->type==int) && ($3->type==int)) {
                                        uVal value;
                                        value.i_value = $1->value.i_value * $3->value.i_value;
                                        $$ = createTempConstant(value, int);
                                    }
                                    else if(($1->type==float) && ($3->type==float)) {
                                        uVal value;
                                        value.r_value = $1->value.r_value * $3->value.r_value;
                                        $$ = createTempConstant(value, float);
                                    }
                                    else {
                                        if(($1->type==float) && ($3->type==int)){
                                            uVal value;
                                            value.r_value = $1->value.r_value * $3->value.i_value;
                                            $$ = createTempConstant(value, float);
                                        }
                                        else if(($1->type==int) && ($3->type==float)){
                                            uVal value;
                                            value.r_value = 0;
                                            value.r_value = $1->value.i_value * $3->value.r_value;
                                            $$ = createTempConstant(value, float);
                                        }
                                        else{
                                            printf("Error %d: Types are not compatible\n" ,yylineno);
                                            exit(EXIT_FAILURE);
                                        }
                                    }*/
                                }
    break;

  case 75:
#line 243 "parser.y"
    {/*
                                    if(($1->type==int) && ($3->type==int)) {
                                        uVal value;
                                        value.i_value = 0;
                                        if($3->value.i_value == 0){
                                            printf("Error %d: Division by zero\n" ,yylineno);
                                            exit(EXIT_FAILURE);
                                        }
                                        $$ = createTempConstant(value, int);
                                    }
                                    else if(($1->type==float) && ($3->type==float)) {
                                        uVal value;
                                        value.r_value = 0;
                                        if($3->value.r_value == 0.0){
                                            printf("Error Line %d: Division by zero\n" ,yylineno);
                                            exit(EXIT_FAILURE);
                                        }
                                        $$ = createTempConstant(value, float);
                                    }
                                    else {
                                        if(($1->type==float) && ($3->type==int)){
                                            uVal value;
                                            value.r_value = 0;
                                            if($3->value.i_value == 0){
                                                printf("Error %d: Division by zero\n" ,yylineno);
                                                exit(EXIT_FAILURE);
                                            }
                                            $$ = createTempConstant(value, float);
                                        }
                                        else if(($1->type==int) && ($3->type==float)){
                                            uVal value;
                                            value.r_value = 0;
                                            if($3->value.r_value == 0.0){
                                                printf("Error %d: Division by zero\n" ,yylineno);
                                                exit(EXIT_FAILURE);
                                            }
                                            $$ = createTempConstant(value, float);
                                        }
                                        else{
                                            printf("Error %d: Non compatible types\n" ,yylineno);
                                            exit(EXIT_FAILURE);
                                        }
                                      }*/
                                }
    break;


/* Line 1267 of yacc.c.  */
#line 1793 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 314 "parser.y"


int main() {
  yyin = fopen("test.txt", "r");
  yyparse();
  fclose(yyin);
  return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}


