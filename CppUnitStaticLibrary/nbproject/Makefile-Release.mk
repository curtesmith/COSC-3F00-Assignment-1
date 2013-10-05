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
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/AdditionalMessage.o \
	${OBJECTDIR}/Asserter.o \
	${OBJECTDIR}/BeOsDynamicLibraryManager.o \
	${OBJECTDIR}/BriefTestProgressListener.o \
	${OBJECTDIR}/CompilerOutputter.o \
	${OBJECTDIR}/DefaultProtector.o \
	${OBJECTDIR}/DllMain.o \
	${OBJECTDIR}/DynamicLibraryManager.o \
	${OBJECTDIR}/DynamicLibraryManagerException.o \
	${OBJECTDIR}/Exception.o \
	${OBJECTDIR}/Message.o \
	${OBJECTDIR}/PlugInManager.o \
	${OBJECTDIR}/PlugInParameters.o \
	${OBJECTDIR}/Protector.o \
	${OBJECTDIR}/ProtectorChain.o \
	${OBJECTDIR}/RepeatedTest.o \
	${OBJECTDIR}/ShlDynamicLibraryManager.o \
	${OBJECTDIR}/SourceLine.o \
	${OBJECTDIR}/StringTools.o \
	${OBJECTDIR}/SynchronizedObject.o \
	${OBJECTDIR}/Test.o \
	${OBJECTDIR}/TestAssert.o \
	${OBJECTDIR}/TestCase.o \
	${OBJECTDIR}/TestCaseDecorator.o \
	${OBJECTDIR}/TestComposite.o \
	${OBJECTDIR}/TestDecorator.o \
	${OBJECTDIR}/TestFactoryRegistry.o \
	${OBJECTDIR}/TestFailure.o \
	${OBJECTDIR}/TestLeaf.o \
	${OBJECTDIR}/TestNamer.o \
	${OBJECTDIR}/TestPath.o \
	${OBJECTDIR}/TestPlugInDefaultImpl.o \
	${OBJECTDIR}/TestResult.o \
	${OBJECTDIR}/TestResultCollector.o \
	${OBJECTDIR}/TestRunner.o \
	${OBJECTDIR}/TestSetUp.o \
	${OBJECTDIR}/TestSuccessListener.o \
	${OBJECTDIR}/TestSuite.o \
	${OBJECTDIR}/TestSuiteBuilderContext.o \
	${OBJECTDIR}/TextOutputter.o \
	${OBJECTDIR}/TextTestProgressListener.o \
	${OBJECTDIR}/TextTestResult.o \
	${OBJECTDIR}/TextTestRunner.o \
	${OBJECTDIR}/TypeInfoHelper.o \
	${OBJECTDIR}/UnixDynamicLibraryManager.o \
	${OBJECTDIR}/Win32DynamicLibraryManager.o \
	${OBJECTDIR}/XmlDocument.o \
	${OBJECTDIR}/XmlElement.o \
	${OBJECTDIR}/XmlOutputter.o \
	${OBJECTDIR}/XmlOutputterHook.o


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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libcppunitstaticlibrary.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libcppunitstaticlibrary.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libcppunitstaticlibrary.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libcppunitstaticlibrary.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libcppunitstaticlibrary.a

${OBJECTDIR}/AdditionalMessage.o: AdditionalMessage.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/AdditionalMessage.o AdditionalMessage.cpp

${OBJECTDIR}/Asserter.o: Asserter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Asserter.o Asserter.cpp

${OBJECTDIR}/BeOsDynamicLibraryManager.o: BeOsDynamicLibraryManager.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/BeOsDynamicLibraryManager.o BeOsDynamicLibraryManager.cpp

${OBJECTDIR}/BriefTestProgressListener.o: BriefTestProgressListener.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/BriefTestProgressListener.o BriefTestProgressListener.cpp

${OBJECTDIR}/CompilerOutputter.o: CompilerOutputter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/CompilerOutputter.o CompilerOutputter.cpp

${OBJECTDIR}/DefaultProtector.o: DefaultProtector.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/DefaultProtector.o DefaultProtector.cpp

${OBJECTDIR}/DllMain.o: DllMain.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/DllMain.o DllMain.cpp

${OBJECTDIR}/DynamicLibraryManager.o: DynamicLibraryManager.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/DynamicLibraryManager.o DynamicLibraryManager.cpp

${OBJECTDIR}/DynamicLibraryManagerException.o: DynamicLibraryManagerException.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/DynamicLibraryManagerException.o DynamicLibraryManagerException.cpp

${OBJECTDIR}/Exception.o: Exception.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exception.o Exception.cpp

${OBJECTDIR}/Message.o: Message.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Message.o Message.cpp

${OBJECTDIR}/PlugInManager.o: PlugInManager.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/PlugInManager.o PlugInManager.cpp

