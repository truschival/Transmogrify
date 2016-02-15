##
# Top-level CMakeLists.txt for transmogclient
##

cmake_minimum_required (VERSION 3.2)
SET(CMAKE_CXX_STANDARD 11 ) 			# We want at least C++11 Standard
set(CMAKE_VERBOSE_MAKEFILE  OFF)
set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_WARN_DEPRECATED ON)
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add local macros for KBuild etc
list(APPEND CMAKE_MODULE_PATH  ${CMAKE_SOURCE_DIR}/cmake/)

#-------------------------------------------------------------------------------
# Project Name
project (transmogclient )
# Project Version
SET(PROJECT_VERSION "0.1")
message(STATUS "")
message(STATUS "Running ${CMAKE_COMMAND} ${CMAKE_VERSION} on ${CMAKE_PROJECT_NAME} v${PROJECT_VERSION}" )


include(readComponents)
find_package(LibTransmog COMPONENTS transmog CONFIG REQUIRED)


#-------------------------------------------------------------------------------
# user Configuration + Defaults
#-------------------------------------------------------------------------------
option(BUILD_EXE "Build transmogclient-Tool" On)

message(STATUS "Trying to setup or guess build-variables:")

#-------------------------------------------------------------------------------
# Command line parameters  or default
#-------------------------------------------------------------------------------
IF(NOT CMAKE_BUILD_TYPE)
    #Default to Release-Build
    SET(CMAKE_BUILD_TYPE Release
	CACHE STRING "Choose the type of build : Debug Release RelWithDebInfo"
	FORCE)
ENDIF(NOT CMAKE_BUILD_TYPE)


#-------------------------------------------------------------------------------
# Print Summary
#-------------------------------------------------------------------------------

message(STATUS "------------- Config --------- " )
message(STATUS "Build-type:\t\t ${CMAKE_BUILD_TYPE} " )
message(STATUS "Build transmogclient exe:\t ${BUILD_EXE}   ")
message(STATUS "------------------------------ " )

#-------------------------------------------------------------------------------
# Input configuration
#-------------------------------------------------------------------------------

# Search for libtransmogrify using pkg-config
# pkg_check_modules("TRANSMOG"  REQUIRED libtransmog)

#-------------------------------------------------------------------------------
# Output  configuration
#-------------------------------------------------------------------------------
# Directory for executables during build
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")

SET(TARGET_EXE_INSTALL_DIR "bin")

#-------------------------------------------------------------------------------
# Sub-Projects to build each with its own CMakelists.txt
#-------------------------------------------------------------------------------

# Sub-Projects
add_subdirectory(${PROJECT_SOURCE_DIR}/src/)

#-------------------------------------------------------------------------------
# Install targets
#-------------------------------------------------------------------------------
