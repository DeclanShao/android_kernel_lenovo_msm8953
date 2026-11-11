ifeq ($(CONFIG_MACH_LENOVO_MSM8953),y)
obj-$(CONFIG_INPUT_TOUCHSCREEN) += touchscreen/
else
ccflags-y := -Wno-unused-function
obj-y := stub.o
endif