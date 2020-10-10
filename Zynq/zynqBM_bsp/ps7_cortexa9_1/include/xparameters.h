#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definition for CPU ID */
#define XPAR_CPU_ID 1U

/* Definitions for peripheral PS7_CORTEXA9_1 */
#define XPAR_PS7_CORTEXA9_1_CPU_CLK_FREQ_HZ 766666687


/******************************************************************/

/* Canonical definitions for peripheral PS7_CORTEXA9_1 */
#define XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ 766666687


/******************************************************************/

#include "xparameters_ps.h"

#define STDIN_BASEADDRESS 0xE0000000
#define STDOUT_BASEADDRESS 0xE0000000

/******************************************************************/

/* Platform specific definitions */
#define PLATFORM_ZYNQ
 
/* Definitions for sleep timer configuration */
#define XSLEEP_TIMER_IS_DEFAULT_TIMER
 
 
/******************************************************************/
/* Definitions for driver BRAM */
#define XPAR_XBRAM_NUM_INSTANCES 1U

/* Definitions for peripheral AXI_BRAM_CTRL_0 */
#define XPAR_AXI_BRAM_CTRL_0_DEVICE_ID 0U
#define XPAR_AXI_BRAM_CTRL_0_DATA_WIDTH 32U
#define XPAR_AXI_BRAM_CTRL_0_ECC 0U
#define XPAR_AXI_BRAM_CTRL_0_FAULT_INJECT 0U
#define XPAR_AXI_BRAM_CTRL_0_CE_FAILING_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_0_UE_FAILING_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_0_ECC_STATUS_REGISTERS 0U
#define XPAR_AXI_BRAM_CTRL_0_CE_COUNTER_WIDTH 0U
#define XPAR_AXI_BRAM_CTRL_0_ECC_ONOFF_REGISTER 0U
#define XPAR_AXI_BRAM_CTRL_0_ECC_ONOFF_RESET_VALUE 0U
#define XPAR_AXI_BRAM_CTRL_0_WRITE_ACCESS 0U
#define XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR 0x40000000U
#define XPAR_AXI_BRAM_CTRL_0_S_AXI_HIGHADDR 0x4000FFFFU
#define XPAR_AXI_BRAM_CTRL_0_S_AXI_CTRL_BASEADDR 0xFFFFFFFFU 
#define XPAR_AXI_BRAM_CTRL_0_S_AXI_CTRL_HIGHADDR 0xFFFFFFFFU 


/******************************************************************/

/* Canonical definitions for peripheral AXI_BRAM_CTRL_0 */
#define XPAR_BRAM_0_DEVICE_ID XPAR_AXI_BRAM_CTRL_0_DEVICE_ID
#define XPAR_BRAM_0_DATA_WIDTH 32U
#define XPAR_BRAM_0_ECC 0U
#define XPAR_BRAM_0_FAULT_INJECT 0U
#define XPAR_BRAM_0_CE_FAILING_REGISTERS 0U
#define XPAR_BRAM_0_UE_FAILING_REGISTERS 0U
#define XPAR_BRAM_0_ECC_STATUS_REGISTERS 0U
#define XPAR_BRAM_0_CE_COUNTER_WIDTH 0U
#define XPAR_BRAM_0_ECC_ONOFF_REGISTER 0U
#define XPAR_BRAM_0_ECC_ONOFF_RESET_VALUE 0U
#define XPAR_BRAM_0_WRITE_ACCESS 0U
#define XPAR_BRAM_0_BASEADDR 0x40000000U
#define XPAR_BRAM_0_HIGHADDR 0x4000FFFFU


/******************************************************************/

/* Definitions for driver CANPS */
#define XPAR_XCANPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_CAN_0 */
#define XPAR_PS7_CAN_0_DEVICE_ID 0
#define XPAR_PS7_CAN_0_BASEADDR 0xE0008000
#define XPAR_PS7_CAN_0_HIGHADDR 0xE0008FFF
#define XPAR_PS7_CAN_0_CAN_CLK_FREQ_HZ 100000000


/* Definitions for peripheral PS7_CAN_1 */
#define XPAR_PS7_CAN_1_DEVICE_ID 1
#define XPAR_PS7_CAN_1_BASEADDR 0xE0009000
#define XPAR_PS7_CAN_1_HIGHADDR 0xE0009FFF
#define XPAR_PS7_CAN_1_CAN_CLK_FREQ_HZ 100000000


/******************************************************************/

/* Canonical definitions for peripheral PS7_CAN_0 */
#define XPAR_XCANPS_0_DEVICE_ID XPAR_PS7_CAN_0_DEVICE_ID
#define XPAR_XCANPS_0_BASEADDR 0xE0008000
#define XPAR_XCANPS_0_HIGHADDR 0xE0008FFF
#define XPAR_XCANPS_0_CAN_CLK_FREQ_HZ 100000000

