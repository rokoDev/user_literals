target_sources(user_literals
	PRIVATE
    include/user_literals/user_literals.h
  )

set_property(TARGET user_literals APPEND PROPERTY SRC_DIRS "${CMAKE_CURRENT_LIST_DIR}/include")
target_include_directories(user_literals INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
