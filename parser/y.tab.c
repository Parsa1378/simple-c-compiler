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
     IDENTIFIER = 258,
     DEC_CONSTANT = 259,
     HEX_CONSTANT = 260,
     STRING = 261,
     LOGICAL_AND = 262,
     LOGICAL_OR = 263,
     LS_EQ = 264,
     GR_EQ = 265,
     EQ = 266,
     NOT_EQ = 267,
     MUL_ASSIGN = 268,
     DIV_ASSIGN = 269,
     MOD_ASSIGN = 270,
     ADD_ASSIGN = 271,
     SUB_ASSIGN = 272,
     LEFT_ASSIGN = 273,
     RIGHT_ASSIGN = 274,
     AND_ASSIGN = 275,
     XOR_ASSIGN = 276,
     OR_ASSIGN = 277,
     INCREMENT = 278,
     DECREMENT = 279,
     SHORT = 280,
     INT = 281,
     LONG = 282,
     LONG_LONG = 283,
     SIGNED = 284,
     UNSIGNED = 285,
     CONST = 286,
     IF = 287,
     FOR = 288,
     WHILE = 289,
     CONTINUE = 290,
     BREAK = 291,
     RETURN = 292,
     UMINUS = 293,
     LOWER_THAN_ELSE = 294,
     ELSE = 295
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define DEC_CONSTANT 259
#define HEX_CONSTANT 260
#define STRING 261
#define LOGICAL_AND 262
#define LOGICAL_OR 263
#define LS_EQ 264
#define GR_EQ 265
#define EQ 266
#define NOT_EQ 267
#define MUL_ASSIGN 268
#define DIV_ASSIGN 269
#define MOD_ASSIGN 270
#define ADD_ASSIGN 271
#define SUB_ASSIGN 272
#define LEFT_ASSIGN 273
#define RIGHT_ASSIGN 274
#define AND_ASSIGN 275
#define XOR_ASSIGN 276
#define OR_ASSIGN 277
#define INCREMENT 278
#define DECREMENT 279
#define SHORT 280
#define INT 281
#define LONG 282
#define LONG_LONG 283
#define SIGNED 284
#define UNSIGNED 285
#define CONST 286
#define IF 287
#define FOR 288
#define WHILE 289
#define CONTINUE 290
#define BREAK 291
#define RETURN 292
#define UMINUS 293
#define LOWER_THAN_ELSE 294
#define ELSE 295




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

	#include <stdlib.h>
	#include <stdio.h>
	#include "symboltable.h"

	entry_t** symbol_table;
  entry_t** constant_table;

	double Evaluate (double lhs_value,int assign_type,double rhs_value);
	int current_dtype;
	int yyerror(char *msg);


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
typedef union YYSTYPE
#line 15 "parser.y"
{
	double dval;
	entry_t* entry;
	int ival;
}
/* Line 193 of yacc.c.  */
#line 195 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 208 "y.tab.c"

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   373

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    46,     2,     2,
      51,    52,    44,    42,    38,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      40,    39,    41,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      35,    36,    37,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    19,    22,    24,
      27,    29,    32,    34,    36,    38,    40,    43,    45,    47,
      50,    52,    55,    57,    58,    62,    64,    67,    69,    71,
      75,    78,    79,    81,    83,    85,    87,    90,    93,    96,
      99,   103,   110,   118,   124,   132,   138,   142,   145,   148,
     152,   154,   156,   158,   160,   163,   165,   169,   171,   175,
     179,   183,   187,   191,   195,   199,   203,   206,   208,   210,
     212,   216,   220,   224,   228,   232,   235,   238,   241,   244,
     246,   248,   250,   252,   254,   256,   258,   262,   266,   270,
     274,   278,   282,   285,   287,   289,   291,   293,   298,   303,
     307,   311,   313,   315
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    59,    60,    -1,    60,    -1,    61,    -1,
      77,    -1,    62,     3,    51,    67,    52,    71,    -1,    64,
      63,    -1,    64,    -1,    44,    63,    -1,    44,    -1,    65,
      66,    -1,    66,    -1,    29,    -1,    30,    -1,    26,    -1,
      25,    26,    -1,    25,    -1,    27,    -1,    27,    26,    -1,
      28,    -1,    28,    26,    -1,    68,    -1,    -1,    68,    38,
      69,    -1,    69,    -1,    62,     3,    -1,    71,    -1,    73,
      -1,    53,    72,    54,    -1,    72,    70,    -1,    -1,    75,
      -1,    74,    -1,    76,    -1,    77,    -1,    90,    55,    -1,
      37,    55,    -1,    35,    55,    -1,    36,    55,    -1,    37,
      82,    55,    -1,    33,    51,    80,    80,    52,    70,    -1,
      33,    51,    80,    80,    81,    52,    70,    -1,    32,    51,
      81,    52,    70,    -1,    32,    51,    81,    52,    70,    50,
      70,    -1,    34,    51,    81,    52,    70,    -1,    62,    78,
      55,    -1,    78,    55,    -1,    84,    55,    -1,    78,    38,
      79,    -1,    79,    -1,    83,    -1,     3,    -1,    89,    -1,
      81,    55,    -1,    55,    -1,    81,    38,    82,    -1,    82,
      -1,    82,    41,    82,    -1,    82,    40,    82,    -1,    82,
      11,    82,    -1,    82,    12,    82,    -1,    82,     9,    82,
      -1,    82,    10,    82,    -1,    82,     7,    82,    -1,    82,
       8,    82,    -1,    47,    82,    -1,    87,    -1,    83,    -1,
      84,    -1,    85,    86,    87,    -1,    85,    86,    89,    -1,
      85,    86,    90,    -1,    85,    86,    84,    -1,    84,    86,
      84,    -1,    85,    23,    -1,    85,    24,    -1,    24,    85,
      -1,    23,    85,    -1,     3,    -1,    39,    -1,    16,    -1,
      17,    -1,    13,    -1,    14,    -1,    15,    -1,    87,    42,
      87,    -1,    87,    43,    87,    -1,    87,    44,    87,    -1,
      87,    45,    87,    -1,    87,    46,    87,    -1,    51,    87,
      52,    -1,    43,    87,    -1,     3,    -1,    88,    -1,     4,
      -1,     5,    -1,     3,    56,    82,    57,    -1,     3,    51,
      91,    52,    -1,     3,    51,    52,    -1,    91,    38,    92,
      -1,    92,    -1,    82,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    72,    75,    76,    79,    83,    84,    86,
      87,    90,    91,    94,    95,    98,    99,   100,   101,   102,
     103,   104,   109,   110,   113,   114,   118,   122,   123,   127,
     130,   131,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   146,   147,   150,   151,   154,   157,   158,   159,   161,
     162,   164,   165,   166,   171,   172,   176,   177,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     199,   200,   201,   202,   203,   206,   207,   208,   209,   211,
     215,   216,   217,   218,   219,   220,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   234,   235,   238,   240,   241,
     245,   246,   249,   250
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "DEC_CONSTANT",
  "HEX_CONSTANT", "STRING", "LOGICAL_AND", "LOGICAL_OR", "LS_EQ", "GR_EQ",
  "EQ", "NOT_EQ", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "INCREMENT", "DECREMENT", "SHORT", "INT", "LONG",
  "LONG_LONG", "SIGNED", "UNSIGNED", "CONST", "IF", "FOR", "WHILE",
  "CONTINUE", "BREAK", "RETURN", "','", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "UMINUS", "LOWER_THAN_ELSE", "ELSE", "'('",
  "')'", "'{'", "'}'", "';'", "'['", "']'", "$accept", "starter",
  "builder", "function", "type", "pointer", "data_type", "sign_specifier",
  "type_specifier", "argument_list", "arguments", "arg", "stmt",
  "compound_stmt", "statements", "single_stmt", "for_block", "if_block",
  "while_block", "declaration", "declaration_list", "sub_decl",
  "expression_stmt", "expression", "sub_expr", "assignment_expr",
  "unary_expr", "lhs", "assign_op", "arithmetic_expr", "constant",
  "array_index", "function_call", "parameter_list", "parameter", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,    44,    61,
      60,    62,    43,    45,    42,    47,    37,    33,   293,   294,
     295,    40,    41,   123,   125,    59,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    68,    68,    69,    70,    70,    71,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    74,    74,    75,    75,    76,    77,    77,    77,    78,
      78,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    84,    84,    84,    84,    85,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    89,    90,    90,
      91,    91,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     6,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     2,     1,     0,     3,     1,     2,     1,     1,     3,
       2,     0,     1,     1,     1,     1,     2,     2,     2,     2,
       3,     6,     7,     5,     7,     5,     3,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     1,     4,     4,     3,
       3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    79,     0,     0,    17,    15,    18,    20,    13,    14,
       0,     3,     4,     0,     8,     0,    12,     5,     0,    50,
      51,     0,     0,    53,     0,    79,    78,    77,    16,    19,
      21,     1,     2,    79,     0,     0,    10,     7,    11,     0,
      47,    83,    84,    85,    81,    82,    80,    48,     0,    75,
      76,     0,    93,    95,    96,     0,     0,     0,     0,    68,
      69,    67,    94,    23,    46,     9,    49,    74,     0,    93,
      73,    70,    71,    72,    93,    92,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    22,    25,     0,    91,    64,    65,
      62,    63,    60,    61,    59,    58,    86,    87,    88,    89,
      90,    26,     0,     0,   103,    99,   102,     0,   101,    31,
       6,    24,     0,    98,     0,   100,    79,     0,     0,     0,
       0,     0,     0,    29,     0,    30,    27,    28,    33,    32,
      34,    35,     0,     0,     0,     0,    38,    39,    37,     0,
      36,     0,    57,    55,     0,     0,     0,    40,     0,     0,
       0,    54,     0,    56,    43,     0,     0,    45,     0,    41,
       0,    44,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,   134,    37,    14,    15,    16,    93,
      94,    95,   135,   136,   124,   137,   138,   139,   140,   141,
      18,    19,   154,   155,   152,    59,    60,    22,    48,    61,
      62,    23,   142,   117,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -43
