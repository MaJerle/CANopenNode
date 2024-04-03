/*******************************************************************************
    CANopen Object Dictionary definition for CANopenNode V4

    This file was automatically generated by CANopenEditor v4.1-1-ga49a51a

    https://github.com/CANopenNode/CANopenNode
    https://github.com/CANopenNode/CANopenEditor

    DON'T EDIT THIS FILE MANUALLY !!!!
********************************************************************************

    File info:
        File Names:   OD.h; OD.c
        Project File: DS301_profile.xpd
        File Version: 1

        Created:      23. 11. 2020 12:00:00
        Created By:
        Modified:     17. 03. 2023 02:07:28
        Modified By:

    Device Info:
        Vendor Name:
        Vendor ID:
        Product Name: New Product
        Product ID:

        Description:
*******************************************************************************/

#ifndef OD_H
#define OD_H
/*******************************************************************************
    Counters of OD objects
*******************************************************************************/
#define OD_CNT_NMT 1
#define OD_CNT_EM 1
#define OD_CNT_SYNC 1
#define OD_CNT_SYNC_PROD 1
#define OD_CNT_STORAGE 1
#define OD_CNT_TIME 1
#define OD_CNT_EM_PROD 1
#define OD_CNT_HB_CONS 1
#define OD_CNT_HB_PROD 1
#define OD_CNT_SDO_SRV 1
#define OD_CNT_SDO_CLI 1
#define OD_CNT_RPDO 4
#define OD_CNT_TPDO 4


/*******************************************************************************
    Sizes of OD arrays
*******************************************************************************/
#define OD_CNT_ARR_1003 16
#define OD_CNT_ARR_1010 4
#define OD_CNT_ARR_1011 4
#define OD_CNT_ARR_1016 8


/*******************************************************************************
    OD data declaration of all groups
*******************************************************************************/
typedef struct {
    uint32_t x1000_deviceType;
    uint32_t x1005_COB_ID_SYNCMessage;
    uint32_t x1006_communicationCyclePeriod;
    uint32_t x1007_synchronousWindowLength;
    uint32_t x1012_COB_IDTimeStampObject;
    uint32_t x1014_COB_ID_EMCY;
    uint16_t x1015_inhibitTimeEMCY;
    uint8_t x1016_consumerHeartbeatTime_sub0;
    uint32_t x1016_consumerHeartbeatTime[OD_CNT_ARR_1016];
    uint16_t x1017_producerHeartbeatTime;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t vendor_ID;
        uint32_t productCode;
        uint32_t revisionNumber;
        uint32_t serialNumber;
    } x1018_identity;
    uint8_t x1019_synchronousCounterOverflowValue;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDClientToServerTx;
        uint32_t COB_IDServerToClientRx;
        uint8_t node_IDOfTheSDOServer;
    } x1280_SDOClientParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1400_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1401_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1402_RPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByRPDO;
        uint8_t transmissionType;
        uint16_t eventTimer;
    } x1403_RPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1600_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1601_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1602_RPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1603_RPDOMappingParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1800_TPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1801_TPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1802_TPDOCommunicationParameter;
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDUsedByTPDO;
        uint8_t transmissionType;
        uint16_t inhibitTime;
        uint16_t eventTimer;
        uint8_t SYNCStartValue;
    } x1803_TPDOCommunicationParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1A00_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1A01_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1A02_TPDOMappingParameter;
    struct {
        uint8_t numberOfMappedApplicationObjectsInPDO;
        uint32_t applicationObject1;
        uint32_t applicationObject2;
        uint32_t applicationObject3;
        uint32_t applicationObject4;
        uint32_t applicationObject5;
        uint32_t applicationObject6;
        uint32_t applicationObject7;
        uint32_t applicationObject8;
    } x1A03_TPDOMappingParameter;
} OD_PERSIST_COMM_t;

typedef struct {
    uint8_t x1001_errorRegister;
    uint8_t x1010_storeParameters_sub0;
    uint32_t x1010_storeParameters[OD_CNT_ARR_1010];
    uint8_t x1011_restoreDefaultParameters_sub0;
    uint32_t x1011_restoreDefaultParameters[OD_CNT_ARR_1011];
    struct {
        uint8_t highestSub_indexSupported;
        uint32_t COB_IDClientToServerRx;
        uint32_t COB_IDServerToClientTx;
    } x1200_SDOServerParameter;
} OD_RAM_t;

