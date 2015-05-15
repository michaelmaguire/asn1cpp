//
//  asn1cpp_OctetString.h
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
#include "asn1cpp_ASN1.h"
#include <iostream>
#include <vector>

#ifndef asn1cpp_OctetString_h
#define asn1cpp_OctetString_h

namespace asn1cpp {
    
    class OctetString : public ASN1 {
    private:
        std::vector<char> mOctets;
    public:
        OctetString() : ASN1(Tag(Tag::OCTET_STRING)) {}
        OctetString(const std::vector<char> & chars) : ASN1(Tag(Tag::OCTET_STRING)), mOctets(chars) {}
        OctetString(const std::string & aString) : ASN1(Tag(Tag::OCTET_STRING)), mOctets(aString.begin(), aString.end()) {}
        friend std::ostream & operator << ( std::ostream & os, const OctetString & octetString );
    };
    
    std::ostream & operator << ( std::ostream & os, const OctetString & octetString ) {
        operator<<(os,static_cast<ASN1>(octetString));
        os.write(octetString.mOctets.data(), octetString.mOctets.size());
        return os;
    }
    
} // end namespace asn1cpp

#endif // asn1cpp_OctetString_h