/* Canonical definitions for peripheral PS7_CAN_1 */
#define XPAR_XCANPS_1_DEVICE_ID XPAR_PS7_CAN_1_DEVICE_ID
#define XPAR_XCANPS_1_BASEADDR 0xE0009000
#define XPAR_XCANPS_1_HIGHADDR 0xE0009FFF
#define XPAR_XCANPS_1_CAN_CLK_FREQ_HZ 100000000


/******************************************************************/


/* Definitions for peripheral PS7_DDR_0 */
#define XPAR_PS7_DDR_0_S_AXI_BASEADDR 0x00100000
#define XPAR_PS7_DDR_0_S_AXI_HIGHADDR 0x3FFFFFFF


/******************************************************************/

/* Definitions for driver DEVCFG */
#define XPAR_XDCFG_NUM_INSTANCES 1U

/* Definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_PS7_DEV_CFG_0_DEVICE_ID 0U
#define XPAR_PS7_DEV_CFG_0_BASEADDR 0xF8007000U
#define XPAR_PS7_DEV_CFG_0_HIGHADDR 0xF80070FFU


/******************************************************************/

/* Canonical definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_XDCFG_0_DEVICE_ID XPAR_PS7_DEV_CFG_0_DEVICE_ID
#define XPAR_XDCFG_0_BASEADDR 0xF8007000U
#define XPAR_XDCFG_0_HIGHADDR 0xF80070FFU


/******************************************************************/

/* Definitions for driver DMAPS */
#define XPAR_XDMAPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_DMA_NS */
#define XPAR_PS7_DMA_NS_DEVICE_ID 0
#define XPAR_PS7_DMA_NS_BASEADDR 0xF8004000
#define XPAR_PS7_DMA_NS_HIGHADDR 0xF8004FFF


/* Definitions for peripheral PS7_DMA_S */
#define XPAR_PS7_DMA_S_DEVICE_ID 1
#define XPAR_PS7_DMA_S_BASEADDR 0xF8003000
#define XPAR_PS7_DMA_S_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_DMA_NS */
#define XPAR_XDMAPS_0_DEVICE_ID XPAR_PS7_DMA_NS_DEVICE_ID
#define XPAR_XDMAPS_0_BASEADDR 0xF8004000
#define XPAR_XDMAPS_0_HIGHADDR 0xF8004FFF

/* Canonical definitions for peripheral PS7_DMA_S */
#define XPAR_XDMAPS_1_DEVICE_ID XPAR_PS7_DMA_S_DEVICE_ID
#define XPAR_XDMAPS_1_BASEADDR 0xF8003000
#define XPAR_XDMAPS_1_HIGHADDR 0xF8003FFF


/******************************************************************/


/* Definitions for peripheral PS7_AFI_0 */
#define XPAR_PS7_AFI_0_S_AXI_BASEADDR 0xF8008000
#define XPAR_PS7_AFI_0_S_AXI_HIGHADDR 0xF8008FFF


/* Definitions for peripheral PS7_AFI_1 */
#define XPAR_PS7_AFI_1_S_AXI_BASEADDR 0xF8009000
#define XPAR_PS7_AFI_1_S_AXI_HIGHADDR 0xF8009FFF


/* Definitions for peripheral PS7_AFI_2 */
#define XPAR_PS7_AFI_2_S_AXI_BASEADDR 0xF800A000
#define XPAR_PS7_AFI_2_S_AXI_HIGHADDR 0xF800AFFF


/* Definitions for peripheral PS7_AFI_3 */
#define XPAR_PS7_AFI_3_S_AXI_BASEADDR 0xF800B000
#define XPAR_PS7_AFI_3_S_AXI_HIGHADDR 0xF800BFFF


/* Definitions for peripheral PS7_DDRC_0 */
#define XPAR_PS7_DDRC_0_S_AXI_BASEADDR 0xF8006000
#define XPAR_PS7_DDRC_0_S_AXI_HIGHADDR 0xF8006FFF


/* Definitions for peripheral PS7_GLOBALTIMER_0 */
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_BASEADDR 0xF8F00200
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_HIGHADDR 0xF8F002FF


/* Definitions for peripheral PS7_GPV_0 */
#define XPAR_PS7_GPV_0_S_AXI_BASEADDR 0xF8900000
#define XPAR_PS7_GPV_0_S_AXI_HIGHADDR 0xF89FFFFF


/* Definitions for peripheral PS7_INTC_DIST_0 */
#define XPAR_PS7_INTC_DIST_0_S_AXI_BASEADDR 0xF8F01000
#define XPAR_PS7_INTC_DIST_0_S_AXI_HIGHADDR 0xF8F01FFF


/* Definitions for peripheral PS7_IOP_BUS_CONFIG_0 */
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_BASEADDR 0xE0200000
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_HIGHADDR 0xE0200FFF


/* Definitions for peripheral PS7_L2CACHEC_0 */
#define XPAR_PS7_L2CACHEC_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_L2CACHEC_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Definitions for peripheral PS7_OCMC_0 */
#define XPAR_PS7_OCMC_0_S_AXI_BASEADDR 0xF800C000
#define XPAR_PS7_OCMC_0_S_AXI_HIGHADDR 0xF800CFFF


