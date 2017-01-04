/*
   Copyright (c) 2014, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <cstdlib>
#include <fstream>
#include <string>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

#define ISMATCH(a,b)    (!strncmp(a,b,PROP_VALUE_MAX))

void vendor_load_properties()
{
    char platform[PROP_VALUE_MAX];
    std::ifstream fin;
    std::string buf;
    int rc;

    rc = property_get("ro.board.platform", platform);
    if (!rc || !ISMATCH(platform, ANDROID_TARGET))
        return;

    fin.open("/proc/app_info");
    while (getline(fin, buf))
        if (buf.find("huawei_fac_product_name") != std::string::npos)
            break;
    fin.close();

    /* SCL-L01 */
    if (buf.find("SCL-L01") != std::string::npos) {
        property_set("ro.product.model", "SCL-L01");
        property_set("ro.product.device", "SCL-L01");
        property_set("ro.build.product", "SCL-L01");
        property_set("ro.build.description", "SCL-L01-user 5.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L01/hwSCL-L01:5.1.1/HuaweiSCL-L01/C432B150:user/release-keys");
    }
    /* SCL-L02 */
    else if (buf.find("SCL-L02") != std::string::npos) {
        property_set("ro.product.model", "SCL-L02");
        property_set("ro.product.device", "SCL-L02");
        property_set("ro.build.product", "SCL-L02");
        property_set("ro.build.description", "SCL-L02-user 5.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L02/hwSCL-L02:5.1.1/HuaweiSCL-L02/C432B150:user/release-keys");
    }
    /* SCL-L03 */
    else if (buf.find("SCL-L03") != std::string::npos) {
        property_set("ro.product.model", "SCL-L03");
        property_set("ro.product.device", "SCL-L03");
        property_set("ro.build.product", "SCL-L03");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.build.description", "SCL-L03-user 5.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Honor/SCL-L03/hwSCL-L03:5.1.1/HonorSCL-L03/C432B150:user/release-keys");
    }
    /* SCL-L21 */
    else if (buf.find("SCL-L21") != std::string::npos) {
        property_set("ro.product.model", "SCL-L21");
        property_set("ro.product.device", "SCL-L21");
        property_set("ro.build.product", "SCL-L21");
	property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
	property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-L21-user 5.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L21/hwSCL-L21:5.1.1/HuaweiSCL-L21/C432B150:user/release-keys");
    }
    /* SCL-L31 */
    else if (buf.find("SCL-L31") != std::string::npos) {
        property_set("ro.product.model", "SCL-L31");
        property_set("ro.product.device", "SCL-L31");
        property_set("ro.build.product", "SCL-L31");
	property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
	property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
        property_set("ro.build.description", "SCL-L31-user 5.1.1 GRJ90 C432B150 release-keys");
        property_set("ro.build.fingerprint", "Huawei/SCL-L31/hwSCL-L31:5.1.1/HuaweiSCL-L31/C432B150:user/release-keys");
    }
}
