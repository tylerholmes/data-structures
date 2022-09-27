##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=sequence1
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/tyler/CodingProjects/CS3305/Assignment2
ProjectPath            :=C:/Users/tyler/CodingProjects/CS3305/Assignment2/sequence1
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
ObjectsFileList        :="sequence1.txt"
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
Objects0=$(IntermediateDirectory)/sequence_test.cpp$(ObjectSuffix) $(IntermediateDirectory)/sequence1.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/sequence_test.cpp$(ObjectSuffix): sequence_test.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sequence_test.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sequence_test.cpp$(DependSuffix) -MM sequence_test.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tyler/CodingProjects/CS3305/Assignment2/sequence1/sequence_test.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sequence_test.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sequence_test.cpp$(PreprocessSuffix): sequence_test.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sequence_test.cpp$(PreprocessSuffix) sequence_test.cpp

$(IntermediateDirectory)/sequence1.cpp$(ObjectSuffix): sequence1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sequence1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sequence1.cpp$(DependSuffix) -MM sequence1.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tyler/CodingProjects/CS3305/Assignment2/sequence1/sequence1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sequence1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sequence1.cpp$(PreprocessSuffix): sequence1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sequence1.cpp$(PreprocessSuffix) sequence1.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


