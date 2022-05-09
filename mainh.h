#pragma once
// defines
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "files.h"
#include "trees.h"
// structs
typedef struct
{
	unsigned short insId;
	float price;
	struct MusicianPriceInstrument* next;
	struct MusicianPriceInstrument* previous;
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
}Musician;

typedef struct // temp for test
{
	int logSize;
	int phySize;
	Musician** pMusicians;
}MusiciansCollection;



typedef struct
{
	int day, month, year;
	float hour;
} Date;

typedef struct
{
	int num;
	int inst;
	char importance;
}ConcertInstrument;

typedef struct
{
	Date date_of_concert;
	char* name;
	//CIList instruments;
} Concert;

// Functions Declerations
void* checkAllocation(void* ptr);
