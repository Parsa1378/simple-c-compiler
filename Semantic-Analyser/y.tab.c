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
     CHAR_CONSTANT = 261,
     FLOAT_CONSTANT = 262,
     STRING = 263,
     LOGICAL_AND = 264,
     LOGICAL_OR = 265,
     LS_EQ = 266,
     GR_EQ = 267,
     EQ = 268,
     NOT_EQ = 269,
     MUL_ASSIGN = 270,
     DIV_ASSIGN = 271,
     MOD_ASSIGN = 272,
     ADD_ASSIGN = 273,
     SUB_ASSIGN = 274,
     INCREMENT = 275,
     DECREMENT = 276,
     SHORT = 277,
     INT = 278,
     LONG = 279,
     LONG_LONG = 280,
     SIGNED = 281,
     UNSIGNED = 282,
     CONST = 283,
     VOID = 284,
     CHAR = 285,
     FLOAT = 286,
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
#define CHAR_CONSTANT 261
#define FLOAT_CONSTANT 262
#define STRING 263
#define LOGICAL_AND 264
#define LOGICAL_OR 265
#define LS_EQ 266
#define GR_EQ 267
#define EQ 268
#define NOT_EQ 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define INCREMENT 275
#define DECREMENT 276
#define SHORT 277
#define INT 278
#define LONG 279
#define LONG_LONG 280
#define SIGNED 281
#define UNSIGNED 282
#define CONST 283
#define VOID 284
#define CHAR 285
#define FLOAT 286
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
	int yyerror(char *msg);

	#include "symboltable.h"
	#include "lex.yy.c"

	#define SYMBOL_TABLE symbol_table_list[current_scope].symbol_table

  extern entry_t** constant_table;

	int current_dtype;

	table_t symbol_table_list[NUM_TABLES];

	int is_declaration = 0;
	int is_loop = 0;
	int is_func = 0;
	int func_type;

	int param_list[10];
	int p_idx = 0;
	int p=0;
    int rhs = 0;

	void type_check(int,int,int);


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
#line 31 "parser.y"
{
	int data_type;
	entry_t* entry;
}
/* Line 193 of yacc.c.  */
#line 210 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 223 "y.tab.c"

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

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
       0,     0,     3,     6,     8,    10,    12,    13,    14,    23,
      26,    28,    31,    33,    36,    38,    40,    42,    44,    47,
      49,    51,    54,    56,    59,    61,    63,    65,    67,    68,
      72,    74,    77,    79,    81,    82,    87,    90,    91,    93,
      95,    97,    99,   102,   105,   108,   111,   115,   116,   124,
     125,   134,   140,   148,   149,   156,   160,   163,   166,   170,
     172,   174,   176,   178,   181,   183,   187,   189,   193,   197,
     201,   205,   209,   213,   217,   221,   224,   226,   228,   230,
     234,   238,   242,   246,   250,   253,   256,   259,   262,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   284,   288,
     292,   296,   300,   304,   307,   309,   311,   313,   315,   317,
     319,   324,   326,   328,   333,   337,   341,   343,   345
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    59,    60,    -1,    60,    -1,    61,    -1,
      83,    -1,    -1,    -1,    64,    92,    62,    51,    69,    52,
      63,    73,    -1,    66,    65,    -1,    66,    -1,    44,    65,
      -1,    44,    -1,    67,    68,    -1,    68,    -1,    26,    -1,
      27,    -1,    23,    -1,    22,    23,    -1,    22,    -1,    24,
      -1,    24,    23,    -1,    25,    -1,    25,    23,    -1,    30,
      -1,    31,    -1,    29,    -1,    70,    -1,    -1,    70,    38,
      71,    -1,    71,    -1,    64,    92,    -1,    73,    -1,    76,
      -1,    -1,    53,    74,    75,    54,    -1,    75,    72,    -1,
      -1,    80,    -1,    77,    -1,    81,    -1,    83,    -1,    98,
      55,    -1,    37,    55,    -1,    35,    55,    -1,    36,    55,
      -1,    37,    88,    55,    -1,    -1,    33,    51,    86,    86,
      52,    78,    72,    -1,    -1,    33,    51,    86,    86,    87,
      52,    79,    72,    -1,    32,    51,    87,    52,    72,    -1,
      32,    51,    87,    52,    72,    50,    72,    -1,    -1,    34,
      51,    87,    52,    82,    72,    -1,    64,    84,    55,    -1,
      84,    55,    -1,    90,    55,    -1,    84,    38,    85,    -1,
      85,    -1,    89,    -1,    92,    -1,    96,    -1,    87,    55,
      -1,    55,    -1,    87,    38,    88,    -1,    88,    -1,    88,
      41,    88,    -1,    88,    40,    88,    -1,    88,    13,    88,
      -1,    88,    14,    88,    -1,    88,    11,    88,    -1,    88,
      12,    88,    -1,    88,     9,    88,    -1,    88,    10,    88,
      -1,    47,    88,    -1,    94,    -1,    89,    -1,    90,    -1,
      91,    93,    94,    -1,    91,    93,    96,    -1,    91,    93,
      98,    -1,    91,    93,    90,    -1,    90,    93,    90,    -1,
      92,    20,    -1,    92,    21,    -1,    21,    92,    -1,    20,
      92,    -1,    92,    -1,    96,    -1,     3,    -1,    39,    -1,
      18,    -1,    19,    -1,    15,    -1,    16,    -1,    17,    -1,
      94,    42,    94,    -1,    94,    43,    94,    -1,    94,    44,
      94,    -1,    94,    45,    94,    -1,    94,    46,    94,    -1,
      51,    94,    52,    -1,    43,    94,    -1,    92,    -1,    95,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,    92,
      56,    97,    57,    -1,    95,    -1,    92,    -1,    92,    51,
      99,    52,    -1,    92,    51,    52,    -1,    99,    38,   100,
      -1,   100,    -1,    88,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    87,    90,    91,    96,   102,    95,   116,
     118,   122,   123,   126,   127,   130,   131,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   148,   149,   152,
     153,   157,   161,   162,   167,   167,   177,   178,   182,   183,
     184,   185,   186,   187,   196,   197,   199,   209,   209,   210,
     210,   213,   214,   217,   217,   220,   222,   223,   226,   227,
     230,   231,   232,   236,   237,   240,   241,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   261,
     262,   263,   264,   265,   268,   269,   270,   271,   273,   274,
     277,   293,   294,   295,   296,   297,   298,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   312,   313,   314,   315,
     318,   349,   350,   353,   359,   367,   368,   371,   372
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "DEC_CONSTANT",
  "HEX_CONSTANT", "CHAR_CONSTANT", "FLOAT_CONSTANT", "STRING",
  "LOGICAL_AND", "LOGICAL_OR", "LS_EQ", "GR_EQ", "EQ", "NOT_EQ",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "INCREMENT", "DECREMENT", "SHORT", "INT", "LONG", "LONG_LONG", "SIGNED",
  "UNSIGNED", "CONST", "VOID", "CHAR", "FLOAT", "IF", "FOR", "WHILE",
  "CONTINUE", "BREAK", "RETURN", "','", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "UMINUS", "LOWER_THAN_ELSE", "ELSE", "'('",
  "')'", "'{'", "'}'", "';'", "'['", "']'", "$accept", "starter",
  "builder", "function", "@1", "@2", "type", "pointer", "data_type",
  "sign_specifier", "type_specifier", "argument_list", "arguments", "arg",
  "stmt", "compound_stmt", "@3", "statements", "single_stmt", "for_block",
  "@4", "@5", "if_block", "while_block", "@6", "declaration",
  "declaration_list", "sub_decl", "expression_stmt", "expression",
  "sub_expr", "assignment_expr", "unary_expr", "lhs", "identifier",
  "assign_op", "arithmetic_expr", "constant", "array_access",
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
       0,    58,    59,    59,    60,    60,    62,    63,    61,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    70,
      70,    71,    72,    72,    74,    73,    75,    75,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    78,    77,    79,
      77,    80,    80,    82,    81,    83,    83,    83,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    91,    91,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      96,    97,    97,    98,    98,    99,    99,   100,   100
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     0,     0,     8,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     0,     3,
       1,     2,     1,     1,     0,     4,     2,     0,     1,     1,
       1,     1,     2,     2,     2,     2,     3,     0,     7,     0,
       8,     5,     7,     0,     6,     3,     2,     2,     3,     1,
       1,     1,     1,     2,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     4,     3,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    90,     0,     0,    19,    17,    20,    22,    15,    16,
      26,    24,    25,     0,     3,     4,     0,    10,     0,    14,
       5,     0,    59,    60,     0,     0,    88,    89,    87,    86,
      18,    21,    23,     1,     2,     0,     0,    88,    12,     9,
      13,     0,    56,    94,    95,    96,    92,    93,    91,    57,
       0,     0,    84,    85,     0,    55,     0,    11,    58,    83,
       0,   106,   107,   108,   109,     0,     0,    82,   104,    79,
     105,    80,    81,   112,   111,     0,    28,   104,   103,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,    27,
      30,   102,   118,     0,   114,   117,    77,    78,   104,    76,
      89,     0,   116,    97,    98,    99,   100,   101,    31,     7,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,    29,    73,    74,    71,    72,    69,    70,
      68,    67,   115,    34,     8,    37,     0,     0,     0,     0,
       0,     0,     0,    35,     0,    36,    32,    33,    39,    38,
      40,    41,    88,     0,     0,     0,     0,    44,    45,    43,
       0,    42,     0,    66,    64,     0,     0,     0,    46,     0,
       0,     0,    63,    53,    65,    51,    47,     0,     0,     0,
       0,    49,    54,    52,    48,     0,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    56,   122,   144,    39,    17,    18,
      19,    88,    89,    90,   145,   146,   135,   136,   147,   148,
     180,   185,   149,   150,   178,   151,    21,    22,   165,   166,
     163,    96,    97,    25,    98,    50,    99,    70,   100,    75,
     153,   101,   102
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -27
static const yytype_int16 yypact[] =
{
     416,   -27,    31,    31,    32,   -27,    44,    45,   -27,   -27,
     -27,   -27,   -27,   404,   -27,   -27,    37,    -5,   436,   -27,
     -27,   -13,   -27,   -27,   342,   225,   119,    86,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,    99,   225,   317,    -5,   -27,
     -27,    37,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
      37,   100,   -27,   -27,    72,   -27,     9,   -27,   -27,   -27,
      16,   -27,   -27,   -27,   -27,     2,     2,   -27,     8,   203,
     -27,   -27,   -27,   -27,   -27,    13,   426,   -27,   -27,   366,
     271,     2,     2,     2,     2,     2,   -27,    31,    19,    59,
     -27,   -27,   -27,   305,   -27,   376,   -27,   225,   315,   203,
     -27,   -26,   -27,   -14,   -14,   -27,   -27,   -27,   -27,   -27,
     426,   -27,   305,   305,   305,   305,   305,   305,   305,   305,
     296,   -27,    64,   -27,     7,   382,   -27,   -27,     3,     3,
     -27,   -27,   -27,   -27,   -27,   -27,   201,    68,    71,    77,
      98,   104,    95,   -27,    37,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   324,   109,   305,   105,   305,   -27,   -27,   -27,
     121,   -27,    34,   376,   -27,   105,   127,    75,   -27,   305,
     236,   277,   -27,   -27,   376,    73,   -27,   111,   236,   236,
     236,   -27,   -27,   -27,   -27,   236,   -27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -27,   -27,   154,   -27,   -27,   -27,     4,   130,   -27,   -27,
     165,   -27,   -27,    62,   235,    65,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,    10,   -15,   143,    21,    17,
     -24,    33,    11,   -27,     0,   168,   318,   140,    22,   -27,
     144,   -27,    78
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -89
static const yytype_int16 yytable[] =
{
      26,    35,    28,    29,    16,     1,    61,    62,    63,    64,
      20,    24,   120,    26,   114,   115,    37,    16,   114,   115,
     116,   117,    27,    20,    24,    41,   121,    36,    52,    53,
      83,    84,    85,    23,     1,    27,    52,    53,    27,    38,
       1,    26,    42,   118,   119,    65,    23,   118,   119,    23,
      60,    68,    36,    66,    73,    30,    95,     2,     3,    80,
      76,    59,    67,    27,    54,    77,    77,    31,    32,   111,
      86,   109,   169,    71,    23,     1,    61,    62,    63,    64,
      87,    77,    77,    77,    77,    77,   170,   108,   124,   125,
     126,   127,   128,   129,   130,   131,    95,   110,     1,    61,
      62,    63,    64,     1,    61,    62,    63,    64,     1,    61,
      62,    63,    64,   169,    87,     2,     3,   133,   160,   154,
       2,     3,   155,   179,   -62,     2,     3,   173,   156,    35,
     112,   113,   114,   115,   116,   117,   152,    41,    65,    52,
      53,   -62,    93,    65,    26,   174,    66,    24,    65,   169,
     159,    66,    93,   157,    55,    36,    66,   -61,    27,   158,
     164,   118,   119,   181,   161,   169,    27,    34,    57,    23,
     152,   162,   123,   167,   -61,    54,   168,    23,   152,   152,
     152,    24,   172,    40,    58,   152,   171,   134,   177,    24,
      24,    24,    27,    51,    74,    72,    24,     0,   132,     0,
      27,    27,    27,    23,     1,     0,     0,    27,     0,     0,
       0,    23,    23,    23,     0,     0,     0,     0,    23,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,     0,
      10,    11,    12,   137,   138,   139,   140,   141,   142,     1,
      43,    44,    45,    46,    47,    81,    82,    83,    84,    85,
       0,     0,     0,     0,   133,   143,     2,     3,     4,     5,
       6,     7,     8,     9,    48,    10,    11,    12,   137,   138,
     139,   140,   141,   142,     1,    61,    62,    63,    64,    92,
       1,    61,    62,    63,    64,     0,     0,     0,     0,   133,
       0,     2,     3,     0,     0,     0,     0,     2,     3,     1,
      61,    62,    63,    64,    92,     0,     0,     0,     1,    61,
      62,    63,    64,     0,    65,     0,     2,     3,    93,     0,
      65,     0,    66,    94,    93,     2,     3,     0,    66,   176,
     -88,   -88,   -88,   -88,   -88,    52,    53,    52,    53,    65,
       0,     0,     0,    93,    52,    53,     0,    66,    65,     0,
       0,     0,    93,     0,   -88,   -61,    66,    43,    44,    45,
      46,    47,   -61,     0,     0,     0,     0,     0,    -6,    69,
       0,    54,   -61,    54,     0,    80,     0,     0,     0,   -61,
      54,    48,     0,    78,    79,   112,   113,   114,   115,   116,
     117,   112,     0,   114,   115,   116,   117,    49,     0,   103,
     104,   105,   106,   107,    33,   175,     0,     1,    81,    82,
      83,    84,    85,   182,   183,   184,   118,   119,    91,     1,
     186,     0,   118,   119,     2,     3,     4,     5,     6,     7,
       8,     9,     0,    10,    11,    12,     2,     3,     4,     5,
       6,     7,     8,     9,     0,    10,    11,    12,     4,     5,
       6,     7,     8,     9,     0,    10,    11,    12,     4,     5,
       6,     7,     0,     0,     0,    10,    11,    12
};

static const yytype_int16 yycheck[] =
{
       0,    16,     2,     3,     0,     3,     4,     5,     6,     7,
       0,     0,    38,    13,    11,    12,    16,    13,    11,    12,
      13,    14,     0,    13,    13,    38,    52,    16,    20,    21,
      44,    45,    46,     0,     3,    13,    20,    21,    16,    44,
       3,    41,    55,    40,    41,    43,    13,    40,    41,    16,
      50,    51,    41,    51,    54,    23,    80,    20,    21,    51,
      51,    50,    51,    41,    56,    65,    66,    23,    23,    93,
      57,    52,    38,    51,    41,     3,     4,     5,     6,     7,
      76,    81,    82,    83,    84,    85,    52,    87,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    38,     3,     4,
       5,     6,     7,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    38,   110,    20,    21,    53,   142,    51,
      20,    21,    51,    50,    38,    20,    21,    52,    51,   144,
       9,    10,    11,    12,    13,    14,   136,    38,    43,    20,
      21,    55,    47,    43,   144,   169,    51,   136,    43,    38,
      55,    51,    47,    55,    55,   144,    51,    38,   136,    55,
      55,    40,    41,    52,    55,    38,   144,    13,    38,   136,
     170,   154,   110,   156,    55,    56,    55,   144,   178,   179,
     180,   170,    55,    18,    41,   185,   165,   122,   171,   178,
     179,   180,   170,    25,    54,    51,   185,    -1,   120,    -1,
     178,   179,   180,   170,     3,    -1,    -1,   185,    -1,    -1,
      -1,   178,   179,   180,    -1,    -1,    -1,    -1,   185,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,     3,
      15,    16,    17,    18,    19,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    53,    54,    20,    21,    22,    23,
      24,    25,    26,    27,    39,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     3,     4,     5,     6,     7,     8,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    53,
      -1,    20,    21,    -1,    -1,    -1,    -1,    20,    21,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    43,    -1,    20,    21,    47,    -1,
      43,    -1,    51,    52,    47,    20,    21,    -1,    51,    52,
      15,    16,    17,    18,    19,    20,    21,    20,    21,    43,
      -1,    -1,    -1,    47,    20,    21,    -1,    51,    43,    -1,
      -1,    -1,    47,    -1,    39,    38,    51,    15,    16,    17,
      18,    19,    38,    -1,    -1,    -1,    -1,    -1,    51,    51,
      -1,    56,    55,    56,    -1,    51,    -1,    -1,    -1,    55,
      56,    39,    -1,    65,    66,     9,    10,    11,    12,    13,
      14,     9,    -1,    11,    12,    13,    14,    55,    -1,    81,
      82,    83,    84,    85,     0,   170,    -1,     3,    42,    43,
      44,    45,    46,   178,   179,   180,    40,    41,    52,     3,
     185,    -1,    40,    41,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    31,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    22,    23,
      24,    25,    -1,    -1,    -1,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    20,    21,    22,    23,    24,    25,    26,    27,
      29,    30,    31,    59,    60,    61,    64,    66,    67,    68,
      83,    84,    85,    89,    90,    91,    92,    96,    92,    92,
      23,    23,    23,     0,    60,    84,    90,    92,    44,    65,
      68,    38,    55,    15,    16,    17,    18,    19,    39,    55,
      93,    93,    20,    21,    56,    55,    62,    65,    85,    90,
      92,     4,     5,     6,     7,    43,    51,    90,    92,    94,
      95,    96,    98,    92,    95,    97,    51,    92,    94,    94,
      51,    42,    43,    44,    45,    46,    57,    64,    69,    70,
      71,    52,     8,    47,    52,    88,    89,    90,    92,    94,
      96,    99,   100,    94,    94,    94,    94,    94,    92,    52,
      38,    88,     9,    10,    11,    12,    13,    14,    40,    41,
      38,    52,    63,    71,    88,    88,    88,    88,    88,    88,
      88,    88,   100,    53,    73,    74,    75,    32,    33,    34,
      35,    36,    37,    54,    64,    72,    73,    76,    77,    80,
      81,    83,    92,    98,    51,    51,    51,    55,    55,    55,
      88,    55,    87,    88,    55,    86,    87,    87,    55,    38,
      52,    86,    55,    52,    88,    72,    52,    87,    82,    50,
      78,    52,    72,    72,    72,    79,    72
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
        case 6:
#line 96 "parser.y"
    {
																						func_type = current_dtype;
																						is_declaration = 0;
																						current_scope = create_new_scope();
																					}
    break;

  case 7:
#line 102 "parser.y"
    {
																						is_declaration = 0;
																						fill_parameter_list((yyvsp[(2) - (6)].entry),param_list,p_idx);
																						p_idx = 0;
																						is_func = 1;
																						p=1;
																					}
    break;

  case 8:
#line 110 "parser.y"
    {
																						is_func = 0;
																					}
    break;

  case 9:
#line 117 "parser.y"
    {is_declaration = 1; }
    break;

  case 10:
#line 119 "parser.y"
    {is_declaration = 1; }
    break;

  case 17:
#line 134 "parser.y"
    {current_dtype = INT;}
    break;

  case 18:
#line 135 "parser.y"
    {current_dtype = SHORT;}
    break;

  case 19:
#line 136 "parser.y"
    {current_dtype = SHORT;}
    break;

  case 20:
#line 137 "parser.y"
    {current_dtype = LONG;}
    break;

  case 21:
#line 138 "parser.y"
    {current_dtype = LONG;}
    break;

  case 22:
#line 139 "parser.y"
    {current_dtype = LONG_LONG;}
    break;

  case 23:
#line 140 "parser.y"
    {current_dtype = LONG_LONG;}
    break;

  case 24:
#line 141 "parser.y"
    {current_dtype = CHAR;}
    break;

  case 25:
#line 142 "parser.y"
    {current_dtype = FLOAT;}
    break;

  case 26:
#line 143 "parser.y"
    {current_dtype = VOID;}
    break;

  case 31:
#line 157 "parser.y"
    {param_list[p_idx++] = (yyvsp[(2) - (2)].entry)->data_type;}
    break;

  case 34:
#line 167 "parser.y"
    {
																		if(!p)current_scope = create_new_scope();
																		else p = 0;
																}
    break;

  case 35:
#line 174 "parser.y"
    {current_scope = exit_scope();}
    break;

  case 43:
#line 187 "parser.y"
    {
																	if(is_func)
																	{
																		if(func_type != VOID)
																			yyerror("return type (VOID) does not match function type");
																	}
																  else yyerror("return statement not inside function definition");
																}
    break;

  case 44:
#line 196 "parser.y"
    {if(!is_loop) {yyerror("Illegal use of continue");}}
    break;

  case 45:
#line 197 "parser.y"
    {if(!is_loop) {yyerror("Illegal use of break");}}
    break;

  case 46:
#line 199 "parser.y"
    {
																	if(is_func)
																	{
																		if(func_type != (yyvsp[(2) - (3)].data_type))
																			yyerror("return type does not match function type");
																	}
																	else yyerror("return statement not in function definition");
															 }
    break;

  case 47:
#line 209 "parser.y"
    {is_loop = 1;}
    break;

  case 48:
#line 209 "parser.y"
    {is_loop = 0;}
    break;

  case 49:
#line 210 "parser.y"
    {is_loop = 1;}
    break;

  case 50:
#line 210 "parser.y"
    {is_loop = 0;}
    break;

  case 53:
#line 217 "parser.y"
    {is_loop = 1;}
    break;

  case 54:
#line 217 "parser.y"
    {is_loop = 0;}
    break;

  case 55:
#line 221 "parser.y"
    {is_declaration = 0; }
    break;

  case 67:
#line 245 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type);}
    break;

  case 68:
#line 246 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type);}
    break;

  case 69:
#line 247 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type);}
    break;

  case 70:
#line 248 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type);}
    break;

  case 71:
#line 249 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type);}
    break;

  case 72:
#line 250 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type);}
    break;

  case 73:
#line 251 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type);}
    break;

  case 74:
#line 252 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),2); (yyval.data_type) = (yyvsp[(1) - (3)].data_type);}
    break;

  case 75:
#line 253 "parser.y"
    {(yyval.data_type) = (yyvsp[(2) - (2)].data_type);}
    break;

  case 76:
#line 254 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].data_type);}
    break;

  case 77:
#line 255 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].data_type);}
    break;

  case 78:
#line 256 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].data_type);}
    break;

  case 79:
#line 261 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type); rhs=0;}
    break;

  case 80:
#line 262 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type);rhs=0;}
    break;

  case 81:
#line 263 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type);rhs=0;}
    break;

  case 82:
#line 264 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type);rhs=0;}
    break;

  case 83:
#line 265 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),1); (yyval.data_type) = (yyvsp[(3) - (3)].data_type);rhs=0;}
    break;

  case 84:
#line 268 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (2)].entry)->data_type;}
    break;

  case 85:
#line 269 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (2)].entry)->data_type;}
    break;

  case 86:
#line 270 "parser.y"
    {(yyval.data_type) = (yyvsp[(2) - (2)].entry)->data_type;}
    break;

  case 87:
#line 271 "parser.y"
    {(yyval.data_type) = (yyvsp[(2) - (2)].entry)->data_type;}
    break;

  case 88:
#line 273 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].entry)->data_type;}
    break;

  case 89:
#line 274 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].data_type);}
    break;

  case 90:
#line 277 "parser.y"
    {
                                                                    if(is_declaration
                                                                    && !rhs) 
                                                                    {
                                                                        (yyvsp[(1) - (1)].entry) = insert(SYMBOL_TABLE,yytext,INT_MAX,current_dtype);
                                                                        if((yyvsp[(1) - (1)].entry) == NULL) yyerror("Redeclaration of variable");
                                                                    }
                                                                    else
                                                                    {
                                                                        (yyvsp[(1) - (1)].entry) = search_recursive(yytext);
                                                                        if((yyvsp[(1) - (1)].entry) == NULL) yyerror("Variable not declared");
                                                                    }
                                                                    (yyval.entry) = (yyvsp[(1) - (1)].entry);
                                                            }
    break;

  case 91:
#line 293 "parser.y"
    {rhs=1;}
    break;

  case 92:
#line 294 "parser.y"
    {rhs=1;}
    break;

  case 93:
#line 295 "parser.y"
    {rhs=1;}
    break;

  case 94:
#line 296 "parser.y"
    {rhs=1;}
    break;

  case 95:
#line 297 "parser.y"
    {rhs=1;}
    break;

  case 96:
#line 298 "parser.y"
    {rhs=1;}
    break;

  case 97:
#line 301 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0);}
    break;

  case 98:
#line 302 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0);}
    break;

  case 99:
#line 303 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0);}
    break;

  case 100:
#line 304 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0);}
    break;

  case 101:
#line 305 "parser.y"
    {type_check((yyvsp[(1) - (3)].data_type),(yyvsp[(3) - (3)].data_type),0);}
    break;

  case 102:
#line 306 "parser.y"
    {(yyval.data_type) = (yyvsp[(2) - (3)].data_type);}
    break;

  case 103:
#line 307 "parser.y"
    {(yyval.data_type) = (yyvsp[(2) - (2)].data_type);}
    break;

  case 104:
#line 308 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].entry)->data_type;}
    break;

  case 105:
#line 309 "parser.y"
    {(yyval.data_type) = (yyvsp[(1) - (1)].entry)->data_type;}
    break;

  case 106:
#line 312 "parser.y"
    {(yyvsp[(1) - (1)].entry)->is_constant=1; (yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 107:
#line 313 "parser.y"
    {(yyvsp[(1) - (1)].entry)->is_constant=1; (yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 108:
#line 314 "parser.y"
    {(yyvsp[(1) - (1)].entry)->is_constant=1; (yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 109:
#line 315 "parser.y"
    {(yyvsp[(1) - (1)].entry)->is_constant=1; (yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 110:
#line 318 "parser.y"
    {
																															if(is_declaration)
																															{
																																if((yyvsp[(3) - (4)].entry)->value <= 0)
																																	yyerror("size of array is not positive");

																																else
                                                                                                                                if((yyvsp[(3) - (4)].entry)->is_constant && !rhs)
																																	(yyvsp[(1) - (4)].entry)->array_dimension = (yyvsp[(3) - (4)].entry)->value;
																																	else if(rhs){
																																	{
																																if((yyvsp[(3) - (4)].entry)->value > (yyvsp[(1) - (4)].entry)->array_dimension)
																																	yyerror("Array index out of bound");

																																if((yyvsp[(3) - (4)].entry)->value < 0)
																																	yyerror("Array index cannot be negative");
																															}
																															}
																															}

																															else if((yyvsp[(3) - (4)].entry)->is_constant)
																															{
																																if((yyvsp[(3) - (4)].entry)->value > (yyvsp[(1) - (4)].entry)->array_dimension)
																																	yyerror("Array index out of bound");

																																if((yyvsp[(3) - (4)].entry)->value < 0)
																																	yyerror("Array index cannot be negative");
																															}
																															(yyval.data_type) = (yyvsp[(1) - (4)].entry)->data_type;
																														}
    break;

  case 111:
#line 349 "parser.y"
    {(yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 112:
#line 350 "parser.y"
    {(yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 113:
#line 353 "parser.y"
    {
																													(yyval.data_type) = (yyvsp[(1) - (4)].entry)->data_type;
																													check_parameter_list((yyvsp[(1) - (4)].entry),param_list,p_idx);
																													p_idx = 0;
																												}
    break;

  case 114:
#line 359 "parser.y"
    {
							 																						 (yyval.data_type) = (yyvsp[(1) - (3)].entry)->data_type;
																													 check_parameter_list((yyvsp[(1) - (3)].entry),param_list,p_idx);
																													 p_idx = 0;
																												}
    break;

  case 117:
#line 371 "parser.y"
    {param_list[p_idx++] = (yyvsp[(1) - (1)].data_type);}
    break;

  case 118:
#line 372 "parser.y"
    {param_list[p_idx++] = STRING;}
    break;


/* Line 1267 of yacc.c.  */
#line 2132 "y.tab.c"
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


#line 374 "parser.y"


void type_check(int left, int right, int flag)
{
	if(left != right)
	{
		switch(flag)
		{
			case 0: yyerror("Type mismatch in arithmetic expression"); break;
			case 1: yyerror("Type mismatch in assignment expression"); break;
			case 2: yyerror("Type mismatch in logical expression"); break;
		}
	}
}

int main(int argc, char *argv[])
{
	 int i;
	 for(i=0; i<NUM_TABLES;i++)
	 {
	  symbol_table_list[i].symbol_table = NULL;
	  symbol_table_list[i].parent = -1;
	 }

	constant_table = create_table();
  symbol_table_list[0].symbol_table = create_table();
	yyin = fopen(argv[1], "r");

	if(!yyparse())
	{
		printf("\nPARSING COMPLETE\n\n\n");
	}
	else
	{
			printf("\nPARSING FAILED!\n\n\n");
	}


	printf("SYMBOL TABLES\n\n");
	display_all();

	printf("CONSTANT TABLE");
	display_constant_table(constant_table);


	fclose(yyin);
	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
	exit(0);
}
