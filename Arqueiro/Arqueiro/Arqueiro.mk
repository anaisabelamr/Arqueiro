##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Arqueiro
ConfigurationName      :=Debug
WorkspacePath          := "C:\git\Arqueiro\Arqueiro\Arqueiro"
ProjectPath            := "C:\git\Arqueiro\Arqueiro\Arqueiro\Arqueiro"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ANA ISABELA
Date                   :=21/02/2016
CodeLitePath           :="C:\Program Files (x86)\CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="Arqueiro.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
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
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
Objects0=$(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arqueiro_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arqueiro_Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(ObjectSuffix): ../arqueiro.cpp $(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Arqueiro/Arqueiro/Arqueiro/arqueiro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(DependSuffix): ../arqueiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(DependSuffix) -MM "../arqueiro.cpp"

$(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(PreprocessSuffix): ../arqueiro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arqueiro_arqueiro.cpp$(PreprocessSuffix) "../arqueiro.cpp"

$(IntermediateDirectory)/Arqueiro_main.cpp$(ObjectSuffix): ../main.cpp $(IntermediateDirectory)/Arqueiro_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Arqueiro/Arqueiro/Arqueiro/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arqueiro_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arqueiro_main.cpp$(DependSuffix): ../main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arqueiro_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arqueiro_main.cpp$(DependSuffix) -MM "../main.cpp"

$(IntermediateDirectory)/Arqueiro_main.cpp$(PreprocessSuffix): ../main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arqueiro_main.cpp$(PreprocessSuffix) "../main.cpp"

$(IntermediateDirectory)/Arqueiro_Data.cpp$(ObjectSuffix): ../Data.cpp $(IntermediateDirectory)/Arqueiro_Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Arqueiro/Arqueiro/Arqueiro/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arqueiro_Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arqueiro_Data.cpp$(DependSuffix): ../Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arqueiro_Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arqueiro_Data.cpp$(DependSuffix) -MM "../Data.cpp"

$(IntermediateDirectory)/Arqueiro_Data.cpp$(PreprocessSuffix): ../Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arqueiro_Data.cpp$(PreprocessSuffix) "../Data.cpp"

$(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(ObjectSuffix): ../Inimigo.cpp $(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/git/Arqueiro/Arqueiro/Arqueiro/Inimigo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(DependSuffix): ../Inimigo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(DependSuffix) -MM "../Inimigo.cpp"

$(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(PreprocessSuffix): ../Inimigo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Arqueiro_Inimigo.cpp$(PreprocessSuffix) "../Inimigo.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