/* Definitions for peripheral PS7_PL310_0 */
#define XPAR_PS7_PL310_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_PL310_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Definitions for peripheral PS7_PMU_0 */
#define XPAR_PS7_PMU_0_S_AXI_BASEADDR 0xF8891000
#define XPAR_PS7_PMU_0_S_AXI_HIGHADDR 0xF8891FFF
#define XPAR_PS7_PMU_0_PMU1_S_AXI_BASEADDR 0xF8893000
#define XPAR_PS7_PMU_0_PMU1_S_AXI_HIGHADDR 0xF8893FFF


/* Definitions for peripheral PS7_QSPI_LINEAR_0 */
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_BASEADDR 0xFC000000
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_HIGHADDR 0xFCFFFFFF


/* Definitions for peripheral PS7_RAM_0 */
#define XPAR_PS7_RAM_0_S_AXI_BASEADDR 0x00000000
#define XPAR_PS7_RAM_0_S_AXI_HIGHADDR 0x0003FFFF


/* Definitions for peripheral PS7_RAM_1 */
#define XPAR_PS7_RAM_1_S_AXI_BASEADDR 0xFFFC0000
#define XPAR_PS7_RAM_1_S_AXI_HIGHADDR 0xFFFFFFFF


/* Definitions for peripheral PS7_SCUC_0 */
#define XPAR_PS7_SCUC_0_S_AXI_BASEADDR 0xF8F00000
#define XPAR_PS7_SCUC_0_S_AXI_HIGHADDR 0xF8F000FC


/* Definitions for peripheral PS7_SLCR_0 */
#define XPAR_PS7_SLCR_0_S_AXI_BASEADDR 0xF8000000
#define XPAR_PS7_SLCR_0_S_AXI_HIGHADDR 0xF8000FFF


/******************************************************************/

/* Definitions for driver GPIOPS */
#define XPAR_XGPIOPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_GPIO_0 */
#define XPAR_PS7_GPIO_0_DEVICE_ID 0
#define XPAR_PS7_GPIO_0_BASEADDR 0xE000A000
#define XPAR_PS7_GPIO_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_GPIO_0 */
#define XPAR_XGPIOPS_0_DEVICE_ID XPAR_PS7_GPIO_0_DEVICE_ID
#define XPAR_XGPIOPS_0_BASEADDR 0xE000A000
#define XPAR_XGPIOPS_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Definitions for driver IIC */
#define XPAR_XIIC_NUM_INSTANCES 3

/* Definitions for peripheral AXI_IIC_0 */
#define XPAR_AXI_IIC_0_DEVICE_ID 0
#define XPAR_AXI_IIC_0_BASEADDR 0x81650000
#define XPAR_AXI_IIC_0_HIGHADDR 0x8165FFFF
#define XPAR_AXI_IIC_0_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_0_GPO_WIDTH 1


/* Definitions for peripheral AXI_IIC_1 */
#define XPAR_AXI_IIC_1_DEVICE_ID 1
#define XPAR_AXI_IIC_1_BASEADDR 0x81660000
#define XPAR_AXI_IIC_1_HIGHADDR 0x8166FFFF
#define XPAR_AXI_IIC_1_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_1_GPO_WIDTH 1


/* Definitions for peripheral AXI_IIC_2 */
#define XPAR_AXI_IIC_2_DEVICE_ID 2
#define XPAR_AXI_IIC_2_BASEADDR 0x81670000
#define XPAR_AXI_IIC_2_HIGHADDR 0x8167FFFF
#define XPAR_AXI_IIC_2_TEN_BIT_ADR 0
#define XPAR_AXI_IIC_2_GPO_WIDTH 1


/******************************************************************/

/* Canonical definitions for peripheral AXI_IIC_0 */
#define XPAR_IIC_0_DEVICE_ID XPAR_AXI_IIC_0_DEVICE_ID
#define XPAR_IIC_0_BASEADDR 0x81650000
#define XPAR_IIC_0_HIGHADDR 0x8165FFFF
#define XPAR_IIC_0_TEN_BIT_ADR 0
#define XPAR_IIC_0_GPO_WIDTH 1

/* Canonical definitions for peripheral AXI_IIC_1 */
#define XPAR_IIC_1_DEVICE_ID XPAR_AXI_IIC_1_DEVICE_ID
#define XPAR_IIC_1_BASEADDR 0x81660000
#define XPAR_IIC_1_HIGHADDR 0x8166FFFF
#define XPAR_IIC_1_TEN_BIT_ADR 0
#define XPAR_IIC_1_GPO_WIDTH 1

/* Canonical definitions for peripheral AXI_IIC_2 */
#define XPAR_IIC_2_DEVICE_ID XPAR_AXI_IIC_2_DEVICE_ID
#define XPAR_IIC_2_BASEADDR 0x81670000
#define XPAR_IIC_2_HIGHADDR 0x8167FFFF
#define XPAR_IIC_2_TEN_BIT_ADR 0
#define XPAR_IIC_2_GPO_WIDTH 1


