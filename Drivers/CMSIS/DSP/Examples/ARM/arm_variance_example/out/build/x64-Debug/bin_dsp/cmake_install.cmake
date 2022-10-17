# Install script for directory: C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Source

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/install/x64-Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/BasicMathFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/ComplexMathFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/ControllerFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/FastMathFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/FilteringFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/MatrixFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/StatisticsFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/SupportFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/TransformFunctions/cmake_install.cmake")
  include("C:/Users/rm23u/Documents/FCS/Firefly/en.stm32cubeh7_v1-10-0/STM32Cube_FW_H7_V1.10.0/Drivers/CMSIS/DSP/Examples/ARM/arm_variance_example/out/build/x64-Debug/bin_dsp/CommonTables/cmake_install.cmake")

endif()

