//
//  asn1cpp_ASN1.h
//  asn1cpp
//
//  Created by Michael Maguire on 15/05/2015.
//  Copyright (c) 2015 Michael Maguire. All rights reserved.
//

/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. 
 */

#ifndef asn1cpp_ASN1_h
#define asn1cpp_ASN1_h

#include "asn1cpp_Tag.h"
#include "asn1cpp_Length.h"

namespace asn1cpp {

    /**
     * The base class for all ASN1 types.
     */
    class ASN1 {
    public:
        ASN1(const Tag & tag) : mTag(tag) {}
        Tag mTag;
        Length mLength;
        friend std::ostream & operator << ( std::ostream & os, const ASN1 & asn1);
    };

    std::ostream & operator << ( std::ostream & os, const ASN1 & asn1 ) {
        os << asn1.mTag;
        os << asn1.mLength;
        return os;
    }

    
} // end namespace asn1cpp

#endif // asn1cpp_ASN1_h
