##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=quadraticexpression
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/tyler/CodingProjects/CS3305/Assignment2a
ProjectPath            :=C:/Users/tyler/CodingProjects/CS3305/Assignment2a/quadraticexpression
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tyler
Date                   :=05/02/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="quadraticexpression.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/quadratic_test.cpp$(ObjectSuffix) $(IntermediateDirectory)/quadratic.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/quadratic_test.cpp$(ObjectSuffix): quadratic_test.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/quadratic_test.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/quadratic_test.cpp$(DependSuffix) -MM quadratic_test.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tyler/CodingProjects/CS3305/Assignment2a/quadraticexpression/quadratic_test.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/quadratic_test.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/quadratic_test.cpp$(PreprocessSuffix): quadratic_test.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/quadratic_test.cpp$(PreprocessSuffix) quadratic_test.cpp

$(IntermediateDirectory)/quadratic.cpp$(ObjectSuffix): quadratic.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/quadratic.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/quadratic.cpp$(DependSuffix) -MM quadratic.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tyler/CodingProjects/CS3305/Assignment2a/quadraticexpression/quadratic.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/quadratic.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/quadratic.cpp$(PreprocessSuffix): quadratic.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/quadratic.cpp$(PreprocessSuffix) quadratic.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


