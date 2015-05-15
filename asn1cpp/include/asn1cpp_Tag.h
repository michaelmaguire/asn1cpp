//
//  asn1cpp_Tag.h
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

#ifndef asn1cpp_Tag_h
#define asn1cpp_Tag_h

namespace asn1cpp {
    
    /**
     * A class to encapsulate the ASN.1 'tag' which indicates element type.
     */
    class Tag {
    private:
        char mTagNumber;
    public:
        
        enum {
            OCTET_STRING = 0x04
        };
        
        Tag(char tagNumber) : mTagNumber(tagNumber) {}
        friend std::ostream & operator << ( std::ostream & os, const Tag & tag);
    };
    
    std::ostream & operator << ( std::ostream & os, const Tag & tag ) {
        os << tag.mTagNumber;
        return os;
    }
        
    
} // end namespace asn1cpp

#endif // asn1cpp_Tag_h
