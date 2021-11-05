/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 * hello. I didnt get time to add documentation. Pleas eexcuse me. Imtrying to complete this as fast as possible 
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* All function comments are presented in stats.c */ 

void print_array(unsigned char *a,int size);
int find_mean(unsigned char *a,int size);
unsigned char find_maximum(unsigned char *a,unsigned int size);
unsigned char find_minimum(unsigned char *a,unsigned int size);
void swap(unsigned char * a,unsigned char * b);
void sort_array(unsigned char* a,int size);
unsigned char find_median(unsigned char *a,unsigned int size);
void print_statistics(unsigned char *a,unsigned int size);
/*
**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
