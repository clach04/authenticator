#ifndef DATA_H
#define DATA_H

#define MAX_SECRETS 10
#define LABEL_MAXSIZE 16
#define KEY_MAXSIZE 20

extern int num_secrets;
extern char otplabels[][LABEL_MAXSIZE];
extern unsigned char otpkeys[][KEY_MAXSIZE];
extern int otpsizes[];
extern time_t last_tzone_sync;
extern int utc_offset;
extern bool changed;

enum KEYERROR {
	KERR_UNINITIALIZED = 0,
	KERR_MAXSIZE = -1
};

#endif
