/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_CLOCK_GETTIME 0
#define K_SYSCALL_DEVICE_GET_BINDING 1
#define K_SYSCALL_DEVICE_IS_READY 2
#define K_SYSCALL_FLASH_ERASE 3
#define K_SYSCALL_FLASH_EX_OP 4
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 5
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 6
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 7
#define K_SYSCALL_FLASH_GET_PARAMETERS 8
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 9
#define K_SYSCALL_FLASH_READ 10
#define K_SYSCALL_FLASH_READ_JEDEC_ID 11
#define K_SYSCALL_FLASH_SFDP_READ 12
#define K_SYSCALL_FLASH_WRITE 13
#define K_SYSCALL_GPIO_GET_PENDING_INT 14
#define K_SYSCALL_GPIO_PIN_CONFIGURE 15
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 16
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 17
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 18
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 19
#define K_SYSCALL_GPIO_PORT_GET_RAW 20
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 21
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 22
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 23
#define K_SYSCALL_K_BUSY_WAIT 24
#define K_SYSCALL_K_CONDVAR_BROADCAST 25
#define K_SYSCALL_K_CONDVAR_INIT 26
#define K_SYSCALL_K_CONDVAR_SIGNAL 27
#define K_SYSCALL_K_CONDVAR_WAIT 28
#define K_SYSCALL_K_EVENT_CLEAR 29
#define K_SYSCALL_K_EVENT_INIT 30
#define K_SYSCALL_K_EVENT_POST 31
#define K_SYSCALL_K_EVENT_SET 32
#define K_SYSCALL_K_EVENT_SET_MASKED 33
#define K_SYSCALL_K_EVENT_WAIT 34
#define K_SYSCALL_K_EVENT_WAIT_ALL 35
#define K_SYSCALL_K_FLOAT_DISABLE 36
#define K_SYSCALL_K_FLOAT_ENABLE 37
#define K_SYSCALL_K_FUTEX_WAIT 38
#define K_SYSCALL_K_FUTEX_WAKE 39
#define K_SYSCALL_K_IS_PREEMPT_THREAD 40
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 41
#define K_SYSCALL_K_MSGQ_GET 42
#define K_SYSCALL_K_MSGQ_GET_ATTRS 43
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 44
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 45
#define K_SYSCALL_K_MSGQ_PEEK 46
#define K_SYSCALL_K_MSGQ_PEEK_AT 47
#define K_SYSCALL_K_MSGQ_PURGE 48
#define K_SYSCALL_K_MSGQ_PUT 49
#define K_SYSCALL_K_MUTEX_INIT 50
#define K_SYSCALL_K_MUTEX_LOCK 51
#define K_SYSCALL_K_MUTEX_UNLOCK 52
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 53
#define K_SYSCALL_K_OBJECT_ALLOC 54
#define K_SYSCALL_K_OBJECT_ALLOC_SIZE 55
#define K_SYSCALL_K_OBJECT_RELEASE 56
#define K_SYSCALL_K_PIPE_ALLOC_INIT 57
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 58
#define K_SYSCALL_K_PIPE_FLUSH 59
#define K_SYSCALL_K_PIPE_GET 60
#define K_SYSCALL_K_PIPE_PUT 61
#define K_SYSCALL_K_PIPE_READ_AVAIL 62
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 63
#define K_SYSCALL_K_POLL 64
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 65
#define K_SYSCALL_K_POLL_SIGNAL_INIT 66
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 67
#define K_SYSCALL_K_POLL_SIGNAL_RESET 68
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 69
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 70
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 71
#define K_SYSCALL_K_QUEUE_GET 72
#define K_SYSCALL_K_QUEUE_INIT 73
#define K_SYSCALL_K_QUEUE_IS_EMPTY 74
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 75
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 76
#define K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY 77
#define K_SYSCALL_K_SEM_COUNT_GET 78
#define K_SYSCALL_K_SEM_GIVE 79
#define K_SYSCALL_K_SEM_INIT 80
#define K_SYSCALL_K_SEM_RESET 81
#define K_SYSCALL_K_SEM_TAKE 82
#define K_SYSCALL_K_SLEEP 83
#define K_SYSCALL_K_STACK_ALLOC_INIT 84
#define K_SYSCALL_K_STACK_POP 85
#define K_SYSCALL_K_STACK_PUSH 86
#define K_SYSCALL_K_STR_OUT 87
#define K_SYSCALL_K_THREAD_ABORT 88
#define K_SYSCALL_K_THREAD_CREATE 89
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 90
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 91
#define K_SYSCALL_K_THREAD_DEADLINE_SET 92
#define K_SYSCALL_K_THREAD_JOIN 93
#define K_SYSCALL_K_THREAD_NAME_COPY 94
#define K_SYSCALL_K_THREAD_NAME_SET 95
#define K_SYSCALL_K_THREAD_PRIORITY_GET 96
#define K_SYSCALL_K_THREAD_PRIORITY_SET 97
#define K_SYSCALL_K_THREAD_RESUME 98
#define K_SYSCALL_K_THREAD_STACK_ALLOC 99
#define K_SYSCALL_K_THREAD_STACK_FREE 100
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 101
#define K_SYSCALL_K_THREAD_START 102
#define K_SYSCALL_K_THREAD_SUSPEND 103
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 104
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 105
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 106
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 107
#define K_SYSCALL_K_TIMER_START 108
#define K_SYSCALL_K_TIMER_STATUS_GET 109
#define K_SYSCALL_K_TIMER_STATUS_SYNC 110
#define K_SYSCALL_K_TIMER_STOP 111
#define K_SYSCALL_K_TIMER_USER_DATA_GET 112
#define K_SYSCALL_K_TIMER_USER_DATA_SET 113
#define K_SYSCALL_K_UPTIME_TICKS 114
#define K_SYSCALL_K_USLEEP 115
#define K_SYSCALL_K_WAKEUP 116
#define K_SYSCALL_K_YIELD 117
#define K_SYSCALL_LOG_BUFFERED_CNT 118
#define K_SYSCALL_LOG_FILTER_SET 119
#define K_SYSCALL_LOG_PANIC 120
#define K_SYSCALL_LOG_PROCESS 121
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 122
#define K_SYSCALL_UART_CONFIGURE 123
#define K_SYSCALL_UART_CONFIG_GET 124
#define K_SYSCALL_UART_DRV_CMD 125
#define K_SYSCALL_UART_ERR_CHECK 126
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 127
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 128
#define K_SYSCALL_UART_IRQ_IS_PENDING 129
#define K_SYSCALL_UART_IRQ_RX_DISABLE 130
#define K_SYSCALL_UART_IRQ_RX_ENABLE 131
#define K_SYSCALL_UART_IRQ_TX_DISABLE 132
#define K_SYSCALL_UART_IRQ_TX_ENABLE 133
#define K_SYSCALL_UART_IRQ_UPDATE 134
#define K_SYSCALL_UART_LINE_CTRL_GET 135
#define K_SYSCALL_UART_LINE_CTRL_SET 136
#define K_SYSCALL_UART_POLL_IN 137
#define K_SYSCALL_UART_POLL_IN_U16 138
#define K_SYSCALL_UART_POLL_OUT 139
#define K_SYSCALL_UART_POLL_OUT_U16 140
#define K_SYSCALL_UART_RX_DISABLE 141
#define K_SYSCALL_UART_RX_ENABLE 142
#define K_SYSCALL_UART_RX_ENABLE_U16 143
#define K_SYSCALL_UART_TX 144
#define K_SYSCALL_UART_TX_ABORT 145
#define K_SYSCALL_UART_TX_U16 146
#define K_SYSCALL_ZEPHYR_FPUTC 147
#define K_SYSCALL_ZEPHYR_FWRITE 148
#define K_SYSCALL_ZEPHYR_READ_STDIN 149
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 150
#define K_SYSCALL_Z_ERRNO 151
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0 152
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1 153
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2 154
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 155
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 156
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 157
#define K_SYSCALL_BAD 158
#define K_SYSCALL_LIMIT 159