${OBJECTDIR}/PlugInParameters.o: PlugInParameters.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/PlugInParameters.o PlugInParameters.cpp

${OBJECTDIR}/Protector.o: Protector.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Protector.o Protector.cpp

${OBJECTDIR}/ProtectorChain.o: ProtectorChain.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/ProtectorChain.o ProtectorChain.cpp

${OBJECTDIR}/RepeatedTest.o: RepeatedTest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/RepeatedTest.o RepeatedTest.cpp

${OBJECTDIR}/ShlDynamicLibraryManager.o: ShlDynamicLibraryManager.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/ShlDynamicLibraryManager.o ShlDynamicLibraryManager.cpp

${OBJECTDIR}/SourceLine.o: SourceLine.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/SourceLine.o SourceLine.cpp

${OBJECTDIR}/StringTools.o: StringTools.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/StringTools.o StringTools.cpp

${OBJECTDIR}/SynchronizedObject.o: SynchronizedObject.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/SynchronizedObject.o SynchronizedObject.cpp

${OBJECTDIR}/Test.o: Test.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Test.o Test.cpp

${OBJECTDIR}/TestAssert.o: TestAssert.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestAssert.o TestAssert.cpp

${OBJECTDIR}/TestCase.o: TestCase.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestCase.o TestCase.cpp

${OBJECTDIR}/TestCaseDecorator.o: TestCaseDecorator.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestCaseDecorator.o TestCaseDecorator.cpp

${OBJECTDIR}/TestComposite.o: TestComposite.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestComposite.o TestComposite.cpp

${OBJECTDIR}/TestDecorator.o: TestDecorator.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestDecorator.o TestDecorator.cpp

${OBJECTDIR}/TestFactoryRegistry.o: TestFactoryRegistry.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestFactoryRegistry.o TestFactoryRegistry.cpp

${OBJECTDIR}/TestFailure.o: TestFailure.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestFailure.o TestFailure.cpp

${OBJECTDIR}/TestLeaf.o: TestLeaf.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestLeaf.o TestLeaf.cpp

${OBJECTDIR}/TestNamer.o: TestNamer.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestNamer.o TestNamer.cpp

${OBJECTDIR}/TestPath.o: TestPath.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestPath.o TestPath.cpp

${OBJECTDIR}/TestPlugInDefaultImpl.o: TestPlugInDefaultImpl.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestPlugInDefaultImpl.o TestPlugInDefaultImpl.cpp

${OBJECTDIR}/TestResult.o: TestResult.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestResult.o TestResult.cpp

${OBJECTDIR}/TestResultCollector.o: TestResultCollector.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestResultCollector.o TestResultCollector.cpp

${OBJECTDIR}/TestRunner.o: TestRunner.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestRunner.o TestRunner.cpp

${OBJECTDIR}/TestSetUp.o: TestSetUp.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestSetUp.o TestSetUp.cpp

${OBJECTDIR}/TestSuccessListener.o: TestSuccessListener.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestSuccessListener.o TestSuccessListener.cpp

${OBJECTDIR}/TestSuite.o: TestSuite.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestSuite.o TestSuite.cpp

${OBJECTDIR}/TestSuiteBuilderContext.o: TestSuiteBuilderContext.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TestSuiteBuilderContext.o TestSuiteBuilderContext.cpp

${OBJECTDIR}/TextOutputter.o: TextOutputter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TextOutputter.o TextOutputter.cpp

${OBJECTDIR}/TextTestProgressListener.o: TextTestProgressListener.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TextTestProgressListener.o TextTestProgressListener.cpp

${OBJECTDIR}/TextTestResult.o: TextTestResult.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TextTestResult.o TextTestResult.cpp

${OBJECTDIR}/TextTestRunner.o: TextTestRunner.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TextTestRunner.o TextTestRunner.cpp

${OBJECTDIR}/TypeInfoHelper.o: TypeInfoHelper.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/TypeInfoHelper.o TypeInfoHelper.cpp

${OBJECTDIR}/UnixDynamicLibraryManager.o: UnixDynamicLibraryManager.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/UnixDynamicLibraryManager.o UnixDynamicLibraryManager.cpp

${OBJECTDIR}/Win32DynamicLibraryManager.o: Win32DynamicLibraryManager.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/Win32DynamicLibraryManager.o Win32DynamicLibraryManager.cpp

${OBJECTDIR}/XmlDocument.o: XmlDocument.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/XmlDocument.o XmlDocument.cpp

${OBJECTDIR}/XmlElement.o: XmlElement.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/XmlElement.o XmlElement.cpp

${OBJECTDIR}/XmlOutputter.o: XmlOutputter.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/XmlOutputter.o XmlOutputter.cpp

${OBJECTDIR}/XmlOutputterHook.o: XmlOutputterHook.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/XmlOutputterHook.o XmlOutputterHook.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libcppunitstaticlibrary.a

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