/******************************************************************/

/* Definitions for driver IICPS */
#define XPAR_XIICPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_I2C_0 */
#define XPAR_PS7_I2C_0_DEVICE_ID 0
#define XPAR_PS7_I2C_0_BASEADDR 0xE0004000
#define XPAR_PS7_I2C_0_HIGHADDR 0xE0004FFF
#define XPAR_PS7_I2C_0_I2C_CLK_FREQ_HZ 127777779


/******************************************************************/

/* Canonical definitions for peripheral PS7_I2C_0 */
#define XPAR_XIICPS_0_DEVICE_ID XPAR_PS7_I2C_0_DEVICE_ID
#define XPAR_XIICPS_0_BASEADDR 0xE0004000
#define XPAR_XIICPS_0_HIGHADDR 0xE0004FFF
#define XPAR_XIICPS_0_I2C_CLK_FREQ_HZ 127777779


/******************************************************************/

/* Definitions for driver QSPIPS */
#define XPAR_XQSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_QSPI_0 */
#define XPAR_PS7_QSPI_0_DEVICE_ID 0
#define XPAR_PS7_QSPI_0_BASEADDR 0xE000D000
#define XPAR_PS7_QSPI_0_HIGHADDR 0xE000DFFF
#define XPAR_PS7_QSPI_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_PS7_QSPI_0_QSPI_MODE 0
#define XPAR_PS7_QSPI_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Canonical definitions for peripheral PS7_QSPI_0 */
#define XPAR_XQSPIPS_0_DEVICE_ID XPAR_PS7_QSPI_0_DEVICE_ID
#define XPAR_XQSPIPS_0_BASEADDR 0xE000D000
#define XPAR_XQSPIPS_0_HIGHADDR 0xE000DFFF
#define XPAR_XQSPIPS_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_XQSPIPS_0_QSPI_MODE 0
#define XPAR_XQSPIPS_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Definitions for Fabric interrupts connected to ps7_scugic_0 */
#define XPAR_FABRIC_AXI_IIC_1_IIC2INTC_IRPT_INTR 28U
#define XPAR_FABRIC_AXI_IIC_2_IIC2INTC_IRPT_INTR 31U
#define XPAR_FABRIC_AXI_UART16550_11_IP2INTC_IRPT_INTR 28U
#define XPAR_FABRIC_IRQ0_RISE_INTR 61U
#define XPAR_FABRIC_AXI_UART16550_0_IP2INTC_IRPT_INTR 62U
#define XPAR_FABRIC_AXI_UART16550_1_IP2INTC_IRPT_INTR 63U
#define XPAR_FABRIC_AXI_UART16550_2_IP2INTC_IRPT_INTR 64U
#define XPAR_FABRIC_AXI_UART16550_3_IP2INTC_IRPT_INTR 65U
#define XPAR_FABRIC_AXI_UART16550_4_IP2INTC_IRPT_INTR 66U
#define XPAR_FABRIC_AXI_UART16550_5_IP2INTC_IRPT_INTR 67U
#define XPAR_FABRIC_AXI_UART16550_6_IP2INTC_IRPT_INTR 68U
#define XPAR_FABRIC_AXI_UART16550_7_IP2INTC_IRPT_INTR 84U
#define XPAR_FABRIC_AXI_UART16550_8_IP2INTC_IRPT_INTR 85U
#define XPAR_FABRIC_AXI_UART16550_9_IP2INTC_IRPT_INTR 86U
#define XPAR_FABRIC_AXI_UART16550_10_IP2INTC_IRPT_INTR 87U
#define XPAR_FABRIC_AXI_IIC_0_IIC2INTC_IRPT_INTR 88U

/******************************************************************/

/* Canonical definitions for Fabric interrupts connected to ps7_scugic_0 */
#define XPAR_FABRIC_IIC_1_VEC_ID XPAR_FABRIC_AXI_IIC_1_IIC2INTC_IRPT_INTR
#define XPAR_FABRIC_IIC_2_VEC_ID XPAR_FABRIC_AXI_IIC_2_IIC2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_3_VEC_ID XPAR_FABRIC_AXI_UART16550_11_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_0_VEC_ID XPAR_FABRIC_AXI_UART16550_0_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_1_VEC_ID XPAR_FABRIC_AXI_UART16550_1_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_4_VEC_ID XPAR_FABRIC_AXI_UART16550_2_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_5_VEC_ID XPAR_FABRIC_AXI_UART16550_3_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_6_VEC_ID XPAR_FABRIC_AXI_UART16550_4_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_7_VEC_ID XPAR_FABRIC_AXI_UART16550_5_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_8_VEC_ID XPAR_FABRIC_AXI_UART16550_6_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_9_VEC_ID XPAR_FABRIC_AXI_UART16550_7_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_10_VEC_ID XPAR_FABRIC_AXI_UART16550_8_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_11_VEC_ID XPAR_FABRIC_AXI_UART16550_9_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_UARTNS550_2_VEC_ID XPAR_FABRIC_AXI_UART16550_10_IP2INTC_IRPT_INTR
#define XPAR_FABRIC_IIC_0_VEC_ID XPAR_FABRIC_AXI_IIC_0_IIC2INTC_IRPT_INTR

