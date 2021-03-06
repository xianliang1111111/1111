/*------------------------------------------------------------------------
 $Rev: 2 $
------------------------------------------------------------------------*/

#ifndef MODBUSMNET_H
#define MODBUSMNET_H
	
#include "../public/pmaster.h"

#define MODBUS_MINFRAMELEN	    5
#define MAX_MODBUS_FRAME_SIZE	255

#define FUN_READ_COIL                   1
#define FUN_READ_DI                     2
#define FUN_READ_KEEPREG		        3
#define FUN_READ_SINGLEREG              4
#define FUN_WRITE_COIL                  5
#define FUN_WRITE_SINGLEREG	        	6
#define FUN_WRITE_MUTIREG		        16

#define REQ_YC				1
#define REQ_YX   			2
#define REQ_SOE 			3
#define REQ_SETTIME			4
#define REQ_DD				5
#define REQ_YK              6
#define REQ_YT				7


#define YK_SELECT_ADD                   11
#define YK_CLOSE_ADD                    12
#define YK_OPEN_ADD                     13
#define YK_CANCEL_ADD                   14
#define YK_OPEN_ACK                     15
#define YK_CLOSE_ACK                    16

#define REG_YX_START                    0x00
#define REG_YX_END                      0x50
#define REG_YX_NUM			            REG_YX_END- REG_YX_START + 1

#define REG_YC_START                    0x00
#define REG_YC_END                      0x23
#define REG_YC_NUM                      REG_YC_END - REG_YC_START + 1

#define YK_DATA_OPEN                    0xFF00
#define YK_DATA_CLOSE                   0x0000

#define REG_TIME_START                  0x032a
#define REG_TIME_END                    0x032f
#define REG_TIME_NUM                    REG_TIME_END - REG_TIME_START + 1

#define YXENABLE                        0x01
#define YCENABLE                        0x02
#define DDENABLE                        0x04
#define YKENABLE                        0x08
#define YTENABLE						0x10


#define YX_BIT                          0x01
#define YX_WORD                         0x02
#define YC_WORD                         0x04
#define YC_DWORD                        0x08

#define MODBUS_TCP_COMM_ON	   1
#define MODBUS_TCP_COMM_OFF	   0

#pragma pack(1)
struct VOpenModbusFrame
{
    WORD eventPID;
	WORD pType;
	WORD len;
	BYTE byAddress ;
	BYTE byFunCode ;
	BYTE byData ;
};

struct VRegPara
{
	WORD wRegAddress ;
	union 
	{
	   WORD wValue ;
	   WORD wNum ; 
	}wData;
	WORD wRegNum ;
};


struct VFunPara
{
	BYTE byFunCode ;
	BYTE byRegGroup ;
	struct VRegPara  Reg[10];
};

struct VModbusPara
{
	BYTE byModbusCfg ;  /*D0:Yx,
	                             D1:Yc,
	                             D2:Dd,
	                             D3:Yk,
	                             D4:yt
	                           */
	struct VFunPara YXPara ;
	struct VFunPara YCPara ;
	struct VFunPara DDPara ;
	struct VFunPara YKPara ;
	struct VFunPara YTPara ;
};

#pragma pack()

class COPENMODBUSPNET : public CPPrimary
{
	public:
		VOpenModbusFrame * m_pReceive; 	//接收帧头指针
		VOpenModbusFrame * m_pSend;  		//发送帧头指针
		VModbusPara  *m_pCfg;
		BYTE *m_pbyData;
		BYTE m_byReqDataType;
		BYTE m_byNextReq;
		BYTE m_RegNum;
		BYTE m_RegNow;
		BYTE m_byYkStatus;
		BYTE m_byYCStatus;
		BYTE m_byYXStatus;
		BYTE m_byDDStatus;
		WORD YKRegAddr;
		WORD YKSetValue;
		WORD YTRegAddr;
		WORD YTSetValue;
	    float YTSet;
		BYTE m_SendAddress;
		BOOL m_bTcpConnect;


	public:
		
		COPENMODBUSPNET();
		BOOL Init(WORD wTaskID);
		void CheckBaseCfg(void);
		void SetBaseCfg(void);
        void CheckCfg(void);
		DWORD DoCommState(void);
     
		BOOL DoReceive(void);
		DWORD SearchOneFrame(BYTE *Buf, WORD Len);

		BOOL ReqUrgency(void);
		BOOL ReqCyc(void);
		BOOL ReqNormal(void);
		void SendFrameHead(BYTE FunCode, BYTE ShiftAddress);
		void SendFrameTail(void);

		void SendSetTime(void);
		void SendReadCmd(BYTE FunCode, WORD RegAddr, BYTE ShiftAddress, WORD Length);
		void SendWriteCmd(BYTE FunCode, WORD RegAddr, BYTE ShiftAddress, float Value);
		void SendReadSReg(WORD RegAddr,  WORD RegNum, BYTE ShiftAddress);
		void SendReadDI(WORD RegAddr, WORD RegNum, BYTE ShiftAddress);
		void SendReadMReg(WORD RegAddr, WORD RegNum, BYTE ShiftAddress);
		void SendWriteCoil(WORD RegAddr, WORD value, BYTE SHiftAddress);
		void SendWriteSReg(WORD RegAddr, BYTE ShiftAddress, WORD Value);
		void SendWriteMReg(WORD RegAddrStart, BYTE RegNum, BYTE ShiftAddress, WORD *Value);
		
		void SendWriteYkCmd(BYTE FunCode,WORD RegAddr, BYTE ShiftAddress, short Value);
		WORD searchAddr(WORD YTno);
		
		void DoYcData(void);
		void DoDdData(void);
		void DoYxData(void);
		BOOL DoYKReq(void);
		void YkResult(BOOL Result);
		void DoTimeOut(void);
        void DoYKData(void);
		BOOL DoYTReq(void);
		void YtResult(BOOL Result);
        void DoYTData(void);
		BOOL SendYT(void);    //lw add 2016-03-15 16:46:21
		bool stopflag;        //lw add 2016-07-07 15:56:11
		BYTE ytykflag;

};

#endif
