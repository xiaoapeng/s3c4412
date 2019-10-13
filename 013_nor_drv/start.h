#ifndef __START_H_
#define __SRART_H_

#define SRACK_SIZE			(0x1000)

#define USR_STACK_ADDR 		(0x34000000)
#define FIQ_SRACK_ADDR		(USR_STACK_ADDR-SRACK_SIZE)
#define IRQ_SRACK_ADDR		(FIQ_SRACK_ADDR-SRACK_SIZE)
#define SVC_STACK_ADDR		(IRQ_SRACK_ADDR-SRACK_SIZE)
#define ABT_STACK_ADDR		(SVC_STACK_ADDR-SRACK_SIZE)
#define SYS_STACK_ADDR		(ABT_STACK_ADDR-SRACK_SIZE)
#define UND_STACK_ADDR		(SYS_STACK_ADDR-SRACK_SIZE)

#endif




