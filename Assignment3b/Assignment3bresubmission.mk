##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Assignment3bresubmission
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/tyler/CodingProjects/CS3305/Assignments
ProjectPath            :=C:/Users/tyler/CodingProjects/CS3305/Assignments/Assignment3bresubmission
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tyler
Date                   :=17/03/2021
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
ObjectsFileList        :="Assignment3bresubmission.txt"
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
Objects0=$(IntermediateDirectory)/chore_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/chore.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/chore_main.cpp$(ObjectSuffix): chore_main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/chore_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/chore_main.cpp$(DependSuffix) -MM chore_main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tyler/CodingProjects/CS3305/Assignments/Assignment3bresubmission/chore_main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/chore_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/chore_main.cpp$(PreprocessSuffix): chore_main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/chore_main.cpp$(PreprocessSuffix) chore_main.cpp

$(IntermediateDirectory)/chore.cpp$(ObjectSuffix): chore.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/chore.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/chore.cpp$(DependSuffix) -MM chore.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tyler/CodingProjects/CS3305/Assignments/Assignment3bresubmission/chore.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/chore.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/chore.cpp$(PreprocessSuffix): chore.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/chore.cpp$(PreprocessSuffix) chore.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


