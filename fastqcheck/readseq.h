/*  File: readseq.h
 *  Author: Richard Durbin (rd@sanger.ac.uk)
 *  Copyright (C) Genome Research Limited, 1993-
 *-------------------------------------------------------------------
 * Description:
 * Exported functions:
 * HISTORY:
 * Last edited: Sep 24 21:23 2008 (rd)
 * Created: some time in 1993
 *-------------------------------------------------------------------
 */

extern int readSequence (FILE *fil, int *conv,
			 char **seq, char **id, char **desc, int *length) ;
				/* read next sequence from file */
extern int readFastq (FILE *fil, int *conv, 
		      char **seq, unsigned char **qval, char **id, int *length) ;
				/* read next fastq entry from file */
extern int writeSequence (FILE *fil, int *conv, 
			  char *seq, char *id, char *desc, int len) ;
				/* write sequence to file, using convert */
extern int writeFastq (FILE *fil, int *conv,
		       char *seq, char *qval, char *id, int len) ;
				/* write fastq to file, using convert */
extern int seqConvert (char *seq, int *length, int *conv) ;
				/* convert in place - can shorten */
extern int readMatrix (char *name, int *conv, int** *mat) ;

extern int dna2textConv[] ;
extern int dna2textAmbig2NConv[] ;
extern int dna2indexConv[] ;
extern int dna2binaryConv[] ;
static const char index2char[] = "acgtn" ;
static const char binary2char[] = "-ACMGRSVTWYHKDBN" ;
extern int aa2textConv[] ;
extern int aa2indexConv[] ;
static const char index2aa[] = "ACDEFGHIKLMNPQRSTVWYX*" ;
extern int noConv[] ;

/***** end of file *****/
