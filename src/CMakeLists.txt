file(GLOB CMakeTemplate_ROOT_Cpp *.cpp)
file(GLOB CMakeTemplate_ROOT_H *.h)

add_executable(CmakeTemplate ${CMakeTemplate_ROOT_H} ${CMakeTemplate_ROOT_Cpp})

target_link_libraries(CmakeTemplate Log Math)

set_target_properties( CmakeTemplate PROPERTIES OUTPUT_NAME_DEBUG "CmakeTemplate")
set_target_properties( CmakeTemplate PROPERTIES PREFIX "")
set_target_properties( CmakeTemplate PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_OUTPUT_DIR}
	RUNTIME_OUTPUT_DIRECTORY ${PROJECT_OUTPUT_DIR}
	LIBRARY_OUTPUT_DIRECTORY ${PROJECT_OUTPUT_DIR} )