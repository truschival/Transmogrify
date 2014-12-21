MESSAGE(STATUS "Checking ${CMAKE_CURRENT_SOURCE_DIR} ")

# name of binary (without lib- prefix)
SET(BINARY_NAME "transmogclient")
# Interface/binary version
SET(VERSION "0.1")

set(SRCS
   ${CMAKE_CURRENT_SOURCE_DIR}/transmogclient.c
)

#-----
# Build binary
#-----
add_executable(${BINARY_NAME} ${SRCS})
# Executable linked with project library
target_link_libraries(${BINARY_NAME} ${TRANSMOG_LIBRARIES})

#-----
# Install
#-----
INSTALL(TARGETS  ${BINARY_NAME} RUNTIME DESTINATION ${TARGET_EXE_INSTALL_DIR} )