#ifndef OD_ATTR_PERSIST_COMM
#define OD_ATTR_PERSIST_COMM
#endif
extern OD_ATTR_PERSIST_COMM OD_PERSIST_COMM_t OD_PERSIST_COMM;

#ifndef OD_ATTR_RAM
#define OD_ATTR_RAM
#endif
extern OD_ATTR_RAM OD_RAM_t OD_RAM;

#ifndef OD_ATTR_OD
#define OD_ATTR_OD
#endif
extern OD_ATTR_OD OD_t *OD;


/*******************************************************************************
    Object dictionary entries - shortcuts
*******************************************************************************/
#define OD_ENTRY_H1000 &OD->list[0]
#define OD_ENTRY_H1001 &OD->list[1]
#define OD_ENTRY_H1003 &OD->list[2]
#define OD_ENTRY_H1005 &OD->list[3]
#define OD_ENTRY_H1006 &OD->list[4]
#define OD_ENTRY_H1007 &OD->list[5]
#define OD_ENTRY_H1010 &OD->list[6]
#define OD_ENTRY_H1011 &OD->list[7]
#define OD_ENTRY_H1012 &OD->list[8]
#define OD_ENTRY_H1014 &OD->list[9]
#define OD_ENTRY_H1015 &OD->list[10]
#define OD_ENTRY_H1016 &OD->list[11]
#define OD_ENTRY_H1017 &OD->list[12]
#define OD_ENTRY_H1018 &OD->list[13]
#define OD_ENTRY_H1019 &OD->list[14]
#define OD_ENTRY_H1200 &OD->list[15]
#define OD_ENTRY_H1280 &OD->list[16]
#define OD_ENTRY_H1400 &OD->list[17]
#define OD_ENTRY_H1401 &OD->list[18]
#define OD_ENTRY_H1402 &OD->list[19]
#define OD_ENTRY_H1403 &OD->list[20]
#define OD_ENTRY_H1600 &OD->list[21]
#define OD_ENTRY_H1601 &OD->list[22]
#define OD_ENTRY_H1602 &OD->list[23]
#define OD_ENTRY_H1603 &OD->list[24]
#define OD_ENTRY_H1800 &OD->list[25]
#define OD_ENTRY_H1801 &OD->list[26]
#define OD_ENTRY_H1802 &OD->list[27]
#define OD_ENTRY_H1803 &OD->list[28]
#define OD_ENTRY_H1A00 &OD->list[29]
#define OD_ENTRY_H1A01 &OD->list[30]
#define OD_ENTRY_H1A02 &OD->list[31]
#define OD_ENTRY_H1A03 &OD->list[32]


/*******************************************************************************
    Object dictionary entries - shortcuts with names
*******************************************************************************/
#define OD_ENTRY_H1000_deviceType &OD->list[0]
#define OD_ENTRY_H1001_errorRegister &OD->list[1]
#define OD_ENTRY_H1003_pre_definedErrorField &OD->list[2]
#define OD_ENTRY_H1005_COB_ID_SYNCMessage &OD->list[3]
#define OD_ENTRY_H1006_communicationCyclePeriod &OD->list[4]
#define OD_ENTRY_H1007_synchronousWindowLength &OD->list[5]
#define OD_ENTRY_H1010_storeParameters &OD->list[6]
#define OD_ENTRY_H1011_restoreDefaultParameters &OD->list[7]
#define OD_ENTRY_H1012_COB_IDTimeStampObject &OD->list[8]
#define OD_ENTRY_H1014_COB_ID_EMCY &OD->list[9]
#define OD_ENTRY_H1015_inhibitTimeEMCY &OD->list[10]
#define OD_ENTRY_H1016_consumerHeartbeatTime &OD->list[11]
#define OD_ENTRY_H1017_producerHeartbeatTime &OD->list[12]
#define OD_ENTRY_H1018_identity &OD->list[13]
#define OD_ENTRY_H1019_synchronousCounterOverflowValue &OD->list[14]
#define OD_ENTRY_H1200_SDOServerParameter &OD->list[15]
#define OD_ENTRY_H1280_SDOClientParameter &OD->list[16]
#define OD_ENTRY_H1400_RPDOCommunicationParameter &OD->list[17]
#define OD_ENTRY_H1401_RPDOCommunicationParameter &OD->list[18]
#define OD_ENTRY_H1402_RPDOCommunicationParameter &OD->list[19]
#define OD_ENTRY_H1403_RPDOCommunicationParameter &OD->list[20]
#define OD_ENTRY_H1600_RPDOMappingParameter &OD->list[21]
#define OD_ENTRY_H1601_RPDOMappingParameter &OD->list[22]
#define OD_ENTRY_H1602_RPDOMappingParameter &OD->list[23]
#define OD_ENTRY_H1603_RPDOMappingParameter &OD->list[24]
#define OD_ENTRY_H1800_TPDOCommunicationParameter &OD->list[25]
#define OD_ENTRY_H1801_TPDOCommunicationParameter &OD->list[26]
#define OD_ENTRY_H1802_TPDOCommunicationParameter &OD->list[27]
#define OD_ENTRY_H1803_TPDOCommunicationParameter &OD->list[28]
#define OD_ENTRY_H1A00_TPDOMappingParameter &OD->list[29]
#define OD_ENTRY_H1A01_TPDOMappingParameter &OD->list[30]
#define OD_ENTRY_H1A02_TPDOMappingParameter &OD->list[31]
#define OD_ENTRY_H1A03_TPDOMappingParameter &OD->list[32]


