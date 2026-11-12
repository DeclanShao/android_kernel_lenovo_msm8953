ifeq ($(CONFIG_MACH_LENOVO_MSM8953),y)
obj-$(CONFIG_INPUT_TOUCHSCREEN) += touchscreen/
obj-$(CONFIG_INPUT_MISC) += misc/
else
ccflags-y := -Wno-unused-function
obj-y := stub.o
endif