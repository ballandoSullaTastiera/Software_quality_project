cmake_minimum_required(VERSION 3.20)
project(firmware C)


#build

add_executable(firmware
    main.c 
    prime.c
)

target_compile_options(firmware PRIVATE -Wall -O2)


#unit testing 

enable_testing()

add_library(unity STATIC
    ../tests/CUnityTests/vendor/unity.c
)
target_include_directories(unity PUBLIC 
    ../tests/CUnityTests
)

add_executable(testfiles
    prime.c
    ../tests/CUnityTests/prime_test.c 
)

target_link_libraries(testfiles PRIVATE unity)

add_test(NAME PrimeFunktionenTest COMMAND testfiles)


#statische Codeanalyse

find_program(CPPCHECK_PATH cppcheck)

if(CPPCHECK_PATH)
    add_custom_target(cppcheck_analysis
        COMMAND ${CPPCHECK_PATH} 
            --enable=warning,style,performance,portability
            --inconclusive
            --error-exitcode=1
            --suppress=missingIncludeSystem
            ${CMAKE_CURRENT_SOURCE_DIR} #prüft alle .c und .h Dateien in src
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Fuehre statische Codeanalyse mit Cppcheck ueber CMake aus..."
    )
else()
    message(FATAL_ERROR "Statische Codeanalyse FEHLGESCHLAGEN: 'cppcheck' wurde auf diesem System nicht gefunden! Bitte installieren Sie Cppcheck.")
endif()