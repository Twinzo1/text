#
# Specifications for Build step PreproV4
#
MACRO_LEVEL = "$(MkmkMACRO_LEVEL)\LEVEL"\
              "$(MkmkMACRO_LEVEL)\CNEXTLVL"\
              "$(MkmkMACRO_LEVEL)\$(MkmkOS_NAME)"
#
CPP_PPPARM = /NOFT7/NOLEV/NOLAN/NOC
#
C_PPPARM = /NOFT7/NOLEV/NODYN/NOC/LANG=C
#
# WARNING: /NOC is mandatory for 'RETURN 0' analyse
F_PPPARM = /NOFT7/NOC/NOLEV/DYN/LANG=F
#
# To generate the 'ATTRIBUTES DLLIMPORT' for the COMMON
# if EXPORTED_COMMON does not exist, all COMMON are imported
# if EXPORTED_COMMON = <nothing>, no COMMON are IMPORTED
#
EXPORTED_COMMON = \
/COMOUT/ /GESMON/ /DATA/ /DECALE/ /DECALV/ /S3278/ /CNENTR/ \
/CNENV1/ /CNENV2/ /CNEROR/ /CNOPT/ /CNOUT/ /CNPARM/ /COMINT/ /COMINTP/ \
/COMOUT/ /COMVE/ /COMVEP/ /DECLDM/ /DKLCOT/ /DYNAR/ /DYNCOM/ /ENSOR/ \
/ENVIR2/ /ENVIRO/ /GES/ /GESMON/ /GESVIR/ /GIIPOR/ /GMACER/ /INDEXE/ \
/IRCATM/ /IRCDE/ /IRCERR/ /IRCGLO/ /IRCLST/ /IRCOPT/ /IUCIUA/ /IWCDE/ \
/IWCERR/ /IWCGLO/ /IWCONV/ /IWCOPT/ /LBBCAT/ /LBDIAL/ /LBDYN/ /LBFIND/ \
/LBGES/ /LIBSHR/ /MTGAD1/ /MTGLOB/ /TABLAC/ /TABLAT/ /TABLCL/ /TABVIS/ \
/TOLER/ /TOPOLO/ /TRAVAI/ /UTILI1/ /UTILI2/ /UTILI3/ /UTILI4/ /UTILI5/ \
/UTILI6/ /UTILIT/ /VIR/ /VISBUF/ /VISCOM/ /SINVKO/ /GCARAC/ \
/INOMBR/ /DNOMBR/ /MCMCNP/ /W0JPAR/ /W0JPA1/ /W9KERR/ /W9KER1/
#
A_PPPARM = /NOFT7/NOLEV/NODYN/NOC/LANG=A
#
SYSMSG=$(MkmkMsgCatalog_PATH)
#
DGM_VERSION = 1.0
#

