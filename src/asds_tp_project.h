
 
#ifndef __ASDS_TP_PROJECT_H__
#define __ASDS_TP_PROJECT_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

#define __ARRAY_SIZE__ 100


void coding ( int decimal_number, int base ) ;
void decoding ( char number_base [] , int* decimal , int choice ) ;
void transcoding ( char number [] , int base , int base_to ) ;
void bcd_code ( char number [] , char choice ) ;
void bcd_plus3_code ( char number [] , char choice ) ;
void gray_code ( char number [] , char choice ) ;
void sum_in_binary ( int bin_1 , int bin_2 , int* result ) ;

void tic_tic ( char T [] ) ;
void print_date () ;
void usto () ;
void welcome () ;
void menu () ;

#endif