static const yytype_int16 yypact[] =
{
     300,   -26,    30,    30,    17,   -43,    20,    44,   -43,   -43,
     292,   -43,   -43,    14,    29,   333,   -43,   -43,   -23,   -43,
     -43,    82,   245,   -43,   220,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,    33,    -3,   323,    29,   -43,   -43,    91,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   117,   -43,
     -43,     4,   318,   -43,   -43,    88,   220,    88,    71,   -43,
     323,   327,   -43,   338,   -43,   -43,   -43,   -43,    84,   -20,
     -43,   327,   -43,   -43,   -43,   -43,   -43,   255,   220,   220,
     220,   220,   220,   220,   220,   220,   -43,    88,    88,    88,
      88,    88,    72,    25,    66,   -43,   189,   -43,     9,   271,
     -43,   -43,    13,    13,   -43,   -43,   176,   176,   -43,   -43,
     -43,   -43,    74,   338,   -43,   -43,   265,    64,   -43,   -43,
     -43,   -43,   205,   -43,   119,   -43,   258,    78,    79,    81,
      83,   103,    21,   -43,    91,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   121,   220,    62,   220,   -43,   -43,   -43,   194,
     -43,   112,   265,   -43,    62,    68,   123,   -43,   220,   154,
     195,   -43,   154,   265,   124,   154,   178,   -43,   154,   -43,
     154,   -43,   -43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -43,   -43,   157,   -43,     6,    97,   -43,   -43,   170,   -43,
     -43,   101,   184,    85,   -43,   -43,   -43,   -43,   -43,   217,
      -8,   187,    42,   -42,   -22,     1,     0,    39,   193,   200,
     -43,   180,   182,   -43,   115
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      21,    20,    58,   -79,   -79,    34,    13,    69,    53,    54,
      21,    20,   -52,    35,    20,    39,    13,    33,    80,    81,
      82,    83,    80,    81,    52,    53,    54,     2,     3,   -52,
      24,    96,    40,    25,    76,    39,    24,     2,     3,    35,
      20,    26,    27,    28,     2,     3,    29,    55,    67,    84,
      85,    70,    64,    84,    85,    57,    98,    99,   100,   101,
     102,   103,   104,   105,    55,    52,    53,    54,    56,    92,
      30,   -52,    57,    36,   116,   111,   148,   112,    78,    79,
      80,    81,    82,    83,    63,     2,     3,    68,   -52,    24,
      68,    74,    53,    54,     1,    41,    42,    43,    44,    45,
     116,   151,   122,   156,   113,    55,   158,    49,    50,    56,
     149,    84,    85,    57,     2,     3,   123,   153,   166,    92,
      25,    46,   126,   161,    21,    20,    34,   119,    86,   143,
     144,    55,   145,    65,    35,    20,   163,    47,   146,    57,
       2,     3,     2,     3,     4,     5,     6,     7,     8,     9,
     158,   127,   128,   129,   130,   131,   132,   126,   147,    21,
      20,   158,    21,    20,   159,    21,    20,    32,    21,    20,
      21,    20,   119,   133,   168,   162,   150,     2,     3,     4,
       5,     6,     7,     8,     9,    38,   127,   128,   129,   130,
     131,   132,    52,    53,    54,   114,   160,   120,    52,    53,
      54,    78,    79,    80,    81,    82,    83,   119,    52,    53,
      54,   114,     2,     3,   121,    51,   158,    17,     2,     3,
      89,    90,    91,    52,    53,    54,    66,    17,     2,     3,
     170,    72,    55,    73,    84,    85,    56,   125,    55,     0,
      57,   115,    56,     2,     3,     0,    57,   165,    55,   157,
       0,    71,    56,     0,     0,    75,    57,    77,    41,    42,
      43,    44,    45,    55,     0,     0,     0,    56,    49,    50,
       0,    57,    78,    79,    80,    81,    82,    83,    78,     0,
      80,    81,    82,    83,    46,     0,     0,   106,   107,   108,
     109,   110,    31,     0,     0,     1,   -52,    87,    88,    89,
      90,    91,     0,     1,     0,    84,    85,    97,     0,    96,
       0,    84,    85,   -52,    24,     2,     3,     4,     5,     6,
       7,     8,     9,     2,     3,     4,     5,     6,     7,     8,
       9,   -79,   -79,   -79,   -79,   -79,    41,    42,    43,    44,
      45,   -79,   -79,   164,     0,     0,   167,     0,     0,   169,
       0,     0,   171,     0,   172,     0,     0,   -79,     4,     5,
       6,     7,    46,     4,     5,     6,     7,     8,     9,    87,
      88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
       0,     0,    24,    23,    24,    13,     0,     3,     4,     5,
      10,    10,    38,    13,    13,    38,    10,     3,     9,    10,
      11,    12,     9,    10,     3,     4,     5,    23,    24,    55,
      56,    51,    55,     3,    56,    38,    56,    23,    24,    39,
      39,     2,     3,    26,    23,    24,    26,    43,    48,    40,
      41,    51,    55,    40,    41,    51,    78,    79,    80,    81,
      82,    83,    84,    85,    43,     3,     4,     5,    47,    63,
      26,    38,    51,    44,    96,     3,    55,    52,     7,     8,
       9,    10,    11,    12,    51,    23,    24,    48,    55,    56,
      51,     3,     4,     5,     3,    13,    14,    15,    16,    17,
     122,   143,    38,   145,    38,    43,    38,    23,    24,    47,
     132,    40,    41,    51,    23,    24,    52,    55,   160,   113,
       3,    39,     3,    55,   124,   124,   134,    53,    57,    51,
      51,    43,    51,    36,   134,   134,   158,    55,    55,    51,
      23,    24,    23,    24,    25,    26,    27,    28,    29,    30,
      38,    32,    33,    34,    35,    36,    37,     3,    55,   159,
     159,    38,   162,   162,    52,   165,   165,    10,   168,   168,
     170,   170,    53,    54,    50,    52,    55,    23,    24,    25,
      26,    27,    28,    29,    30,    15,    32,    33,    34,    35,
      36,    37,     3,     4,     5,     6,   154,   112,     3,     4,
       5,     7,     8,     9,    10,    11,    12,    53,     3,     4,
       5,     6,    23,    24,   113,    22,    38,     0,    23,    24,
      44,    45,    46,     3,     4,     5,    39,    10,    23,    24,
      52,    51,    43,    51,    40,    41,    47,   122,    43,    -1,
      51,    52,    47,    23,    24,    -1,    51,    52,    43,    55,
      -1,    51,    47,    -1,    -1,    55,    51,    57,    13,    14,
      15,    16,    17,    43,    -1,    -1,    -1,    47,    23,    24,
      -1,    51,     7,     8,     9,    10,    11,    12,     7,    -1,
       9,    10,    11,    12,    39,    -1,    -1,    87,    88,    89,
      90,    91,     0,    -1,    -1,     3,    38,    42,    43,    44,
      45,    46,    -1,     3,    -1,    40,    41,    52,    -1,    51,
      -1,    40,    41,    55,    56,    23,    24,    25,    26,    27,
      28,    29,    30,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    17,    13,    14,    15,    16,
      17,    23,    24,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,    -1,    -1,    39,    25,    26,
      27,    28,    39,    25,    26,    27,    28,    29,    30,    42,
      43,    44,    45,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    23,    24,    25,    26,    27,    28,    29,    30,
      59,    60,    61,    62,    64,    65,    66,    77,    78,    79,
      83,    84,    85,    89,    56,     3,    85,    85,    26,    26,
      26,     0,    60,     3,    78,    84,    44,    63,    66,    38,
      55,    13,    14,    15,    16,    17,    39,    55,    86,    23,
      24,    86,     3,     4,     5,    43,    47,    51,    82,    83,
      84,    87,    88,    51,    55,    63,    79,    84,    85,     3,
      84,    87,    89,    90,     3,    87,    82,    87,     7,     8,
       9,    10,    11,    12,    40,    41,    57,    42,    43,    44,
      45,    46,    62,    67,    68,    69,    51,    52,    82,    82,
      82,    82,    82,    82,    82,    82,    87,    87,    87,    87,
      87,     3,    52,    38,     6,    52,    82,    91,    92,    53,
      71,    69,    38,    52,    72,    92,     3,    32,    33,    34,
      35,    36,    37,    54,    62,    70,    71,    73,    74,    75,
      76,    77,    90,    51,    51,    51,    55,    55,    55,    82,
      55,    81,    82,    55,    80,    81,    81,    55,    38,    52,
      80,    55,    52,    82,    70,    52,    81,    70,    50,    70,
      52,    70,    70
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
        case 15:
#line 98 "parser.y"
    {current_dtype = INT;}
    break;

  case 16:
#line 99 "parser.y"
    {current_dtype = SHORT;}
    break;

  case 17:
#line 100 "parser.y"
    {current_dtype = SHORT;}
    break;

  case 18:
#line 101 "parser.y"
    {current_dtype = LONG;}
    break;

  case 19:
#line 102 "parser.y"
    {current_dtype = LONG;}
    break;

  case 20:
#line 103 "parser.y"
    {current_dtype = LONG_LONG;}
    break;

  case 21:
#line 104 "parser.y"
    {current_dtype = LONG_LONG;}
    break;

  case 52:
#line 165 "parser.y"
    {(yyvsp[(1) - (1)].entry) -> data_type = current_dtype;}
    break;

  case 56:
#line 176 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval),(yyvsp[(3) - (3)].dval);}
    break;

  case 57:
#line 177 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval);}
    break;

  case 58:
#line 181 "parser.y"
    {(yyval.dval) = ((yyvsp[(1) - (3)].dval) > (yyvsp[(3) - (3)].dval));}
    break;

  case 59:
#line 182 "parser.y"
    {(yyval.dval) = ((yyvsp[(1) - (3)].dval) < (yyvsp[(3) - (3)].dval));}
    break;

  case 60:
#line 183 "parser.y"
    {(yyval.dval) = ((yyvsp[(1) - (3)].dval) == (yyvsp[(3) - (3)].dval));}
    break;

  case 61:
#line 184 "parser.y"
    {(yyval.dval) = ((yyvsp[(1) - (3)].dval) != (yyvsp[(3) - (3)].dval));}
    break;

  case 62:
#line 185 "parser.y"
    {(yyval.dval) = ((yyvsp[(1) - (3)].dval) <= (yyvsp[(3) - (3)].dval));}
    break;

  case 63:
#line 186 "parser.y"
    {(yyval.dval) = ((yyvsp[(1) - (3)].dval) >= (yyvsp[(3) - (3)].dval));}
    break;

  case 64:
#line 187 "parser.y"
    {(yyval.dval) = ((yyvsp[(1) - (3)].dval) && (yyvsp[(3) - (3)].dval));}
    break;

  case 65:
#line 188 "parser.y"
    {(yyval.dval) = ((yyvsp[(1) - (3)].dval) || (yyvsp[(3) - (3)].dval));}
    break;

  case 66:
#line 189 "parser.y"
    {(yyval.dval) = (!(yyvsp[(2) - (2)].dval));}
    break;

  case 67:
#line 190 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval);}
    break;

  case 68:
#line 191 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval);}
    break;

  case 69:
#line 192 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval);}
    break;

  case 70:
#line 199 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].entry)->value = Evaluate((yyvsp[(1) - (3)].entry)->value,(yyvsp[(2) - (3)].ival),(yyvsp[(3) - (3)].dval));}
    break;

  case 71:
#line 200 "parser.y"
    {(yyval.dval) = 0;}
    break;

  case 72:
#line 201 "parser.y"
    {(yyval.dval) = 0;}
    break;

  case 73:
#line 202 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].entry)->value = Evaluate((yyvsp[(1) - (3)].entry)->value,(yyvsp[(2) - (3)].ival),(yyvsp[(3) - (3)].dval));}
    break;

  case 74:
#line 203 "parser.y"
    {(yyval.dval) = 0;}
    break;

  case 75:
#line 206 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (2)].entry)->value = ((yyvsp[(1) - (2)].entry)->value)++;}
    break;

  case 76:
#line 207 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (2)].entry)->value = ((yyvsp[(1) - (2)].entry)->value)--;}
    break;

  case 77:
#line 208 "parser.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].entry)->value = --((yyvsp[(2) - (2)].entry)->value);}
    break;

  case 78:
#line 209 "parser.y"
    {(yyval.dval) = (yyvsp[(2) - (2)].entry)->value = ++((yyvsp[(2) - (2)].entry)->value);}
    break;

  case 79:
#line 211 "parser.y"
    {(yyval.entry) = (yyvsp[(1) - (1)].entry); if(! (yyvsp[(1) - (1)].entry)->data_type) (yyvsp[(1) - (1)].entry)->data_type = current_dtype;}
    break;

  case 80:
#line 215 "parser.y"
    {(yyval.ival) = '=';}
    break;

  case 81:
#line 216 "parser.y"
    {(yyval.ival) = ADD_ASSIGN;}
    break;

  case 82:
#line 217 "parser.y"
    {(yyval.ival) = SUB_ASSIGN;}
    break;

  case 83:
#line 218 "parser.y"
    {(yyval.ival) = MUL_ASSIGN;}
    break;

  case 84:
#line 219 "parser.y"
    {(yyval.ival) = DIV_ASSIGN;}
    break;

  case 85:
#line 220 "parser.y"
    {(yyval.ival) = MOD_ASSIGN;}
    break;

  case 86:
#line 223 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) + (yyvsp[(3) - (3)].dval);}
    break;

  case 87:
#line 224 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) - (yyvsp[(3) - (3)].dval);}
    break;

  case 88:
#line 225 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (3)].dval) * (yyvsp[(3) - (3)].dval);}
    break;

  case 89:
#line 226 "parser.y"
    {(yyval.dval) = ((yyvsp[(3) - (3)].dval) == 0) ? yyerror("Divide by 0!") : ((yyvsp[(1) - (3)].dval) / (yyvsp[(3) - (3)].dval));}
    break;

  case 90:
#line 227 "parser.y"
    {(yyval.dval) = (int)(yyvsp[(1) - (3)].dval) % (int)(yyvsp[(3) - (3)].dval);}
    break;

  case 91:
#line 228 "parser.y"
    {(yyval.dval) = (yyvsp[(2) - (3)].dval);}
    break;

  case 92:
#line 229 "parser.y"
    {(yyval.dval) = -(yyvsp[(2) - (2)].dval);}
    break;

  case 93:
#line 230 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].entry) -> value;}
    break;

  case 94:
#line 231 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval);}
    break;

  case 95:
#line 234 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval);}
    break;

  case 96:
#line 235 "parser.y"
    {(yyval.dval) = (yyvsp[(1) - (1)].dval);}
    break;


/* Line 1267 of yacc.c.  */
#line 1857 "y.tab.c"
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


#line 253 "parser.y"


#include "lex.yy.c"
#include <ctype.h>


double Evaluate (double lhs_value,int assign_type,double rhs_value)
{
	switch(assign_type)
	{
		case '=': return rhs_value;
		case ADD_ASSIGN: return (lhs_value + rhs_value);
		case SUB_ASSIGN: return (lhs_value - rhs_value);
		case MUL_ASSIGN: return (lhs_value * rhs_value);
		case DIV_ASSIGN: return (lhs_value / rhs_value);
		case MOD_ASSIGN: return ((int)lhs_value % (int)rhs_value);
	}
}

int main(int argc, char *argv[])
{
	symbol_table = create_table();
	constant_table = create_table();

	yyin = fopen(argv[1], "r");

	if(!yyparse())
	{
		printf("\nParsing complete\n");
	}
	else
	{
			printf("\nParsing failed\n");
	}


	printf("\n\tSymbol table");
	display(symbol_table);


	fclose(yyin);
	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
}