/*******************************************************************************
    OD config structure
*******************************************************************************/
#if CO_MULTIPLE_OD
#define OD_INIT_CONFIG(config)                                                 \
    {                                                                          \
        (config).CNT_NMT = OD_CNT_NMT;                                         \
        (config).ENTRY_H1017 = OD_ENTRY_H1017;                                 \
        (config).CNT_HB_CONS = OD_CNT_HB_CONS;                                 \
        (config).CNT_ARR_1016 = OD_CNT_ARR_1016;                               \
        (config).ENTRY_H1016 = OD_ENTRY_H1016;                                 \
        (config).CNT_EM = OD_CNT_EM;                                           \
        (config).ENTRY_H1001 = OD_ENTRY_H1001;                                 \
        (config).ENTRY_H1014 = OD_ENTRY_H1014;                                 \
        (config).ENTRY_H1015 = OD_ENTRY_H1015;                                 \
        (config).CNT_ARR_1003 = OD_CNT_ARR_1003;                               \
        (config).ENTRY_H1003 = OD_ENTRY_H1003;                                 \
        (config).CNT_SDO_SRV = OD_CNT_SDO_SRV;                                 \
        (config).ENTRY_H1200 = OD_ENTRY_H1200;                                 \
        (config).CNT_SDO_CLI = OD_CNT_SDO_CLI;                                 \
        (config).ENTRY_H1280 = OD_ENTRY_H1280;                                 \
        (config).CNT_TIME = OD_CNT_TIME;                                       \
        (config).ENTRY_H1012 = OD_ENTRY_H1012;                                 \
        (config).CNT_SYNC = OD_CNT_SYNC;                                       \
        (config).ENTRY_H1005 = OD_ENTRY_H1005;                                 \
        (config).ENTRY_H1006 = OD_ENTRY_H1006;                                 \
        (config).ENTRY_H1007 = OD_ENTRY_H1007;                                 \
        (config).ENTRY_H1019 = OD_ENTRY_H1019;                                 \
        (config).CNT_RPDO = OD_CNT_RPDO;                                       \
        (config).ENTRY_H1400 = OD_ENTRY_H1400;                                 \
        (config).ENTRY_H1600 = OD_ENTRY_H1600;                                 \
        (config).CNT_TPDO = OD_CNT_TPDO;                                       \
        (config).ENTRY_H1800 = OD_ENTRY_H1800;                                 \
        (config).ENTRY_H1A00 = OD_ENTRY_H1A00;                                 \
        (config).CNT_LEDS = 0;                                                 \
        (config).CNT_GFC = 0;                                                  \
        (config).ENTRY_H1300 = NULL;                                           \
        (config).CNT_SRDO = 0;                                                 \
        (config).ENTRY_H1301 = NULL;                                           \
        (config).ENTRY_H1381 = NULL;                                           \
        (config).ENTRY_H13FE = NULL;                                           \
        (config).ENTRY_H13FF = NULL;                                           \
        (config).CNT_LSS_SLV = 0;                                              \
        (config).CNT_LSS_MST = 0;                                              \
        (config).CNT_GTWA = 0;                                                 \
        (config).CNT_TRACE = 0;                                                \
    }
#endif

#endif /* OD_H */
