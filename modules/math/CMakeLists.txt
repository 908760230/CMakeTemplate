set(ProjectName "Math")
file(GLOB Math_ROOT_Cpp *.cpp)
file(GLOB Math_ROOT_H *.h)

# 默认生成静态链接库
add_library (Math ${Math_ROOT_H} ${Math_ROOT_Cpp})

set_target_properties( Math PROPERTIES OUTPUT_NAME_DEBUG "Math")
set_target_properties( Math PROPERTIES PREFIX "")
set_target_properties( Math PROPERTIES FOLDER "modules"
	ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_LIBS_DIR}
	RUNTIME_OUTPUT_DIRECTORY ${PROJECT_LIBS_DIR}
	LIBRARY_OUTPUT_DIRECTORY ${PROJECT_LIBS_DIR} )