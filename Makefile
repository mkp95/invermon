BL_SDK_BASE ?= $(HOME)/bouffalo_sdk

all:
	make -C $(BL_SDK_BASE) CHIP=bl602 BOARD=bl602dk APP_DIR=$(CURDIR) APP=.
