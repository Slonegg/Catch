/*
 *  Created by Phil on 13/11/2012.
 *  Copyright 2012 Two Blue Cubes Ltd. All rights reserved.
 *
 *  Distributed under the Boost Software License, Version 1.0. (See accompanying
 *  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
#ifndef TWOBLUECUBES_CATCH_VERSION_H_INCLUDED
#define TWOBLUECUBES_CATCH_VERSION_H_INCLUDED

namespace Catch {

    // Versioning information
    struct Version {
        Version(    unsigned int _majorVersion,
                    unsigned int _minorVersion,
                    unsigned int _buildNumber,
                    std::string const& _branchName )
        :   majorVersion( _majorVersion ),
            minorVersion( _minorVersion ),
            buildNumber( _buildNumber ),
            branchName( _branchName )
        {}

        const unsigned int majorVersion;
        const unsigned int minorVersion;
        const unsigned int buildNumber;
        const std::string branchName;

    private:
        void operator=( Version const& );
    };

    extern Version libraryVersion;
}

#endif // TWOBLUECUBES_CATCH_VERSION_H_INCLUDED
