cmake_minimum_required(VERSION 3.23)

project(CrowellChatQtClient_ui VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

ADD_QT_MODULES(Core Quick)
CONFIGURE_QT(${PROJECT_NAME})

set(${PROJECT_NAME}_DIRECTORIES
        ${CMAKE_CURRENT_SOURCE_DIR}/pages
        ${CMAKE_CURRENT_SOURCE_DIR}/windows
        ${CMAKE_CURRENT_SOURCE_DIR}/components
        ${CMAKE_CURRENT_SOURCE_DIR}/layouts
        ${CMAKE_CURRENT_SOURCE_DIR}/scripts
        )
GET_FILES(${PROJECT_NAME}_QML_FILES "${${PROJECT_NAME}_DIRECTORIES}" "*.qml")
GET_RELATIVE_PATHS(${PROJECT_NAME}_QML_FILES "${${PROJECT_NAME}_QML_FILES}")

message(STATUS "QML files: ${${PROJECT_NAME}_QML_FILES}")

qt_add_library(${PROJECT_NAME}_plugin SHARED)
list(APPEND CrowellChatQtClient_LIBS ${PROJECT_NAME}_plugin)
set(CrowellChatQtClient_LIBS "${CrowellChatQtClient_LIBS}" PARENT_SCOPE)

qt_add_qml_module(${PROJECT_NAME}
        URI "dev.crowell.crowellchatqtclient.${PROJECT_NAME}"
        VERSION 0.1.0
        SHARED
        PLUGIN_TARGET ${PROJECT_NAME}_plugin
        QML_FILES ${${PROJECT_NAME}_QML_FILES}
        OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/dev/crowell/crowellchatqtclient/${PROJECT_NAME}
        )
