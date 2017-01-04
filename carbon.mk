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

# Inherit from these products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit device configuration
$(call inherit-product, device/huawei/y6/device.mk)

# Inherit some common carbon stuff.
$(call inherit-product, vendor/carbon/config/common_full_phone.mk)

PRODUCT_NAME := carbon_y6
PRODUCT_DEVICE := y6
PRODUCT_MANUFACTURER := HUAWEI
PRODUCT_BRAND := Huawei
PRODUCT_MODEL := y6

PRODUCT_GMS_CLIENTID_BASE := android-huawei