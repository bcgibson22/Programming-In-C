/******************************************************************************
 * Student Name    :
 * RMIT Student ID :
 *
 * Startup code provided by Paul Miller for use in "Programming in C",
 * study period 4, 2019.
 *****************************************************************************/
#include "line.h"
#include "shared.h"
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/**
 * a linked list node for our line list.
 **/
struct linkednode {
    struct linkednode* next;
    struct line* data;
};

/**
 * the linked list itself, with a pointer to the first node. We also store
 * the size of the list.
 **/
struct linkedlist {
    struct linkednode* head;
    ssize_t size;
};

/**
 * a struct to specify a range of lines - that is, the beginning line and the
 * ending line.
 **/
struct line_range {
    ssize_t begin, end;
};

/**
 * declare the functions to manage the linkedlist type here.
 **/

#endif