/******************************************************************/

/* Definitions for driver SCUGIC */
#define XPAR_XSCUGIC_NUM_INSTANCES 1U

/* Definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_PS7_SCUGIC_0_DEVICE_ID 0U
#define XPAR_PS7_SCUGIC_0_BASEADDR 0xF8F00100U
#define XPAR_PS7_SCUGIC_0_HIGHADDR 0xF8F001FFU
#define XPAR_PS7_SCUGIC_0_DIST_BASEADDR 0xF8F01000U


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_SCUGIC_0_DEVICE_ID 0U
#define XPAR_SCUGIC_0_CPU_BASEADDR 0xF8F00100U
#define XPAR_SCUGIC_0_CPU_HIGHADDR 0xF8F001FFU
#define XPAR_SCUGIC_0_DIST_BASEADDR 0xF8F01000U


/******************************************************************/

/* Definitions for driver SCUTIMER */
#define XPAR_XSCUTIMER_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_PS7_SCUTIMER_0_DEVICE_ID 0
#define XPAR_PS7_SCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_PS7_SCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_XSCUTIMER_0_DEVICE_ID XPAR_PS7_SCUTIMER_0_DEVICE_ID
#define XPAR_XSCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_XSCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Definitions for driver SCUWDT */
#define XPAR_XSCUWDT_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_PS7_SCUWDT_0_DEVICE_ID 0
#define XPAR_PS7_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_PS7_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_SCUWDT_0_DEVICE_ID XPAR_PS7_SCUWDT_0_DEVICE_ID
#define XPAR_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Definitions for driver SDPS */
#define XPAR_XSDPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_SD_0 */
#define XPAR_PS7_SD_0_DEVICE_ID 0
#define XPAR_PS7_SD_0_BASEADDR 0xE0100000
#define XPAR_PS7_SD_0_HIGHADDR 0xE0100FFF
#define XPAR_PS7_SD_0_SDIO_CLK_FREQ_HZ 100000000
#define XPAR_PS7_SD_0_HAS_CD 0
#define XPAR_PS7_SD_0_HAS_WP 0
#define XPAR_PS7_SD_0_BUS_WIDTH 0
#define XPAR_PS7_SD_0_MIO_BANK 0
#define XPAR_PS7_SD_0_HAS_EMIO 0


/* Definitions for peripheral PS7_SD_1 */
#define XPAR_PS7_SD_1_DEVICE_ID 1
#define XPAR_PS7_SD_1_BASEADDR 0xE0101000
#define XPAR_PS7_SD_1_HIGHADDR 0xE0101FFF
#define XPAR_PS7_SD_1_SDIO_CLK_FREQ_HZ 100000000
#define XPAR_PS7_SD_1_HAS_CD 0
#define XPAR_PS7_SD_1_HAS_WP 0
#define XPAR_PS7_SD_1_BUS_WIDTH 0
#define XPAR_PS7_SD_1_MIO_BANK 0
#define XPAR_PS7_SD_1_HAS_EMIO 0


/******************************************************************/

#define XPAR_PS7_SD_0_IS_CACHE_COHERENT 0
#define XPAR_PS7_SD_1_IS_CACHE_COHERENT 0
/* Canonical definitions for peripheral PS7_SD_0 */
#define XPAR_XSDPS_0_DEVICE_ID XPAR_PS7_SD_0_DEVICE_ID
#define XPAR_XSDPS_0_BASEADDR 0xE0100000
#define XPAR_XSDPS_0_HIGHADDR 0xE0100FFF
#define XPAR_XSDPS_0_SDIO_CLK_FREQ_HZ 100000000
#define XPAR_XSDPS_0_HAS_CD 0
#define XPAR_XSDPS_0_HAS_WP 0
#define XPAR_XSDPS_0_BUS_WIDTH 0
#define XPAR_XSDPS_0_MIO_BANK 0
#define XPAR_XSDPS_0_HAS_EMIO 0
#define XPAR_XSDPS_0_IS_CACHE_COHERENT 0

/* Canonical definitions for peripheral PS7_SD_1 */
#define XPAR_XSDPS_1_DEVICE_ID XPAR_PS7_SD_1_DEVICE_ID
#define XPAR_XSDPS_1_BASEADDR 0xE0101000
#define XPAR_XSDPS_1_HIGHADDR 0xE0101FFF
#define XPAR_XSDPS_1_SDIO_CLK_FREQ_HZ 100000000
#define XPAR_XSDPS_1_HAS_CD 0
#define XPAR_XSDPS_1_HAS_WP 0
#define XPAR_XSDPS_1_BUS_WIDTH 0
#define XPAR_XSDPS_1_MIO_BANK 0
#define XPAR_XSDPS_1_HAS_EMIO 0
#define XPAR_XSDPS_1_IS_CACHE_COHERENT 0


/******************************************************************/

