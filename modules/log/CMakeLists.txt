set(ProjectName "Log")
file(GLOB Log_ROOT_Cpp *.cpp)
file(GLOB Log_ROOT_H *.h)

# 默认生成静态链接库
add_library(Log ${Log_ROOT_H} ${Log_ROOT_Cpp})

set_target_properties( Log PROPERTIES OUTPUT_NAME_DEBUG "Log")
set_target_properties( Log PROPERTIES PREFIX "")
set_target_properties( Log PROPERTIES FOLDER "modules"
	ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_LIBS_DIR}
	RUNTIME_OUTPUT_DIRECTORY ${PROJECT_LIBS_DIR}
	LIBRARY_OUTPUT_DIRECTORY ${PROJECT_LIBS_DIR} )