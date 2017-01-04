# Copyright (C) 2015 The CyanogenMod Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Boot animation
TARGET_SCREEN_HEIGHT := 1280
TARGET_SCREEN_WIDTH := 720

# PAC device overlay
PRODUCT_PACKAGE_OVERLAYS += vendor/pac/overlay/common/frameworks/base/core/res/res/drawable-xhdpi/

# Copy bootanimation
PRODUCT_COPY_FILES += \
    vendor/pac/prebuilt/common/media/bootanimation/720.zip:system/media/bootanimation.zip

# Inherit from these products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit device configuration
$(call inherit-product, device/huawei/y6/device.mk)

# Inherit some common PAC stuff.
$(call inherit-product, vendor/pac/config/pac_common.mk)

PRODUCT_NAME := pac_y6
PRODUCT_DEVICE := y6
PRODUCT_MANUFACTURER := HUAWEI
PRODUCT_BRAND := Huawei
PRODUCT_MODEL := y6

PRODUCT_GMS_CLIENTID_BASE := android-huawei
