cmake_minimum_required(VERSION 3.6)
project(ITAK)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        Analyzer.cpp Analyzer.h
        DenialOfServiceAnalyzer.cpp DenialOfServiceAnalyzer.h
        PortScanAnalyzer.cpp PortScanAnalyzer.h
        Configuration.cpp Configuration.h
        ResultSet.cpp ResultSet.h
        KeyValue.h
        Dictionary.h
        utils.h utils.cpp )
add_executable(ITAK ${SOURCE_FILES})

set(TEST_FILES Testing/testMain.cpp
        Analyzer.cpp Analyzer.h
        Testing/ConfigurationTester.cpp Testing/ConfigurationTester.h
        Configuration.cpp Configuration.h
        utils.h utils.cpp
        ResultSet.cpp ResultSet.h
        DenialOfServiceAnalyzer.cpp DenialOfServiceAnalyzer.h
        PortScanAnalyzer.cpp PortScanAnalyzer.h
        Testing/DenialOfServiceAnalyzerTester.cpp Testing/DenialOfServiceAnalyzerTester.h
        Testing/PortScanAnalyzerTester.cpp Testing/PortScanAnalyzerTester.h
        Testing/ResultSetTester.cpp Testing/ResultSetTester.h)

add_executable(Test  ${TEST_FILES} )