/* Definitions for driver SPIPS */
#define XPAR_XSPIPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_SPI_0 */
#define XPAR_PS7_SPI_0_DEVICE_ID 0
#define XPAR_PS7_SPI_0_BASEADDR 0xE0006000
#define XPAR_PS7_SPI_0_HIGHADDR 0xE0006FFF
#define XPAR_PS7_SPI_0_SPI_CLK_FREQ_HZ 166666672


/* Definitions for peripheral PS7_SPI_1 */
#define XPAR_PS7_SPI_1_DEVICE_ID 1
#define XPAR_PS7_SPI_1_BASEADDR 0xE0007000
#define XPAR_PS7_SPI_1_HIGHADDR 0xE0007FFF
#define XPAR_PS7_SPI_1_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Canonical definitions for peripheral PS7_SPI_0 */
#define XPAR_XSPIPS_0_DEVICE_ID XPAR_PS7_SPI_0_DEVICE_ID
#define XPAR_XSPIPS_0_BASEADDR 0xE0006000
#define XPAR_XSPIPS_0_HIGHADDR 0xE0006FFF
#define XPAR_XSPIPS_0_SPI_CLK_FREQ_HZ 166666672

/* Canonical definitions for peripheral PS7_SPI_1 */
#define XPAR_XSPIPS_1_DEVICE_ID XPAR_PS7_SPI_1_DEVICE_ID
#define XPAR_XSPIPS_1_BASEADDR 0xE0007000
#define XPAR_XSPIPS_1_HIGHADDR 0xE0007FFF
#define XPAR_XSPIPS_1_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Definitions for driver TTCPS */
#define XPAR_XTTCPS_NUM_INSTANCES 3U

/* Definitions for peripheral PS7_TTC_0 */
#define XPAR_PS7_TTC_0_DEVICE_ID 0U
#define XPAR_PS7_TTC_0_BASEADDR 0XF8001000U
#define XPAR_PS7_TTC_0_TTC_CLK_FREQ_HZ 127777786U
#define XPAR_PS7_TTC_0_TTC_CLK_CLKSRC 0U
#define XPAR_PS7_TTC_1_DEVICE_ID 1U
#define XPAR_PS7_TTC_1_BASEADDR 0XF8001004U
#define XPAR_PS7_TTC_1_TTC_CLK_FREQ_HZ 127777786U
#define XPAR_PS7_TTC_1_TTC_CLK_CLKSRC 0U
#define XPAR_PS7_TTC_2_DEVICE_ID 2U
#define XPAR_PS7_TTC_2_BASEADDR 0XF8001008U
#define XPAR_PS7_TTC_2_TTC_CLK_FREQ_HZ 127777786U
#define XPAR_PS7_TTC_2_TTC_CLK_CLKSRC 0U


/******************************************************************/

/* Canonical definitions for peripheral PS7_TTC_0 */
#define XPAR_XTTCPS_0_DEVICE_ID XPAR_PS7_TTC_0_DEVICE_ID
#define XPAR_XTTCPS_0_BASEADDR 0xF8001000U
#define XPAR_XTTCPS_0_TTC_CLK_FREQ_HZ 127777786U
#define XPAR_XTTCPS_0_TTC_CLK_CLKSRC 0U

#define XPAR_XTTCPS_1_DEVICE_ID XPAR_PS7_TTC_1_DEVICE_ID
#define XPAR_XTTCPS_1_BASEADDR 0xF8001004U
#define XPAR_XTTCPS_1_TTC_CLK_FREQ_HZ 127777786U
#define XPAR_XTTCPS_1_TTC_CLK_CLKSRC 0U

#define XPAR_XTTCPS_2_DEVICE_ID XPAR_PS7_TTC_2_DEVICE_ID
#define XPAR_XTTCPS_2_BASEADDR 0xF8001008U
#define XPAR_XTTCPS_2_TTC_CLK_FREQ_HZ 127777786U
#define XPAR_XTTCPS_2_TTC_CLK_CLKSRC 0U


/******************************************************************/

/* Definitions for driver UARTNS550 */
#define XPAR_XUARTNS550_NUM_INSTANCES 12U
#define XPAR_XUARTNS550_CLOCK_HZ 125000000U

