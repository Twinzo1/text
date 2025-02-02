#
# Specifications for Build step mkBSCORBACompilJavaS
#
METACLASS_NAME = CompilJava_S
METACLASS_SOURCE = Modification_S
#
DGM_GRAPH_PATH = MODDGM_GRAPHPATH_JAVA
CORBA_DGM_GRAPH_PATH = MODDGM_GRAPHPATH_JAVA MODDGM_GRAPHPATH
#
SOURCE_EXTENSION = *.java
#
DEPENDENT_ON = $(MOD_LinkWith)
#
CORBA_JAVA_PACKAGE_CS = $(CORBA_JAVA_PACKAGE:-"com.dassault_systemes")
CORBA_PACKAGE = $(CORBA_JAVA_PACKAGE_S:-CORBA_JAVA_PACKAGE_CS)
#
CORBA_DIRECTORY = tmp.server
#
OBJLIST = .mkobjlist_S.java
#
include mkBSJavaVersion.mk
#
DGM_DEPEND = JAVA_VERSION
#
