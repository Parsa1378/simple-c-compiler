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
     CHAR_STAR = 287,
     IF = 288,
     FOR = 289,
     WHILE = 290,
     CONTINUE = 291,
     BREAK = 292,
     RETURN = 293,
     UMINUS = 294,
     LOWER_THAN_ELSE = 295,
     ELSE = 296
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
#define CHAR_STAR 287
#define IF 288
#define FOR 289
#define WHILE 290
#define CONTINUE 291
#define BREAK 292
#define RETURN 293
#define UMINUS 294
#define LOWER_THAN_ELSE 295
#define ELSE 296




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

	#include <bits/stdc++.h>
	#include "symboltable.h"
	#include "lex.yy.c"

	using namespace std;

	int yyerror(char *msg);

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
	vector<int> merge(vector<int>& v1, vector<int>& v2);
	void backpatch(vector<int>&, int);
	void gencode(string);
	void gencode_math(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op);
	void gencode_rel(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op);
	void printlist(vector<int>);

	int nextinstr = 0;
	int temp_var_number = 0;

	vector<string> ICG;



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
#line 44 "parser.y"
{
	int data_type;
	entry_t* entry;
	content_t* content;
	string* op;
	vector<int>* nextlist;
	int instr;
}
/* Line 193 of yacc.c.  */
#line 229 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 242 "y.tab.c"

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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   456

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,     2,     2,    47,     2,     2,
      52,    53,    45,    43,    39,    44,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    56,
      41,    40,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      35,    36,    37,    38,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    13,    14,    23,
      26,    28,    31,    33,    36,    38,    40,    42,    44,    47,
      49,    51,    54,    56,    59,    61,    63,    65,    67,    69,
      70,    74,    76,    79,    81,    83,    84,    89,    93,    94,
      96,    98,   100,   102,   105,   108,   111,   114,   118,   119,
     120,   134,   141,   152,   153,   154,   164,   168,   171,   174,
     178,   180,   182,   184,   186,   189,   191,   195,   197,   201,
     205,   209,   213,   217,   221,   226,   231,   234,   236,   238,
     240,   244,   248,   252,   256,   260,   263,   266,   269,   272,
     274,   276,   278,   280,   282,   284,   286,   288,   290,   294,
     298,   302,   306,   310,   314,   317,   319,   321,   323,   325,
     327,   329,   334,   336,   338,   343,   347,   351,   353,   355,
     357,   358
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    60,    61,    -1,    61,    -1,    62,    -1,
      85,    -1,    -1,    -1,    65,    94,    63,    52,    70,    53,
      64,    74,    -1,    67,    66,    -1,    67,    -1,    45,    66,
      -1,    45,    -1,    68,    69,    -1,    69,    -1,    26,    -1,
      27,    -1,    23,    -1,    22,    23,    -1,    22,    -1,    24,
      -1,    24,    23,    -1,    25,    -1,    25,    23,    -1,    30,
      -1,    31,    -1,    29,    -1,    32,    -1,    71,    -1,    -1,
      71,    39,    72,    -1,    72,    -1,    65,    94,    -1,    74,
      -1,    77,    -1,    -1,    54,    75,    76,    55,    -1,    76,
     103,    73,    -1,    -1,    81,    -1,    78,    -1,    82,    -1,
      85,    -1,   100,    56,    -1,    38,    56,    -1,    36,    56,
      -1,    37,    56,    -1,    38,    90,    56,    -1,    -1,    -1,
      34,    52,    88,   103,    88,   103,    89,    53,    79,   104,
     103,    73,    80,    -1,    33,    52,    89,    53,   103,    73,
      -1,    33,    52,    89,    53,   103,    73,    51,   104,   103,
      73,    -1,    -1,    -1,    35,   103,    52,    89,    53,   103,
      83,    73,    84,    -1,    65,    86,    56,    -1,    86,    56,
      -1,    92,    56,    -1,    86,    39,    87,    -1,    87,    -1,
      91,    -1,    94,    -1,    98,    -1,    89,    56,    -1,    56,
      -1,    89,    39,    90,    -1,    90,    -1,    90,    42,    90,
      -1,    90,    41,    90,    -1,    90,    13,    90,    -1,    90,
      14,    90,    -1,    90,    12,    90,    -1,    90,    11,    90,
      -1,    90,     9,   103,    90,    -1,    90,    10,   103,    90,
      -1,    48,    90,    -1,    96,    -1,    91,    -1,    92,    -1,
      93,    95,    96,    -1,    93,    95,    98,    -1,    93,    95,
     100,    -1,    93,    95,    92,    -1,    92,    95,    92,    -1,
      94,    20,    -1,    94,    21,    -1,    21,    94,    -1,    20,
      94,    -1,    94,    -1,    98,    -1,     3,    -1,    40,    -1,
      18,    -1,    19,    -1,    15,    -1,    16,    -1,    17,    -1,
      96,    43,    96,    -1,    96,    44,    96,    -1,    96,    45,
      96,    -1,    96,    46,    96,    -1,    96,    47,    96,    -1,
      52,    96,    53,    -1,    44,    96,    -1,    94,    -1,    97,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,    94,
      57,    99,    58,    -1,    97,    -1,    94,    -1,    94,    52,
     101,    53,    -1,    94,    52,    53,    -1,   101,    39,   102,
      -1,   102,    -1,    90,    -1,     8,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   123,   124,   129,   137,   128,   151,
     152,   155,   156,   159,   160,   163,   164,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   182,   183,
     186,   187,   191,   198,   199,   206,   204,   222,   230,   234,
     240,   246,   251,   252,   253,   262,   270,   277,   288,   288,
     288,   301,   310,   323,   323,   323,   334,   335,   336,   339,
     340,   343,   344,   345,   349,   356,   359,   365,   375,   381,
     388,   395,   402,   409,   416,   426,   436,   444,   450,   455,
     463,   473,   483,   490,   500,   512,   520,   528,   536,   544,
     545,   548,   567,   568,   569,   570,   571,   572,   575,   583,
     591,   599,   607,   615,   623,   633,   640,   648,   649,   650,
     651,   654,   681,   682,   685,   693,   703,   704,   707,   712,
     719,   722
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
  "UNSIGNED", "CONST", "VOID", "CHAR", "FLOAT", "CHAR_STAR", "IF", "FOR",
  "WHILE", "CONTINUE", "BREAK", "RETURN", "','", "'='", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "UMINUS", "LOWER_THAN_ELSE",
  "ELSE", "'('", "')'", "'{'", "'}'", "';'", "'['", "']'", "$accept",
  "starter", "builder", "function", "@1", "@2", "type", "pointer",
  "data_type", "sign_specifier", "type_specifier", "argument_list",
  "arguments", "arg", "stmt", "compound_stmt", "@3", "statements",
  "single_stmt", "for_block", "@4", "@5", "if_block", "while_block", "@6",
  "@7", "declaration", "declaration_list", "sub_decl", "expression_stmt",
  "expression", "sub_expr", "assignment_expr", "unary_expr", "lhs",
  "identifier", "assign", "arithmetic_expr", "constant", "array_access",
  "array_index", "function_call", "parameter_list", "parameter", "M", "N", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    44,
      61,    60,    62,    43,    45,    42,    47,    37,    33,   294,
     295,   296,    40,    41,   123,   125,    59,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    63,    64,    62,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    73,    73,    75,    74,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    79,    80,
      78,    81,    81,    83,    84,    82,    85,    85,    85,    86,
      86,    87,    87,    87,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    93,
      93,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    97,
      97,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     0,     0,     8,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     0,
       3,     1,     2,     1,     1,     0,     4,     3,     0,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     0,     0,
      13,     6,    10,     0,     0,     9,     3,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     4,     4,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     4,     3,     3,     1,     1,     1,
       0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    91,     0,     0,    19,    17,    20,    22,    15,    16,
      26,    24,    25,    27,     0,     3,     4,     0,    10,     0,
      14,     5,     0,    60,    61,     0,     0,    89,    90,    88,
      87,    18,    21,    23,     1,     2,     0,     0,    89,    12,
       9,    13,     0,    57,    95,    96,    97,    93,    94,    92,
      58,     0,     0,    85,    86,     0,    56,     0,    11,    59,
      84,     0,   107,   108,   109,   110,     0,     0,    83,   105,
      80,   106,    81,    82,   113,   112,     0,    29,   105,   104,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
      28,    31,   103,   119,     0,   115,   118,    78,    79,   105,
      77,    90,     0,   117,    98,    99,   100,   101,   102,    32,
       7,     0,    76,   120,   120,     0,     0,     0,     0,     0,
       0,     0,   114,     0,    30,     0,     0,    73,    72,    70,
      71,    69,    68,   116,    35,     8,    74,    75,    38,   120,
      36,     0,     0,     0,   120,     0,     0,     0,     0,    37,
      33,    34,    40,    39,    41,    42,    89,     0,     0,     0,
       0,    45,    46,    44,     0,    43,     0,    67,    65,   120,
       0,     0,    47,     0,   120,     0,    64,     0,    66,     0,
     120,   120,    51,     0,    53,   121,     0,     0,   120,    48,
      54,     0,   121,    55,    52,   120,     0,    49,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    57,   123,   148,    40,    18,    19,
      20,    89,    90,    91,   149,   150,   138,   139,   151,   152,
     192,   198,   153,   154,   187,   193,   155,    22,    23,   169,
     170,   167,    97,    98,    26,    99,    51,   100,    71,   101,
      76,   157,   102,   103,   125,   188
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -135
static const yytype_int16 yypact[] =
{
     389,  -135,    10,    10,    -7,  -135,    11,    18,  -135,  -135,
    -135,  -135,  -135,  -135,   376,  -135,  -135,    44,     8,   419,
    -135,  -135,   -34,  -135,  -135,   291,   407,    23,   -24,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,    17,   407,   132,     8,
    -135,  -135,    44,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,    44,   334,  -135,  -135,   378,  -135,    22,  -135,  -135,
    -135,     5,  -135,  -135,  -135,  -135,    24,    24,  -135,    57,
     409,  -135,  -135,  -135,  -135,  -135,    -8,   405,  -135,  -135,
     327,   272,    24,    24,    24,    24,    24,  -135,    10,    16,
      53,  -135,  -135,  -135,   284,  -135,   347,  -135,   407,   118,
     409,  -135,     7,  -135,   136,   136,  -135,  -135,  -135,  -135,
    -135,   405,  -135,  -135,  -135,   284,   284,   284,   284,   284,
     284,   278,  -135,    59,  -135,   284,   284,  -135,  -135,    79,
      79,  -135,  -135,  -135,  -135,  -135,   301,   353,  -135,    52,
    -135,   220,    65,    66,  -135,    67,    84,   124,    44,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,   174,    86,   284,   215,
      91,  -135,  -135,  -135,    -2,  -135,    48,   347,  -135,  -135,
      50,   284,  -135,   284,  -135,   215,  -135,    63,   347,   220,
    -135,  -135,    95,   284,  -135,  -135,    69,   220,  -135,  -135,
    -135,   220,  -135,  -135,  -135,  -135,   220,  -135,  -135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,   141,  -135,  -135,  -135,     4,   111,  -135,  -135,
     137,  -135,  -135,    54,   -30,    36,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,   110,   -16,   121,   -11,
    -134,   -22,    21,     6,  -135,     0,   144,   267,   119,    19,
    -135,   125,  -135,    71,   -69,   -19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -90
static const yytype_int16 yytable[] =
{
      27,    36,    29,    30,    17,    42,    25,   113,   114,   115,
     116,   117,   118,     1,    27,   -63,    31,    38,    17,    28,
      25,    24,    43,    37,   166,    53,    54,     1,    62,    63,
      64,    65,   -63,    28,    32,    24,    28,   177,    24,   119,
     120,    33,    27,    53,    54,   126,   121,     1,    37,   186,
      87,    61,    69,    39,   172,    74,    42,    60,    68,    96,
     122,    28,   -62,    24,     2,     3,    78,    78,    66,   110,
     141,    72,   112,    56,    77,   160,    67,    53,    54,   -62,
      55,    88,    78,    78,    78,    78,    78,   173,   109,   173,
     115,   116,   111,   127,   128,   129,   130,   131,   132,    96,
     175,   174,   173,   136,   137,   179,   176,   140,   173,    81,
      21,   183,   184,   134,    55,    88,   181,   158,   159,   191,
     119,   120,   189,   161,    21,   164,   196,     1,    62,    63,
      64,    65,    36,   -89,   -89,   -89,   -89,   -89,    53,    54,
     162,   156,   165,   171,     2,     3,   185,    25,    27,   182,
      58,   178,    53,    54,    37,    35,    41,   190,   -89,   135,
      28,   194,    24,    59,   180,   124,   197,    28,    66,    24,
      52,   -62,    94,   195,    75,    55,    67,    73,     0,   156,
     163,    84,    85,    86,    -6,    25,     0,   156,   -62,    55,
       0,   156,   133,    25,    53,    54,   156,    25,    28,     0,
      24,     0,    25,     0,     0,     0,    28,     0,    24,     0,
      28,     0,    24,   -62,     0,    28,     0,    24,     1,    62,
      63,    64,    65,     1,     0,     0,    81,     0,     0,     0,
     -62,    55,     0,     0,     0,     2,     3,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,     0,    10,
      11,    12,    13,   142,   143,   144,   145,   146,   147,    66,
       0,     0,     0,    94,     0,     0,     0,    67,     0,     0,
       0,   168,     0,     0,   134,     1,    62,    63,    64,    65,
      93,     1,    62,    63,    64,    65,    93,     1,    62,    63,
      64,    65,     2,     3,     0,     0,     0,     0,     2,     3,
       0,     0,     0,     0,     2,     3,    44,    45,    46,    47,
      48,     0,   115,   116,   117,   118,    66,     0,     0,    70,
      94,     0,    66,     0,    67,    95,    94,     0,    66,     0,
      67,    49,    94,    79,    80,     0,    67,     1,    62,    63,
      64,    65,   119,   120,     0,     0,     0,    50,     0,   104,
     105,   106,   107,   108,     2,     3,   113,   114,   115,   116,
     117,   118,   113,     0,   115,   116,   117,   118,     0,     0,
      82,    83,    84,    85,    86,     0,    34,     0,    66,     1,
      92,     1,    62,    63,    64,    65,    67,     0,   119,   120,
       0,     0,     1,     0,   119,   120,     2,     3,     4,     5,
       6,     7,     8,     9,     0,    10,    11,    12,    13,     2,
       3,     4,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,    44,    45,    46,    47,    48,     4,     5,     6,
       7,     8,     9,     0,    10,    11,    12,    13,     0,     0,
       0,     4,     5,     6,     7,     0,     0,    49,    10,    11,
      12,    13,    82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
       0,    17,     2,     3,     0,    39,     0,     9,    10,    11,
      12,    13,    14,     3,    14,    39,    23,    17,    14,     0,
      14,     0,    56,    17,   158,    20,    21,     3,     4,     5,
       6,     7,    56,    14,    23,    14,    17,   171,    17,    41,
      42,    23,    42,    20,    21,   114,    39,     3,    42,   183,
      58,    51,    52,    45,    56,    55,    39,    51,    52,    81,
      53,    42,    39,    42,    20,    21,    66,    67,    44,    53,
     139,    52,    94,    56,    52,   144,    52,    20,    21,    56,
      57,    77,    82,    83,    84,    85,    86,    39,    88,    39,
      11,    12,    39,   115,   116,   117,   118,   119,   120,   121,
     169,    53,    39,   125,   126,   174,    56,    55,    39,    52,
       0,   180,   181,    54,    57,   111,    53,    52,    52,   188,
      41,    42,    53,    56,    14,   147,   195,     3,     4,     5,
       6,     7,   148,    15,    16,    17,    18,    19,    20,    21,
      56,   141,    56,    52,    20,    21,    51,   141,   148,   179,
      39,   173,    20,    21,   148,    14,    19,   187,    40,   123,
     141,   191,   141,    42,   175,   111,   196,   148,    44,   148,
      26,    39,    48,   192,    55,    57,    52,    52,    -1,   179,
      56,    45,    46,    47,    52,   179,    -1,   187,    56,    57,
      -1,   191,   121,   187,    20,    21,   196,   191,   179,    -1,
     179,    -1,   196,    -1,    -1,    -1,   187,    -1,   187,    -1,
     191,    -1,   191,    39,    -1,   196,    -1,   196,     3,     4,
       5,     6,     7,     3,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    44,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    56,    -1,    -1,    54,     3,     4,     5,     6,     7,
       8,     3,     4,     5,     6,     7,     8,     3,     4,     5,
       6,     7,    20,    21,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    -1,    20,    21,    15,    16,    17,    18,
      19,    -1,    11,    12,    13,    14,    44,    -1,    -1,    52,
      48,    -1,    44,    -1,    52,    53,    48,    -1,    44,    -1,
      52,    40,    48,    66,    67,    -1,    52,     3,     4,     5,
       6,     7,    41,    42,    -1,    -1,    -1,    56,    -1,    82,
      83,    84,    85,    86,    20,    21,     9,    10,    11,    12,
      13,    14,     9,    -1,    11,    12,    13,    14,    -1,    -1,
      43,    44,    45,    46,    47,    -1,     0,    -1,    44,     3,
      53,     3,     4,     5,     6,     7,    52,    -1,    41,    42,
      -1,    -1,     3,    -1,    41,    42,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    15,    16,    17,    18,    19,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    -1,    -1,
      -1,    22,    23,    24,    25,    -1,    -1,    40,    29,    30,
      31,    32,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    20,    21,    22,    23,    24,    25,    26,    27,
      29,    30,    31,    32,    60,    61,    62,    65,    67,    68,
      69,    85,    86,    87,    91,    92,    93,    94,    98,    94,
      94,    23,    23,    23,     0,    61,    86,    92,    94,    45,
      66,    69,    39,    56,    15,    16,    17,    18,    19,    40,
      56,    95,    95,    20,    21,    57,    56,    63,    66,    87,
      92,    94,     4,     5,     6,     7,    44,    52,    92,    94,
      96,    97,    98,   100,    94,    97,    99,    52,    94,    96,
      96,    52,    43,    44,    45,    46,    47,    58,    65,    70,
      71,    72,    53,     8,    48,    53,    90,    91,    92,    94,
      96,    98,   101,   102,    96,    96,    96,    96,    96,    94,
      53,    39,    90,     9,    10,    11,    12,    13,    14,    41,
      42,    39,    53,    64,    72,   103,   103,    90,    90,    90,
      90,    90,    90,   102,    54,    74,    90,    90,    75,    76,
      55,   103,    33,    34,    35,    36,    37,    38,    65,    73,
      74,    77,    78,    81,    82,    85,    94,   100,    52,    52,
     103,    56,    56,    56,    90,    56,    89,    90,    56,    88,
      89,    52,    56,    39,    53,   103,    56,    89,    90,   103,
      88,    53,    73,   103,   103,    51,    89,    83,   104,    53,
      73,   103,    79,    84,    73,   104,   103,    73,    80
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
#line 129 "parser.y"
    {
				func_type = current_dtype;
				is_declaration = 0;
				current_scope = create_new_scope();
				gencode((yyvsp[(2) - (2)].entry)->lexeme + string(":"));
			}
    break;

  case 7:
#line 137 "parser.y"
    {
				is_declaration = 0;
				fill_parameter_list((yyvsp[(2) - (6)].entry),param_list,p_idx);
				p_idx = 0;
				is_func = 1;
				p=1;
			}
    break;

  case 8:
#line 145 "parser.y"
    {   is_func = 0;	}
    break;

  case 9:
#line 151 "parser.y"
    {is_declaration = 1; }
    break;

  case 10:
#line 152 "parser.y"
    {is_declaration = 1; }
    break;

  case 17:
#line 167 "parser.y"
    {current_dtype = INT;}
    break;

  case 18:
#line 168 "parser.y"
    {current_dtype = SHORT;}
    break;

  case 19:
#line 169 "parser.y"
    {current_dtype = SHORT;}
    break;

  case 20:
#line 170 "parser.y"
    {current_dtype = LONG;}
    break;

  case 21:
#line 171 "parser.y"
    {current_dtype = LONG;}
    break;

  case 22:
#line 172 "parser.y"
    {current_dtype = LONG_LONG;}
    break;

  case 23:
#line 173 "parser.y"
    {current_dtype = LONG_LONG;}
    break;

  case 24:
#line 174 "parser.y"
    {current_dtype = CHAR;}
    break;

  case 25:
#line 175 "parser.y"
    {current_dtype = FLOAT;}
    break;

  case 26:
#line 176 "parser.y"
    {current_dtype = VOID;}
    break;

  case 27:
#line 177 "parser.y"
    {current_dtype = STRING;}
    break;

  case 32:
#line 191 "parser.y"
    {
							param_list[p_idx++] = (yyvsp[(2) - (2)].entry)->data_type;
							gencode(string("arg ") + (yyvsp[(2) - (2)].entry)->lexeme);
						}
    break;

  case 33:
#line 198 "parser.y"
    {(yyval.content) = new content_t(); (yyval.content)=(yyvsp[(1) - (1)].content);}
    break;

  case 34:
#line 199 "parser.y"
    {(yyval.content) = new content_t(); (yyval.content)=(yyvsp[(1) - (1)].content);}
    break;

  case 35:
#line 206 "parser.y"
    {
					if(!p)current_scope = create_new_scope();
					else p = 0;
				}
    break;

  case 36:
#line 215 "parser.y"
    {
					current_scope = exit_scope();
					(yyval.content) = new content_t();
					(yyval.content) = (yyvsp[(3) - (4)].content);
				}
    break;

  case 37:
#line 222 "parser.y"
    {
									backpatch((yyvsp[(1) - (3)].content)->nextlist,(yyvsp[(2) - (3)].instr));
									(yyval.content) = new content_t();
									(yyval.content)->nextlist = (yyvsp[(3) - (3)].content)->nextlist;
									(yyval.content)->breaklist = merge((yyvsp[(1) - (3)].content)->breaklist,(yyvsp[(3) - (3)].content)->breaklist);
									(yyval.content)->continuelist = merge((yyvsp[(1) - (3)].content)->continuelist,(yyvsp[(3) - (3)].content)->continuelist);
								}
    break;

  case 38:
#line 230 "parser.y"
    {	(yyval.content) = new content_t();	}
    break;

  case 39:
#line 234 "parser.y"
    {
							(yyval.content) = new content_t();
							(yyval.content) = (yyvsp[(1) - (1)].content);
							backpatch((yyval.content)->nextlist, nextinstr);
						}
    break;

  case 40:
#line 240 "parser.y"
    {
							(yyval.content) = new content_t();
							(yyval.content) = (yyvsp[(1) - (1)].content);
							backpatch((yyval.content)->nextlist, nextinstr);
						}
    break;

  case 41:
#line 246 "parser.y"
    {
							(yyval.content) = new content_t();
							(yyval.content) = (yyvsp[(1) - (1)].content);
							backpatch((yyval.content)->nextlist, nextinstr);
						 }
    break;

  case 42:
#line 251 "parser.y"
    {(yyval.content) = new content_t();}
    break;

  case 43:
#line 252 "parser.y"
    {(yyval.content) = new content_t();}
    break;

  case 44:
#line 253 "parser.y"
    {
								if(is_func)
								{
									if(func_type != VOID)
										yyerror("return type (VOID) does not match function type");
								}
							  	else yyerror("return statement not inside function definition");
							}
    break;

  case 45:
#line 262 "parser.y"
    {
								if(!is_loop)
									yyerror("Illegal use of continue");
								(yyval.content) = new content_t();
								(yyval.content)->continuelist = {nextinstr};
								gencode("goto _");
							}
    break;

  case 46:
#line 270 "parser.y"
    {
								if(!is_loop) {yyerror("Illegal use of break");}
								(yyval.content) = new content_t();
								(yyval.content)->breaklist = {nextinstr};
								gencode("goto _");
						    }
    break;

  case 47:
#line 278 "parser.y"
    {
								if(is_func)
								{
									if(func_type != (yyvsp[(2) - (3)].content)->data_type)
										yyerror("return type does not match function type");
								}
								else yyerror("return statement not in function definition");
							}
    break;

  case 48:
#line 288 "parser.y"
    {is_loop = 1;}
    break;

  case 49:
#line 288 "parser.y"
    {is_loop = 0;}
    break;

  case 50:
#line 289 "parser.y"
    {
				backpatch((yyvsp[(5) - (13)].content)->truelist,(yyvsp[(11) - (13)].instr));
				backpatch((yyvsp[(12) - (13)].content)->nextlist,(yyvsp[(6) - (13)].instr));
				backpatch((yyvsp[(12) - (13)].content)->continuelist, (yyvsp[(6) - (13)].instr));
				backpatch((yyvsp[(10) - (13)].content)->nextlist, (yyvsp[(4) - (13)].instr));
				(yyval.content) = new content_t();
				(yyval.content)->nextlist = merge((yyvsp[(5) - (13)].content)->falselist,(yyvsp[(12) - (13)].content)->breaklist);
				gencode(string("goto ") + to_string((yyvsp[(6) - (13)].instr)));
			 }
    break;

  case 51:
#line 302 "parser.y"
    {
				backpatch((yyvsp[(3) - (6)].content)->truelist,(yyvsp[(5) - (6)].instr));
				(yyval.content) = new content_t();
				(yyval.content)->nextlist = merge((yyvsp[(3) - (6)].content)->falselist,(yyvsp[(6) - (6)].content)->nextlist);
				(yyval.content)->breaklist = (yyvsp[(6) - (6)].content)->breaklist;
				(yyval.content)->continuelist = (yyvsp[(6) - (6)].content)->continuelist;
			}
    break;

  case 52:
#line 311 "parser.y"
    {
				backpatch((yyvsp[(3) - (10)].content)->truelist,(yyvsp[(5) - (10)].instr));
				backpatch((yyvsp[(3) - (10)].content)->falselist,(yyvsp[(9) - (10)].instr));

				(yyval.content) = new content_t();
				vector<int> temp = merge((yyvsp[(6) - (10)].content)->nextlist,(yyvsp[(8) - (10)].content)->nextlist);
				(yyval.content)->nextlist = merge(temp,(yyvsp[(10) - (10)].content)->nextlist);
				(yyval.content)->breaklist = merge((yyvsp[(10) - (10)].content)->breaklist,(yyvsp[(6) - (10)].content)->breaklist);
				(yyval.content)->continuelist = merge((yyvsp[(10) - (10)].content)->continuelist,(yyvsp[(6) - (10)].content)->continuelist);
			}
    break;

  case 53:
#line 323 "parser.y"
    {is_loop = 1;}
    break;

  case 54:
#line 323 "parser.y"
    {is_loop = 0;}
    break;

  case 55:
#line 324 "parser.y"
    {
				backpatch((yyvsp[(8) - (9)].content)->nextlist,(yyvsp[(2) - (9)].instr));
				backpatch((yyvsp[(4) - (9)].content)->truelist,(yyvsp[(6) - (9)].instr));
				backpatch((yyvsp[(8) - (9)].content)->continuelist, (yyvsp[(2) - (9)].instr));
				(yyval.content) = new content_t();
				(yyval.content)->nextlist = merge((yyvsp[(4) - (9)].content)->falselist,(yyvsp[(8) - (9)].content)->breaklist);
				gencode(string("goto ") + to_string((yyvsp[(2) - (9)].instr)));
			}
    break;

  case 56:
#line 334 "parser.y"
    {is_declaration = 0;}
    break;

  case 64:
#line 350 "parser.y"
    {
						(yyval.content) = new content_t(); 
						(yyval.content)->truelist = (yyvsp[(1) - (2)].content)->truelist; 
						(yyval.content)->falselist = (yyvsp[(1) - (2)].content)->falselist;
					}
    break;

  case 65:
#line 356 "parser.y"
    {	(yyval.content) = new content_t();	}
    break;

  case 66:
#line 360 "parser.y"
    {
					(yyval.content) = new content_t();
					(yyval.content)->truelist = (yyvsp[(3) - (3)].content)->truelist; 
					(yyval.content)->falselist = (yyvsp[(3) - (3)].content)->falselist;
				}
    break;

  case 67:
#line 366 "parser.y"
    {
					(yyval.content) = new content_t(); 
					(yyval.content)->truelist = (yyvsp[(1) - (1)].content)->truelist; 
					(yyval.content)->falselist = (yyvsp[(1) - (1)].content)->falselist;
				}
    break;

  case 68:
#line 376 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" > "));
			}
    break;

  case 69:
#line 382 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" < "));
			}
    break;

  case 70:
