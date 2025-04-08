/* File generated by C:\ncs\v2.6.1\nrf\scripts\partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#define PM_MCUBOOT_OFFSET 0x0
#define PM_MCUBOOT_ADDRESS 0x0
#define PM_MCUBOOT_END_ADDRESS 0xc000
#define PM_MCUBOOT_SIZE 0xc000
#define PM_MCUBOOT_NAME mcuboot
#define PM_MCUBOOT_ID 0
#define PM_mcuboot_ID PM_MCUBOOT_ID
#define PM_mcuboot_IS_ENABLED 1
#define PM_0_LABEL MCUBOOT
#define PM_MCUBOOT_DEV flash_controller
#define PM_MCUBOOT_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_MCUBOOT_PAD_OFFSET 0xc000
#define PM_MCUBOOT_PAD_ADDRESS 0xc000
#define PM_MCUBOOT_PAD_END_ADDRESS 0xc200
#define PM_MCUBOOT_PAD_SIZE 0x200
#define PM_MCUBOOT_PAD_NAME mcuboot_pad
#define PM_MCUBOOT_PAD_ID 1
#define PM_mcuboot_pad_ID PM_MCUBOOT_PAD_ID
#define PM_mcuboot_pad_IS_ENABLED 1
#define PM_1_LABEL MCUBOOT_PAD
#define PM_MCUBOOT_PAD_DEV flash_controller
#define PM_MCUBOOT_PAD_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_MCUBOOT_PRIMARY_OFFSET 0xc000
#define PM_MCUBOOT_PRIMARY_ADDRESS 0xc000
#define PM_MCUBOOT_PRIMARY_END_ADDRESS 0x43000
#define PM_MCUBOOT_PRIMARY_SIZE 0x37000
#define PM_MCUBOOT_PRIMARY_NAME mcuboot_primary
#define PM_MCUBOOT_PRIMARY_ID 2
#define PM_mcuboot_primary_ID PM_MCUBOOT_PRIMARY_ID
#define PM_mcuboot_primary_IS_ENABLED 1
#define PM_2_LABEL MCUBOOT_PRIMARY
#define PM_MCUBOOT_PRIMARY_DEV flash_controller
#define PM_MCUBOOT_PRIMARY_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_APP_OFFSET 0xc200
#define PM_APP_ADDRESS 0xc200
#define PM_APP_END_ADDRESS 0x43000
#define PM_APP_SIZE 0x36e00
#define PM_APP_NAME app
#define PM_APP_ID 3
#define PM_app_ID PM_APP_ID
#define PM_app_IS_ENABLED 1
#define PM_3_LABEL APP
#define PM_APP_DEV flash_controller
#define PM_APP_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_MCUBOOT_PRIMARY_APP_OFFSET 0xc200
#define PM_MCUBOOT_PRIMARY_APP_ADDRESS 0xc200
#define PM_MCUBOOT_PRIMARY_APP_END_ADDRESS 0x43000
#define PM_MCUBOOT_PRIMARY_APP_SIZE 0x36e00
#define PM_MCUBOOT_PRIMARY_APP_NAME mcuboot_primary_app
#define PM_MCUBOOT_PRIMARY_APP_ID 4
#define PM_mcuboot_primary_app_ID PM_MCUBOOT_PRIMARY_APP_ID
#define PM_mcuboot_primary_app_IS_ENABLED 1
#define PM_4_LABEL MCUBOOT_PRIMARY_APP
#define PM_MCUBOOT_PRIMARY_APP_DEV flash_controller
#define PM_MCUBOOT_PRIMARY_APP_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_MCUBOOT_SECONDARY_OFFSET 0x43000
#define PM_MCUBOOT_SECONDARY_ADDRESS 0x43000
#define PM_MCUBOOT_SECONDARY_END_ADDRESS 0x7a000
#define PM_MCUBOOT_SECONDARY_SIZE 0x37000
#define PM_MCUBOOT_SECONDARY_NAME mcuboot_secondary
#define PM_MCUBOOT_SECONDARY_ID 5
#define PM_mcuboot_secondary_ID PM_MCUBOOT_SECONDARY_ID
#define PM_mcuboot_secondary_IS_ENABLED 1
#define PM_5_LABEL MCUBOOT_SECONDARY
#define PM_MCUBOOT_SECONDARY_DEV flash_controller
#define PM_MCUBOOT_SECONDARY_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_NVS_STORAGE_OFFSET 0x7a000
#define PM_NVS_STORAGE_ADDRESS 0x7a000
#define PM_NVS_STORAGE_END_ADDRESS 0x80000
#define PM_NVS_STORAGE_SIZE 0x6000
#define PM_NVS_STORAGE_NAME nvs_storage
#define PM_NVS_STORAGE_ID 6
#define PM_nvs_storage_ID PM_NVS_STORAGE_ID
#define PM_nvs_storage_IS_ENABLED 1
#define PM_6_LABEL NVS_STORAGE
#define PM_NVS_STORAGE_DEV flash_controller
#define PM_NVS_STORAGE_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_SRAM_PRIMARY_OFFSET 0x0
#define PM_SRAM_PRIMARY_ADDRESS 0x20000000
#define PM_SRAM_PRIMARY_END_ADDRESS 0x20010000
#define PM_SRAM_PRIMARY_SIZE 0x10000
#define PM_SRAM_PRIMARY_NAME sram_primary
#define PM_NUM 7
#define PM_ALL_BY_SIZE "mcuboot_pad nvs_storage mcuboot sram_primary app mcuboot_primary_app mcuboot_secondary mcuboot_primary"
#define PM_ADDRESS 0xc200
#define PM_SIZE 0x36e00
#define PM_SRAM_ADDRESS 0x20000000
#define PM_SRAM_SIZE 0x10000
#endif /* PM_CONFIG_H__ */