/* Definitions for peripheral AXI_UART16550_0 */
#define XPAR_AXI_UART16550_0_DEVICE_ID 0U
#define XPAR_AXI_UART16550_0_BASEADDR 0x43C00000U
#define XPAR_AXI_UART16550_0_HIGHADDR 0x43C0FFFFU
#define XPAR_AXI_UART16550_0_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_1 */
#define XPAR_AXI_UART16550_1_DEVICE_ID 1U
#define XPAR_AXI_UART16550_1_BASEADDR 0x43C10000U
#define XPAR_AXI_UART16550_1_HIGHADDR 0x43C1FFFFU
#define XPAR_AXI_UART16550_1_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_10 */
#define XPAR_AXI_UART16550_10_DEVICE_ID 2U
#define XPAR_AXI_UART16550_10_BASEADDR 0x81630000U
#define XPAR_AXI_UART16550_10_HIGHADDR 0x8163FFFFU
#define XPAR_AXI_UART16550_10_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_11 */
#define XPAR_AXI_UART16550_11_DEVICE_ID 3U
#define XPAR_AXI_UART16550_11_BASEADDR 0x81640000U
#define XPAR_AXI_UART16550_11_HIGHADDR 0x8164FFFFU
#define XPAR_AXI_UART16550_11_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_2 */
#define XPAR_AXI_UART16550_2_DEVICE_ID 4U
#define XPAR_AXI_UART16550_2_BASEADDR 0x43C20000U
#define XPAR_AXI_UART16550_2_HIGHADDR 0x43C2FFFFU
#define XPAR_AXI_UART16550_2_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_3 */
#define XPAR_AXI_UART16550_3_DEVICE_ID 5U
#define XPAR_AXI_UART16550_3_BASEADDR 0x43C30000U
#define XPAR_AXI_UART16550_3_HIGHADDR 0x43C3FFFFU
#define XPAR_AXI_UART16550_3_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_4 */
#define XPAR_AXI_UART16550_4_DEVICE_ID 6U
#define XPAR_AXI_UART16550_4_BASEADDR 0x43C40000U
#define XPAR_AXI_UART16550_4_HIGHADDR 0x43C4FFFFU
#define XPAR_AXI_UART16550_4_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_5 */
#define XPAR_AXI_UART16550_5_DEVICE_ID 7U
#define XPAR_AXI_UART16550_5_BASEADDR 0x43C50000U
#define XPAR_AXI_UART16550_5_HIGHADDR 0x43C5FFFFU
#define XPAR_AXI_UART16550_5_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_6 */
#define XPAR_AXI_UART16550_6_DEVICE_ID 8U
#define XPAR_AXI_UART16550_6_BASEADDR 0x43C60000U
#define XPAR_AXI_UART16550_6_HIGHADDR 0x43C6FFFFU
#define XPAR_AXI_UART16550_6_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_7 */
#define XPAR_AXI_UART16550_7_DEVICE_ID 9U
#define XPAR_AXI_UART16550_7_BASEADDR 0x81600000U
#define XPAR_AXI_UART16550_7_HIGHADDR 0x8160FFFFU
#define XPAR_AXI_UART16550_7_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_8 */
#define XPAR_AXI_UART16550_8_DEVICE_ID 10U
#define XPAR_AXI_UART16550_8_BASEADDR 0x81610000U
#define XPAR_AXI_UART16550_8_HIGHADDR 0x8161FFFFU
#define XPAR_AXI_UART16550_8_CLOCK_FREQ_HZ 125000000U


/* Definitions for peripheral AXI_UART16550_9 */
#define XPAR_AXI_UART16550_9_DEVICE_ID 11U
#define XPAR_AXI_UART16550_9_BASEADDR 0x81620000U
#define XPAR_AXI_UART16550_9_HIGHADDR 0x8162FFFFU
#define XPAR_AXI_UART16550_9_CLOCK_FREQ_HZ 125000000U


/******************************************************************/