/* Following syscalls are not used in image */
#define K_SYSCALL_ADC_CHANNEL_SETUP 160
#define K_SYSCALL_ADC_READ 161
#define K_SYSCALL_ADC_READ_ASYNC 162
#define K_SYSCALL_ATOMIC_ADD 163
#define K_SYSCALL_ATOMIC_AND 164
#define K_SYSCALL_ATOMIC_CAS 165
#define K_SYSCALL_ATOMIC_NAND 166
#define K_SYSCALL_ATOMIC_OR 167
#define K_SYSCALL_ATOMIC_PTR_CAS 168
#define K_SYSCALL_ATOMIC_PTR_SET 169
#define K_SYSCALL_ATOMIC_SET 170
#define K_SYSCALL_ATOMIC_SUB 171
#define K_SYSCALL_ATOMIC_XOR 172
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_GET 173
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_SET 174
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_GET 175
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_SET 176
#define K_SYSCALL_AUXDISPLAY_CAPABILITIES_GET 177
#define K_SYSCALL_AUXDISPLAY_CLEAR 178
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_GET 179
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_SET 180
#define K_SYSCALL_AUXDISPLAY_CURSOR_SET_ENABLED 181
#define K_SYSCALL_AUXDISPLAY_CURSOR_SHIFT_SET 182
#define K_SYSCALL_AUXDISPLAY_CUSTOM_CHARACTER_SET 183
#define K_SYSCALL_AUXDISPLAY_CUSTOM_COMMAND 184
#define K_SYSCALL_AUXDISPLAY_DISPLAY_OFF 185
#define K_SYSCALL_AUXDISPLAY_DISPLAY_ON 186
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_GET 187
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_SET 188
#define K_SYSCALL_AUXDISPLAY_IS_BUSY 189
#define K_SYSCALL_AUXDISPLAY_POSITION_BLINKING_SET_ENABLED 190
#define K_SYSCALL_AUXDISPLAY_WRITE 191
#define K_SYSCALL_BBRAM_CHECK_INVALID 192
#define K_SYSCALL_BBRAM_CHECK_POWER 193
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 194
#define K_SYSCALL_BBRAM_GET_SIZE 195
#define K_SYSCALL_BBRAM_READ 196
#define K_SYSCALL_BBRAM_WRITE 197
#define K_SYSCALL_BC12_SET_RESULT_CB 198
#define K_SYSCALL_BC12_SET_ROLE 199
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 200
#define K_SYSCALL_CAN_CALC_TIMING 201
#define K_SYSCALL_CAN_CALC_TIMING_DATA 202
#define K_SYSCALL_CAN_GET_CAPABILITIES 203
#define K_SYSCALL_CAN_GET_CORE_CLOCK 204
#define K_SYSCALL_CAN_GET_MAX_BITRATE 205
#define K_SYSCALL_CAN_GET_MAX_FILTERS 206
#define K_SYSCALL_CAN_GET_STATE 207
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 208
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 209
#define K_SYSCALL_CAN_GET_TIMING_MAX 210
#define K_SYSCALL_CAN_GET_TIMING_MIN 211
#define K_SYSCALL_CAN_RECOVER 212
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 213
#define K_SYSCALL_CAN_SEND 214
#define K_SYSCALL_CAN_SET_BITRATE 215
#define K_SYSCALL_CAN_SET_BITRATE_DATA 216
#define K_SYSCALL_CAN_SET_MODE 217
#define K_SYSCALL_CAN_SET_TIMING 218
#define K_SYSCALL_CAN_SET_TIMING_DATA 219
#define K_SYSCALL_CAN_START 220
#define K_SYSCALL_CAN_STATS_GET_ACK_ERRORS 221
#define K_SYSCALL_CAN_STATS_GET_BIT0_ERRORS 222
#define K_SYSCALL_CAN_STATS_GET_BIT1_ERRORS 223
#define K_SYSCALL_CAN_STATS_GET_BIT_ERRORS 224
#define K_SYSCALL_CAN_STATS_GET_CRC_ERRORS 225
#define K_SYSCALL_CAN_STATS_GET_FORM_ERRORS 226
#define K_SYSCALL_CAN_STATS_GET_RX_OVERRUNS 227
#define K_SYSCALL_CAN_STATS_GET_STUFF_ERRORS 228
#define K_SYSCALL_CAN_STOP 229
#define K_SYSCALL_CHARGER_GET_PROP 230
#define K_SYSCALL_CHARGER_SET_PROP 231
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 232
#define K_SYSCALL_COUNTER_GET_FREQUENCY 233
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 234
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 235
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 236
#define K_SYSCALL_COUNTER_GET_PENDING_INT 237
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 238
#define K_SYSCALL_COUNTER_GET_VALUE 239
#define K_SYSCALL_COUNTER_GET_VALUE_64 240
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 241
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 242
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 243
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 244
#define K_SYSCALL_COUNTER_START 245
#define K_SYSCALL_COUNTER_STOP 246
#define K_SYSCALL_COUNTER_TICKS_TO_US 247
#define K_SYSCALL_COUNTER_US_TO_TICKS 248
#define K_SYSCALL_DAC_CHANNEL_SETUP 249
#define K_SYSCALL_DAC_WRITE_VALUE 250
#define K_SYSCALL_DEVMUX_SELECT_GET 251
#define K_SYSCALL_DEVMUX_SELECT_SET 252
#define K_SYSCALL_DMA_CHAN_FILTER 253
#define K_SYSCALL_DMA_RELEASE_CHANNEL 254
#define K_SYSCALL_DMA_REQUEST_CHANNEL 255
#define K_SYSCALL_DMA_RESUME 256
#define K_SYSCALL_DMA_START 257
#define K_SYSCALL_DMA_STOP 258
#define K_SYSCALL_DMA_SUSPEND 259
#define K_SYSCALL_EEPROM_GET_SIZE 260
#define K_SYSCALL_EEPROM_READ 261
#define K_SYSCALL_EEPROM_WRITE 262
#define K_SYSCALL_EMUL_FUEL_GAUGE_IS_BATTERY_CUTOFF 263
#define K_SYSCALL_EMUL_FUEL_GAUGE_SET_BATTERY_CHARGING 264
#define K_SYSCALL_ENTROPY_GET_ENTROPY 265
#define K_SYSCALL_ESPI_CONFIG 266
#define K_SYSCALL_ESPI_FLASH_ERASE 267
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 268
#define K_SYSCALL_ESPI_READ_FLASH 269
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 270
#define K_SYSCALL_ESPI_READ_REQUEST 271
#define K_SYSCALL_ESPI_RECEIVE_OOB 272
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 273
#define K_SYSCALL_ESPI_SAF_ACTIVATE 274
#define K_SYSCALL_ESPI_SAF_CONFIG 275
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 276
#define K_SYSCALL_ESPI_SAF_FLASH_READ 277
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 278
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 279
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 280
#define K_SYSCALL_ESPI_SEND_OOB 281
#define K_SYSCALL_ESPI_SEND_VWIRE 282
#define K_SYSCALL_ESPI_WRITE_FLASH 283
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 284
#define K_SYSCALL_ESPI_WRITE_REQUEST 285
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 286
#define K_SYSCALL_FUEL_GAUGE_BATTERY_CUTOFF 287
#define K_SYSCALL_FUEL_GAUGE_GET_BUFFER_PROP 288
#define K_SYSCALL_FUEL_GAUGE_GET_PROP 289
#define K_SYSCALL_FUEL_GAUGE_GET_PROPS 290
#define K_SYSCALL_FUEL_GAUGE_SET_PROP 291
#define K_SYSCALL_FUEL_GAUGE_SET_PROPS 292
#define K_SYSCALL_GNSS_GET_ENABLED_SYSTEMS 293
#define K_SYSCALL_GNSS_GET_FIX_RATE 294
#define K_SYSCALL_GNSS_GET_NAVIGATION_MODE 295
#define K_SYSCALL_GNSS_GET_PERIODIC_CONFIG 296
#define K_SYSCALL_GNSS_GET_SUPPORTED_SYSTEMS 297
#define K_SYSCALL_GNSS_SET_ENABLED_SYSTEMS 298
#define K_SYSCALL_GNSS_SET_FIX_RATE 299
#define K_SYSCALL_GNSS_SET_NAVIGATION_MODE 300
#define K_SYSCALL_GNSS_SET_PERIODIC_CONFIG 301
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 302
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 303
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 304
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 305
#define K_SYSCALL_HWSPINLOCK_GET_MAX_ID 306
#define K_SYSCALL_HWSPINLOCK_LOCK 307
#define K_SYSCALL_HWSPINLOCK_TRYLOCK 308
#define K_SYSCALL_HWSPINLOCK_UNLOCK 309
#define K_SYSCALL_I2C_CONFIGURE 310
#define K_SYSCALL_I2C_GET_CONFIG 311
#define K_SYSCALL_I2C_RECOVER_BUS 312
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 313
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 314
#define K_SYSCALL_I2C_TRANSFER 315
#define K_SYSCALL_I2S_BUF_READ 316
#define K_SYSCALL_I2S_BUF_WRITE 317
#define K_SYSCALL_I2S_CONFIGURE 318
#define K_SYSCALL_I2S_TRIGGER 319
#define K_SYSCALL_I3C_DO_CCC 320
#define K_SYSCALL_I3C_TRANSFER 321
#define K_SYSCALL_IPM_COMPLETE 322
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 323
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 324
#define K_SYSCALL_IPM_SEND 325
#define K_SYSCALL_IPM_SET_ENABLED 326
#define K_SYSCALL_IVSHMEM_ENABLE_INTERRUPTS 327
#define K_SYSCALL_IVSHMEM_GET_ID 328
#define K_SYSCALL_IVSHMEM_GET_MAX_PEERS 329
#define K_SYSCALL_IVSHMEM_GET_MEM 330
#define K_SYSCALL_IVSHMEM_GET_OUTPUT_MEM_SECTION 331
#define K_SYSCALL_IVSHMEM_GET_PROTOCOL 332
#define K_SYSCALL_IVSHMEM_GET_RW_MEM_SECTION 333
#define K_SYSCALL_IVSHMEM_GET_STATE 334
#define K_SYSCALL_IVSHMEM_GET_VECTORS 335
#define K_SYSCALL_IVSHMEM_INT_PEER 336
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 337
#define K_SYSCALL_IVSHMEM_SET_STATE 338
#define K_SYSCALL_KSCAN_CONFIG 339
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 340
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 341
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 342
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 343
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 344
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 345
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 346
#define K_SYSCALL_LED_BLINK 347
#define K_SYSCALL_LED_GET_INFO 348
#define K_SYSCALL_LED_OFF 349
#define K_SYSCALL_LED_ON 350
#define K_SYSCALL_LED_SET_BRIGHTNESS 351
#define K_SYSCALL_LED_SET_CHANNEL 352
#define K_SYSCALL_LED_SET_COLOR 353
#define K_SYSCALL_LED_WRITE_CHANNELS 354
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 355
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 356
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 357
#define K_SYSCALL_MBOX_MTU_GET 358
#define K_SYSCALL_MBOX_SEND 359
#define K_SYSCALL_MBOX_SET_ENABLED 360
#define K_SYSCALL_MDIO_BUS_DISABLE 361
#define K_SYSCALL_MDIO_BUS_ENABLE 362
#define K_SYSCALL_MDIO_READ 363
#define K_SYSCALL_MDIO_READ_C45 364
#define K_SYSCALL_MDIO_WRITE 365
#define K_SYSCALL_MDIO_WRITE_C45 366
#define K_SYSCALL_NET_ADDR_NTOP 367
#define K_SYSCALL_NET_ADDR_PTON 368
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 369
#define K_SYSCALL_NET_IF_GET_BY_INDEX 370
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 371
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 372
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 373
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 374
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 375
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 376
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 377
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 378
#define K_SYSCALL_NET_SOCKET_SERVICE_REGISTER 379
#define K_SYSCALL_NRF_QSPI_NOR_XIP_ENABLE 380
#define K_SYSCALL_PECI_CONFIG 381
#define K_SYSCALL_PECI_DISABLE 382
#define K_SYSCALL_PECI_ENABLE 383
#define K_SYSCALL_PECI_TRANSFER 384
#define K_SYSCALL_PHY_CONFIGURE_LINK 385
#define K_SYSCALL_PHY_GET_LINK_STATE 386
#define K_SYSCALL_PHY_LINK_CALLBACK_SET 387
#define K_SYSCALL_PHY_READ 388
#define K_SYSCALL_PHY_WRITE 389
#define K_SYSCALL_PS2_CONFIG 390
#define K_SYSCALL_PS2_DISABLE_CALLBACK 391
#define K_SYSCALL_PS2_ENABLE_CALLBACK 392
#define K_SYSCALL_PS2_READ 393
#define K_SYSCALL_PS2_WRITE 394
#define K_SYSCALL_PTP_CLOCK_GET 395
#define K_SYSCALL_PWM_CAPTURE_CYCLES 396
#define K_SYSCALL_PWM_DISABLE_CAPTURE 397
#define K_SYSCALL_PWM_ENABLE_CAPTURE 398
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 399
#define K_SYSCALL_PWM_SET_CYCLES 400
#define K_SYSCALL_RESET_LINE_ASSERT 401
#define K_SYSCALL_RESET_LINE_DEASSERT 402
#define K_SYSCALL_RESET_LINE_TOGGLE 403
#define K_SYSCALL_RESET_STATUS 404
#define K_SYSCALL_RETAINED_MEM_CLEAR 405
#define K_SYSCALL_RETAINED_MEM_READ 406
#define K_SYSCALL_RETAINED_MEM_SIZE 407
#define K_SYSCALL_RETAINED_MEM_WRITE 408
#define K_SYSCALL_RTC_ALARM_GET_SUPPORTED_FIELDS 409
#define K_SYSCALL_RTC_ALARM_GET_TIME 410
#define K_SYSCALL_RTC_ALARM_IS_PENDING 411
#define K_SYSCALL_RTC_ALARM_SET_CALLBACK 412
#define K_SYSCALL_RTC_ALARM_SET_TIME 413
#define K_SYSCALL_RTC_GET_CALIBRATION 414
#define K_SYSCALL_RTC_GET_TIME 415
#define K_SYSCALL_RTC_SET_CALIBRATION 416
#define K_SYSCALL_RTC_SET_TIME 417
#define K_SYSCALL_RTC_UPDATE_SET_CALLBACK 418
#define K_SYSCALL_RTIO_CQE_COPY_OUT 419
#define K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER 420
#define K_SYSCALL_RTIO_RELEASE_BUFFER 421
#define K_SYSCALL_RTIO_SQE_CANCEL 422
#define K_SYSCALL_RTIO_SQE_COPY_IN_GET_HANDLES 423
#define K_SYSCALL_RTIO_SUBMIT 424
#define K_SYSCALL_SDHC_CARD_BUSY 425
#define K_SYSCALL_SDHC_CARD_PRESENT 426
#define K_SYSCALL_SDHC_DISABLE_INTERRUPT 427
#define K_SYSCALL_SDHC_ENABLE_INTERRUPT 428
#define K_SYSCALL_SDHC_EXECUTE_TUNING 429
#define K_SYSCALL_SDHC_GET_HOST_PROPS 430
#define K_SYSCALL_SDHC_HW_RESET 431
#define K_SYSCALL_SDHC_REQUEST 432
#define K_SYSCALL_SDHC_SET_IO 433
#define K_SYSCALL_SENSOR_ATTR_GET 434
#define K_SYSCALL_SENSOR_ATTR_SET 435
#define K_SYSCALL_SENSOR_CHANNEL_GET 436
#define K_SYSCALL_SENSOR_GET_DECODER 437
#define K_SYSCALL_SENSOR_RECONFIGURE_READ_IODEV 438
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 439
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 440
#define K_SYSCALL_SIP_SUPERVISORY_CALL 441
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_REQ 442
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_RES 443
#define K_SYSCALL_SIP_SVC_PLAT_FORMAT_TRANS_ID 444
#define K_SYSCALL_SIP_SVC_PLAT_FREE_ASYNC_MEMORY 445
#define K_SYSCALL_SIP_SVC_PLAT_FUNC_ID_VALID 446
#define K_SYSCALL_SIP_SVC_PLAT_GET_ERROR_CODE 447
#define K_SYSCALL_SIP_SVC_PLAT_GET_TRANS_IDX 448
#define K_SYSCALL_SIP_SVC_PLAT_UPDATE_TRANS_ID 449
#define K_SYSCALL_SMBUS_BLOCK_PCALL 450
#define K_SYSCALL_SMBUS_BLOCK_READ 451
#define K_SYSCALL_SMBUS_BLOCK_WRITE 452
#define K_SYSCALL_SMBUS_BYTE_DATA_READ 453
#define K_SYSCALL_SMBUS_BYTE_DATA_WRITE 454
#define K_SYSCALL_SMBUS_BYTE_READ 455
#define K_SYSCALL_SMBUS_BYTE_WRITE 456
#define K_SYSCALL_SMBUS_CONFIGURE 457
#define K_SYSCALL_SMBUS_GET_CONFIG 458
#define K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB 459
#define K_SYSCALL_SMBUS_PCALL 460
#define K_SYSCALL_SMBUS_QUICK 461
#define K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB 462
#define K_SYSCALL_SMBUS_WORD_DATA_READ 463
#define K_SYSCALL_SMBUS_WORD_DATA_WRITE 464
#define K_SYSCALL_SPI_RELEASE 465
#define K_SYSCALL_SPI_TRANSCEIVE 466
#define K_SYSCALL_SYSCON_GET_BASE 467
#define K_SYSCALL_SYSCON_GET_SIZE 468
#define K_SYSCALL_SYSCON_READ_REG 469
#define K_SYSCALL_SYSCON_WRITE_REG 470
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE 471
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE 472
#define K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE 473
#define K_SYSCALL_SYS_CSRAND_GET 474
#define K_SYSCALL_SYS_RAND32_GET 475
#define K_SYSCALL_SYS_RAND_GET 476
#define K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP 477
#define K_SYSCALL_TGPIO_PIN_DISABLE 478
#define K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT 479
#define K_SYSCALL_TGPIO_PIN_READ_TS_EC 480
#define K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND 481
#define K_SYSCALL_TGPIO_PORT_GET_TIME 482
#define K_SYSCALL_UART_MUX_FIND 483
#define K_SYSCALL_UPDATEHUB_AUTOHANDLER 484
#define K_SYSCALL_UPDATEHUB_CONFIRM 485
#define K_SYSCALL_UPDATEHUB_PROBE 486
#define K_SYSCALL_UPDATEHUB_REBOOT 487
#define K_SYSCALL_UPDATEHUB_UPDATE 488
#define K_SYSCALL_USER_FAULT 489
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 490
#define K_SYSCALL_W1_CONFIGURE 491
#define K_SYSCALL_W1_GET_SLAVE_COUNT 492
#define K_SYSCALL_W1_READ_BIT 493
#define K_SYSCALL_W1_READ_BLOCK 494
#define K_SYSCALL_W1_READ_BYTE 495
#define K_SYSCALL_W1_RESET_BUS 496
#define K_SYSCALL_W1_SEARCH_BUS 497
#define K_SYSCALL_W1_WRITE_BIT 498
#define K_SYSCALL_W1_WRITE_BLOCK 499
#define K_SYSCALL_W1_WRITE_BYTE 500
#define K_SYSCALL_WDT_DISABLE 501
#define K_SYSCALL_WDT_FEED 502
#define K_SYSCALL_WDT_SETUP 503
#define K_SYSCALL_ZSOCK_ACCEPT 504
#define K_SYSCALL_ZSOCK_BIND 505
#define K_SYSCALL_ZSOCK_CLOSE 506
#define K_SYSCALL_ZSOCK_CONNECT 507
#define K_SYSCALL_ZSOCK_FCNTL 508
#define K_SYSCALL_ZSOCK_GETHOSTNAME 509
#define K_SYSCALL_ZSOCK_GETPEERNAME 510
#define K_SYSCALL_ZSOCK_GETSOCKNAME 511
#define K_SYSCALL_ZSOCK_GETSOCKOPT 512
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 513
#define K_SYSCALL_ZSOCK_INET_PTON 514
#define K_SYSCALL_ZSOCK_IOCTL 515
#define K_SYSCALL_ZSOCK_LISTEN 516
#define K_SYSCALL_ZSOCK_POLL 517
#define K_SYSCALL_ZSOCK_RECVFROM 518
#define K_SYSCALL_ZSOCK_SELECT 519
#define K_SYSCALL_ZSOCK_SENDMSG 520
#define K_SYSCALL_ZSOCK_SENDTO 521
#define K_SYSCALL_ZSOCK_SETSOCKOPT 522
#define K_SYSCALL_ZSOCK_SHUTDOWN 523
#define K_SYSCALL_ZSOCK_SOCKET 524
#define K_SYSCALL_ZSOCK_SOCKETPAIR 525
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 526


#ifndef _ASMLANGUAGE

#include <stdarg.h>
#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
