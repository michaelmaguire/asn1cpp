//
//  asn1cpp_Exception.h
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

#ifndef asn1cpp_Exception_h
#define asn1cpp_Exception_h

#include <stdexcept>

namespace asn1cpp {
    
    /**
     * Our namespace's exception class.
     */
    class Exception : std::runtime_error {
    public:
        Exception(const std::string& what_arg) : std::runtime_error(what_arg) {}
    };
    
} // end namespace asn1cpp

#endif // asn1cpp_Exception_h
