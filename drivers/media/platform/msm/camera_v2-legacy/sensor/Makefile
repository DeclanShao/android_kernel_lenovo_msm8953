ccflags-y += -Idrivers/media/platform/msm/camera_v2-legacy
ccflags-y += -Idrivers/media/platform/msm/camera_v2-legacy/common
ccflags-y += -Idrivers/media/platform/msm/camera_v2-legacy/msm_vb2
ccflags-y += -Idrivers/media/platform/msm/camera_v2-legacy/camera
ccflags-y += -Idrivers/media/platform/msm/camera_v2-legacy/sensor/io
ccflags-y += -Idrivers/media/platform/msm/camera_v2-legacy/sensor/cci
ifeq ($(CONFIG_MACH_LENOVO_TB8703),y)
obj-$(CONFIG_MSMB_CAMERA) += cci/ io/ csiphy/ csid/ actuator/ eeprom/ ois/ flash/
else
obj-$(CONFIG_MSMB_CAMERA) += cci/ io/ csiphy/ csid/ actuator/ eeprom/ ois/ flash/ ir_led/ ir_cut/
endif
obj-$(CONFIG_MSM_CAMERA_SENSOR) += msm_sensor_init.o msm_sensor_driver.o msm_sensor.o