#line 389 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" == "));
			}
    break;

  case 71:
#line 396 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" != "));
			}
    break;

  case 72:
#line 403 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" >= "));
			}
    break;

  case 73:
#line 410 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,2);
				(yyval.content) = new content_t();
				gencode_rel((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" <= "));
			}
    break;

  case 74:
#line 417 "parser.y"
    {
				type_check((yyvsp[(1) - (4)].content)->data_type,(yyvsp[(4) - (4)].content)->data_type,2);
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(1) - (4)].content)->data_type;
				backpatch((yyvsp[(1) - (4)].content)->truelist,(yyvsp[(3) - (4)].instr));
				(yyval.content)->truelist = (yyvsp[(4) - (4)].content)->truelist;
				(yyval.content)->falselist = merge((yyvsp[(1) - (4)].content)->falselist,(yyvsp[(4) - (4)].content)->falselist);
			}
    break;

  case 75:
#line 427 "parser.y"
    {
				type_check((yyvsp[(1) - (4)].content)->data_type,(yyvsp[(4) - (4)].content)->data_type,2);
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(1) - (4)].content)->data_type;
				backpatch((yyvsp[(1) - (4)].content)->falselist,(yyvsp[(3) - (4)].instr));
				(yyval.content)->truelist = merge((yyvsp[(1) - (4)].content)->truelist,(yyvsp[(4) - (4)].content)->truelist);
				(yyval.content)->falselist = (yyvsp[(4) - (4)].content)->falselist;
			}
    break;

  case 76:
#line 437 "parser.y"
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(2) - (2)].content)->data_type;
				(yyval.content)->truelist = (yyvsp[(2) - (2)].content)->falselist;
				(yyval.content)->falselist = (yyvsp[(2) - (2)].content)->truelist;
			}
    break;

  case 77:
#line 445 "parser.y"
    {
				(yyval.content) = new content_t(); 
				(yyval.content)->data_type = (yyvsp[(1) - (1)].content)->data_type; 
				(yyval.content)->addr = (yyvsp[(1) - (1)].content)->addr;
			}
    break;

  case 78:
#line 451 "parser.y"
    {
				(yyval.content) = new content_t(); 
				(yyval.content)->data_type = (yyvsp[(1) - (1)].content)->data_type;
			}
    break;

  case 79:
#line 456 "parser.y"
    {
				(yyval.content) = new content_t(); 
				(yyval.content)->data_type = (yyvsp[(1) - (1)].content)->data_type;
			}
    break;

  case 80:
#line 464 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->entry->data_type,(yyvsp[(3) - (3)].content)->data_type,1);
		 		(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(3) - (3)].content)->data_type;
		 		(yyval.content)->code = (yyvsp[(1) - (3)].content)->entry->lexeme + *(yyvsp[(2) - (3)].op) + (yyvsp[(3) - (3)].content)->addr;
				gencode((yyval.content)->code);
		 		rhs = 0;
			}
    break;

  case 81:
#line 474 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->entry->data_type,(yyvsp[(3) - (3)].content)->data_type,1);
	 			(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(3) - (3)].content)->data_type;
	 			(yyval.content)->code = (yyvsp[(1) - (3)].content)->entry->lexeme + *(yyvsp[(2) - (3)].op) + (yyvsp[(3) - (3)].content)->code;
				gencode((yyval.content)->code);
	 			rhs = 0;
			}
    break;

  case 82:
#line 484 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->entry->data_type,(yyvsp[(3) - (3)].data_type),1); 
				(yyval.content) = new content_t(); 
				(yyval.content)->data_type = (yyvsp[(3) - (3)].data_type);
			}
    break;

  case 83:
#line 491 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->entry->data_type,(yyvsp[(3) - (3)].content)->data_type,1);
			 	(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(3) - (3)].content)->data_type;
			 	(yyval.content)->code = (yyvsp[(1) - (3)].content)->entry->lexeme + *(yyvsp[(2) - (3)].op) + (yyvsp[(3) - (3)].content)->code;
				gencode((yyval.content)->code);
			 	rhs = 0;
			}
    break;

  case 84:
#line 501 "parser.y"
    {
				type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,1);
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(3) - (3)].content)->data_type;
			 	(yyval.content)->code = (yyvsp[(1) - (3)].content)->code + *(yyvsp[(2) - (3)].op) + (yyvsp[(3) - (3)].content)->code;
				gencode((yyval.content)->code);
				rhs = 0;
			}
    break;

  case 85:
#line 513 "parser.y"
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(1) - (2)].entry)->data_type;
				(yyval.content)->code = string((yyvsp[(1) - (2)].entry)->lexeme) + string("++");
				gencode((yyval.content)->code);
			}
    break;

  case 86:
#line 521 "parser.y"
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(1) - (2)].entry)->data_type;
				(yyval.content)->code = string((yyvsp[(1) - (2)].entry)->lexeme) + string("--");
				gencode((yyval.content)->code);
			}
    break;

  case 87:
#line 529 "parser.y"
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(2) - (2)].entry)->data_type;
				(yyval.content)->code = string("--") + string((yyvsp[(2) - (2)].entry)->lexeme);
				gencode((yyval.content)->code);
			}
    break;

  case 88:
#line 537 "parser.y"
    {
				(yyval.content) = new content_t();
				(yyval.content)->data_type = (yyvsp[(2) - (2)].entry)->data_type;
				(yyval.content)->code = string("++") + string((yyvsp[(2) - (2)].entry)->lexeme);
				gencode((yyval.content)->code);
			}
    break;

  case 89:
#line 544 "parser.y"
    {(yyval.content) = new content_t(); (yyval.content)->entry = (yyvsp[(1) - (1)].entry);}
    break;

  case 90:
#line 545 "parser.y"
    {(yyval.content) = new content_t(); (yyval.content)->code = (yyvsp[(1) - (1)].content)->code;}
    break;

  case 91:
#line 549 "parser.y"
    {
                    if(is_declaration && !rhs)
                    {
                      (yyvsp[(1) - (1)].entry) = insert(SYMBOL_TABLE,yytext,INT_MAX,current_dtype);
                      if((yyvsp[(1) - (1)].entry) == NULL) 
					  	yyerror("Redeclaration of variable");
                    }
                    else
                    {
                      (yyvsp[(1) - (1)].entry) = search_recursive(yytext);
                      if((yyvsp[(1) - (1)].entry) == NULL) 
					  	yyerror("Variable not declared");
                    }
                    
					(yyval.entry) = (yyvsp[(1) - (1)].entry);
                }
    break;

  case 92:
#line 567 "parser.y"
    {rhs=1; (yyval.op) = new string(" = ");}
    break;

  case 93:
#line 568 "parser.y"
    {rhs=1; (yyval.op) = new string(" += ");}
    break;

  case 94:
#line 569 "parser.y"
    {rhs=1; (yyval.op) = new string(" -= ");}
    break;

  case 95:
#line 570 "parser.y"
    {rhs=1; (yyval.op) = new string(" *= ");}
    break;

  case 96:
#line 571 "parser.y"
    {rhs=1;	(yyval.op) = new string(" /= ");}
    break;

  case 97:
