#
# Specifications for Build step mkBSCORBAArchiveJavaS
#
METACLASS_NAME = ArchiveJava_S
#
METACLASS_SOURCE = CompilJava_S
#
DGM_GRAPH_PATH = MODDGM_GRAPHPATH_JAVA
#
SOURCE_EXTENSION_FOR_TEST = *.class
#
CORBA_JAVA_PACKAGE_CS = $(CORBA_JAVA_PACKAGE:-"com.dassault_systemes")
CORBA_PACKAGE = $(CORBA_JAVA_PACKAGE_S:-CORBA_JAVA_PACKAGE_CS)
#
CORBA_DIRECTORY = tmp.server
#
include mkBSJavaVersion.mk
#
DGM_DEPEND = JAVA_VERSION
#
