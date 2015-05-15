//
//  asn1cpp_Length.h
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

#ifndef asn1cpp_Length_h
#define asn1cpp_Length_h

#include "asn1cpp_Exception.h"

namespace asn1cpp {

    namespace {
        const size_t MAX_SHORT_LENGTH_ENCODING = 127;
    }
    /**
     * A class to encapsulate the ASN.1 'tag' which indicates element type.
     */
    class Length {
    private:
        size_t mLength;
    public:
        
        Length() : mLength(0) {}
        Length(size_t length) : mLength(length) {}
        friend std::ostream & operator << ( std::ostream & os, const Length & length);
    };
    
    std::ostream & operator << ( std::ostream & os, const Length & length ) {
        size_t l( length.mLength );
        if( l <= MAX_SHORT_LENGTH_ENCODING ) {
            os << l;
        } else {
            throw Exception("TODO: implement ASN1 length encoding for longer numbers");
        }
        return os;
    }


} // end namespace asn1cpp

#endif // asn1cpp_Length_h
