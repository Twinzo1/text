#
# Specifications for Build step mkBSCORBALnkShl1stC
#
DGM_VERSION = 1.0
#
CORBA_CLIENT_DEFINE = CLIENT
CORBA_SERVER_DEFINE = SERVER
CORBA_CS_DEFAULT =
CORBA_CS = $(CORBA_JAVA_CS:-CORBA_CS_DEFAULT)
#
include mkBSLnkCommonDecl.mk
#
LD_OBJLIST = MODmkobjlist_C
#
LD_OPTS = /LIB /NOLOGO /DEF: $(MACHINE_FLAG) $(LOCAL_OPTS)
#
CORBA_LIBS = Wsock32.lib
CORBA_LIBPATH = /LIBPATH:"$(CorbaCppBuildROOT_PATH)\lib"
#
LD_LIBS = $(CorbaCppBuildROOT_PATH:+CORBA_LIBS) $(LOCAL_LIBS) $(_MK_COMMON_LIBS)
LD_LIBPATH = $(CorbaCppBuildROOT_PATH:+CORBA_LIBPATH) $(LOCAL_LIBPATH) $(_MK_COMMON_LIBPATH)
# ~1
LD_COMMAND = "$(LD)" $(LD_OPTS) @"$(LD_OBJLIST)" /OUT:
# ~4
EXPORT_SYMBOLS_FILE = $(SYLPATHNAME)
EXPORT_SYMBOLS_COMMAND = mkexportsymbolsM -out "$(EXPORT_SYMBOLS_FILE)" @"$(LD_OBJLIST)" 
# Build the export lists before the link
SCRIPT_COMMAND = ~4 ~1
#
