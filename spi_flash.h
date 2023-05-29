#ifndef SPI_FLASH_H_
#define SPI_FLASH_H_

#include <stdint.h>
#include "mx_define.h"

#if defined(CONTR_25F0A)
	#include "mxic_hc.h"
#elif defined(PLATFORM_STM32L4XX)
	#include "stm32l4xx_spi1_hc.h"
#elif defined(PLATFORM_TEGRA)
	#include "tegra194_spi1_hc.h"
#endif

int mx_spi_flash_write(mx_spi_t *spi, uint32_t addr, uint32_t byte_count,
					   uint8_t *wr_buf, uint8_t wr_cmd);
int mx_spi_flash_read(mx_spi_t *spi, uint32_t addr, uint32_t byte_count,
					  uint8_t *rd_buf, uint8_t rd_cmd);

#endif /* SPI_FLASH_H_ */