#line 572 "parser.y"
    {rhs=1; (yyval.op) = new string(" %= ");}
    break;

  case 98:
#line 576 "parser.y"
    {
						type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,0);
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[(1) - (3)].content)->data_type;
						gencode_math((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" + "));
					 }
    break;

  case 99:
#line 584 "parser.y"
    {
						type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,0);
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[(1) - (3)].content)->data_type;
						gencode_math((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" - "));
					 }
    break;

  case 100:
#line 592 "parser.y"
    {
						type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,0);
						(yyval.content) = new content_t();
		 				(yyval.content)->data_type = (yyvsp[(1) - (3)].content)->data_type;
						gencode_math((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" * "));
					 }
    break;

  case 101:
#line 600 "parser.y"
    {
						type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,0);
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[(1) - (3)].content)->data_type;
						gencode_math((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" / "));
					 }
    break;

  case 102:
#line 608 "parser.y"
    {
						type_check((yyvsp[(1) - (3)].content)->data_type,(yyvsp[(3) - (3)].content)->data_type,0);
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[(1) - (3)].content)->data_type;
						gencode_math((yyval.content), (yyvsp[(1) - (3)].content), (yyvsp[(3) - (3)].content), string(" % "));
				 	 }
    break;

  case 103:
#line 616 "parser.y"
    {
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[(2) - (3)].content)->data_type;
						(yyval.content)->addr = (yyvsp[(2) - (3)].content)->addr;
						(yyval.content)->code = (yyvsp[(2) - (3)].content)->code;
					 }
    break;

  case 104:
#line 624 "parser.y"
    {
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[(2) - (2)].content)->data_type;
						(yyval.content)->addr = "t" + to_string(temp_var_number);
						std::string expr = (yyval.content)->addr + " = " + "minus " + (yyvsp[(2) - (2)].content)->addr;
						(yyval.content)->code = (yyvsp[(2) - (2)].content)->code + expr;
						temp_var_number++;
				 	 }
    break;

  case 105:
#line 634 "parser.y"
    {
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[(1) - (1)].entry)->data_type;
	 					(yyval.content)->addr = (yyvsp[(1) - (1)].entry)->lexeme;
			   		 }
    break;

  case 106:
#line 641 "parser.y"
    {
						(yyval.content) = new content_t();
						(yyval.content)->data_type = (yyvsp[(1) - (1)].entry)->data_type;
						(yyval.content)->addr = to_string((yyvsp[(1) - (1)].entry)->value);
					 }
    break;

  case 107:
