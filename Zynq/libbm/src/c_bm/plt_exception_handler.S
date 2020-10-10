#include "xil_errata.h"
#include "bspconfig.h"

.global _GetSysModeSp
.global _GetIrqModeSp
.global _GetSysModeLr
.global _GetIrqModeLr

/*
	  ��ȡUSR/SYSģʽ��SPֵ
*/
_GetSysModeSp:
 mrs r3, cpsr	          /* �� cpsr_c */ 
	and r2, r3, #0xff
	msr cpsr_c, #0xdf	       /* �л���SYSģʽ�����ҹ��ж� */
	DSB
	mov r0, sp
	msr cpsr_c, r3
 DSB
	BX LR

_GetSysModeLr:
 mrs r3, cpsr	          /* �� cpsr_c */ 
	and r2, r3, #0xff
	msr cpsr_c, #0xdf	       /* �л���SYSģʽ�����ҹ��ж� */
	DSB
	mov r0, lr
	msr cpsr_c, r3
 DSB
	BX LR

/*
	  ��ȡIRQģʽ��SPֵ
*/
_GetIrqModeSp:
 mrs r3, cpsr	          /* �� cpsr_c */ 
	and r2, r3, #0xff
	msr cpsr_c, #0xd2	       /* �л���IRQģʽ�����ҹ��ж� */
	DSB
	mov r0, sp
	msr cpsr_c, r3
 DSB
	BX LR

_GetIrqModeLr:
 mrs r3, cpsr	          /* �� cpsr_c */ 
	and r2, r3, #0xff
	msr cpsr_c, #0xd2	       /* �л���IRQģʽ�����ҹ��ж� */
	DSB
	mov r0, lr
	msr cpsr_c, r3
 DSB
	BX LR