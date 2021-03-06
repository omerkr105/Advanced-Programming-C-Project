/*
the main header file of the program with all defines and structs of the program
*/
// includes
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
// defines
#define FILES 2
#define FIRST_NAME 0
#define INSTRUMENTS 1
#define MUSICIANS 2
#define SEPS " ,.;:?!-\t'()[]{}<>~_"
#define SEPS2 " :"
#define NOT_FOUND -1
#define SAME_STRING res == 0
#define STR1_GREATER res > 0
#define SPACES 10
#define IMPORTANT 1
// Functions Declerations
void* checkAllocation(void* ptr);
void checkSTRtok(char* ptr);
#pragma once
// structs
typedef struct treeNode {
	char* instrument;
	unsigned short InsId;
	struct treeNode* father;
	struct treeNode* left;
	struct treeNode* right;
} TreeNode;

typedef struct tree {
	TreeNode* root;
} InstrumentTree;

typedef struct mpi
{
	unsigned short insId;
	float price;
	struct mpi* next;
	struct mpi* previous;
} MusicianPriceInstrument;

typedef MusicianPriceInstrument MPI;

typedef struct mpiList
{
	MPI* head;
	MPI* tail;
} MPIList;

typedef struct
{
	char** name;
	MPIList instruments;
	bool isChosen;
}Musician;

typedef struct
{
	float price;
	Musician* pForMusician;
}MusPricePerInst;

typedef struct
{
	int logSize;
	int phySize;
	MusPricePerInst* pMusicians;
}MusiciansCollection;

typedef struct
{
	int day, month, year;
	float hour;
} Date;

typedef struct CI
{
	char* insName;
	int num;
	int inst;
	char importance;
	struct CI* next;
}ConcertInstrument;

typedef ConcertInstrument CINode;

typedef struct ConcertInstrumentList
{
	CINode* head;
	CINode* tail;
}CIList;

typedef struct concertData
{
	Date date_of_concert;
	char* name;
	CIList instruments;
} Concert;

