ccflags-y += -I $(srctree)/techpack/camera-legacy-n
ccflags-y += -I $(srctree)/techpack/camera-legacy-n/common
ccflags-y += -I $(srctree)/techpack/camera-legacy-n/msm_vb2
ccflags-y += -I $(srctree)/techpack/camera-legacy-n/camera
ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/io
ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/cci
ifeq ($(CONFIG_MACH_LENOVO_TB8703),y)
obj-$(CONFIG_MSMB_CAMERA) += cci/ io/ csiphy/ csid/ actuator/ eeprom/ ois/ flash/
else
obj-$(CONFIG_MSMB_CAMERA) += cci/ io/ csiphy/ csid/ actuator/ eeprom/ ois/ flash/ ir_led/ ir_cut/
endif
obj-$(CONFIG_MSM_CAMERA_SENSOR) += msm_sensor_init.o msm_sensor_driver.o msm_sensor.o
