#ifndef SCHEDULAR_H_
#define SCHEDULAR_H_



typedef struct
{
	uint16 Periodity ;
	void (*ptr_f) (void) ;
}Os_Cfg_t;


extern void Start_Os(void);


#endif /* SCHEDULAR_H_ */