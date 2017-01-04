# Copyright (C) 2013 OmniROM Project
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

# Grab needed APNs
PRODUCT_COPY_FILES := vendor/omni/prebuilt/etc/apns-conf-cdma.xml:system/etc/apns-conf.xml

# Inherit from our custom product configuration
$(call inherit-product, vendor/omni/config/common.mk)

# Inherit device configuration
$(call inherit-product, device/huawei/y6/full_y6.mk)

# Discard inherited values and use our own instead.
PRODUCT_NAME := omni_y6
PRODUCT_DEVICE := y6
PRODUCT_BRAND := huawei
PRODUCT_MANUFACTURER := huawei
PRODUCT_MODEL := y6

# Set build fingerprint / ID / Product Name ect.
PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=t0ltespr TARGET_DEVICE=t0ltespr BUILD_FINGERPRINT="huawei/t0ltespr/t0ltespr:5.1.1/JZO54K/Y6VPAMC2:user/release-keys" PRIVATE_BUILD_DESC="t0ltespr-user 5.1.1 JZO54K scl release-keys"
