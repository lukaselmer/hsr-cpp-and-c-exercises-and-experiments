#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=
AS=as.exe

# Macros
CND_PLATFORM=MinGW-Windows
CND_CONF=Debug
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/E_/dev/cpp_projects/GardenPlanTest/tests.o \
	${OBJECTDIR}/main.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=E:/dev/cpp_projects/GardenPlan/dist/Debug/MinGW-Windows/libgardenplan.a

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	${MAKE}  -f nbproject/Makefile-Debug.mk dist/Debug/MinGW-Windows/gardenplantest.exe

dist/Debug/MinGW-Windows/gardenplantest.exe: /E/dev/cpp_projects/GardenPlan/dist/Debug/MinGW-Windows/libgardenplan.a

dist/Debug/MinGW-Windows/gardenplantest.exe: ${OBJECTFILES}
	${MKDIR} -p dist/Debug/MinGW-Windows
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/gardenplantest ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/_ext/E_/dev/cpp_projects/GardenPlanTest/tests.o: nbproject/Makefile-${CND_CONF}.mk /E/dev/cpp_projects/GardenPlanTest/tests.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/E_/dev/cpp_projects/GardenPlanTest
	${RM} $@.d
	$(COMPILE.cc) -g -I/E/dev/cpp_projects/GardenPlan -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/E_/dev/cpp_projects/GardenPlanTest/tests.o /E/dev/cpp_projects/GardenPlanTest/tests.cpp

${OBJECTDIR}/main.o: nbproject/Makefile-${CND_CONF}.mk main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -I/E/dev/cpp_projects/GardenPlan -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Debug
	${RM} dist/Debug/MinGW-Windows/gardenplantest.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