/* Canonical definitions for peripheral AXI_UART16550_0 */
#define XPAR_UARTNS550_0_DEVICE_ID 0U
#define XPAR_UARTNS550_0_BASEADDR 0x43C00000U
#define XPAR_UARTNS550_0_HIGHADDR 0x43C0FFFFU
#define XPAR_UARTNS550_0_CLOCK_FREQ_HZ XPAR_AXI_UART16550_0_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_1 */
#define XPAR_UARTNS550_1_DEVICE_ID 1U
#define XPAR_UARTNS550_1_BASEADDR 0x43C10000U
#define XPAR_UARTNS550_1_HIGHADDR 0x43C1FFFFU
#define XPAR_UARTNS550_1_CLOCK_FREQ_HZ XPAR_AXI_UART16550_1_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_10 */
#define XPAR_UARTNS550_2_DEVICE_ID 2U
#define XPAR_UARTNS550_2_BASEADDR 0x81630000U
#define XPAR_UARTNS550_2_HIGHADDR 0x8163FFFFU
#define XPAR_UARTNS550_2_CLOCK_FREQ_HZ XPAR_AXI_UART16550_10_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_11 */
#define XPAR_UARTNS550_3_DEVICE_ID 3U
#define XPAR_UARTNS550_3_BASEADDR 0x81640000U
#define XPAR_UARTNS550_3_HIGHADDR 0x8164FFFFU
#define XPAR_UARTNS550_3_CLOCK_FREQ_HZ XPAR_AXI_UART16550_11_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_2 */
#define XPAR_UARTNS550_4_DEVICE_ID 4U
#define XPAR_UARTNS550_4_BASEADDR 0x43C20000U
#define XPAR_UARTNS550_4_HIGHADDR 0x43C2FFFFU
#define XPAR_UARTNS550_4_CLOCK_FREQ_HZ XPAR_AXI_UART16550_2_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_3 */
#define XPAR_UARTNS550_5_DEVICE_ID 5U
#define XPAR_UARTNS550_5_BASEADDR 0x43C30000U
#define XPAR_UARTNS550_5_HIGHADDR 0x43C3FFFFU
#define XPAR_UARTNS550_5_CLOCK_FREQ_HZ XPAR_AXI_UART16550_3_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_4 */
#define XPAR_UARTNS550_6_DEVICE_ID 6U
#define XPAR_UARTNS550_6_BASEADDR 0x43C40000U
#define XPAR_UARTNS550_6_HIGHADDR 0x43C4FFFFU
#define XPAR_UARTNS550_6_CLOCK_FREQ_HZ XPAR_AXI_UART16550_4_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_5 */
#define XPAR_UARTNS550_7_DEVICE_ID 7U
#define XPAR_UARTNS550_7_BASEADDR 0x43C50000U
#define XPAR_UARTNS550_7_HIGHADDR 0x43C5FFFFU
#define XPAR_UARTNS550_7_CLOCK_FREQ_HZ XPAR_AXI_UART16550_5_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_6 */
#define XPAR_UARTNS550_8_DEVICE_ID 8U
#define XPAR_UARTNS550_8_BASEADDR 0x43C60000U
#define XPAR_UARTNS550_8_HIGHADDR 0x43C6FFFFU
#define XPAR_UARTNS550_8_CLOCK_FREQ_HZ XPAR_AXI_UART16550_6_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_7 */
#define XPAR_UARTNS550_9_DEVICE_ID 9U
#define XPAR_UARTNS550_9_BASEADDR 0x81600000U
#define XPAR_UARTNS550_9_HIGHADDR 0x8160FFFFU
#define XPAR_UARTNS550_9_CLOCK_FREQ_HZ XPAR_AXI_UART16550_7_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_8 */
#define XPAR_UARTNS550_10_DEVICE_ID 10U
#define XPAR_UARTNS550_10_BASEADDR 0x81610000U
#define XPAR_UARTNS550_10_HIGHADDR 0x8161FFFFU
#define XPAR_UARTNS550_10_CLOCK_FREQ_HZ XPAR_AXI_UART16550_8_CLOCK_FREQ_HZ

/* Canonical definitions for peripheral AXI_UART16550_9 */
#define XPAR_UARTNS550_11_DEVICE_ID 11U
#define XPAR_UARTNS550_11_BASEADDR 0x81620000U
#define XPAR_UARTNS550_11_HIGHADDR 0x8162FFFFU
#define XPAR_UARTNS550_11_CLOCK_FREQ_HZ XPAR_AXI_UART16550_9_CLOCK_FREQ_HZ


/******************************************************************/

/* Definitions for driver UARTPS */
#define XPAR_XUARTPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_UART_0 */
#define XPAR_PS7_UART_0_DEVICE_ID 0
#define XPAR_PS7_UART_0_BASEADDR 0xE0000000
#define XPAR_PS7_UART_0_HIGHADDR 0xE0000FFF
#define XPAR_PS7_UART_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_PS7_UART_0_HAS_MODEM 0


/* Definitions for peripheral PS7_UART_1 */
#define XPAR_PS7_UART_1_DEVICE_ID 1
#define XPAR_PS7_UART_1_BASEADDR 0xE0001000
#define XPAR_PS7_UART_1_HIGHADDR 0xE0001FFF
#define XPAR_PS7_UART_1_UART_CLK_FREQ_HZ 100000000
#define XPAR_PS7_UART_1_HAS_MODEM 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_UART_0 */
#define XPAR_XUARTPS_0_DEVICE_ID XPAR_PS7_UART_0_DEVICE_ID
#define XPAR_XUARTPS_0_BASEADDR 0xE0000000
#define XPAR_XUARTPS_0_HIGHADDR 0xE0000FFF
#define XPAR_XUARTPS_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_XUARTPS_0_HAS_MODEM 0

/* Canonical definitions for peripheral PS7_UART_1 */
#define XPAR_XUARTPS_1_DEVICE_ID XPAR_PS7_UART_1_DEVICE_ID
#define XPAR_XUARTPS_1_BASEADDR 0xE0001000
#define XPAR_XUARTPS_1_HIGHADDR 0xE0001FFF
#define XPAR_XUARTPS_1_UART_CLK_FREQ_HZ 100000000
#define XPAR_XUARTPS_1_HAS_MODEM 0


/******************************************************************/

/* Definitions for driver XADCPS */
#define XPAR_XADCPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_XADC_0 */
#define XPAR_PS7_XADC_0_DEVICE_ID 0
#define XPAR_PS7_XADC_0_BASEADDR 0xF8007100
#define XPAR_PS7_XADC_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Canonical definitions for peripheral PS7_XADC_0 */
#define XPAR_XADCPS_0_DEVICE_ID XPAR_PS7_XADC_0_DEVICE_ID
#define XPAR_XADCPS_0_BASEADDR 0xF8007100
#define XPAR_XADCPS_0_HIGHADDR 0xF8007120


/******************************************************************/

#endif  /* end of protection macro */
