/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

/*
 This file has been autogenerated by update_pch.sh. It is possible to edit it
 manually (such as when an include file has been moved/renamed/removed). All such
 manual changes will be rewritten by the next run of update_pch.sh (which presumably
 also fixes all possible problems, so it's usually better to use it).

 Generated on 2017-09-20 22:55:53 using:
 ./bin/update_pch xmlsecurity xsec_fw --cutoff=2 --exclude:system --include:module --exclude:local

 If after updating build fails, use the following command to locate conflicting headers:
 ./bin/update_pch_bisect ./xmlsecurity/inc/pch/precompiled_xsec_fw.hxx "make xmlsecurity.build" --find-conflicts
*/

#include <cassert>
#include <config_typesizes.h>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <new>
#include <ostream>
#include <sstream>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <osl/diagnose.h>
#include <osl/interlck.h>
#include <rtl/ref.hxx>
#include <rtl/string.h>
#include <rtl/string.hxx>
#include <rtl/stringutils.hxx>
#include <rtl/textcvt.h>
#include <rtl/textenc.h>
#include <rtl/ustring.h>
#include <rtl/ustring.hxx>
#include <rtl/uuid.h>
#include <sal/config.h>
#include <sal/detail/log.h>
#include <sal/log.hxx>
#include <sal/macros.h>
#include <sal/saldllapi.h>
#include <sal/types.h>
#include <sal/typesizes.h>
#include <com/sun/star/lang/XMultiServiceFactory.hpp>
#include <com/sun/star/xml/crypto/XXMLSignatureTemplate.hpp>
#include <com/sun/star/xml/crypto/sax/ConstOfSecurityId.hpp>
#include <com/sun/star/xml/wrapper/XXMLElementWrapper.hpp>
#include <comphelper/processfactory.hxx>
#include <cppuhelper/supportsservice.hxx>

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
