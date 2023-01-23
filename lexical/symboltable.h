// This file contains functions related to a hash organised symbol table

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

struct entry_s {
    char* lexeme;
    int token_name;
    struct entry_s* successor;
};

typedef struct entry_s entry_t;

entry_t** create_table() {

    entry_t** hash_table_ptr = NULL; 

	/* Allocate memroy for a hashtable array of size HASH_TABLE_SIZE */
	if( ( hash_table_ptr = malloc( sizeof( entry_t* ) * HASH_TABLE_SIZE ) ) == NULL )
    	return NULL;

	int i;
	
	// Intitialise all entries as NULL
    for( i = 0; i < HASH_TABLE_SIZE; i++ ) {
		hash_table_ptr[i] = NULL;
	}

	return hash_table_ptr;
}

uint32_t hash( char *lexeme ) {
    size_t i;
	uint32_t hash;

	// Apply jenkin's hash function
	for ( hash = i = 0; i < strlen(lexeme); ++i ) {
        hash += lexeme[i];
        hash += ( hash << 10 );
        hash ^= ( hash >> 6 );
    }
	hash += ( hash << 3 );
	hash ^= ( hash >> 11 );
    hash += ( hash << 15 );

	return hash % HASH_TABLE_SIZE;
}

entry_t *create_entry( char *lexeme, int token_name ) {

    entry_t *newentry;

	if( ( newentry = malloc( sizeof( entry_t ) ) ) == NULL ) {
		return NULL;
	}

	if( ( newentry->lexeme = strdup( lexeme ) ) == NULL ) {
		return NULL;
	}

	newentry->token_name = token_name;
	newentry->successor = NULL;

	return newentry;
}

entry_t* search( entry_t** hash_table_ptr, char* lexeme ) {

	uint32_t idx = 0;
	entry_t* myentry;
    
	idx = hash( lexeme );

	myentry = hash_table_ptr[idx];
	
	while( myentry != NULL && strcmp( lexeme, myentry->lexeme ) != 0 ) {
		myentry = myentry->successor;
	}

	if(myentry == NULL) // lexeme is not found
		return NULL;
	
	else // lexeme found
		return myentry;
}

void insert( entry_t** hash_table_ptr, char* lexeme, int token_name ) {
	if( search( hash_table_ptr, lexeme ) != NULL) // If lexeme already exists, don't insert, return
	    return;

	uint32_t idx;
	entry_t* newentry = NULL;
	entry_t* head = NULL;

	idx = hash( lexeme ); // Get the index for this lexeme based on the hash function
	newentry = create_entry( lexeme, token_name ); // Create an entry using the <lexeme, token> pair

	if(newentry == NULL) {
		printf("Insert failed. New entry could not be created.");
		exit(1);
	}

	head = hash_table_ptr[idx]; // get the head entry at this index

	if(head == NULL) {
		hash_table_ptr[idx] = newentry;
	}
	else {
		newentry->successor = hash_table_ptr[idx];
		hash_table_ptr[idx] = newentry;
	}
}

void display(entry_t** hash_table_ptr) {
	int i;
	entry_t* traverser;
    printf("\n===\n");
    printf("\t < lexeme , token >\n");
    printf("===\n");

	for( i=0; i < HASH_TABLE_SIZE; i++)
	{
		traverser = hash_table_ptr[i];

		while( traverser != NULL)
		{
			printf("< %-30s, %3d >\n", traverser->lexeme, traverser->token_name);
			traverser = traverser->successor;
		}
	}
    printf("====\n");
}