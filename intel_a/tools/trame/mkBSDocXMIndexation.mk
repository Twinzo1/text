#
# Specifications for Build step mkBSDoc
#
METACLASS_NAME = DocIndexation
#
DGM_GRAPH_PATH = MODDGM_GRAPHPATH_DOC
#
IN_MAP_PATH = $(DOCPATH)\intermediate_@LANG@\$(MODNAME)\xml\$(MODNAME) 
OUT_MAP_PATH = $(DOCPATH)\@LANG@\$(MODNAME)\index
#
OUT_GLOSS_PATH = $(DOCPATH)\@LANG@
OUT_GLOSS_LIST_PATH = $(DOCPATH)\@LANG@\$(MODNAME)\index
#
OUT_TOC_PATH = $(DOCPATH)\@LANG@\index
#
SOURCE_XML = *.xml
SOURCE_HTM = *.htm
#
DGM_VERSION = 1.00
DGM_DEPEND = DGM_VERSION IDX_JAR
#