#line 648 "parser.y"
    {(yyvsp[(1) - (1)].entry)->is_constant=1; (yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 108:
#line 649 "parser.y"
    {(yyvsp[(1) - (1)].entry)->is_constant=1; (yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 109:
#line 650 "parser.y"
    {(yyvsp[(1) - (1)].entry)->is_constant=1; (yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 110:
#line 651 "parser.y"
    {(yyvsp[(1) - (1)].entry)->is_constant=1; (yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 111:
#line 655 "parser.y"
    {
					if(is_declaration)
					{
						if((yyvsp[(3) - (4)].entry)->value <= 0)
							yyerror("size of array is not positive");
						else if((yyvsp[(3) - (4)].entry)->is_constant)
							(yyvsp[(1) - (4)].entry)->array_dimension = (yyvsp[(3) - (4)].entry)->value;
					}
					else if((yyvsp[(3) - (4)].entry)->is_constant)
					{
						if((yyvsp[(3) - (4)].entry)->value > (yyvsp[(1) - (4)].entry)->array_dimension)
							yyerror("Array index out of bound");
						if((yyvsp[(3) - (4)].entry)->value < 0)
							yyerror("Array index cannot be negative");
					}
					
					(yyval.content) = new content_t();
					(yyval.content)->data_type = (yyvsp[(1) - (4)].entry)->data_type;
					
					if((yyvsp[(3) - (4)].entry)->is_constant)
						(yyval.content)->code = string((yyvsp[(1) - (4)].entry)->lexeme) + string("[") + to_string((yyvsp[(3) - (4)].entry)->value) + string("]");
					else
						(yyval.content)->code = string((yyvsp[(1) - (4)].entry)->lexeme) + string("[") + string((yyvsp[(3) - (4)].entry)->lexeme) + string("]");
					(yyval.content)->entry = (yyvsp[(1) - (4)].entry);
				}
    break;

  case 112:
#line 681 "parser.y"
    {(yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 113:
#line 682 "parser.y"
    {(yyval.entry) = (yyvsp[(1) - (1)].entry);}
    break;

  case 114:
#line 686 "parser.y"
    {
					(yyval.data_type) = (yyvsp[(1) - (4)].entry)->data_type;
					check_parameter_list((yyvsp[(1) - (4)].entry),param_list,p_idx);
					p_idx = 0;
					gencode(string("call ") + (yyvsp[(1) - (4)].entry)->lexeme);
				}
    break;

  case 115:
#line 694 "parser.y"
    {
					(yyval.data_type) = (yyvsp[(1) - (3)].entry)->data_type;
				 	check_parameter_list((yyvsp[(1) - (3)].entry),param_list,p_idx);
				 	p_idx = 0;
	 				gencode(string("call ") + (yyvsp[(1) - (3)].entry)->lexeme);
				}
    break;

  case 118:
#line 708 "parser.y"
    {
					param_list[p_idx++] = (yyvsp[(1) - (1)].content)->data_type;
					gencode(string("param ") + (yyvsp[(1) - (1)].content)->addr);
				}
    break;

  case 119:
#line 713 "parser.y"
    {
					param_list[p_idx++] = STRING;
					gencode(string("param ") + (yyvsp[(1) - (1)].entry)->lexeme);
				}
    break;

  case 120:
#line 719 "parser.y"
    {(yyval.instr) = nextinstr;}
    break;

  case 121:
#line 722 "parser.y"
    {
				(yyval.content) = new content_t;
				(yyval.content)->nextlist = {nextinstr};
				gencode("goto _");
			}
    break;


/* Line 1267 of yacc.c.  */
#line 2483 "y.tab.c"
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


#line 729 "parser.y"


void gencode(string x)
{
	std::string instruction;

	instruction = to_string(nextinstr) + string(": ") + x;
	ICG.push_back(instruction);
	nextinstr++;
}


void gencode_rel(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op)
{
	lhs->data_type = arg1->data_type;

	lhs->truelist = {nextinstr};
	lhs->falselist = {nextinstr + 1};

	std::string code;

	code = string("if ") + arg1->addr + op + arg2->addr + string(" goto _");
	gencode(code);

	code = string("goto _");
	gencode(code);
}

void gencode_math(content_t* & lhs, content_t* arg1, content_t* arg2, const string& op)
{
	lhs->addr = "t" + to_string(temp_var_number);
	std::string expr = lhs->addr + string(" = ") + arg1->addr + op + arg2->addr;
	lhs->code = arg1->code + arg2->code + expr;

	temp_var_number++;

	gencode(expr);
}

void backpatch(vector<int>& v1, int number)
{
	for(int i = 0; i<v1.size(); i++)
	{
		string instruction = ICG[v1[i]];

		if(instruction.find("_") < instruction.size())
		{
			instruction.replace(instruction.find("_"),1,to_string(number));
			ICG[v1[i]] = instruction;
		}
	}
}

vector<int> merge(vector<int>& v1, vector<int>& v2)
{
	vector<int> concat;
	concat.reserve(v1.size() + v2.size());
	concat.insert(concat.end(), v1.begin(), v1.end());
	concat.insert(concat.end(), v2.begin(), v2.end());

	return concat;
}

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

void displayICG()
{
	ofstream outfile("ICG.code");

	for(int i=0; i<ICG.size();i++)
	outfile << ICG[i] <<endl;

	outfile << nextinstr << ": exit";

	outfile.close();
}

void printlist(vector<int> v){
	for(auto it:v)
		cout<<it<<" ";
	cout<<"Next: "<<nextinstr<<endl;
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

	displayICG();
/*
	printf("SYMBOL TABLES\n\n");
	display_all();

	printf("CONSTANT TABLE");
	display_constant_table(constant_table);*/

}

int yyerror(const char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
	exit(0);
}
