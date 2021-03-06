/* IBM Rational Test RealTime C Instrumentor 7.0.0.1.031.001 */
/* Build Number: 031.001 */
/* Copyright(C) 2007 Rational Software Corporation. All rights reserved. */
/*   Date : 20-Feb-07 12:00 */
/*     OS : ms-dos */

#define ATL_C_INSTRUMENTOR

#define _ATU_GENERATED_FILE

#define USE_ATC 1

#define ATC_INFORMATION 0

#include "TP.h"

#define _ATC_INIT_CONST_COMPOUND_STUFF

#line 1 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




 

#line 1 "..\Includes\THEMIS_BASIC_TYPES.h"
 
#line 40 "..\Includes\THEMIS_BASIC_TYPES.h"







 
#line 1 "..\Includes\COD_CMTY_CS_COMMON.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




 
typedef unsigned char					T_CHAR;
typedef unsigned char				T_UCHAR;

 
typedef enum
{
    K_FALSE = 0,
    K_TRUE  = 1 
} T_BOOL;

 
typedef unsigned char		T_INT8;
typedef short					T_INT16;
typedef long					T_INT32;
typedef long long				T_INT64;

 
typedef unsigned char				T_UINT8;
typedef unsigned short				T_UINT16;
typedef unsigned long				T_UINT32;
typedef unsigned long long			T_UINT64;

 
typedef float					T_FLOAT32;
typedef double					T_FLOAT64;

 
typedef void *					T_PTR;
typedef unsigned long				T_ADDR;

 



 









 # 49 "..\Includes\THEMIS_BASIC_TYPES.h" 1


 














 
typedef float T_FLOAT;

 
typedef double T_FLOAT_L;

 
typedef long T_INT;

 
typedef short T_INT_S;

 
typedef unsigned long T_UINT;

 
typedef unsigned short T_UINT_S;


 
 

 
typedef T_FLOAT T_POINT[2];

 
 

 


typedef struct {
  T_INT length;
  T_CHAR data[ 32 ];
} T_STRING;

 
 
 



 
 
 

typedef struct
{
   T_CHAR    port_name[32];
   T_UINT    port_mode;      
   T_UINT 	 refresh;
   T_UINT  	 size_max ;
   T_UINT    nb_msg; 		 
} T_REF_MSG ;

 
 






#line 25 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManagerComponent.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 1 "..\Includes\pds_basic_types.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 



















typedef unsigned T_bitfield;

typedef signed T_signed_bitfield;

typedef unsigned char T_boolean;




typedef unsigned char T_char;

typedef signed char T_int8;
typedef short T_int16;
typedef long T_int32;
 



typedef	unsigned long long T_uint64;


typedef unsigned char T_uint8;
typedef unsigned short T_uint16;
typedef unsigned long T_uint32;
 



typedef	long long T_int64;


typedef float T_float32;
typedef double T_float64;

typedef void *T_ptr;
typedef unsigned long T_addr;




#line 34 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\ComponentHelper.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 39 "..\Includes\ComponentHelper.h"
#line 1 "..\Includes\Component.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 40 "..\Includes\Component.h"

 
typedef T_char **T_NamedPorts;


 
typedef T_ptr T_PortInterface;


typedef struct Component
{
	 
	T_boolean (*configurationCompleted)(struct Component *pThis);
	T_uint32 (*getNamedFacets)(struct Component *pThis, T_NamedPorts *pNameList);
	T_uint32 (*getNamedReceptacles)(struct Component *pThis, T_NamedPorts *pNameList);
	void (*connect)(struct Component *pThis, const T_char *pName, T_PortInterface pInterface);
	T_PortInterface (*provide)(struct Component *pThis, const T_char *pName);
	 
	void *_impl;
} Component;


#line 40 "..\Includes\ComponentHelper.h"

typedef struct ComponentHelper
{	 
	void (*newConnection)(struct ComponentHelper *pThis);
	T_int32 (*indexOfFacet)(struct ComponentHelper *pThis, const T_char *pName);
	T_int32 (*indexOfReceptacle)(struct ComponentHelper *pThis, const T_char *pName);
	T_boolean (*connectionTargetAchieved)(struct ComponentHelper *pThis);
	T_uint32 (*getNamedFacets)(struct ComponentHelper *pThis, T_NamedPorts *pNameList);
	T_uint32 (*getNamedReceptacles)(struct ComponentHelper *pThis, T_NamedPorts *pNameList);
	 
	T_uint32 _connectionTarget;
	T_NamedPorts _facetList;
	T_NamedPorts _receptacleList;
	T_uint32 _facetCount;
	T_uint32 _receptacleCount;
	T_uint32 _connectionCount;
} ComponentHelper;

typedef struct ComponentHelperClass 
{
	 
	void (*initialize)(ComponentHelper *pInstance, T_NamedPorts pFacetList, T_uint32 pFacetCount, T_NamedPorts pReceptacleList, T_uint32 pReceptacleCount, T_uint32 pConnectionTarget);
	 
} ComponentHelperClass;

extern ComponentHelperClass *CComponentHelper;


#line 35 "..\Includes\AirportManagerComponent.h"
#line 36 "..\Includes\AirportManagerComponent.h"

#line 1 "..\Includes\AircraftLocalizationServices.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 82 "..\Includes\AircraftLocalizationServices.h"
#line 1 "..\Includes\shared_library.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\shared_library.h"



typedef enum
{
	E_RUNWAY_TYPE = 0,
	E_TAXIWAY_TYPE,
	E_STAND_TYPE,
	E_OTHER_TYPE,
	E_ALL_TYPE
} T_AirportElementType;

typedef enum {
	E_UNKNOWN_AIRPORT,
	E_ORIGIN_AIRPORT,
	E_DESTINATION_AIRPORT,
	E_ALTERNATE_AIRPORT,
	E_SELECTED_AIRPORT,
	E_GPS_AIRPORT,
	E_DEFAULT_AIRPORT
} T_AirportType;

typedef enum {
	E_ARC_MODE = 0,
	E_NAV_MODE = 1,
	E_PLAN_MODE = 2,
	E_UNKNOWN_MODE = 3
} T_Mode;

typedef T_char *T_PtrChar;

typedef enum {
	E_METER_UNIT = 0,
	E_FEET_UNIT = 1
} T_UnitRange;







typedef T_boolean T_DeclutteringTable[ 0x05 ];


typedef struct
{
	T_uint32		startDate;
	T_uint32		endDate;
} T_DatabaseDate;
typedef enum {
	E_NOT_COMPUTED_AIRPORT_PHASE = 0,
	E_ORIGIN_AIRPORT_PHASE = 1,
	E_NO_AIRPORT_PHASE = 2,
	E_DESTINATION_AIRPORT_PHASE = 3
} T_AirportPhase;
typedef struct T_buffer
{
    T_uint32 maxSize;
    T_uint32 size;
    T_uint8 *buffer;
} T_buffer;




typedef enum {
	E_HIGHLIGHT_NULL = 0,
	E_HIGHLIGHT_THRESHOLD = 1,
	E_HIGHLIGHT_EXIT = 2,
	E_HIGHLIGHT_END = 3
} T_HighlightElementType;

typedef enum {
	E_ND  = 0,
	E_NO  = 1,
	E_FT  = 2,
	E_NCD = 3,
	E_FW  = 4,
	E_NR  = 5
} T_FunctionalStatus;
typedef enum {
	E_ARPTNAV_ST = 1,
	E_BTVWOES_ST = 2,
	E_BTVWUE_ST  = 3,
	E_BTVWSEL_ST = 4,
	E_BTVARM_ST  = 5,
	E_BTVACT_ST  = 6,
	E_EXTOVT_ST  = 7,
	E_RWYOVT_ST  = 8,
	E_RWYINVALID_ST    = 9,
	E_ROPARM_ST  = 10,
	E_ROPACT_ST  = 11,
	E_ROPRWYOVT_ST     = 12,
	E_ROPRWYINVALID_ST = 13
} T_BTVStates;
typedef enum
{
	E_RUNWAY_END = 0,
	E_RIGHT = 1,
	E_LEFT = 2
}T_BtvRwyExitSide;
typedef struct T_ReferenceStruct
{
	T_float32 RefPosX;
	T_float32 RefPosY;
	T_float32 RefBearing;
} T_ReferenceStruct;
typedef struct T_ThresholdInfoStruct
{
	T_uint32          IdNumber;
	T_char            Name[ 4 ];
	T_float32         SurfaceType;
	T_float32         Length;
	T_float32         Width;
	T_float32         Altitude;
	T_float32         MagHeading;
	T_ReferenceStruct Reference;
} T_ThresholdInfoStruct;
typedef struct T_ExitInfoStruct
{
	T_uint32          IdNumber;
	T_char            Name[ 4 ];
	T_float32         LateralDistance;
	T_float32         LongitudinalDistance;
	T_float32         DistanceToVacate;
	T_float32         PositionX;
	T_float32         PositionY;
} T_ExitInfoStruct;
typedef struct T_RunwayShiftInfo
{
	 
	 
	T_int16   airportId;
	 
	 
	T_uint32  runwayThresholdId;
	 
	 
	 
	T_boolean isShiftEditionEnabled;
	 
	 
	T_float32 startShift;
	 
	 
	T_float32 endShift;
}T_RunwayShiftInfo;

typedef enum {
	E_DUMP_BITE_MESSAGE_CMD_IN_PROGRESS,
	E_DUMP_BITE_MESSAGE_CMD_COMPLETE,
	E_DUMP_BITE_MESSAGE_CMD_ERROR
} T_DumpBiteMessageCmd;



typedef struct T_DumpBiteMessage
{
	T_DumpBiteMessageCmd dumpBiteMessageCmd;
	T_char dumpBiteMessageText[ 32 ];
} T_DumpBiteMessage;



typedef struct T_SISMessage
{
	T_int16		indexSISArea;
	T_boolean	status;
	T_char		Description[ 20 ];
	T_char		Value[ 16 ];
} T_SISMessage;



typedef struct
{
	T_float32		x;
	T_float32		y;
} T_PointGO;
typedef enum {
	E_IATA = 0,
	E_ICAO = 1,
	E_NAME = 2
} T_SearchType;


typedef enum
{
	 
	E_SERVICE_ENABLED,
	 
	E_SERVICE_VIEW_ONLY,
	 
	E_SERVICE_DISABLED
} T_runwayShiftMode;


typedef enum {
	E_AIRPORT_EMPTY = 0,
	E_AIRPORT_LOAD_IN_PROGRESS,
	E_AIRPORT_DIRTY,
	E_AIRPORT_CREATED,
	E_AIRPORT_FAILED
} T_AirportState;

 

 

 

typedef enum
{
	E_BTV_INACTIVE_MODE,
	E_BTV_CONFIGURATION_MODE,
	E_BTV_MONITORING_MODE
} T_btvMode;
typedef enum
{
	E_SERVICE_ENABLE,
	E_SERVICE_DELETE_ONLY,
	E_SERVICE_DISABLE,
} T_annotationMode;
typedef enum {
	E_RANGE_02_NM,
	E_RANGE_05_NM,
	E_RANGE_1_NM,
	E_RANGE_2_NM,
	E_RANGE_5_NM,
	E_RANGE_OTHER
} T_Range;
typedef enum
{
	E_STYLE_ACTION_ADD,
	E_STYLE_ACTION_SUPPRESS
} T_StyleAction;
typedef enum {
	E_EQUIPMENT_FO = 0,
	E_EQUIPMENT_CA = 1
} T_SideEquipment;
typedef enum {
	E_NO_AIRPORT,
	E_BTV_AIRPORT,
	E_FMS_AIRPORT
} T_AutoBTVAirport;
typedef enum {
	E_ANNOTATION_NO_ACTION,
	E_ANNOTATION_ADD,
	E_ANNOTATION_DELETE
} T_ActionMapData;

typedef struct T_FileInfo
{
	T_char name[ 256 ];
	T_addr addr;
	T_uint32 size;
	T_boolean isLoaded;
} T_FileInfo;
typedef enum
{
	E_BRAKE_TO_VACATE_FUNCTION,
	E_ANNOTATION_FUNCTION,
	E_RUNWAYSHIFT_FUNCTION,
	E_DATABASE_FUNCTION
} T_ComponentsToSynchronize;



 








#line 83 "..\Includes\AircraftLocalizationServices.h"

#line 1 "..\Includes\MapObjectServices.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 1 "..\Includes\PointerArray.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 34 "..\Includes\PointerArray.h"

typedef struct PointerArray
{	 
	T_boolean (*add)(struct PointerArray *pThis, T_ptr pItemPointer);
	T_ptr (*get)(struct PointerArray *pThis, T_uint32 pIndex);
	T_uint32 (*getCount)(struct PointerArray *pThis);
	T_uint32 (*getCapacity)(struct PointerArray *pThis);
	void (*reset)(struct PointerArray *pThis);
	T_ptr (*removeAt)(struct PointerArray *pThis, T_uint32 pIndex);
	T_ptr (*setAt)(struct PointerArray *pThis, T_ptr pItemPointer, T_uint32 pIndex);
	 
	T_ptr *_array;
	T_uint32 _count;
	T_uint32 _capacity;
} PointerArray;

typedef struct PointerArrayClass 
{
	 
	void (*initialize)(PointerArray *pInstance, T_ptr *pArray, T_uint32 pCapacity);
	 
} PointerArrayClass;

extern PointerArrayClass *CPointerArray;


#line 53 "..\Includes\MapObjectServices.h"
#line 54 "..\Includes\MapObjectServices.h"
#line 55 "..\Includes\MapObjectServices.h"

typedef struct MapObjectServices
{
	 
	PointerArray *(*getList)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_int32 pData);
	T_PtrChar (*getCharData)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_int32 pData);
	T_boolean (*getBooleanData)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_int32 pData);
	T_float32 (*getFloatData)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_int32 pData);
	T_int32 (*getInt32Data)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_int32 pData);
	T_int16 (*getInt16Data)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_int32 pData);
	struct MapObjectServices *(*getMapObject)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_int32 pData);
	T_ptr (*getGenericPtr)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_int32 pData);
	void (*setDisplayObjectInstance)(struct MapObjectServices *pThis, struct MapObjectServices *pMapObject, T_ptr pData);
	 
	void *_impl;
} MapObjectServices;


#line 85 "..\Includes\AircraftLocalizationServices.h"

 
 


 
typedef enum T_FlightPhase
{
	E_GND_PREFLIGHT = 1,
	E_GND_TAXI_OUT,
	E_GND_ACCELERATION,
	E_GND_TAKE_OFF,
	E_FLT_CLIMB,
	E_FLT_CRUISE,
	E_FLT_APPROACH,
	E_GND_LANDING,
	E_GND_BRAKING,
	E_GND_TAXI_IN,
	E_GND_ENGSTOPPED
}T_FlightPhase;

typedef enum T_OverrunElementType
{
	E_OVERRUN_DATA_NOT_AVAILABLE = 0,
	E_OVERRUN_PARKING_STAND_AREA,
	E_OVERRUN_TAXIWAY,
	E_OVERRUN_RUNWAY,
	E_OVERRUN_DISPLACED_AREA,
	E_OVERRUN_STOPWAY,
	E_OVERRUN_DEICING_AREA,
	E_OVERRUN_RUNWAY_INTERSECTION
} T_OverrunElementType;


typedef struct T_OverrunElement
{
	T_OverrunElementType type;
	T_char name[ 51 ];
	MapObjectServices* mapObjectservices;
} T_OverrunElement;

 
 
 


typedef struct AircraftLocalizationServices
{
	 
	T_float32 (*getAircraftLatitude)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getAircraftLongitude)(struct AircraftLocalizationServices *pThis);
	T_boolean (*getAircraftOnGround)(struct AircraftLocalizationServices *pThis);
	T_int16 (*getNearestAirport)(struct AircraftLocalizationServices *pThis);
	T_boolean (*getAircraftLocationValidity)(struct AircraftLocalizationServices *pThis);
	T_boolean (*getFlightPhaseValidity)(struct AircraftLocalizationServices *pThis);
	T_FlightPhase (*getFlightPhase)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getAircraftAltitude)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getTrueHeading)(struct AircraftLocalizationServices *pThis);
	T_boolean (*getTrueHeadingValidity)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getMagHeading)(struct AircraftLocalizationServices *pThis);
	T_boolean (*getMagHeadingValidity)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getGroundSpeed)(struct AircraftLocalizationServices *pThis);
	T_boolean (*getGroundSpeedValidity)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getTurnRate)(struct AircraftLocalizationServices *pThis);
	T_boolean (*getTurnRateValidity)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getDistXFromARPInMeter)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getDistYFromARPInMeter)(struct AircraftLocalizationServices *pThis);
	T_float32 (*getDistACToNose)(struct AircraftLocalizationServices *pThis);
	T_int16 (*getAirportInAircraftCone)(struct AircraftLocalizationServices *pThis);
	T_boolean (*isThrustLeverPositionAtOrAboveClimb)(struct AircraftLocalizationServices *pThis);
	void (*getOverrunElement)(struct AircraftLocalizationServices *pThis, T_OverrunElement*  pOverrunElement);
	T_uint32 (*getFlightCount)(struct AircraftLocalizationServices *pThis);
	T_boolean (*getAircraftIsInAirportBoundingBox)(struct AircraftLocalizationServices *pThis, T_int16 pAirportId);
	T_int16 (*getOverrunAirport)(struct AircraftLocalizationServices *pThis);
	T_PtrChar (*getActiveQfu)(struct AircraftLocalizationServices *pThis);
	 
	void *_impl;
} AircraftLocalizationServices;


#line 38 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\DatabaseServices.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 44 "..\Includes\DatabaseServices.h"
#line 45 "..\Includes\DatabaseServices.h"
#line 46 "..\Includes\DatabaseServices.h"

typedef struct DatabaseServices
{
	 
	T_ptr (*getGenericPtr)(struct DatabaseServices *pThis, T_int32 pData);
	T_float32 (*getFloatData)(struct DatabaseServices *pThis, T_int32 pData);
	T_boolean (*getBooleanData)(struct DatabaseServices *pThis, T_int32 pData);
	T_PtrChar (*getCharData)(struct DatabaseServices *pThis, T_int32 pData);
	T_int16 (*getInt16Data)(struct DatabaseServices *pThis, T_int32 pData);
	T_int16 *(*getListAirport)(struct DatabaseServices *pThis, T_int32 pData);
	T_int32 (*getInt32Data)(struct DatabaseServices *pThis, T_int32 pData);
	T_int16 (*searchAirportByChar)(struct DatabaseServices *pThis, T_SearchType pSearchType, T_PtrChar pChar);
	MapObjectServices *(*getAirportInstance)(struct DatabaseServices *pThis, T_int16 pAirport);
	void (*setAirportState)(struct DatabaseServices *pThis, T_int16 pAirport, T_AirportState pState);
	 
	void *_impl;
} DatabaseServices;


#line 39 "..\Includes\AirportManagerComponent.h"
#line 40 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\FlightPlanManagementServices.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 51 "..\Includes\FlightPlanManagementServices.h"
#line 52 "..\Includes\FlightPlanManagementServices.h"
#line 53 "..\Includes\FlightPlanManagementServices.h"

typedef struct FlightPlanManagementServices
{
	 
	T_int16 (*getOriginAirport)(struct FlightPlanManagementServices *pThis);
	T_int16 (*getDestinationAirport)(struct FlightPlanManagementServices *pThis);
	T_int16 (*getAlternateAirport)(struct FlightPlanManagementServices *pThis);
	T_int16 (*getDestinationAirportOfLastFlight)(struct FlightPlanManagementServices *pThis);
	T_int32 (*getDestinationRunway)(struct FlightPlanManagementServices *pThis);
	T_PtrChar (*getOriginRunwayName)(struct FlightPlanManagementServices *pThis);
	T_PtrChar (*getDestinationRunwayName)(struct FlightPlanManagementServices *pThis);
	T_int32 (*getOriginRunway)(struct FlightPlanManagementServices *pThis);
	T_PtrChar (*getDestinationAirportICAO)(struct FlightPlanManagementServices *pThis);
	T_PtrChar (*getOriginAirportICAO)(struct FlightPlanManagementServices *pThis);
	MapObjectServices *(*getOriginRunwayMos)(struct FlightPlanManagementServices *pThis);
	MapObjectServices *(*getDestinationRunwayMos)(struct FlightPlanManagementServices *pThis);
	 
	void *_impl;
} FlightPlanManagementServices;


#line 41 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\ModeManagerServices.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 31 "..\Includes\ModeManagerServices.h"

typedef struct ModeManagerServices
{
	 
	T_Mode (*getMode)(struct ModeManagerServices *pThis);
	T_Range (*getRange)(struct ModeManagerServices *pThis);
	 
	void *_impl;
} ModeManagerServices;


#line 42 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\BTVServices.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 43 "..\Includes\BTVServices.h"
#line 44 "..\Includes\BTVServices.h"
#line 45 "..\Includes\BTVServices.h"

typedef struct BTVServices
{
	 
	T_int16 (*getBTVAirport)(struct BTVServices *pThis);
	T_ThresholdInfoStruct *(*getBTVReferenceInfo)(struct BTVServices *pThis);
	T_boolean (*getBTVSPPStatus)(struct BTVServices *pThis);
	T_BTVStates (*getBTVState)(struct BTVServices *pThis);
	MapObjectServices *(*getBTVExit)(struct BTVServices *pThis);
	 
	void *_impl;
} BTVServices;


#line 43 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\ErrorThrower.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 37 "..\Includes\ErrorThrower.h"

 


typedef T_uint32 T_ErrorType;

typedef struct
{     
	T_ErrorType type;
	T_char className[ 31 +1];
	T_char methodName[ 31 +1];
	T_uint32 line;
	T_char info1[ 31 +1];
	T_uint32 info2;
	T_uint32 info3;
} T_ErrorData;

typedef struct ErrorThrower
{
	 
	void (*raise)(struct ErrorThrower *pThis, const T_ErrorData *pErrorData);
	void (*reset)(struct ErrorThrower *pThis, T_ErrorData *pErrorData, T_ErrorType pErrorType);
	void (*setLocation)(struct ErrorThrower *pThis, T_ErrorData *pErrorData, const T_char *pClassName, const T_char *pMethodName, T_uint32 pLine);
	void (*setAdditionalInformations)(struct ErrorThrower *pThis, T_ErrorData *pErrorData, const T_char *pInfo1, T_uint32 pInfo2, T_uint32 pInfo3);
	 
	void *_impl;
} ErrorThrower;


#line 44 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\AirportLoadingEvent.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 





typedef struct AirportLoadingEvent
{
	 
	void (*airportPriorityListUpdated)(struct AirportLoadingEvent *pThis, T_int16*pAirportPriorityList);
	 
	void *_impl;
} AirportLoadingEvent;


#line 45 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\AirportRequestActivationEvent.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 28 "..\Includes\AirportRequestActivationEvent.h"

typedef struct AirportRequestActivationEvent
{
	 
	void (*airportRequestEnabled)(struct AirportRequestActivationEvent *pThis, T_boolean pEnabled);
	 
	void *_impl;
} AirportRequestActivationEvent;


#line 46 "..\Includes\AirportManagerComponent.h"
#line 1 "..\Includes\AirportToDisplayModificationEvent.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 30 "..\Includes\AirportToDisplayModificationEvent.h"

typedef struct AirportToDisplayModificationEvent
{
	 
	void (*airportToDisplayChanged)(struct AirportToDisplayModificationEvent *pThis, T_int16 pAirportToDisplay);
	 
	void *_impl;
} AirportToDisplayModificationEvent;


#line 47 "..\Includes\AirportManagerComponent.h"
#line 48 "..\Includes\AirportManagerComponent.h"
#line 49 "..\Includes\AirportManagerComponent.h"

 
typedef enum T_AirportManagerComponentReceptaclesIndexes
{
	E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_AIRCRAFT_LOCALIZATION_SERVICES_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_FLIGHT_PLAN_MANAGEMENT_SERVICES_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_MODE_MANAGER_SERVICES_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_ERROR_THROWER_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_AIRPORT_LOADING_EVENT_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_AIRPORT_TO_DISPLAY_MODIFICATION_EVENT_RECEPTACLE_INDEX,
	E_AIRPORT_MANAGER_COMPONENT_NUMBER_OF_RECEPTACLE_INDEXES
}T_AirportManagerComponentReceptaclesIndexes;

 
typedef enum T_AirportManagerComponentFacetsIndexes
{
	E_AIRPORT_MANAGER_TASK_FACET_INDEX,
	E_AIRPORT_MANAGER_AIRPORT_SELECTION_EVENT_FACET_INDEX,
	E_AIRPORT_MANAGER_COMPONENT_NUMBER_OF_FACET_INDEXES
}T_AirportManagerComponentFacetsIndexes;

 
typedef struct T_AirportManagerComponentReceptacles
{
	AircraftLocalizationServices *aircraftLocalizationServices;
	DatabaseServices *databaseServices;
	MapObjectServices *mapObjectServices;
	FlightPlanManagementServices *flightPlanManagementServices;
	ModeManagerServices *modeManagerServices;
	BTVServices *btvServices;
	ErrorThrower *errorThrower;
	AirportLoadingEvent *airportLoadingEventsArray[ 8 ];
	PointerArray airportLoadingEvents;
	AirportRequestActivationEvent *airportRequestActivationEventsArray[ 8 ];
	PointerArray airportRequestActivationEvents;
	AirportToDisplayModificationEvent *airportToDisplayModificationEventsArray[ 8 ];
	PointerArray airportToDisplayModificationEvents;
}T_AirportManagerComponentReceptacles;

 


 


typedef struct AirportManagerComponent
{	 
	void (*connect)(struct AirportManagerComponent *pThis, const T_char *pName, T_PortInterface pInterface);
	T_boolean (*configurationCompleted)(struct AirportManagerComponent *pThis);
	T_uint32 (*getNamedFacets)(struct AirportManagerComponent *pThis, T_NamedPorts *pNameList);
	T_uint32 (*getNamedReceptacles)(struct AirportManagerComponent *pThis, T_NamedPorts *pNameList);
	T_PortInterface (*provide)(struct AirportManagerComponent *pThis, const T_char *pName);
	T_PortInterface (*getConnectedFacet)(struct AirportManagerComponent *pThis, T_AirportManagerComponentReceptaclesIndexes pReceptacleIndex);
	 
	Component *(*getComponentInstance)(struct AirportManagerComponent *pThis);
	 
	Component _componentImpl;
	 
	T_AirportManagerComponentReceptacles _receptacles;
	T_boolean _connectionErrorDetected;
	ComponentHelper _componentHelper;
} AirportManagerComponent;

typedef struct AirportManagerComponentClass
{
	 
	void (*initialize)(AirportManagerComponent *pInstance);
	AirportManagerComponent *(*getInstance)(void);
	 
	AirportManagerComponent *_instance;
} AirportManagerComponentClass;

extern AirportManagerComponentClass *CAirportManagerComponent;


#line 26 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 27 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\StringUtilities.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 27 "..\Includes\StringUtilities.h"

 



typedef struct StringUtilitiesClass 
{
	 
	T_boolean (*equals)(const T_char *pStr1, const T_char *pStr2);
	T_uint16 (*length)(const T_char *pStr);
	T_boolean (*nequals)(const T_char *pStr1, const T_char *pStr2, T_uint32 pSize);
	T_int32 (*copy)(T_char *pDestination, const T_char *pSource);
	T_int32 (*concat)(T_char *pDest, const T_char *pSrc);
	T_int32 (*ncopy)(T_char *pDestination, const T_char *pSource, T_uint32 pSize);
	T_int32 (*nconcat)(T_char *pDest, const T_char *pSrc, T_uint32 pSize);
	T_uint32 (*nlength)(const T_char *pStr, T_uint32 pMaxLength);
	 
} StringUtilitiesClass;

extern StringUtilitiesClass *CStringUtilities;


#line 28 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\MathematicalTools.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 27 "..\Includes\MathematicalTools.h"

#line 29 "..\Includes\MathematicalTools.h"










typedef struct MathematicalToolsClass 
{
	 
	T_float32 (*computeOrthodromicDistance)(T_float32 pLatitudeA, T_float32 pLongitudeA, T_float32 pLatitudeB, T_float32 pLongitudeB);
	void (*computeGapPosition)(T_float32 pOriginLatitude, T_float32 pOriginLongitude, T_float32 pGapX, T_float32 pGapY, T_float32 *pComputedLatitude, T_float32 *pComputedLongitude);
	 
} MathematicalToolsClass;

extern MathematicalToolsClass *CMathematicalTools;


#line 29 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\GeometricTools.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 27 "..\Includes\GeometricTools.h"
#line 28 "..\Includes\GeometricTools.h"
#line 1 "..\Includes\ContourGO.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




 















#line 58 "..\Includes\ContourGO.h"
#line 59 "..\Includes\ContourGO.h"
#line 60 "..\Includes\ContourGO.h"
#line 61 "..\Includes\ContourGO.h"



typedef struct ContourGO
{	 
	T_boolean (*add)(struct ContourGO *pThis, T_PointGO *pElement);
	T_int16 (*getInt16Data)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_int32 pData);
	PointerArray *(*getList)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_int32 pData);
	T_float32 (*getFloatData)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_int32 pData);
	MapObjectServices *(*getMapObject)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_int32 pData);
	T_PtrChar (*getCharData)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_int32 pData);
	T_ptr (*getGenericPtr)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_int32 pData);
	T_boolean (*getBooleanData)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_int32 pData);
	T_int32 (*getInt32Data)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_int32 pData);
	void (*setDisplayObjectInstance)(struct ContourGO *pThis, MapObjectServices *pMapObject, T_ptr pData);
	T_PointGO *(*get)(struct ContourGO *pThis, T_int32 pNumber);
	 
	MapObjectServices *(*getMapObjectServicesInstance)(struct ContourGO *pThis);
	 
	MapObjectServices _mapObjectServicesImpl;
	 
	T_float32 _minX;
	T_float32 _maxX;
	T_float32 _minY;
	T_float32 _maxY;
	T_boolean _boundingBoxIsActive;
	T_PointGO _boundingPoints[ 4 ];
	T_ptr _displayObjectInstance;
	PointerArray _pointGOArray;
} ContourGO;

typedef struct ContourGOClass 
{
	 
	T_boolean (*initialize)(ContourGO *pInstance, T_uint32 pNumber, T_boolean pActiveBoundingBox);
	 
} ContourGOClass;

extern ContourGOClass *CContourGO;


#line 29 "..\Includes\GeometricTools.h"

#line 31 "..\Includes\GeometricTools.h"






typedef struct GeometricToolsClass 
{
	 
	T_float32 (*computeMaxValue)(T_float32 pValue1, T_float32 pValue2);
	T_float32 (*computeMinValue)(T_float32 pValue1, T_float32 pValue2);
	T_float32 (*computeDistance)(T_PointGO *pPointA, T_PointGO *pPointB);
	void (*computeMedianPosition)(T_PointGO *pPointA, T_PointGO *pPointB, T_PointGO *pPointG);
	void (*computeExternalPosition)(T_PointGO *pPointA, T_PointGO *pPointB, T_PointGO *pPointG, T_boolean pDirection, T_PointGO *pPointI);
	T_float32 (*computeAngle)(T_PointGO *pPointA, T_PointGO *pPointB, T_PointGO *pPointC);
	void (*computeShiftedPoints)(T_PointGO *pPoint, T_PointGO *pPreviousPoint, T_PointGO *pNextPoint, T_float32 pWidth, T_float32 pLenght, T_PointGO *pComputedPoint);
	T_boolean (*computeIsIntoQuadrilateral)(T_float32 pX, T_float32 pY, T_PointGO *pQuadrilateral);
	T_boolean (*intersectWithXAxis)(T_float32 pX1, T_float32 pY1, T_float32 pX2, T_float32 pY2, T_float32 pX, T_float32 pY);
	T_boolean (*isInto)(MapObjectServices *pLineMOS, MapObjectServices *pPolygonMOS);
	T_boolean (*isIntoPolygon)(T_float32 pX, T_float32 pY, ContourGO *pPolygonContour);
	T_boolean (*isLatLongInAirportBoundingBox)(T_float32 pLatitude, T_float32 pLongitude, MapObjectServices *pAirportMos, MapObjectServices *pMosProvider);
	T_boolean (*isSegmentIntersected)(T_PointGO *pLine1, T_PointGO *pLine2);
	T_boolean (*isQuadrilateralIntersected)(T_PointGO *pQuadrilateral1, T_PointGO *pQuadrilateral2);
	T_boolean (*isLatLongInAirportCoverageVolume)(T_float32 pLatitude, T_float32 pLongitude, T_float32 pAltitude, T_float32 pAirportLatitude, T_float32 pAirportLongitude, T_float32 pAirportAltitude, T_float32 *pDistanceToAirport);
	 
} GeometricToolsClass;

extern GeometricToolsClass *CGeometricTools;


#line 30 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 31 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\DatabaseIncludesCommon.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 





















































#line 32 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\Airport_MapObjectsIncludes.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 1 "..\Includes\Common_MapObjectsIncludes.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
























#line 20 "..\Includes\Airport_MapObjectsIncludes.h"
























#line 33 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\setjmp.h"













 













#line 70 "..\Includes\setjmp.h"


#line 77 "..\Includes\setjmp.h"
typedef int jmp_buf[ 64 ];


extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int);








extern int sigsetjmp( jmp_buf ,int);
extern void siglongjmp( jmp_buf , int);






#line 34 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"

 

#line 1 "..\Includes\AirportManager__updateAirportToBeDisplayedInPlan.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 1 "..\Includes\AirportManager.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 96 "..\Includes\AirportManager.h"
#line 97 "..\Includes\AirportManager.h"
#line 98 "..\Includes\AirportManager.h"
#line 1 "..\Includes\AirportSelectionEvent.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 30 "..\Includes\AirportSelectionEvent.h"

typedef struct AirportSelectionEvent
{
	 
	void (*airportSelected)(struct AirportSelectionEvent *pThis, T_int16 pAirportRequest);
	 
	void *_impl;
} AirportSelectionEvent;


#line 99 "..\Includes\AirportManager.h"
#line 1 "..\Includes\Task.h"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 31 "..\Includes\Task.h"

 


typedef T_char T_TaskName[ 31 +1];

typedef struct Task
{
	 
	void (*execute)(struct Task *pThis);
	T_char *(*getName)(struct Task *pThis);
	 
	void *_impl;
} Task;


#line 100 "..\Includes\AirportManager.h"



 














typedef enum
{
	E_NO_AIRPORT_TO_DISPLAY,
	E_AIRPORT_TO_DISPLAY_IN_NAV,
	E_AIRPORT_TO_DISPLAY_IN_PLAN
}T_airportToDisplay;

typedef struct AirportManager
{	 
	void (*_updateAirportToBeDisplayedInPlan)(struct AirportManager *pThis);
	void (*_updateAirportPriorityList)(struct AirportManager *pThis);
	void (*_updateAirportToBeDisplayedInArcNav)(struct AirportManager *pThis);
	void (*_updateFMSAirports)(struct AirportManager *pThis);
	void (*_updateAircraftSituation)(struct AirportManager *pThis);
	void (*_updateBTVAirport)(struct AirportManager *pThis);
	void (*airportSelected)(struct AirportManager *pThis, T_int16 pAirportRequest);
	void (*execute)(struct AirportManager *pThis);
	T_char *(*getName)(struct AirportManager *pThis);
	void (*_updateAirportToDisplay)(struct AirportManager *pThis);
	void (*_updateFlightTest)(struct AirportManager *pThis);
	void (*_updateMapManagementData)(struct AirportManager *pThis);
	void (*_updateMode)(struct AirportManager *pThis);
	void (*_updateAirportServiceActivation)(struct AirportManager *pThis);
	void (*_checkDatabaseSwap)(struct AirportManager *pThis);
	 
	AirportSelectionEvent *(*getAirportSelectionEventInstance)(struct AirportManager *pThis);
	Task *(*getTaskInstance)(struct AirportManager *pThis);
	 
	AirportSelectionEvent _airportSelectionEventImpl;
	Task _taskImpl;
	 
	T_int16 _alternateAirport;
	T_int16 _BTVAirport;
	T_int16 _nearestAirport;
	T_int16 _destinationAirport;
	T_int16 _originAirport;
	T_int16 _requestedAirportForDisplay;
	T_int16 _airportToBeDisplayedInPlan;
	T_int16 _memorizedAirportInArcNav;
	T_int16 _defaultAirport;
	T_FlightPhase _flightPhase;
	T_int16 _airportToBeDisplayedInArcNav;
	T_int16 _destinationAirportOfLastFlight;
	T_float32 _aircraftLatitude;
	T_float32 _aircraftLongitude;
	T_boolean _BTVAirportChanged;
	T_boolean _onGroundCondition;
	T_int16 _airportPriorityList[ 4 ];
	T_Mode _mode;
	T_boolean _flightPhaseValidity;
	T_boolean _aircraftLocationValidity;
	T_int16 _lastDisplayedAirportInPlan;
	T_float32 _aircraftAltitude;
	T_boolean _transitionPerformed;
	T_boolean _firstEntryPlanModeAfterTransition;
	T_boolean _firstDisplayModePlanAfterTransition;
	T_boolean _airportDisplayedInPlanAfterTransition;
	T_char _airportNameToBeDisplayedInPlan[ 5 ];
	T_airportToDisplay _airportToBeDisplayedState;
	T_Mode _previousMode;
	T_BTVStates _btvStateConsolidated;
	T_boolean _databaseSwapState;
} AirportManager;

typedef struct AirportManagerClass 
{
	 
	AirportManager *(*getInstance)(void);
	void (*initialize)(AirportManager *pInstance);
	 
	AirportManager _instance;
} AirportManagerClass;

extern AirportManagerClass *CAirportManager;


#line 20 "..\Includes\AirportManager__updateAirportToBeDisplayedInPlan.hpp"

 
 
 
 
 
extern void AirportManager__updateAirportToBeDisplayedInPlan(AirportManager *pThis);


#line 38 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateAirportPriorityList.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateAirportPriorityList.hpp"

 
 
 
 
 
extern void AirportManager__updateAirportPriorityList(AirportManager *pThis);


#line 39 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateAirportToBeDisplayedInArcNav.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateAirportToBeDisplayedInArcNav.hpp"

 
 
 
 
 
extern void AirportManager__updateAirportToBeDisplayedInArcNav(AirportManager *pThis);


#line 40 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateFMSAirports.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateFMSAirports.hpp"

 
 
 
 
 
 
extern void AirportManager__updateFMSAirports(AirportManager *pThis);


#line 41 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateAircraftSituation.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateAircraftSituation.hpp"

 
 
 
 
 
 
extern void AirportManager__updateAircraftSituation(AirportManager *pThis);


#line 42 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateBTVAirport.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateBTVAirport.hpp"

 
 
 
 
 
extern void AirportManager__updateBTVAirport(AirportManager *pThis);


#line 43 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager_airportSelected.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager_airportSelected.hpp"

 
 
 
 
 
extern void AirportManager_airportSelected(AirportManager *pThis, T_int16 pAirportRequest);


#line 44 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager_execute.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager_execute.hpp"

 
 
 
 
 
extern void AirportManager_execute(AirportManager *pThis);


#line 45 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager_getName.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager_getName.hpp"

 
 
 
 
 
extern T_char *AirportManager_getName(AirportManager *pThis);


#line 46 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateAirportToDisplay.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateAirportToDisplay.hpp"

 
 
 
 
 
extern void AirportManager__updateAirportToDisplay(AirportManager *pThis);


#line 47 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateFlightTest.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateFlightTest.hpp"

 
 
 
 
extern void AirportManager__updateFlightTest(AirportManager *pThis);


#line 48 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateMapManagementData.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateMapManagementData.hpp"

 
 
 
 
extern void AirportManager__updateMapManagementData(AirportManager *pThis);


#line 49 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateMode.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateMode.hpp"

 
 
 
 
 
extern void AirportManager__updateMode(AirportManager *pThis);


#line 50 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__updateAirportServiceActivation.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__updateAirportServiceActivation.hpp"

 
 
 
 
 
 
extern void AirportManager__updateAirportServiceActivation(AirportManager *pThis);


#line 51 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
#line 1 "..\Includes\AirportManager__checkDatabaseSwap.hpp"
 
 
 
 
 
 
 
 
 
 
 
 
 
 




#line 20 "..\Includes\AirportManager__checkDatabaseSwap.hpp"

 
 
 
 
 
extern void AirportManager__checkDatabaseSwap(AirportManager *pThis);


#line 52 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"












 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"



 




 




 

























 
 
 






 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\rtvalues.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\rtvalues.h"



 



 


















#line 61 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"

 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"

 









 



 

 


 











 







 













 

 

 


#line 70 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 80 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"
 



#line 95 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 105 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 116 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"
 






#line 132 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 143 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 153 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 165 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 199 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"

 

 


 


 







 




#line 257 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 266 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"

 



#line 287 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


#line 318 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"

#line 347 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"

 





#line 361 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"

#line 368 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"












#line 386 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"


 


#line 412 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\custom.h"
 

#line 64 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"

 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"



 




 

 




 
















































#line 81 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


 





 









#line 136 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"
















































 




























































 







 


 










 



















 




#line 298 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 307 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"



 






 




#line 329 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 337 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"

 





 


#line 354 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 363 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 372 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 381 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 390 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 399 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 408 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"







#line 420 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"

 




 











#line 443 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"















 




 








#line 550 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"

 




#line 563 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"









 

























































 





 








#line 650 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"
 













 






#line 676 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"




 












 














#line 715 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


#line 726 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"





















#line 753 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


 





 




 














 





 





 












 




 




 




 




 




 








 




 




 




 



 


 




 



 











 










 



 







 






 














 




 








 




 

#line 973 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"


 

#line 998 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"



#line 1008 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"

 




 







 



#line 1035 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"

 




 













 









 






#line 1077 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\defaults.h"




#line 67 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"

 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\initexit.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\initexit.h"



 



 



 




 



 




 




 






 




#line 68 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\initexit.h"

 extern      void atl_exit

  (void)



  ;

 




#line 124 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\initexit.h"

 














#line 70 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"

 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\clock.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\clock.h"



 



 





#line 29 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\clock.h"


#line 100 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\clock.h"




#line 112 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\clock.h"




#line 73 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"

 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\priv.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\priv.h"



 



 








#line 253 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\priv.h"
 extern  void _atl_error_dump

( const char error )



 ;


#line 76 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"

 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"



 



 


























#line 495 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"


#line 505 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"


#line 521 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"


#line 532 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"


#line 547 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"




#line 565 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"




#line 590 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"



#line 601 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\tasking.h"





#line 79 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"

 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\image.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\image.h"



 



 



















 


#line 118 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\image.h"

 extern      void _atl_add_error

( const char *code,const char *msg )



  ;


#line 82 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"












 
#line 1 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\atu.h"


 
#line 11 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\atu.h"



 











 
 






 
 












 
 
 





 





 
 
 
 















extern char * atu_traces_file(

void

)     ;








static  int  I1;
static  int  I2;
static  int  I3;
static  int  I4;
static  int  I5;
static  int  I6;
static  int  I7;
static  int  I8;
static  int  I9;
static  int  I10;
static  int  I11;
static  int  I12;
static  int  I13;
static  int  I14;
static  int  I15;
static  int  I16;
static  int  I17;
static  int  I18;
static  int  I19;
static  int  I20;


static  int  J1;
static  int  J2;
static  int  J3;
static  int  J4;
static  int  J5;
static  int  J6;
static  int  J7;
static  int  J8;
static  int  J9;
static  int  J10;
static  int  J11;
static  int  J12;
static  int  J13;
static  int  J14;
static  int  J15;
static  int  J16;
static  int  J17;
static  int  J18;
static  int  J19;
static  int  J20;

static void atu_init_data(

void

)
{
   I1=0;  I2=0;  I3=0;  I4=0;  I5=0;  I6=0;  I7=0;  I8=0;  I9=0; I10=0;
  I11=0; I12=0; I13=0; I14=0; I15=0; I16=0; I17=0; I18=0; I19=0; I20=0;
   J1=0;  J2=0;  J3=0;  J4=0;  J5=0;  J6=0;  J7=0;  J8=0;  J9=0; J10=0;
  J11=0; J12=0; J13=0; J14=0; J15=0; J16=0; J17=0; J18=0; J19=0; J20=0;
}


static int NUM_OPERATION, NUM_TEST;



























extern      const char *  NIL;



extern      const void *  NONIL;



#line 260 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\atu.h"








extern     char * CONCAT_STR_C(

   const char *  str,
  ...

)     ;





extern     void PTU_CHAR_C(

  char value,
  int num

)     ;

extern     void PTU_INTEGER_C(

   long long  value,
  int num,
  int base

)     ;

extern     void PTU_UNSIGNED_C(

   unsigned long long  value,
  int num,
  int base

)     ;

extern     void PTU_BOOLEAN_C(

  int value,
  int num

)     ;



extern     void PTU_FLOAT_C(

  float value,
  int num

)     ;

extern     void PTU_DOUBLE_C(

  double value,
  int num

)     ;





extern     void EDV_STR_C(

  int aff_interv,
  int uncheck,
   const char *  value,
  int num,
   const char *  value_min,
   const char *  value_max

)     ;



extern     void EDV_CHAR_C(

  int aff_interv,
  int uncheck,
  char value,
  int num,
  char value_min,
  char value_max

)     ;

extern     void EDV_INTEGER_C(

  int aff_interv,
  int uncheck,
   long long  value,
  int num,
  int base,
   long long  value_min,
   long long  value_max

)     ;

extern     void EDV_UNSIGNED_C(

  int aff_interv,
  int uncheck,
   unsigned long long  value,
  int num,
  int base,
   unsigned long long  value_min,
   unsigned long long  value_max

)     ;

extern     void EDV_BOOLEAN_C(

  int aff_interv,
  int uncheck,
  int value,
  int num,
  int value_min,
  int value_max

)     ;

extern     void EDV_POINTER_C(

  int aff_interv,
  int uncheck,
   const void *  value,
  int num,
   const void *  value_att

)     ;



extern     void EDV_FLOAT_C(

  int aff_interv,
  int uncheck,
  float value,
  int num,
  float value_min,
  float value_max

)     ;

extern     void EDV_DOUBLE_C(

  int aff_interv,
  int uncheck,
  double value,
  int num,
  double value_min,
  double value_max

)     ;



extern     void DCL_OP_C(

  int num  ,
  const char *name_op

)     ;

extern     void DCL_TST_C(

  int num  ,
  const char *name_tst

)     ;

extern     void START_CHRONO_C(

  void

)     ;

extern     void STOP_CHRONO_C(

  void

)     ;

extern     void START_C(

  void

)     ;

extern     void STOP_C(

  void

)     ;

extern     void SET_MODE_TAB_C(

  int num

)     ;

extern     void UNSET_MODE_TAB_C(

  int num

)     ;



extern     void INI_STR_C(

  char * s,
  int  aff_val,
  long num,
   const char *  val

)     ;



extern     void RUPT (

  int niveau

)     ;

extern     void DCL_FAC_REP_C(

  int num,
  int facteur

)     ;

extern     void SET_MODE_CST_C(

  int num

)     ;

extern     void UNSET_MODE_CST_C(

  int num

)     ;

extern     void ATTOL_OPEN_BRA_C(

  int num

)     ;

extern     void ATTOL_CLOSE_BRA_C(

  int num

)     ;

extern     void EDV_CHRONO_MUET_C(

  int stub,
  int a_status,
  int num_app

)     ;

extern     void EDV_MUET_CHECK(

  int stub,
  int ind

)     ;

extern     int COMP_STR_C(

 const char *   s1,
 const char *   s2

)    ;




#line 96 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"

#line 103 "C:\Outils\Rational\TESTRE~1\targets\CWINDI~2\lib\TP.h"
































#line 66 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"



















StringUtilitiesClass local_CStringUtilities;
StringUtilitiesClass *CStringUtilities = &local_CStringUtilities;

AirportManagerClass local_CAirportManager;
AirportManagerClass *CAirportManager = &local_CAirportManager;

AirportManagerComponentClass local_CAirportManagerComponent;
AirportManagerComponentClass *CAirportManagerComponent = &local_CAirportManagerComponent;

GeometricToolsClass local_CGeometricTools;
GeometricToolsClass *CGeometricTools = &local_CGeometricTools;

MathematicalToolsClass local_CMathematicalTools;
MathematicalToolsClass *CMathematicalTools = &local_CMathematicalTools;

T_STRING 	FT_ICAO_OF_PRELOADED_ARPT4;
T_STRING 	FT_ICAO_OF_PRELOADED_ARPT3;
T_STRING 	FT_ICAO_OF_PRELOADED_ARPT2;
T_STRING 	FT_ICAO_OF_PRELOADED_ARPT1;
T_BOOL 	SAME_ARPT_PLAN_AS_ROSENAV;
T_BOOL 	AC_IN_BOUNDING_BOX;
T_FLOAT 	ARPLONGITUDE;
T_FLOAT 	ARPLATITUDE;
T_STRING 	FT_ICAO_TO_BE_DISP_IN_PLAN;
T_STRING 	FT_ICAO_OF_THE_DEFAULT_ARPT;
T_uint32 	local_pIndex = 0;
jmp_buf 	flag_interuption;
T_uint32 	env_flag = 0;
T_uint32 	TEST_NAME = 0;
T_uint32 	i = 0;
T_uint32 	local_i = 0;
T_char		local_labelAtlength[50];
	



	
	
	

	

	

	
	
	
 

 

static int _atcc_ptr(void *ptr, void *ref)
{
 if (ref==NONIL) { return(ptr== ((char *)(0)) ); } else { return(ref!=ptr); }
}
static int _atcc_str(char *str, char *ref)
{
 if (ref==NONIL) { return(str== ((char *)(0)) ); } else { return(COMP_STR_C(ref,str)); }
}

long int
 _ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 = -1;
unsigned int
 _it_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
;

static struct
 _so_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 {
 unsigned int min;
 unsigned int max;
 int sel[1];
 struct {
 struct AirportRequestActivationEvent  *pInstance;
 T_boolean pEnabled;
        } _datain;
}
 _os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[150]
;

static struct
 _si_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 {
unsigned int indice;
struct {
 struct AirportRequestActivationEvent  *pInstance;
 T_boolean pEnabled;
  } _datain;
}
 _is_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[150]
;

void AirportRequestActivationEvent_airportRequestEnabled(struct
 AirportRequestActivationEvent  *pInstance, T_boolean pEnabled)
{
struct
 _si_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 * Attol_ptr_in;
struct
 _so_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 >= 0)
    {
  if 
(_it_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled<150
)
    {
       Attol_ptr_in = &
(_is_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_it_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 *)0;
    }
 
 _ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].min
)
	   &&(  
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].min>
(unsigned int
)_ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
)
	      ||
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].max<
(unsigned int
)_ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=(Attol_ptr_out->_datain.pEnabled != pEnabled);
  EDV_CHRONO_MUET_C( 11, res
,_ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pEnabled = pEnabled;
     
 _it_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled++
;
    }
     }
}
void
 checkin_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
(void)
{
struct
 _si_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(11,0);
if 
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
),0,10,( long long 
)_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].max
,( long long 
)_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
),0,10,( unsigned long long 
)_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].min
,( unsigned long long 
)_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].max
);
  }
for (i=0
;i<_it_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
;++i){
  Attol_ptr_in=&
(_is_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].min
)
	   &&(  
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[_Attol_i]
);
  }
  EDV_MUET_CHECK(11, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_UNSIGNED_C(1,0,( unsigned long long )(Attol_ptr_in->_datain.pEnabled),0+2,10,
( unsigned long long )((T_boolean)(Attol_ptr_out->_datain.pEnabled)),( unsigned long long )(
(T_boolean)(Attol_ptr_out->_datain.pEnabled)));
  }
}

 


long int _ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport = -1;
unsigned int _it_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport;

static struct _so_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport {
 unsigned int min;
 unsigned int max;
 T_int16 ret;
 int sel[1];
 struct {
 struct BTVServices  *pInstance;
        } _datain;
} _os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[150];

static struct _si_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport {
unsigned int indice;
struct {
 struct BTVServices  *pInstance;
  } _datain;
} _is_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[150];

T_int16 BTVServices_getBTVAirport(struct BTVServices  *pInstance)
{
struct _si_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport *
 Attol_ptr_in;
struct _so_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport >= 0)
    {
  if (_it_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport<150)
    {
       Attol_ptr_in = &
(_is_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_it_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport *)0;
    }
  _ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].min)
	   &&(  
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].min>
(unsigned int)_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport)
	      ||
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].max<
(unsigned int)_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport)
));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i]);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 12, res
,_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      _it_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport++;
    }
     }
  if (_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport(void)
{
struct _si_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport *
 Attol_ptr_in;
unsigned int i;
  struct _so_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(12,0);
if 
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].min)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport),0,10,
( long long 
)_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].max
,( long long 
)_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport),0,10,
( unsigned long long 
)_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].min
,( unsigned long long 
)_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].max
);
  }
for (i=0;i<_it_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport;++i
){
  Attol_ptr_in=&
(_is_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].min)
	   &&(  
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[_Attol_i]);
  }
  EDV_MUET_CHECK(12, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 = -1;
unsigned int
 _it_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
;

static struct
 _so_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 {
 unsigned int min;
 unsigned int max;
 T_float32 ret;
 int sel[1];
 struct {
 struct AircraftLocalizationServices  *pInstance;
        } _datain;
}
 _os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[150]
;

static struct
 _si_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 {
unsigned int indice;
struct {
 struct AircraftLocalizationServices  *pInstance;
  } _datain;
}
 _is_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[150]
;

T_float32 AircraftLocalizationServices_getAircraftLatitude(struct
 AircraftLocalizationServices  *pInstance)
{
struct
 _si_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 * Attol_ptr_in;
struct
 _so_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 >= 0)
    {
  if 
(_it_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude<150
)
    {
       Attol_ptr_in = &
(_is_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_it_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 *)0;
    }
 
 _ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].min
)
	   &&(  
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].min>
(unsigned int
)_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
)
	      ||
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].max<
(unsigned int
)_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 13, res
,_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude++
;
    }
     }
  if 
(_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0.0;

}
void
 checkin_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
(void)
{
struct
 _si_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(13,0);
if 
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
),0,10,( long long 
)_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].max
,( long long 
)_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
),0,10,( unsigned long long 
)_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].min
,( unsigned long long 
)_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].max
);
  }
for (i=0
;i<_it_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
;++i){
  Attol_ptr_in=&
(_is_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].min
)
	   &&(  
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[_Attol_i]
);
  }
  EDV_MUET_CHECK(13, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 = -1;
unsigned int
 _it_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
;

static struct
 _so_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 {
 unsigned int min;
 unsigned int max;
 T_float32 ret;
 int sel[1];
 struct {
 struct AircraftLocalizationServices  *pInstance;
        } _datain;
}
 _os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[150]
;

static struct
 _si_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 {
unsigned int indice;
struct {
 struct AircraftLocalizationServices  *pInstance;
  } _datain;
}
 _is_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[150]
;

T_float32 AircraftLocalizationServices_getAircraftAltitude(struct
 AircraftLocalizationServices  *pInstance)
{
struct
 _si_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 * Attol_ptr_in;
struct
 _so_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 >= 0)
    {
  if 
(_it_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude<150
)
    {
       Attol_ptr_in = &
(_is_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_it_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 *)0;
    }
 
 _ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].min
)
	   &&(  
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].min>
(unsigned int
)_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
)
	      ||
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].max<
(unsigned int
)_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 14, res
,_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude++
;
    }
     }
  if 
(_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0.0;

}
void
 checkin_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
(void)
{
struct
 _si_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(14,0);
if 
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
),0,10,( long long 
)_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].max
,( long long 
)_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
),0,10,( unsigned long long 
)_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].min
,( unsigned long long 
)_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].max
);
  }
for (i=0
;i<_it_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
;++i){
  Attol_ptr_in=&
(_is_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].min
)
	   &&(  
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[_Attol_i]
);
  }
  EDV_MUET_CHECK(14, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 = -1;
unsigned int
 _it_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
;

static struct
 _so_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 {
 unsigned int min;
 unsigned int max;
 T_boolean ret;
 int sel[1];
 struct {
 struct AircraftLocalizationServices  *pInstance;
        } _datain;
}
 _os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[150]
;

static struct
 _si_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 {
unsigned int indice;
struct {
 struct AircraftLocalizationServices  *pInstance;
  } _datain;
}
 _is_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[150]
;

T_boolean AircraftLocalizationServices_getFlightPhaseValidity(struct
 AircraftLocalizationServices  *pInstance)
{
struct
 _si_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 * Attol_ptr_in;
struct
 _so_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 >= 0)
    {
  if 
(_it_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity<150
)
    {
       Attol_ptr_in = &
(_is_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_it_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 *)0;
    }
 
 _ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].min
)
	   &&(  
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].min>
(unsigned int
)_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
)
	      ||
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].max<
(unsigned int
)_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 15, res
,_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity++
;
    }
     }
  if 
(_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
(void)
{
struct
 _si_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(15,0);
if 
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
),0,10,( long long 
)_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].max
,( long long 
)_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
),0,10,( unsigned long long 
)_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].min
,( unsigned long long 
)_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].max
);
  }
for (i=0
;i<_it_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
;++i){
  Attol_ptr_in=&
(_is_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].min
)
	   &&(  
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[_Attol_i]
);
  }
  EDV_MUET_CHECK(15, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 = -1;
unsigned int
 _it_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
;

static struct
 _so_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 {
 unsigned int min;
 unsigned int max;
 T_float32 ret;
 int sel[1];
 struct {
 struct AircraftLocalizationServices  *pInstance;
        } _datain;
}
 _os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[150]
;

static struct
 _si_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 {
unsigned int indice;
struct {
 struct AircraftLocalizationServices  *pInstance;
  } _datain;
}
 _is_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[150]
;

T_float32 AircraftLocalizationServices_getAircraftLongitude(struct
 AircraftLocalizationServices  *pInstance)
{
struct
 _si_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 * Attol_ptr_in;
struct
 _so_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 >= 0)
    {
  if 
(_it_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude<150
)
    {
       Attol_ptr_in = &
(_is_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_it_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 *)0;
    }
 
 _ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].min
)
	   &&(  
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].min>
(unsigned int
)_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
)
	      ||
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].max<
(unsigned int
)_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 16, res
,_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude++
;
    }
     }
  if 
(_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0.0;

}
void
 checkin_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
(void)
{
struct
 _si_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(16,0);
if 
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
),0,10,( long long 
)_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].max
,( long long 
)_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
),0,10,( unsigned long long 
)_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].min
,( unsigned long long 
)_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].max
);
  }
for (i=0
;i<_it_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
;++i){
  Attol_ptr_in=&
(_is_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].min
)
	   &&(  
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[_Attol_i]
);
  }
  EDV_MUET_CHECK(16, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int _ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData
 = -1;
unsigned int
 _it_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData;

static struct
 _so_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData {
 unsigned int min;
 unsigned int max;
 T_boolean ret;
 int sel[1];
 struct {
 struct DatabaseServices  *pInstance;
 T_int32 pData;
        } _datain;
} _os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[150];

static struct
 _si_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData {
unsigned int indice;
struct {
 struct DatabaseServices  *pInstance;
 T_int32 pData;
  } _datain;
} _is_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[150];

T_boolean DatabaseServices_getBooleanData(struct DatabaseServices  *pInstance,
 T_int32 pData)
{
struct _si_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData *
 Attol_ptr_in;
struct _so_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData >=
 0)
    {
  if 
(_it_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData<150)
    {
       Attol_ptr_in = &
(_is_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_it_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData *)0;
    }
  _ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].min
)
	   &&(  
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].min>
(unsigned int
)_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData)
	      ||
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].max<
(unsigned int
)_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=(Attol_ptr_out->_datain.pData != pData);
  EDV_CHRONO_MUET_C( 17, res
,_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pData = pData;
      _it_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData++;
    }
     }
  if (_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData >=
 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData
(void)
{
struct _si_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData *
 Attol_ptr_in;
unsigned int i;
  struct _so_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(17,0);
if 
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData),0,10,
( long long 
)_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].max
,( long long 
)_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData),0,10,
( unsigned long long 
)_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].min
,( unsigned long long 
)_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].max
);
  }
for (i=0
;i<_it_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData;++i){
  Attol_ptr_in=&
(_is_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].min
)
	   &&(  
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[_Attol_i]
);
  }
  EDV_MUET_CHECK(17, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_INTEGER_C(1,0,( long long )(Attol_ptr_in->_datain.pData),0+2,10,
( long long )((T_int32)(Attol_ptr_out->_datain.pData)),( long long )((T_int32)
(Attol_ptr_out->_datain.pData)));
  }
}

 


long int
 _ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 = -1;
unsigned int
 _it_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
;

static struct
 _so_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 {
 unsigned int min;
 unsigned int max;
 T_FlightPhase ret;
 int sel[1];
 struct {
 struct AircraftLocalizationServices  *pInstance;
        } _datain;
}
 _os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[150]
;

static struct
 _si_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 {
unsigned int indice;
struct {
 struct AircraftLocalizationServices  *pInstance;
  } _datain;
}
 _is_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[150]
;

T_FlightPhase AircraftLocalizationServices_getFlightPhase(struct
 AircraftLocalizationServices  *pInstance)
{
struct
 _si_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 * Attol_ptr_in;
struct
 _so_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 >= 0)
    {
  if 
(_it_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase<150
)
    {
       Attol_ptr_in = &
(_is_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_it_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 *)0;
    }
 
 _ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].min
)
	   &&(  
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].min>
(unsigned int
)_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
)
	      ||
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].max<
(unsigned int
)_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 18, res
,_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase++
;
    }
     }
  if 
(_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
(void)
{
struct
 _si_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(18,0);
if 
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
),0,10,( long long 
)_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].max
,( long long 
)_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
),0,10,( unsigned long long 
)_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].min
,( unsigned long long 
)_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].max
);
  }
for (i=0
;i<_it_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
;++i){
  Attol_ptr_in=&
(_is_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].min
)
	   &&(  
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[_Attol_i]
);
  }
  EDV_MUET_CHECK(18, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int _ix_19_AirportManager_4_declarations_c_PointerArray_get = -1;
unsigned int _it_19_AirportManager_4_declarations_c_PointerArray_get;

static struct _so_19_AirportManager_4_declarations_c_PointerArray_get {
 unsigned int min;
 unsigned int max;
 T_ptr ret;
 int sel[1];
 struct {
 struct PointerArray  *pInstance;
 T_uint32 pIndex;
        } _datain;
} _os_19_AirportManager_4_declarations_c_PointerArray_get[150];

static struct _si_19_AirportManager_4_declarations_c_PointerArray_get {
unsigned int indice;
struct {
 struct PointerArray  *pInstance;
 T_uint32 pIndex;
  } _datain;
} _is_19_AirportManager_4_declarations_c_PointerArray_get[150];

T_ptr PointerArray_get(struct PointerArray  *pInstance, T_uint32 pIndex)
{
struct _si_19_AirportManager_4_declarations_c_PointerArray_get * Attol_ptr_in;
struct _so_19_AirportManager_4_declarations_c_PointerArray_get * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_19_AirportManager_4_declarations_c_PointerArray_get >= 0)
    {
  if (_it_19_AirportManager_4_declarations_c_PointerArray_get<150)
    {
       Attol_ptr_in = &
(_is_19_AirportManager_4_declarations_c_PointerArray_get[_it_19_AirportManager_4_declarations_c_PointerArray_get]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_19_AirportManager_4_declarations_c_PointerArray_get *)0;
    }
  _ix_19_AirportManager_4_declarations_c_PointerArray_get++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].min)
	   &&(  
(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].min>
(unsigned int)_ix_19_AirportManager_4_declarations_c_PointerArray_get)
	      ||
(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].max<
(unsigned int)_ix_19_AirportManager_4_declarations_c_PointerArray_get)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].max)
)_Attol_i--;
    Attol_ptr_out=&
(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i]);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=(Attol_ptr_out->_datain.pIndex != pIndex);
  EDV_CHRONO_MUET_C( 19, res
,_ix_19_AirportManager_4_declarations_c_PointerArray_get );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_19_AirportManager_4_declarations_c_PointerArray_get;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pIndex = pIndex;
      _it_19_AirportManager_4_declarations_c_PointerArray_get++;
    }
     }
  if (_ix_19_AirportManager_4_declarations_c_PointerArray_get >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_19_AirportManager_4_declarations_c_PointerArray_get(void)
{
struct _si_19_AirportManager_4_declarations_c_PointerArray_get * Attol_ptr_in;
unsigned int i;
  struct _so_19_AirportManager_4_declarations_c_PointerArray_get *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].min))
;++_Attol_i);
  if ((_Attol_i)&&
(!_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].max)
)_Attol_i--;
  EDV_MUET_CHECK(19,0);
if (_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].min)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_19_AirportManager_4_declarations_c_PointerArray_get),0,10,( long long 
)_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].max,
( long long 
)_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].max);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_19_AirportManager_4_declarations_c_PointerArray_get),0,10,( unsigned long long 
)_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].min,
( unsigned long long 
)_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].max);
  }
for (i=0;i<_it_19_AirportManager_4_declarations_c_PointerArray_get;++i){
  Attol_ptr_in=&(_is_19_AirportManager_4_declarations_c_PointerArray_get[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].min)
	   &&(  
(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_19_AirportManager_4_declarations_c_PointerArray_get[_Attol_i]);
  }
  EDV_MUET_CHECK(19, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_UNSIGNED_C(1,0,( unsigned long long )(Attol_ptr_in->_datain.pIndex),0+2,10,
( unsigned long long )((T_uint32)(Attol_ptr_out->_datain.pIndex)),( unsigned long long )(
(T_uint32)(Attol_ptr_out->_datain.pIndex)));
  }
}

 


long int
 _ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 = -1;
unsigned int
 _it_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
;

static struct
 _so_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 {
 unsigned int min;
 unsigned int max;
 T_int16 ret;
 int sel[1];
 struct {
 struct FlightPlanManagementServices  *pInstance;
        } _datain;
}
 _os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[150]
;

static struct
 _si_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 {
unsigned int indice;
struct {
 struct FlightPlanManagementServices  *pInstance;
  } _datain;
}
 _is_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[150]
;

T_int16 FlightPlanManagementServices_getDestinationAirport(struct
 FlightPlanManagementServices  *pInstance)
{
struct
 _si_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 * Attol_ptr_in;
struct
 _so_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 >= 0)
    {
  if 
(_it_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport<150
)
    {
       Attol_ptr_in = &
(_is_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_it_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 *)0;
    }
 
 _ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].min
)
	   &&(  
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].min>
(unsigned int
)_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
)
	      ||
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].max<
(unsigned int
)_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 20, res
,_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport++
;
    }
     }
  if 
(_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
(void)
{
struct
 _si_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(20,0);
if 
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
),0,10,( long long 
)_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].max
,( long long 
)_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
),0,10,( unsigned long long 
)_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].min
,( unsigned long long 
)_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].max
);
  }
for (i=0
;i<_it_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
;++i){
  Attol_ptr_in=&
(_is_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].min
)
	   &&(  
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[_Attol_i]
);
  }
  EDV_MUET_CHECK(20, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int _ix_21_AirportManager_4_declarations_c_PointerArray_getCount = -1;
unsigned int _it_21_AirportManager_4_declarations_c_PointerArray_getCount;

static struct _so_21_AirportManager_4_declarations_c_PointerArray_getCount {
 unsigned int min;
 unsigned int max;
 T_uint32 ret;
 int sel[1];
 struct {
 struct PointerArray  *pInstance;
        } _datain;
} _os_21_AirportManager_4_declarations_c_PointerArray_getCount[150];

static struct _si_21_AirportManager_4_declarations_c_PointerArray_getCount {
unsigned int indice;
struct {
 struct PointerArray  *pInstance;
  } _datain;
} _is_21_AirportManager_4_declarations_c_PointerArray_getCount[150];

T_uint32 PointerArray_getCount(struct PointerArray  *pInstance)
{
struct _si_21_AirportManager_4_declarations_c_PointerArray_getCount *
 Attol_ptr_in;
struct _so_21_AirportManager_4_declarations_c_PointerArray_getCount *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_21_AirportManager_4_declarations_c_PointerArray_getCount >= 0)
    {
  if (_it_21_AirportManager_4_declarations_c_PointerArray_getCount<150)
    {
       Attol_ptr_in = &
(_is_21_AirportManager_4_declarations_c_PointerArray_getCount[_it_21_AirportManager_4_declarations_c_PointerArray_getCount]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_21_AirportManager_4_declarations_c_PointerArray_getCount *)0;
    }
  _ix_21_AirportManager_4_declarations_c_PointerArray_getCount++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].min)
	   &&(  
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].min>
(unsigned int)_ix_21_AirportManager_4_declarations_c_PointerArray_getCount)
	      ||
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].max<
(unsigned int)_ix_21_AirportManager_4_declarations_c_PointerArray_getCount)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].max)
)_Attol_i--;
    Attol_ptr_out=&
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i]);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 21, res
,_ix_21_AirportManager_4_declarations_c_PointerArray_getCount );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_21_AirportManager_4_declarations_c_PointerArray_getCount
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      _it_21_AirportManager_4_declarations_c_PointerArray_getCount++;
    }
     }
  if (_ix_21_AirportManager_4_declarations_c_PointerArray_getCount >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_21_AirportManager_4_declarations_c_PointerArray_getCount(void)
{
struct _si_21_AirportManager_4_declarations_c_PointerArray_getCount *
 Attol_ptr_in;
unsigned int i;
  struct _so_21_AirportManager_4_declarations_c_PointerArray_getCount *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].min))
;++_Attol_i);
  if ((_Attol_i)&&
(!_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].max)
)_Attol_i--;
  EDV_MUET_CHECK(21,0);
if (_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].min)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_21_AirportManager_4_declarations_c_PointerArray_getCount),0,10,
( long long 
)_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].max,
( long long 
)_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].max);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_21_AirportManager_4_declarations_c_PointerArray_getCount),0,10,
( unsigned long long 
)_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].min,
( unsigned long long 
)_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].max);
  }
for (i=0;i<_it_21_AirportManager_4_declarations_c_PointerArray_getCount;++i){
  Attol_ptr_in=&
(_is_21_AirportManager_4_declarations_c_PointerArray_getCount[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].min)
	   &&(  
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_21_AirportManager_4_declarations_c_PointerArray_getCount[_Attol_i]);
  }
  EDV_MUET_CHECK(21, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 = -1;
unsigned int
 _it_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
;

static struct
 _so_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 {
 unsigned int min;
 unsigned int max;
 T_boolean ret;
 int sel[1];
 struct {
 T_float32 pLatitude;
 T_float32 pLongitude;
 T_float32 pAltitude;
 T_float32 pAirportLatitude;
 T_float32 pAirportLongitude;
 T_float32 pAirportAltitude;
 T_float32 *pDistanceToAirport;
        } _datain;
}
 _os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[150]
;

static struct
 _si_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 {
unsigned int indice;
struct {
 T_float32 pLatitude;
 T_float32 pLongitude;
 T_float32 pAltitude;
 T_float32 pAirportLatitude;
 T_float32 pAirportLongitude;
 T_float32 pAirportAltitude;
 T_float32 *pDistanceToAirport;
  } _datain;
}
 _is_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[150]
;

T_boolean GeometricTools_isLatLongInAirportCoverageVolume(T_float32 pLatitude,
 T_float32 pLongitude, T_float32 pAltitude, T_float32 pAirportLatitude,
 T_float32 pAirportLongitude, T_float32 pAirportAltitude, T_float32
 *pDistanceToAirport)
{
struct
 _si_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 * Attol_ptr_in;
struct
 _so_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 >= 0)
    {
  if 
(_it_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume<150
)
    {
       Attol_ptr_in = &
(_is_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_it_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 *)0;
    }
 
 _ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].min
)
	   &&(  
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].min>
(unsigned int
)_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
)
	      ||
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].max<
(unsigned int
)_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i]
);
  }
  res|=(Attol_ptr_out->_datain.pLatitude != pLatitude);
  res|=(Attol_ptr_out->_datain.pLongitude != pLongitude);
  res|=(Attol_ptr_out->_datain.pAltitude != pAltitude);
  res|=(Attol_ptr_out->_datain.pAirportLatitude != pAirportLatitude);
  res|=(Attol_ptr_out->_datain.pAirportLongitude != pAirportLongitude);
  res|=(Attol_ptr_out->_datain.pAirportAltitude != pAirportAltitude);
  res|=_atcc_ptr((void *) pDistanceToAirport,(void *)
 Attol_ptr_out->_datain.pDistanceToAirport);
  EDV_CHRONO_MUET_C( 22, res
,_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
;
      Attol_ptr_in->_datain.pLatitude = pLatitude;
      Attol_ptr_in->_datain.pLongitude = pLongitude;
      Attol_ptr_in->_datain.pAltitude = pAltitude;
      Attol_ptr_in->_datain.pAirportLatitude = pAirportLatitude;
      Attol_ptr_in->_datain.pAirportLongitude = pAirportLongitude;
      Attol_ptr_in->_datain.pAirportAltitude = pAirportAltitude;
      Attol_ptr_in->_datain.pDistanceToAirport = pDistanceToAirport;
     
 _it_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume++
;
    }
     }
  if 
(_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
(void)
{
struct
 _si_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(22,0);
if 
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
),0,10,( long long 
)_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].max
,( long long 
)_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
),0,10,( unsigned long long 
)_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].min
,( unsigned long long 
)_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].max
);
  }
for (i=0
;i<_it_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
;++i){
  Attol_ptr_in=&
(_is_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].min
)
	   &&(  
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[_Attol_i]
);
  }
  EDV_MUET_CHECK(22, Attol_ptr_in->indice);
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pLatitude),0+1,(float)
(Attol_ptr_out->_datain.pLatitude),(float)(Attol_ptr_out->_datain.pLatitude));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pLongitude),0+2,(float)
(Attol_ptr_out->_datain.pLongitude),(float)(Attol_ptr_out->_datain.pLongitude));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pAltitude),0+3,(float)
(Attol_ptr_out->_datain.pAltitude),(float)(Attol_ptr_out->_datain.pAltitude));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pAirportLatitude),0+4,
(float)(Attol_ptr_out->_datain.pAirportLatitude),(float)
(Attol_ptr_out->_datain.pAirportLatitude));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pAirportLongitude),0+5,
(float)(Attol_ptr_out->_datain.pAirportLongitude),(float)
(Attol_ptr_out->_datain.pAirportLongitude));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pAirportAltitude),0+6,
(float)(Attol_ptr_out->_datain.pAirportAltitude),(float)
(Attol_ptr_out->_datain.pAirportAltitude));
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pDistanceToAirport)
,0+7,( const void * )(Attol_ptr_out->_datain.pDistanceToAirport));
  }
}

 


long int
 _ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 = -1;
unsigned int
 _it_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
;

static struct
 _so_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 {
 unsigned int min;
 unsigned int max;
 T_boolean ret;
 int sel[1];
 struct {
 struct AircraftLocalizationServices  *pInstance;
        } _datain;
}
 _os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[150]
;

static struct
 _si_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 {
unsigned int indice;
struct {
 struct AircraftLocalizationServices  *pInstance;
  } _datain;
}
 _is_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[150]
;

T_boolean AircraftLocalizationServices_getAircraftOnGround(struct
 AircraftLocalizationServices  *pInstance)
{
struct
 _si_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 * Attol_ptr_in;
struct
 _so_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 >= 0)
    {
  if 
(_it_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround<150
)
    {
       Attol_ptr_in = &
(_is_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_it_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 *)0;
    }
 
 _ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].min
)
	   &&(  
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].min>
(unsigned int
)_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
)
	      ||
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].max<
(unsigned int
)_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 23, res
,_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround++
;
    }
     }
  if 
(_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
(void)
{
struct
 _si_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(23,0);
if 
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
),0,10,( long long 
)_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].max
,( long long 
)_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
),0,10,( unsigned long long 
)_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].min
,( unsigned long long 
)_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].max
);
  }
for (i=0
;i<_it_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
;++i){
  Attol_ptr_in=&
(_is_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].min
)
	   &&(  
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[_Attol_i]
);
  }
  EDV_MUET_CHECK(23, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 = -1;
unsigned int
 _it_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
;

static struct
 _so_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 {
 unsigned int min;
 unsigned int max;
 T_int16 ret;
 int sel[1];
 struct {
 struct FlightPlanManagementServices  *pInstance;
        } _datain;
}
 _os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[150]
;

static struct
 _si_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 {
unsigned int indice;
struct {
 struct FlightPlanManagementServices  *pInstance;
  } _datain;
}
 _is_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[150]
;

T_int16 FlightPlanManagementServices_getDestinationAirportOfLastFlight(struct
 FlightPlanManagementServices  *pInstance)
{
struct
 _si_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 * Attol_ptr_in;
struct
 _so_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 >= 0)
    {
  if 
(_it_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight<150
)
    {
       Attol_ptr_in = &
(_is_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_it_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 *)0;
    }
 
 _ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].min
)
	   &&(  
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].min>
(unsigned int
)_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
)
	      ||
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].max<
(unsigned int
)_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 24, res
,_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight++
;
    }
     }
  if 
(_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
(void)
{
struct
 _si_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(24,0);
if 
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
),0,10,( long long 
)_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].max
,( long long 
)_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
),0,10,( unsigned long long 
)_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].min
,( unsigned long long 
)_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].max
);
  }
for (i=0
;i<_it_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
;++i){
  Attol_ptr_in=&
(_is_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].min
)
	   &&(  
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[_Attol_i]
);
  }
  EDV_MUET_CHECK(24, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 = -1;
unsigned int
 _it_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
;

static struct
 _so_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 {
 unsigned int min;
 unsigned int max;
 T_boolean ret;
 int sel[1];
 struct {
 struct AircraftLocalizationServices  *pInstance;
        } _datain;
}
 _os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[150]
;

static struct
 _si_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 {
unsigned int indice;
struct {
 struct AircraftLocalizationServices  *pInstance;
  } _datain;
}
 _is_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[150]
;

T_boolean AircraftLocalizationServices_getAircraftLocationValidity(struct
 AircraftLocalizationServices  *pInstance)
{
struct
 _si_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 * Attol_ptr_in;
struct
 _so_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 >= 0)
    {
  if 
(_it_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity<150
)
    {
       Attol_ptr_in = &
(_is_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_it_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 *)0;
    }
 
 _ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].min
)
	   &&(  
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].min>
(unsigned int
)_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
)
	      ||
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].max<
(unsigned int
)_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 25, res
,_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity++
;
    }
     }
  if 
(_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
(void)
{
struct
 _si_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(25,0);
if 
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
),0,10,( long long 
)_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].max
,( long long 
)_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
),0,10,( unsigned long long 
)_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].min
,( unsigned long long 
)_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].max
);
  }
for (i=0
;i<_it_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
;++i){
  Attol_ptr_in=&
(_is_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].min
)
	   &&(  
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[_Attol_i]
);
  }
  EDV_MUET_CHECK(25, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int _ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData
 = -1;
unsigned int
 _it_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData;

static struct
 _so_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData {
 unsigned int min;
 unsigned int max;
 T_float32 ret;
 int sel[1];
 struct {
 struct MapObjectServices  *pInstance;
 struct MapObjectServices  *pMapObject;
 T_int32 pData;
        } _datain;
} _os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[150];

static struct
 _si_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData {
unsigned int indice;
struct {
 struct MapObjectServices  *pInstance;
 struct MapObjectServices  *pMapObject;
 T_int32 pData;
  } _datain;
} _is_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[150];

T_float32 MapObjectServices_getFloatData(struct MapObjectServices  *pInstance,
 struct MapObjectServices  *pMapObject, T_int32 pData)
{
struct _si_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData *
 Attol_ptr_in;
struct _so_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData >=
 0)
    {
  if (_it_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData<150)
    {
       Attol_ptr_in = &
(_is_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_it_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData *)0;
    }
  _ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].min
)
	   &&(  
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].min>
(unsigned int
)_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData)
	      ||
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].max<
(unsigned int
)_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=_atcc_ptr((void *) pMapObject,(void *) Attol_ptr_out->_datain.pMapObject
);
  res|=(Attol_ptr_out->_datain.pData != pData);
  EDV_CHRONO_MUET_C( 26, res
,_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pMapObject = pMapObject;
      Attol_ptr_in->_datain.pData = pData;
      _it_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData++;
    }
     }
  if (_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData >=
 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0.0;

}
void checkin_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData
(void)
{
struct _si_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData *
 Attol_ptr_in;
unsigned int i;
  struct _so_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(26,0);
if 
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData),0,10,
( long long 
)_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].max
,( long long 
)_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData),0,10,
( unsigned long long 
)_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].min
,( unsigned long long 
)_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].max
);
  }
for (i=0
;i<_it_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData;++i){
  Attol_ptr_in=&
(_is_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].min
)
	   &&(  
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[_Attol_i]
);
  }
  EDV_MUET_CHECK(26, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pMapObject),0+2,
( const void * )(Attol_ptr_out->_datain.pMapObject));
      EDV_INTEGER_C(1,0,( long long )(Attol_ptr_in->_datain.pData),0+3,10,
( long long )((T_int32)(Attol_ptr_out->_datain.pData)),( long long )((T_int32)
(Attol_ptr_out->_datain.pData)));
  }
}

 


long int
 _ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 = -1;
unsigned int
 _it_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
;

static struct
 _so_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 {
 unsigned int min;
 unsigned int max;
 T_PortInterface ret;
 int sel[1];
 struct {
 struct AirportManagerComponent  *pInstance;
 T_AirportManagerComponentReceptaclesIndexes pReceptacleIndex;
        } _datain;
}
 _os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[150]
;

static struct
 _si_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 {
unsigned int indice;
struct {
 struct AirportManagerComponent  *pInstance;
 T_AirportManagerComponentReceptaclesIndexes pReceptacleIndex;
  } _datain;
}
 _is_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[150]
;

T_PortInterface AirportManagerComponent_getConnectedFacet(struct
 AirportManagerComponent  *pInstance,
 T_AirportManagerComponentReceptaclesIndexes pReceptacleIndex)
{
struct
 _si_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 * Attol_ptr_in;
struct
 _so_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 >= 0)
    {
  if 
(_it_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet<150
)
    {
       Attol_ptr_in = &
(_is_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_it_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 *)0;
    }
 
 _ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].min
)
	   &&(  
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].min>
(unsigned int
)_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
)
	      ||
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].max<
(unsigned int
)_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=(Attol_ptr_out->_datain.pReceptacleIndex != pReceptacleIndex);
  EDV_CHRONO_MUET_C( 27, res
,_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pReceptacleIndex = pReceptacleIndex;
     
 _it_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet++
;
    }
     }
  if 
(_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
(void)
{
struct
 _si_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(27,0);
if 
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
),0,10,( long long 
)_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].max
,( long long 
)_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
),0,10,( unsigned long long 
)_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].min
,( unsigned long long 
)_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].max
);
  }
for (i=0
;i<_it_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
;++i){
  Attol_ptr_in=&
(_is_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].min
)
	   &&(  
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[_Attol_i]
);
  }
  EDV_MUET_CHECK(27, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_INTEGER_C(1,0,( long long )(Attol_ptr_in->_datain.pReceptacleIndex)
,0+2,10,( long long )((T_AirportManagerComponentReceptaclesIndexes)
(Attol_ptr_out->_datain.pReceptacleIndex)),( long long )(
(T_AirportManagerComponentReceptaclesIndexes)
(Attol_ptr_out->_datain.pReceptacleIndex)));
  }
}

 


long int _ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState = -1;
unsigned int _it_28_AirportManager_4_declarations_c_BTVServices_getBTVState;

static struct _so_28_AirportManager_4_declarations_c_BTVServices_getBTVState {
 unsigned int min;
 unsigned int max;
 T_BTVStates ret;
 int sel[1];
 struct {
 struct BTVServices  *pInstance;
        } _datain;
} _os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[150];

static struct _si_28_AirportManager_4_declarations_c_BTVServices_getBTVState {
unsigned int indice;
struct {
 struct BTVServices  *pInstance;
  } _datain;
} _is_28_AirportManager_4_declarations_c_BTVServices_getBTVState[150];

T_BTVStates BTVServices_getBTVState(struct BTVServices  *pInstance)
{
struct _si_28_AirportManager_4_declarations_c_BTVServices_getBTVState *
 Attol_ptr_in;
struct _so_28_AirportManager_4_declarations_c_BTVServices_getBTVState *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState >= 0)
    {
  if (_it_28_AirportManager_4_declarations_c_BTVServices_getBTVState<150)
    {
       Attol_ptr_in = &
(_is_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_it_28_AirportManager_4_declarations_c_BTVServices_getBTVState]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_28_AirportManager_4_declarations_c_BTVServices_getBTVState *)0;
    }
  _ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].min)
	   &&(  
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].min>
(unsigned int)_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState)
	      ||
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].max<
(unsigned int)_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].max)
)_Attol_i--;
    Attol_ptr_out=&
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i]);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 28, res
,_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      _it_28_AirportManager_4_declarations_c_BTVServices_getBTVState++;
    }
     }
  if (_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_28_AirportManager_4_declarations_c_BTVServices_getBTVState(void)
{
struct _si_28_AirportManager_4_declarations_c_BTVServices_getBTVState *
 Attol_ptr_in;
unsigned int i;
  struct _so_28_AirportManager_4_declarations_c_BTVServices_getBTVState *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].min))
;++_Attol_i);
  if ((_Attol_i)&&
(!_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].max)
)_Attol_i--;
  EDV_MUET_CHECK(28,0);
if 
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].min)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState),0,10,
( long long 
)_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].max,
( long long 
)_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].max);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState),0,10,
( unsigned long long 
)_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].min,
( unsigned long long 
)_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].max);
  }
for (i=0;i<_it_28_AirportManager_4_declarations_c_BTVServices_getBTVState;++i){
  Attol_ptr_in=&
(_is_28_AirportManager_4_declarations_c_BTVServices_getBTVState[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].min)
	   &&(  
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[_Attol_i]);
  }
  EDV_MUET_CHECK(28, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 = -1;
unsigned int
 _it_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
;

static struct
 _so_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 {
 unsigned int min;
 unsigned int max;
 T_int16 ret;
 int sel[1];
 struct {
 struct FlightPlanManagementServices  *pInstance;
        } _datain;
}
 _os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[150]
;

static struct
 _si_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 {
unsigned int indice;
struct {
 struct FlightPlanManagementServices  *pInstance;
  } _datain;
}
 _is_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[150]
;

T_int16 FlightPlanManagementServices_getOriginAirport(struct
 FlightPlanManagementServices  *pInstance)
{
struct
 _si_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 * Attol_ptr_in;
struct
 _so_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 >= 0)
    {
  if 
(_it_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport<150
)
    {
       Attol_ptr_in = &
(_is_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_it_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 *)0;
    }
 
 _ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].min
)
	   &&(  
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].min>
(unsigned int
)_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
)
	      ||
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].max<
(unsigned int
)_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 29, res
,_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport++
;
    }
     }
  if 
(_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
(void)
{
struct
 _si_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(29,0);
if 
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
),0,10,( long long 
)_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].max
,( long long 
)_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
),0,10,( unsigned long long 
)_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].min
,( unsigned long long 
)_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].max
);
  }
for (i=0
;i<_it_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
;++i){
  Attol_ptr_in=&
(_is_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].min
)
	   &&(  
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[_Attol_i]
);
  }
  EDV_MUET_CHECK(29, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar =
 -1;
unsigned int
 _it_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar;

static struct
 _so_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar {
 unsigned int min;
 unsigned int max;
 T_int16 ret;
 int sel[1];
 struct {
 struct DatabaseServices  *pInstance;
 T_SearchType pSearchType;
 T_PtrChar pChar;
        } _datain;
}
 _os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[150]
;

static struct
 _si_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar {
unsigned int indice;
struct {
 struct DatabaseServices  *pInstance;
 T_SearchType pSearchType;
 T_PtrChar pChar;
  } _datain;
}
 _is_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[150]
;

T_int16 DatabaseServices_searchAirportByChar(struct DatabaseServices 
 *pInstance, T_SearchType pSearchType, T_PtrChar pChar)
{
struct
 _si_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar *
 Attol_ptr_in;
struct
 _so_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar >=
 0)
    {
  if 
(_it_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar<150
)
    {
       Attol_ptr_in = &
(_is_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_it_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar *
)0;
    }
  _ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].min
)
	   &&(  
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].min>
(unsigned int
)_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar)
	      ||
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].max<
(unsigned int
)_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=(Attol_ptr_out->_datain.pSearchType != pSearchType);
  res|=_atcc_ptr((void *) pChar,(void *) Attol_ptr_out->_datain.pChar);
  EDV_CHRONO_MUET_C( 30, res
,_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pSearchType = pSearchType;
      Attol_ptr_in->_datain.pChar = pChar;
     
 _it_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar++;
    }
     }
  if 
(_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar >=
 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar
(void)
{
struct
 _si_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar *
 Attol_ptr_in;
unsigned int i;
  struct
 _so_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(30,0);
if 
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar),0
,10,( long long 
)_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].max
,( long long 
)_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar),0
,10,( unsigned long long 
)_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].min
,( unsigned long long 
)_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].max
);
  }
for (i=0
;i<_it_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar
;++i){
  Attol_ptr_in=&
(_is_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].min
)
	   &&(  
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[_Attol_i]
);
  }
  EDV_MUET_CHECK(30, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_INTEGER_C(1,0,( long long )(Attol_ptr_in->_datain.pSearchType),0+2,10
,( long long )((T_SearchType)(Attol_ptr_out->_datain.pSearchType)),( long long 
)((T_SearchType)(Attol_ptr_out->_datain.pSearchType)));
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pChar),0+3,
( const void * )(Attol_ptr_out->_datain.pChar));
  }
}

 




int _atcc1(     T_int16 p[4],T_int16 ref[4],T_int16 mem[4],void * store
,int * sel)
{
  int res;
  int  I1 ;
  res=0;
  if (store){
    for( I1 =0; I1 <4;++ I1 ){
    mem[ I1 ]=p[ I1 ];
    }}
  for( I1 =0; I1 <4;++ I1 ){
  res|=(p[ I1 ]!=ref[ I1 ]);
  }
  return (res);
}

long int
 _ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 = -1;
unsigned int
 _it_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
;

static struct
 _so_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 {
 unsigned int min;
 unsigned int max;
 int sel[1];
 struct {
 struct AirportLoadingEvent  *pInstance;
 T_int16 pAirportPriorityList[4];
        } _datain;
}
 _os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[150]
;

static struct
 _si_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 {
unsigned int indice;
struct {
 struct AirportLoadingEvent  *pInstance;
 T_int16 pAirportPriorityList[4];
  } _datain;
}
 _is_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[150]
;

void AirportLoadingEvent_airportPriorityListUpdated(struct AirportLoadingEvent 
 *pInstance, T_int16 pAirportPriorityList[4])
{
struct
 _si_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 * Attol_ptr_in;
struct
 _so_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 >= 0)
    {
  if 
(_it_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated<150
)
    {
       Attol_ptr_in = &
(_is_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_it_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 *)0;
    }
 
 _ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].min
)
	   &&(  
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].min>
(unsigned int
)_ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
)
	      ||
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].max<
(unsigned int
)_ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=_atcc1(pAirportPriorityList,Attol_ptr_out->_datain.pAirportPriorityList
,Attol_ptr_in->_datain.pAirportPriorityList,Attol_ptr_in,&
(Attol_ptr_out->sel[0]));
  EDV_CHRONO_MUET_C( 31, res
,_ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated++
;
    }
     }
}
void
 checkin_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
(void)
{
struct
 _si_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(31,0);
if 
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
),0,10,( long long 
)_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].max
,( long long 
)_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
),0,10,( unsigned long long 
)_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].min
,( unsigned long long 
)_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].max
);
  }
for (i=0
;i<_it_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
;++i){
  Attol_ptr_in=&
(_is_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].min
)
	   &&(  
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[_Attol_i]
);
  }
  EDV_MUET_CHECK(31, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  SET_MODE_TAB_C(2);
  for( I1=0;I1 < 4;++I1){
      EDV_INTEGER_C(1,0,( long long )
(Attol_ptr_in->_datain.pAirportPriorityList[I1]),0+2,10,( long long )((T_int16)
(Attol_ptr_out->_datain.pAirportPriorityList[I1])),( long long )((T_int16)
(Attol_ptr_out->_datain.pAirportPriorityList[I1])));
     }
  UNSET_MODE_TAB_C(2);
  }
}

 


long int _ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData =
 -1;
unsigned int
 _it_32_AirportManager_4_declarations_c_MapObjectServices_getCharData;

static struct
 _so_32_AirportManager_4_declarations_c_MapObjectServices_getCharData {
 unsigned int min;
 unsigned int max;
 T_PtrChar ret;
 int sel[1];
 struct {
 struct MapObjectServices  *pInstance;
 struct MapObjectServices  *pMapObject;
 T_int32 pData;
        } _datain;
} _os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[150];

static struct
 _si_32_AirportManager_4_declarations_c_MapObjectServices_getCharData {
unsigned int indice;
struct {
 struct MapObjectServices  *pInstance;
 struct MapObjectServices  *pMapObject;
 T_int32 pData;
  } _datain;
} _is_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[150];

T_PtrChar MapObjectServices_getCharData(struct MapObjectServices  *pInstance,
 struct MapObjectServices  *pMapObject, T_int32 pData)
{
struct _si_32_AirportManager_4_declarations_c_MapObjectServices_getCharData *
 Attol_ptr_in;
struct _so_32_AirportManager_4_declarations_c_MapObjectServices_getCharData *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData >= 0)
    {
  if (_it_32_AirportManager_4_declarations_c_MapObjectServices_getCharData<150)
    {
       Attol_ptr_in = &
(_is_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_it_32_AirportManager_4_declarations_c_MapObjectServices_getCharData]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_32_AirportManager_4_declarations_c_MapObjectServices_getCharData *)0;
    }
  _ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].min
)
	   &&(  
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].min>
(unsigned int
)_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData)
	      ||
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].max<
(unsigned int
)_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=_atcc_ptr((void *) pMapObject,(void *) Attol_ptr_out->_datain.pMapObject
);
  res|=(Attol_ptr_out->_datain.pData != pData);
  EDV_CHRONO_MUET_C( 32, res
,_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pMapObject = pMapObject;
      Attol_ptr_in->_datain.pData = pData;
      _it_32_AirportManager_4_declarations_c_MapObjectServices_getCharData++;
    }
     }
  if (_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_32_AirportManager_4_declarations_c_MapObjectServices_getCharData
(void)
{
struct _si_32_AirportManager_4_declarations_c_MapObjectServices_getCharData *
 Attol_ptr_in;
unsigned int i;
  struct _so_32_AirportManager_4_declarations_c_MapObjectServices_getCharData *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(32,0);
if 
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData),0,10,
( long long 
)_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].max
,( long long 
)_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData),0,10,
( unsigned long long 
)_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].min
,( unsigned long long 
)_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].max
);
  }
for (i=0;i<_it_32_AirportManager_4_declarations_c_MapObjectServices_getCharData
;++i){
  Attol_ptr_in=&
(_is_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].min
)
	   &&(  
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[_Attol_i]
);
  }
  EDV_MUET_CHECK(32, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pMapObject),0+2,
( const void * )(Attol_ptr_out->_datain.pMapObject));
      EDV_INTEGER_C(1,0,( long long )(Attol_ptr_in->_datain.pData),0+3,10,
( long long )((T_int32)(Attol_ptr_out->_datain.pData)),( long long )((T_int32)
(Attol_ptr_out->_datain.pData)));
  }
}

 


long int
 _ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 = -1;
unsigned int
 _it_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
;

static struct
 _so_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 {
 unsigned int min;
 unsigned int max;
 int sel[1];
 struct {
 struct AirportToDisplayModificationEvent  *pInstance;
 T_int16 pAirportToDisplay;
        } _datain;
}
 _os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[150]
;

static struct
 _si_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 {
unsigned int indice;
struct {
 struct AirportToDisplayModificationEvent  *pInstance;
 T_int16 pAirportToDisplay;
  } _datain;
}
 _is_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[150]
;

void AirportToDisplayModificationEvent_airportToDisplayChanged(struct
 AirportToDisplayModificationEvent  *pInstance, T_int16 pAirportToDisplay)
{
struct
 _si_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 * Attol_ptr_in;
struct
 _so_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 >= 0)
    {
  if 
(_it_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged<150
)
    {
       Attol_ptr_in = &
(_is_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_it_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 *)0;
    }
 
 _ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].min
)
	   &&(  
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].min>
(unsigned int
)_ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
)
	      ||
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].max<
(unsigned int
)_ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=(Attol_ptr_out->_datain.pAirportToDisplay != pAirportToDisplay);
  EDV_CHRONO_MUET_C( 33, res
,_ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pAirportToDisplay = pAirportToDisplay;
     
 _it_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged++
;
    }
     }
}
void
 checkin_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
(void)
{
struct
 _si_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(33,0);
if 
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
),0,10,( long long 
)_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].max
,( long long 
)_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
),0,10,( unsigned long long 
)_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].min
,( unsigned long long 
)_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].max
);
  }
for (i=0
;i<_it_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
;++i){
  Attol_ptr_in=&
(_is_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].min
)
	   &&(  
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[_Attol_i]
);
  }
  EDV_MUET_CHECK(33, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_INTEGER_C(1,0,( long long )(Attol_ptr_in->_datain.pAirportToDisplay)
,0+2,10,( long long )((T_int16)(Attol_ptr_out->_datain.pAirportToDisplay)),
( long long )((T_int16)(Attol_ptr_out->_datain.pAirportToDisplay)));
  }
}

 


long int
 _ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 = -1;
unsigned int
 _it_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
;

static struct
 _so_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 {
 unsigned int min;
 unsigned int max;
 T_float32 ret;
 int sel[1];
 struct {
 T_float32 pLatitudeA;
 T_float32 pLongitudeA;
 T_float32 pLatitudeB;
 T_float32 pLongitudeB;
        } _datain;
}
 _os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[150]
;

static struct
 _si_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 {
unsigned int indice;
struct {
 T_float32 pLatitudeA;
 T_float32 pLongitudeA;
 T_float32 pLatitudeB;
 T_float32 pLongitudeB;
  } _datain;
}
 _is_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[150]
;

T_float32 MathematicalTools_computeOrthodromicDistance(T_float32 pLatitudeA,
 T_float32 pLongitudeA, T_float32 pLatitudeB, T_float32 pLongitudeB)
{
struct
 _si_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 * Attol_ptr_in;
struct
 _so_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 >= 0)
    {
  if 
(_it_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance<150
)
    {
       Attol_ptr_in = &
(_is_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_it_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 *)0;
    }
 
 _ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].min
)
	   &&(  
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].min>
(unsigned int
)_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
)
	      ||
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].max<
(unsigned int
)_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i]
);
  }
  res|=(Attol_ptr_out->_datain.pLatitudeA != pLatitudeA);
  res|=(Attol_ptr_out->_datain.pLongitudeA != pLongitudeA);
  res|=(Attol_ptr_out->_datain.pLatitudeB != pLatitudeB);
  res|=(Attol_ptr_out->_datain.pLongitudeB != pLongitudeB);
  EDV_CHRONO_MUET_C( 34, res
,_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
;
      Attol_ptr_in->_datain.pLatitudeA = pLatitudeA;
      Attol_ptr_in->_datain.pLongitudeA = pLongitudeA;
      Attol_ptr_in->_datain.pLatitudeB = pLatitudeB;
      Attol_ptr_in->_datain.pLongitudeB = pLongitudeB;
     
 _it_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance++
;
    }
     }
  if 
(_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0.0;

}
void
 checkin_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
(void)
{
struct
 _si_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(34,0);
if 
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
),0,10,( long long 
)_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].max
,( long long 
)_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
),0,10,( unsigned long long 
)_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].min
,( unsigned long long 
)_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].max
);
  }
for (i=0
;i<_it_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
;++i){
  Attol_ptr_in=&
(_is_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].min
)
	   &&(  
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[_Attol_i]
);
  }
  EDV_MUET_CHECK(34, Attol_ptr_in->indice);
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pLatitudeA),0+1,(float)
(Attol_ptr_out->_datain.pLatitudeA),(float)(Attol_ptr_out->_datain.pLatitudeA));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pLongitudeA),0+2,(float)
(Attol_ptr_out->_datain.pLongitudeA),(float)(Attol_ptr_out->_datain.pLongitudeA
));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pLatitudeB),0+3,(float)
(Attol_ptr_out->_datain.pLatitudeB),(float)(Attol_ptr_out->_datain.pLatitudeB));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pLongitudeB),0+4,(float)
(Attol_ptr_out->_datain.pLongitudeB),(float)(Attol_ptr_out->_datain.pLongitudeB
));
  }
}

 


long int
 _ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance =
 -1;
unsigned int
 _it_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance;

static struct
 _so_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance {
 unsigned int min;
 unsigned int max;
 MapObjectServices* ret;
 int sel[1];
 struct {
 struct DatabaseServices  *pInstance;
 T_int16 pAirport;
        } _datain;
}
 _os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[150]
;

static struct
 _si_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance {
unsigned int indice;
struct {
 struct DatabaseServices  *pInstance;
 T_int16 pAirport;
  } _datain;
}
 _is_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[150]
;

MapObjectServices *DatabaseServices_getAirportInstance(struct DatabaseServices 
 *pInstance, T_int16 pAirport)
{
struct
 _si_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance *
 Attol_ptr_in;
struct
 _so_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance >=
 0)
    {
  if 
(_it_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance<150)
    {
       Attol_ptr_in = &
(_is_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_it_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance *)0;
    }
  _ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].min
)
	   &&(  
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].min>
(unsigned int
)_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance)
	      ||
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].max<
(unsigned int
)_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  res|=(Attol_ptr_out->_datain.pAirport != pAirport);
  EDV_CHRONO_MUET_C( 35, res
,_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      Attol_ptr_in->_datain.pAirport = pAirport;
     
 _it_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance++;
    }
     }
  if 
(_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance >=
 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance
(void)
{
struct
 _si_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance *
 Attol_ptr_in;
unsigned int i;
  struct
 _so_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(35,0);
if 
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance),0
,10,( long long 
)_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].max
,( long long 
)_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance),0
,10,( unsigned long long 
)_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].min
,( unsigned long long 
)_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].max
);
  }
for (i=0
;i<_it_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance
;++i){
  Attol_ptr_in=&
(_is_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].min
)
	   &&(  
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[_Attol_i]
);
  }
  EDV_MUET_CHECK(35, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
      EDV_INTEGER_C(1,0,( long long )(Attol_ptr_in->_datain.pAirport),0+2,10,
( long long )((T_int16)(Attol_ptr_out->_datain.pAirport)),( long long )(
(T_int16)(Attol_ptr_out->_datain.pAirport)));
  }
}

 


long int _ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode =
 -1;
unsigned int _it_36_AirportManager_4_declarations_c_ModeManagerServices_getMode;

static struct
 _so_36_AirportManager_4_declarations_c_ModeManagerServices_getMode {
 unsigned int min;
 unsigned int max;
 T_Mode ret;
 int sel[1];
 struct {
 struct ModeManagerServices  *pInstance;
        } _datain;
} _os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[150];

static struct
 _si_36_AirportManager_4_declarations_c_ModeManagerServices_getMode {
unsigned int indice;
struct {
 struct ModeManagerServices  *pInstance;
  } _datain;
} _is_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[150];

T_Mode ModeManagerServices_getMode(struct ModeManagerServices  *pInstance)
{
struct _si_36_AirportManager_4_declarations_c_ModeManagerServices_getMode *
 Attol_ptr_in;
struct _so_36_AirportManager_4_declarations_c_ModeManagerServices_getMode *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode >= 0)
    {
  if (_it_36_AirportManager_4_declarations_c_ModeManagerServices_getMode<150)
    {
       Attol_ptr_in = &
(_is_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_it_36_AirportManager_4_declarations_c_ModeManagerServices_getMode]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_36_AirportManager_4_declarations_c_ModeManagerServices_getMode *)0;
    }
  _ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].min
)
	   &&(  
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].min>
(unsigned int
)_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode)
	      ||
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].max<
(unsigned int
)_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i]);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 36, res
,_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode
;
      Attol_ptr_in->_datain.pInstance = pInstance;
      _it_36_AirportManager_4_declarations_c_ModeManagerServices_getMode++;
    }
     }
  if (_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_36_AirportManager_4_declarations_c_ModeManagerServices_getMode
(void)
{
struct _si_36_AirportManager_4_declarations_c_ModeManagerServices_getMode *
 Attol_ptr_in;
unsigned int i;
  struct _so_36_AirportManager_4_declarations_c_ModeManagerServices_getMode *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(36,0);
if 
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode),0,10,
( long long 
)_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].max
,( long long 
)_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode),0,10,
( unsigned long long 
)_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].min
,( unsigned long long 
)_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].max
);
  }
for (i=0;i<_it_36_AirportManager_4_declarations_c_ModeManagerServices_getMode
;++i){
  Attol_ptr_in=&
(_is_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].min
)
	   &&(  
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[_Attol_i]);
  }
  EDV_MUET_CHECK(36, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 = -1;
unsigned int
 _it_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
;

static struct
 _so_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 {
 unsigned int min;
 unsigned int max;
 T_int16 ret;
 int sel[1];
 struct {
 struct FlightPlanManagementServices  *pInstance;
        } _datain;
}
 _os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[150]
;

static struct
 _si_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 {
unsigned int indice;
struct {
 struct FlightPlanManagementServices  *pInstance;
  } _datain;
}
 _is_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[150]
;

T_int16 FlightPlanManagementServices_getAlternateAirport(struct
 FlightPlanManagementServices  *pInstance)
{
struct
 _si_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 * Attol_ptr_in;
struct
 _so_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 >= 0)
    {
  if 
(_it_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport<150
)
    {
       Attol_ptr_in = &
(_is_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_it_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 *)0;
    }
 
 _ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].min
)
	   &&(  
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].min>
(unsigned int
)_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
)
	      ||
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].max<
(unsigned int
)_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 37, res
,_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport++
;
    }
     }
  if 
(_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
(void)
{
struct
 _si_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(37,0);
if 
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
),0,10,( long long 
)_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].max
,( long long 
)_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
),0,10,( unsigned long long 
)_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].min
,( unsigned long long 
)_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].max
);
  }
for (i=0
;i<_it_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
;++i){
  Attol_ptr_in=&
(_is_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].min
)
	   &&(  
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[_Attol_i]
);
  }
  EDV_MUET_CHECK(37, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}

 


long int
 _ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 = -1;
unsigned int
 _it_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
;

static struct
 _so_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 {
 unsigned int min;
 unsigned int max;
 T_boolean ret;
 int sel[1];
 struct {
 T_float32 pLatitude;
 T_float32 pLongitude;
 MapObjectServices *pAirportMos;
 MapObjectServices *pMosProvider;
        } _datain;
}
 _os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[150]
;

static struct
 _si_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 {
unsigned int indice;
struct {
 T_float32 pLatitude;
 T_float32 pLongitude;
 MapObjectServices *pAirportMos;
 MapObjectServices *pMosProvider;
  } _datain;
}
 _is_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[150]
;

T_boolean GeometricTools_isLatLongInAirportBoundingBox(T_float32 pLatitude,
 T_float32 pLongitude, MapObjectServices *pAirportMos, MapObjectServices
 *pMosProvider)
{
struct
 _si_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 * Attol_ptr_in;
struct
 _so_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 >= 0)
    {
  if 
(_it_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox<150
)
    {
       Attol_ptr_in = &
(_is_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_it_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 *)0;
    }
 
 _ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].min
)
	   &&(  
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].min>
(unsigned int
)_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
)
	      ||
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].max<
(unsigned int
)_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i]
);
  }
  res|=(Attol_ptr_out->_datain.pLatitude != pLatitude);
  res|=(Attol_ptr_out->_datain.pLongitude != pLongitude);
  res|=_atcc_ptr((void *) pAirportMos,(void *)
 Attol_ptr_out->_datain.pAirportMos);
  res|=_atcc_ptr((void *) pMosProvider,(void *)
 Attol_ptr_out->_datain.pMosProvider);
  EDV_CHRONO_MUET_C( 38, res
,_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
;
      Attol_ptr_in->_datain.pLatitude = pLatitude;
      Attol_ptr_in->_datain.pLongitude = pLongitude;
      Attol_ptr_in->_datain.pAirportMos = pAirportMos;
      Attol_ptr_in->_datain.pMosProvider = pMosProvider;
     
 _it_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox++
;
    }
     }
  if 
(_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
(void)
{
struct
 _si_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(38,0);
if 
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
),0,10,( long long 
)_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].max
,( long long 
)_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
),0,10,( unsigned long long 
)_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].min
,( unsigned long long 
)_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].max
);
  }
for (i=0
;i<_it_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
;++i){
  Attol_ptr_in=&
(_is_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].min
)
	   &&(  
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[_Attol_i]
);
  }
  EDV_MUET_CHECK(38, Attol_ptr_in->indice);
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pLatitude),0+1,(float)
(Attol_ptr_out->_datain.pLatitude),(float)(Attol_ptr_out->_datain.pLatitude));
      EDV_FLOAT_C(1,0,(float)(Attol_ptr_in->_datain.pLongitude),0+2,(float)
(Attol_ptr_out->_datain.pLongitude),(float)(Attol_ptr_out->_datain.pLongitude));
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pAirportMos),0+3,
( const void * )(Attol_ptr_out->_datain.pAirportMos));
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pMosProvider),0+4,
( const void * )(Attol_ptr_out->_datain.pMosProvider));
  }
}

 


long int
 _ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance =
 -1;

static struct
 _so_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance {
 unsigned int min;
 unsigned int max;
 AirportManagerComponent* ret;
}
 _os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[150]
;

AirportManagerComponent *AirportManagerComponent_getInstance(void )
{
struct
 _so_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance *
 Attol_ptr_out;
unsigned int _Attol_i;
  _ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].min
)
	   &&(  
(_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].min>
(unsigned int
)_ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance)
	      ||
(_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].max<
(unsigned int
)_ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i]
);
  }
  EDV_CHRONO_MUET_C( 39, 0
,_ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance );
  if 
(_ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance >=
 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance
(void)
{
  struct
 _so_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(39,0);
if 
(_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance),0
,10,( long long 
)_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].max
,( long long 
)_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance),0
,10,( unsigned long long 
)_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].min
,( unsigned long long 
)_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[_Attol_i].max
);
  }
}

 


long int
 _ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 = -1;
unsigned int
 _it_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
;

static struct
 _so_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 {
 unsigned int min;
 unsigned int max;
 T_int16 ret;
 int sel[1];
 struct {
 struct AircraftLocalizationServices  *pInstance;
        } _datain;
}
 _os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[150]
;

static struct
 _si_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 {
unsigned int indice;
struct {
 struct AircraftLocalizationServices  *pInstance;
  } _datain;
}
 _is_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[150]
;

T_int16 AircraftLocalizationServices_getNearestAirport(struct
 AircraftLocalizationServices  *pInstance)
{
struct
 _si_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 * Attol_ptr_in;
struct
 _so_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 * Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if 
(_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 >= 0)
    {
  if 
(_it_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport<150
)
    {
       Attol_ptr_in = &
(_is_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_it_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 *)0;
    }
 
 _ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport++
;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].min
)
	   &&(  
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].min>
(unsigned int
)_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
)
	      ||
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].max<
(unsigned int
)_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
)));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i]
);
  }
  res|=_atcc_ptr((void *) pInstance,(void *) Attol_ptr_out->_datain.pInstance);
  EDV_CHRONO_MUET_C( 40, res
,_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
;
      Attol_ptr_in->_datain.pInstance = pInstance;
     
 _it_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport++
;
    }
     }
  if 
(_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void
 checkin_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
(void)
{
struct
 _si_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 * Attol_ptr_in;
unsigned int i;
  struct
 _so_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
 * Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(40,0);
if 
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].min
)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
),0,10,( long long 
)_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].max
,( long long 
)_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
),0,10,( unsigned long long 
)_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].min
,( unsigned long long 
)_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].max
);
  }
for (i=0
;i<_it_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
;++i){
  Attol_ptr_in=&
(_is_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[i]
);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].min
)
	   &&(  
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[_Attol_i]
);
  }
  EDV_MUET_CHECK(40, Attol_ptr_in->indice);
      EDV_POINTER_C(1,0,( const void * )(Attol_ptr_in->_datain.pInstance),0+1,
( const void * )(Attol_ptr_out->_datain.pInstance));
  }
}
 


	
	
 

 


long int _ix_41_AirportManager_4_implementations_c_StringUtilities_length = -1;

static struct _so_41_AirportManager_4_implementations_c_StringUtilities_length {
 unsigned int min;
 unsigned int max;
 T_uint16 ret;
} _os_41_AirportManager_4_implementations_c_StringUtilities_length[150];

T_uint16 StringUtilities_length( const T_char *pStr)
{
struct _so_41_AirportManager_4_implementations_c_StringUtilities_length *
 Attol_ptr_out;
unsigned int _Attol_i;
  _ix_41_AirportManager_4_implementations_c_StringUtilities_length++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].min)
	   &&(  
(_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].min>
(unsigned int)_ix_41_AirportManager_4_implementations_c_StringUtilities_length)
	      ||
(_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].max<
(unsigned int)_ix_41_AirportManager_4_implementations_c_StringUtilities_length)
));
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i]);
  }
  EDV_CHRONO_MUET_C( 41, 0
,_ix_41_AirportManager_4_implementations_c_StringUtilities_length );
for(local_i = 0 ; pStr[local_i] != '\0' ; local_i++)
 local_labelAtlength[local_i] = pStr[local_i]; local_labelAtlength[local_i] =
 '\0';
  if (_ix_41_AirportManager_4_implementations_c_StringUtilities_length >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_41_AirportManager_4_implementations_c_StringUtilities_length(void)
{
  struct _so_41_AirportManager_4_implementations_c_StringUtilities_length *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].min
));++_Attol_i);
  if ((_Attol_i)&&
(!_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(41,0);
if 
(_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].min)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_41_AirportManager_4_implementations_c_StringUtilities_length),0,10,
( long long 
)_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].max
,( long long 
)_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].max
);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_41_AirportManager_4_implementations_c_StringUtilities_length),0,10,
( unsigned long long 
)_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].min
,( unsigned long long 
)_os_41_AirportManager_4_implementations_c_StringUtilities_length[_Attol_i].max
);
  }
}

 


long int _ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy = -1;
unsigned int _it_42_AirportManager_4_implementations_c_StringUtilities_ncopy;

static struct _so_42_AirportManager_4_implementations_c_StringUtilities_ncopy {
 unsigned int min;
 unsigned int max;
 T_int32 ret;
 int sel[1];
 struct {
 T_uint32 pSize;
        } _datain;
} _os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[150];

static struct _si_42_AirportManager_4_implementations_c_StringUtilities_ncopy {
unsigned int indice;
struct {
 T_uint32 pSize;
  } _datain;
} _is_42_AirportManager_4_implementations_c_StringUtilities_ncopy[150];

T_int32 StringUtilities_ncopy(T_char *pDestination,  const T_char *pSource,
 T_uint32 pSize)
{
struct _si_42_AirportManager_4_implementations_c_StringUtilities_ncopy *
 Attol_ptr_in;
struct _so_42_AirportManager_4_implementations_c_StringUtilities_ncopy *
 Attol_ptr_out;
unsigned int _Attol_i;
char res;
res=0;
  if (_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy >= 0)
    {
  if (_it_42_AirportManager_4_implementations_c_StringUtilities_ncopy<150)
    {
       Attol_ptr_in = &
(_is_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_it_42_AirportManager_4_implementations_c_StringUtilities_ncopy]
);
       Attol_ptr_in->indice=0;
    }
  else
    {
       Attol_ptr_in = (struct
 _si_42_AirportManager_4_implementations_c_StringUtilities_ncopy *)0;
    }
  _ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy++;
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].min)
	   &&(  
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].min>
(unsigned int)_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy)
	      ||
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].max<
(unsigned int)_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy))
);
	  ++_Attol_i);
  if ((_Attol_i)&&
(!_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].max
))_Attol_i--;
    Attol_ptr_out=&
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i]);
  }
  res|=(Attol_ptr_out->_datain.pSize != pSize);
  EDV_CHRONO_MUET_C( 42, res
,_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy );
  if (res && Attol_ptr_in)
    {
     
 Attol_ptr_in->indice=_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy
;
      Attol_ptr_in->_datain.pSize = pSize;
      _it_42_AirportManager_4_implementations_c_StringUtilities_ncopy++;
    }
     }
if (pSource[0] != '\0') 	{ 		for (local_pIndex = 0; ( pSource[local_pIndex] !=
 '\0' && local_pIndex < pSize ); local_pIndex++) 		{
 			pDestination[local_pIndex] = pSource[local_pIndex]; 		}
 		pDestination[local_pIndex] = '\0'; 	} 	else 	{ 		for (local_pIndex = 0;
 local_pIndex < pSize; local_pIndex++) 		{ 			pDestination[local_pIndex] = '\0'
; 		} 	}
  if (_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy >= 0)
    {
      return(Attol_ptr_out->ret);
    }

  return 0;

}
void checkin_42_AirportManager_4_implementations_c_StringUtilities_ncopy(void)
{
struct _si_42_AirportManager_4_implementations_c_StringUtilities_ncopy *
 Attol_ptr_in;
unsigned int i;
  struct _so_42_AirportManager_4_implementations_c_StringUtilities_ncopy *
 Attol_ptr_out;
int _Attol_i;
  for (_Attol_i=0;((_Attol_i<(150-1))&&
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].min)
);++_Attol_i);
  if ((_Attol_i)&&
(!_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].max
))_Attol_i--;
  EDV_MUET_CHECK(42,0);
if 
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].min)
  {
	 EDV_INTEGER_C(1,0,( long long )
(_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy),0,10,
( long long 
)_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].max,
( long long 
)_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].max);
  }
else
  {
	 EDV_UNSIGNED_C(1,0,( unsigned long long )
(_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy),0,10,
( unsigned long long 
)_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].min,
( unsigned long long 
)_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].max);
  }
for (i=0;i<_it_42_AirportManager_4_implementations_c_StringUtilities_ncopy;++i){
  Attol_ptr_in=&
(_is_42_AirportManager_4_implementations_c_StringUtilities_ncopy[i]);
  {
    for (_Attol_i=0;
         ((_Attol_i<150-1)
	   &&
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].min)
	   &&(  
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].min>Attol_ptr_in->indice
)
	      ||
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i].max<Attol_ptr_in->indice
)));
	  ++_Attol_i);
    Attol_ptr_out=&
(_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[_Attol_i]);
  }
  EDV_MUET_CHECK(42, Attol_ptr_in->indice);
      EDV_UNSIGNED_C(1,0,( unsigned long long )(Attol_ptr_in->_datain.pSize),0+1,10,
( unsigned long long )((T_uint32)(Attol_ptr_out->_datain.pSize)),( unsigned long long )(
(T_uint32)(Attol_ptr_out->_datain.pSize)));
  }
}
 




#line 1 "cwindiab_MPC8610_V1_2_THAV\TClass_AirportManager_4.ic"
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
#line 5784 "cwindiab_MPC8610_V1_2_THAV\\TClass_AirportManager_4.c"
void _at_check_muets(void)
{
checkin_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled
();
checkin_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport();
checkin_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude
();
checkin_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude
();
checkin_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity
();
checkin_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude
();
checkin_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData();
checkin_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase
();
checkin_19_AirportManager_4_declarations_c_PointerArray_get();
checkin_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport
();
checkin_21_AirportManager_4_declarations_c_PointerArray_getCount();
checkin_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume
();
checkin_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround
();
checkin_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight
();
checkin_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity
();
checkin_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData();
checkin_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet
();
checkin_28_AirportManager_4_declarations_c_BTVServices_getBTVState();
checkin_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport
();
checkin_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar
();
checkin_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated
();
checkin_32_AirportManager_4_declarations_c_MapObjectServices_getCharData();
checkin_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged
();
checkin_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance
();
checkin_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance(
);
checkin_36_AirportManager_4_declarations_c_ModeManagerServices_getMode();
checkin_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport
();
checkin_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox
();
checkin_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance(
);
checkin_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport
();
checkin_41_AirportManager_4_implementations_c_StringUtilities_length();
checkin_42_AirportManager_4_implementations_c_StringUtilities_ncopy();
EDV_MUET_CHECK(0,0);
}
void _at_init_muets(void)
{
_ix_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled=0
;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0].min=0
;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0].max=0
;
_it_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled=0
;
_ix_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport=0;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0].min=0;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0].max=0;
_it_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport=0;
_ix_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude=0
;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0].min=0
;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0].max=0
;
_it_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude=0
;
_ix_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude=0
;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0].min=0
;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0].max=0
;
_it_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude=0
;
_ix_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity=0
;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0].min=0
;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0].max=0
;
_it_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity=0
;
_ix_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude=0
;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0].min=0
;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0].max=0
;
_it_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude=0
;
_ix_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData=0;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0].min=0;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0].max=0;
_it_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData=0;
_ix_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase=0
;
_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[0].min=0
;
_os_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase[0].max=0
;
_it_18_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhase=0
;
_ix_19_AirportManager_4_declarations_c_PointerArray_get=0;
_os_19_AirportManager_4_declarations_c_PointerArray_get[0].min=0;
_os_19_AirportManager_4_declarations_c_PointerArray_get[0].max=0;
_it_19_AirportManager_4_declarations_c_PointerArray_get=0;
_ix_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport=0
;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0].min=0
;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0].max=0
;
_it_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport=0
;
_ix_21_AirportManager_4_declarations_c_PointerArray_getCount=0;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0].min=0;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0].max=0;
_it_21_AirportManager_4_declarations_c_PointerArray_getCount=0;
_ix_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume=0
;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0].min=0
;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0].max=0
;
_it_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume=0
;
_ix_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround=0
;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0].min=0
;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0].max=0
;
_it_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround=0
;
_ix_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight=0
;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0].min=0
;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0].max=0
;
_it_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight=0
;
_ix_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity=0
;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0].min=0
;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0].max=0
;
_it_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity=0
;
_ix_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData=0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0].min=0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0].max=0;
_it_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData=0;
_ix_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet=0
;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0].min=0
;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0].max=0
;
_it_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet=0
;
_ix_28_AirportManager_4_declarations_c_BTVServices_getBTVState=0;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0].min=0;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0].max=0;
_it_28_AirportManager_4_declarations_c_BTVServices_getBTVState=0;
_ix_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport=0
;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0].min=0
;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0].max=0
;
_it_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport=0
;
_ix_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar=0;
_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[0].min=0
;
_os_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar[0].max=0
;
_it_30_AirportManager_4_declarations_c_DatabaseServices_searchAirportByChar=0;
_ix_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated=0
;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0].min=0
;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0].max=0
;
_it_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated=0
;
_ix_32_AirportManager_4_declarations_c_MapObjectServices_getCharData=0;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0].min=0;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0].max=0;
_it_32_AirportManager_4_declarations_c_MapObjectServices_getCharData=0;
_ix_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged=0
;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0].min=0
;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0].max=0
;
_it_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged=0
;
_ix_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance=0
;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0].min=0
;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0].max=0
;
_it_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance=0
;
_ix_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance=0;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0].min=0
;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0].max=0
;
_it_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance=0;
_ix_36_AirportManager_4_declarations_c_ModeManagerServices_getMode=0;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0].min=0;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0].max=0;
_it_36_AirportManager_4_declarations_c_ModeManagerServices_getMode=0;
_ix_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport=0
;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0].min=0
;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0].max=0
;
_it_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport=0
;
_ix_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox=0
;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0].min=0
;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0].max=0
;
_it_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox=0
;
_ix_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance=0;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[0].min=0
;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[0].max=0
;
_ix_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport=0
;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0].min=0
;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0].max=0
;
_it_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport=0
;
_ix_41_AirportManager_4_implementations_c_StringUtilities_length=0;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[0].min=0;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[0].max=0;
_ix_42_AirportManager_4_implementations_c_StringUtilities_ncopy=0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].min=0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].max=0;
_it_42_AirportManager_4_implementations_c_StringUtilities_ncopy=0;
}
void TEST_SERVICE_1 (void) { 

AirportManager 					*pInstance;
T_int16 							pAirportRequest;

Task 								*local_getTaskInstance;
AirportManagerComponent 			local_lAirportManagerComponent;
DatabaseServices 					local_lDatabaseServices;
AircraftLocalizationServices 		local_lAircraftLocalizationServices;

AirportLoadingEvent 				local_lAirportLoadingEvent;
MapObjectServices 					local_lMapObjectServices;
AirportRequestActivationEvent  	local_lAirportRequestActivationEvent;
PointerArray 						local_PointerArray;
AirportToDisplayModificationEvent  local_lAirportToDisplayModificationEvent;
BTVServices 						local_lBTVServices;
FlightPlanManagementServices 		local_lFlightPlanManagementServices;
ModeManagerServices 				local_lModeManagerServices;
MapObjectServices 					local_lOriginAirportObject;
MapObjectServices 					local_lDestinationAirportObject;
T_char 							local_lAirportICAO[10];
T_char 							local_lAirportICAO_1[5];
T_char 							local_lAirportICAO_2[5];
T_char 							local_lAirportICAO_3[5];
T_char 							local_lAirportICAO_4[5];
AirportSelectionEvent 				*local_getAirportSelectionEventInstance;
T_uint32 							local_i;
T_char 							local_getName[22];

T_char* 							ret_AirportManager_getName;
	
 
NUM_OPERATION = 1;
	


	
		

DCL_OP_C(43, "AirportManager_4");
DCL_TST_C(45, "UTP-ANF-APT-0176");
_at_init_muets();
local_CStringUtilities.ncopy = (T_int32 (*)(T_char* pDestination,  const
 T_char* pSource, T_uint32 pSize))(StringUtilities_ncopy);
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].min = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].max = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].ret = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0]._datain.pSize
 = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].min = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].max = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].min = 3;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].max = 3;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].min = 4;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].max = 4;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].min = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].max = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].min = 6;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].max = 6;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].min = 7;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].max = 7;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6]._datain.pSize
 = 32;
for( I1=0;I1 <= 21;++I1){
local_getName[I1] = '\00';
}
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7].min=0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7].max=0;

NUM_TEST = 1;
START_CHRONO_C();
		
		
		

		
		
	

AirportManager_initializeStaticClass();
pInstance = CAirportManager->getInstance();
CAirportManager->initialize(pInstance);
local_getTaskInstance = pInstance->getTaskInstance(pInstance);
ret_AirportManager_getName = local_getTaskInstance->getName(local_getTaskInstance);
for(local_i=0;local_i<22;local_i++)
local_getName[local_i]	= ret_AirportManager_getName[local_i];
	
STOP_CHRONO_C();
_at_check_muets();
EDV_POINTER_C(1,0,( const void * )(local_CStringUtilities.ncopy),0+54,( const void * 
)(StringUtilities_ncopy));
for( I1=0;I1 <= 21;++I1){
EDV_UNSIGNED_C(1,0,( unsigned long long )(local_getName[I1]),((0)*22)+I1-(0)+55,10,
( unsigned long long )((T_char)(((I1==0?'I':((I1==1?'_':((I1==2?'A':((I1==3?'I':(
(I1==4?'R':((I1==5?'P':((I1==6?'O':((I1==7?'R':((I1==8?'T':((I1==9?'_':(
(I1==10?'M':((I1==11?'A':((I1==12?'N':((I1==13?'A':((I1==14?'G':((I1==15?'E':(
(I1==16?'R':((I1==17?'_':((I1==18?'T':((I1==19?'A':((I1==20?'S':'K'))))))))))))
)))))))))))))))))))))))))))))))),( unsigned long long )((T_char)(((I1==0?'I':(
(I1==1?'_':((I1==2?'A':((I1==3?'I':((I1==4?'R':((I1==5?'P':((I1==6?'O':(
(I1==7?'R':((I1==8?'T':((I1==9?'_':((I1==10?'M':((I1==11?'A':((I1==12?'N':(
(I1==13?'A':((I1==14?'G':((I1==15?'E':((I1==16?'R':((I1==17?'_':((I1==18?'T':(
(I1==19?'A':((I1==20?'S':'K')))))))))))))))))))))))))))))))))))))))))))));
}



	

	


DCL_TST_C(77, "UTP-ANF-APT-0172");
_at_init_muets();
local_CStringUtilities.ncopy = (T_int32 (*)(T_char* pDestination,  const
 T_char* pSource, T_uint32 pSize))(StringUtilities_ncopy);
local_CStringUtilities.length = (T_uint16 (*)( const T_char* pStr))
(StringUtilities_length);
local_lModeManagerServices.getMode = (T_Mode (*)(struct ModeManagerServices *
 pThis))(ModeManagerServices_getMode);
local_CAirportManagerComponent.getInstance = (AirportManagerComponent* (*)(void
))(AirportManagerComponent_getInstance);
local_lAirportManagerComponent.getConnectedFacet = (T_PortInterface (*)(struct
 AirportManagerComponent * pThis, T_AirportManagerComponentReceptaclesIndexes
 pReceptacleIndex))(AirportManagerComponent_getConnectedFacet);
local_lDatabaseServices.getBooleanData = (T_boolean (*)(struct DatabaseServices
 * pThis, T_int32 pData))(DatabaseServices_getBooleanData);
local_lDatabaseServices.getAirportInstance = (MapObjectServices* (*)(struct
 DatabaseServices * pThis, T_int16 pAirport))
(DatabaseServices_getAirportInstance);
local_lMapObjectServices.getCharData = (T_PtrChar (*)(struct MapObjectServices
 * pThis, struct MapObjectServices * pMapObject, T_int32 pData))
(MapObjectServices_getCharData);
local_lMapObjectServices.getFloatData = (T_float32 (*)(struct MapObjectServices
 * pThis, struct MapObjectServices * pMapObject, T_int32 pData))
(MapObjectServices_getFloatData);
local_lBTVServices.getBTVAirport = (T_int16 (*)(struct BTVServices * pThis))
(BTVServices_getBTVAirport);
local_lBTVServices.getBTVState = (T_BTVStates (*)(struct BTVServices * pThis))
(BTVServices_getBTVState);
local_PointerArray.getCount = (T_uint32 (*)(struct PointerArray * pThis))
(PointerArray_getCount);
local_PointerArray.get = (T_ptr (*)(struct PointerArray * pThis, T_uint32
 pIndex))(PointerArray_get);
local_lAircraftLocalizationServices.getAircraftLocationValidity = (T_boolean (*
)(struct AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftLocationValidity);
local_lAircraftLocalizationServices.getAircraftLatitude = (T_float32 (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftLatitude);
local_lAircraftLocalizationServices.getAircraftLongitude = (T_float32 (*)
(struct AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftLongitude);
local_lAircraftLocalizationServices.getAircraftAltitude = (T_float32 (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftAltitude);
local_lAircraftLocalizationServices.getFlightPhaseValidity = (T_boolean (*)
(struct AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getFlightPhaseValidity);
local_lAircraftLocalizationServices.getFlightPhase = (T_FlightPhase (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getFlightPhase);
local_lAircraftLocalizationServices.getAircraftOnGround = (T_boolean (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftOnGround);
local_lAircraftLocalizationServices.getNearestAirport = (T_int16 (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getNearestAirport);
local_lAirportLoadingEvent.airportPriorityListUpdated = (void (*)(struct
 AirportLoadingEvent * pThis, T_int16* pAirportPriorityList))
(AirportLoadingEvent_airportPriorityListUpdated);
local_lAirportRequestActivationEvent.airportRequestEnabled = (void (*)(struct
 AirportRequestActivationEvent * pThis, T_boolean pEnabled))
(AirportRequestActivationEvent_airportRequestEnabled);
local_CGeometricTools.isLatLongInAirportCoverageVolume = (T_boolean (*)
(T_float32 pLatitude, T_float32 pLongitude, T_float32 pAltitude, T_float32
 pAirportLatitude, T_float32 pAirportLongitude, T_float32 pAirportAltitude,
 T_float32* pDistanceToAirport))
(GeometricTools_isLatLongInAirportCoverageVolume);
local_CGeometricTools.isLatLongInAirportBoundingBox = (T_boolean (*)(T_float32
 pLatitude, T_float32 pLongitude, MapObjectServices* pAirportMos,
 MapObjectServices* pMosProvider))(GeometricTools_isLatLongInAirportBoundingBox
);
local_CMathematicalTools.computeOrthodromicDistance = (T_float32 (*)(T_float32
 pLatitudeA, T_float32 pLongitudeA, T_float32 pLatitudeB, T_float32 pLongitudeB
))(MathematicalTools_computeOrthodromicDistance);
local_lAirportToDisplayModificationEvent.airportToDisplayChanged = (void (*)
(struct AirportToDisplayModificationEvent * pThis, T_int16 pAirportToDisplay))
(AirportToDisplayModificationEvent_airportToDisplayChanged);
local_lFlightPlanManagementServices.getOriginAirport = (T_int16 (*)(struct
 FlightPlanManagementServices * pThis))
(FlightPlanManagementServices_getOriginAirport);
local_lFlightPlanManagementServices.getDestinationAirport = (T_int16 (*)(struct
 FlightPlanManagementServices * pThis))
(FlightPlanManagementServices_getDestinationAirport);
local_lFlightPlanManagementServices.getDestinationAirportOfLastFlight = 
(T_int16 (*)(struct FlightPlanManagementServices * pThis))
(FlightPlanManagementServices_getDestinationAirportOfLastFlight);
local_lFlightPlanManagementServices.getAlternateAirport = (T_int16 (*)(struct
 FlightPlanManagementServices * pThis))
(FlightPlanManagementServices_getAlternateAirport);
for( I1=0;I1 <= 9;++I1){
local_lAirportICAO[I1] = 'A';
}
pAirportRequest = 12;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].min = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].max = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].ret = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0]._datain.pSize
 = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].min = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].max = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].min = 3;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].max = 3;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].min = 4;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].max = 4;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].min = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].max = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].min = 6;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].max = 6;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].min = 7;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].max = 7;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6]._datain.pSize
 = 32;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[0].min
 = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[0].max
 = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[0].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0].min
 = 1;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0].max
 = 1;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0].min =
 1;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0].max =
 1;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0].ret =
 1;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0]._datain.pData
 = 45;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[1].min
 = 2;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[1].max
 = 2;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[1].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1].min
 = 2;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1].max
 = 2;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1].min =
 2;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1].max =
 2;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1].ret =
 0;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1]._datain.pData
 = 48;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[2].min
 = 3;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[2].max
 = 3;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[2].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2].min
 = 3;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2].max
 = 3;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2].ret
 = (T_PortInterface)((T_PortInterface*)&local_lFlightPlanManagementServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_FLIGHT_PLAN_MANAGEMENT_SERVICES_RECEPTACLE_INDEX;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0].min
 = 1;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0].max
 = 1;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0].ret
 = 10;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0].min
 = 1;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0].max
 = 1;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0].ret
 = 20;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0].min
 = 1;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0].max
 = 1;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0].ret
 = 1;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0].min
 = 1;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0].max
 = 1;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0].ret
 = 1;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[3].min
 = 4;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[3].max
 = 4;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[3].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3].min
 = 4;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3].max
 = 4;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3].ret
 = (T_PortInterface)((T_PortInterface*)&local_lBTVServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0].min = 1;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0].max = 1;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0].ret = 1;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0]._datain.pInstance
 = (struct BTVServices *)(&local_lBTVServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[4].min
 = 5;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[4].max
 = 5;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[4].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4].min
 = 5;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4].max
 = 5;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4].ret
 = (T_PortInterface)((T_PortInterface*)&local_lAircraftLocalizationServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRCRAFT_LOCALIZATION_SERVICES_RECEPTACLE_INDEX;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0].min
 = 1;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0].max
 = 1;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0].ret
 = 1;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0].min
 = 1;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0].max
 = 1;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0].ret
 = 0.1E1;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0].min
 = 1;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0].max
 = 1;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0].ret
 = 0.1E1;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0].min
 = 1;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0].max
 = 1;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0].ret
 = 0.1E1;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0].min
 = 1;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0].max
 = 1;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0].ret
 = 0;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0].min
 = 1;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0].max
 = 1;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0].ret
 = 0;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0].min
 = 1;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0].max
 = 1;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0].ret
 = 1;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[5].min
 = 6;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[5].max
 = 6;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[5].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5].min
 = 6;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5].max
 = 6;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6].min
 = 7;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6].max
 = 7;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0].min
 = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0].max
 = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0].min =
 1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0].max =
 1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0].ret =
 0.35E2;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1].min =
 2;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1].max =
 2;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1].ret =
 0.125E3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1]._datain.pData
 = 4;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2].min =
 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2].max =
 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2].ret =
 0.159E3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2]._datain.pData
 = 2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0].min
 = 1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0].max
 = 1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0].ret
 = 1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pLatitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pLongitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pAltitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pAirportLatitude
 = 0.35E2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pAirportLongitude
 = 0.125E3;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pAirportAltitude
 = 0.159E3;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pDistanceToAirport
 = (T_float32*)(((T_ptr)0));
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[6].min
 = 7;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[6].max
 = 7;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[6].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7].min
 = 8;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7].max
 = 8;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8].min
 = 9;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8].max
 = 9;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1].min
 = 2;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1].max
 = 2;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1]._datain.pAirport
 = 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3].min =
 4;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3].max =
 4;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4].min =
 5;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4].max =
 5;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4]._datain.pData
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2].min
 = 3;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2].max
 = 3;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5].min =
 6;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5].max =
 6;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6].min =
 7;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6].max =
 7;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6]._datain.pData
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0].min
 = 1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0].max
 = 1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0].ret
 = 0.301E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0]._datain.pLatitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0]._datain.pLongitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0]._datain.pLongitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1].min
 = 2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1].max
 = 2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1].ret
 = 0.51E2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1]._datain.pLatitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1]._datain.pLongitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2].min
 = 3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2].max
 = 3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2].ret
 = 0.3E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2]._datain.pLongitudeB
 = 0.2E1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[7].min
 = 8;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[7].max
 = 8;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[7].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9].min
 = 10;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9].max
 = 10;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9].ret
 = (T_PortInterface)((T_PortInterface*)&local_lModeManagerServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MODE_MANAGER_SERVICES_RECEPTACLE_INDEX;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0].min = 1;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0].max = 1;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0].ret =
 E_NAV_MODE;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0]._datain.pInstance
 = (struct ModeManagerServices *)(&local_lModeManagerServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[8].min
 = 9;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[8].max
 = 9;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[8].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10].min
 = 11;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10].max
 = 11;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_TO_DISPLAY_MODIFICATION_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0].min = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0].max = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[0].min = 1;
_os_19_AirportManager_4_declarations_c_PointerArray_get[0].max = 1;
_os_19_AirportManager_4_declarations_c_PointerArray_get[0].ret = (T_ptr)
(&local_lAirportToDisplayModificationEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[0]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[0]._datain.pIndex = 0;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0].min
 = 1;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0].max
 = 1;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0]._datain.pInstance
 = (struct AirportToDisplayModificationEvent *)
(&local_lAirportToDisplayModificationEvent);
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0]._datain.pAirportToDisplay
 = 20;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11].min
 = 12;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11].max
 = 12;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12].min
 = 13;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12].max
 = 13;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13].min
 = 14;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13].max
 = 14;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[1].min = 2;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[1].max = 2;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[1].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[1]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[1].min = 2;
_os_19_AirportManager_4_declarations_c_PointerArray_get[1].max = 2;
_os_19_AirportManager_4_declarations_c_PointerArray_get[1].ret = (T_ptr)
(&local_lAirportRequestActivationEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[1]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[1]._datain.pIndex = 0;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0].min
 = 1;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0].max
 = 1;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0]._datain.pInstance
 = (struct AirportRequestActivationEvent *)
(&local_lAirportRequestActivationEvent);
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0]._datain.pEnabled
 = 0;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[9].min
 = 10;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[9].max
 = 10;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[9].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14].min
 = 15;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14].max
 = 15;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15].min
 = 16;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15].max
 = 16;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16].min
 = 17;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16].max
 = 17;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_LOADING_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[2].min = 3;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[2].max = 3;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[2].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[2]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[2].min = 3;
_os_19_AirportManager_4_declarations_c_PointerArray_get[2].max = 3;
_os_19_AirportManager_4_declarations_c_PointerArray_get[2].ret = (T_ptr)
(&local_lAirportLoadingEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[2]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[2]._datain.pIndex = 0;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0].min
 = 1;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0].max
 = 1;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0]._datain.pInstance
 = (struct AirportLoadingEvent *)(&local_lAirportLoadingEvent);
for( I1=0;I1 <= 3;++I1){
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0]._datain.pAirportPriorityList[I1]
 = ((I1==0?20:((I1==1?10:((I1==2?1:-1))))));
}
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3].min
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3].max
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0].min = 1;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0].max = 1;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7].min = 8;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7].max = 8;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[0].min = 1;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[0].max = 1;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[0].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4].min
 = 5;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4].max
 = 5;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4]._datain.pAirport
 = 10;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1].min = 2;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1].max = 2;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[8].min = 9;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[8].max = 9;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[8].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[8]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[1].min = 2;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[1].max = 2;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[1].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5].min
 = 6;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5].max
 = 6;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5]._datain.pAirport
 = 1;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2].min = 3;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2].max = 3;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[9].min = 10;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[9].max = 10;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[9].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[9]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[2].min = 3;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[2].max = 3;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[2].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[10].min = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[10].max = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[10].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[10]._datain.pSize
 = 32;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[10].min
 = 11;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[10].max
 = 11;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[10].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17].min
 = 18;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17].max
 = 18;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18].min
 = 19;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18].max
 = 19;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6].min
 = 7;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6].max
 = 7;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7].min =
 8;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7].max =
 8;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8].min =
 9;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8].max =
 9;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8]._datain.pData
 = 4;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0].min
 = 1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0].max
 = 1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0].ret
 = 1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0]._datain.pLatitude
 = 0.1E1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0]._datain.pLongitude
 = 0.1E1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0]._datain.pAirportMos
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0]._datain.pMosProvider
 = (MapObjectServices*)(&local_lMapObjectServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[11].min
 = 12;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[11].max
 = 12;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[11].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19].min
 = 20;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19].max
 = 20;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20].min
 = 21;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20].max
 = 21;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7].min
 = 8;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7].max
 = 8;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3].min = 4;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3].max = 4;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3]._datain.pData
 = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[3].min = 4;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[3].max = 4;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[3].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8].min
 = 9;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8].max
 = 9;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4].min = 5;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4].max = 5;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4]._datain.pData
 = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[4].min = 5;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[4].max = 5;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[4].ret = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[12].min
 = 13;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[12].max
 = 13;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[12].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21].min
 = 22;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21].max
 = 22;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21].ret
 = (T_PortInterface)((T_PortInterface*)&local_lBTVServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22].min
 = 23;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22].max
 = 23;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0].min = 1;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0].max = 1;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0].ret =
 E_ARPTNAV_ST;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0]._datain.pInstance
 = (struct BTVServices *)(&local_lBTVServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[13].min
 = 14;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[13].max
 = 14;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[13].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23].min
 = 24;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23].max
 = 24;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24].min
 = 25;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24].max
 = 25;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[14].min
 = 15;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[14].max
 = 15;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[14].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25].min
 = 26;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25].max
 = 26;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2].min =
 3;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2].max =
 3;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2].ret =
 1;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2]._datain.pData
 = 45;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[15].min
 = 16;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[15].max
 = 16;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[15].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26].min
 = 27;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26].max
 = 27;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3].min =
 4;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3].max =
 4;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3].ret =
 0;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3]._datain.pData
 = 48;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[16].min
 = 17;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[16].max
 = 17;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[16].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27].min
 = 28;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27].max
 = 28;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27].ret
 = (T_PortInterface)((T_PortInterface*)&local_lFlightPlanManagementServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_FLIGHT_PLAN_MANAGEMENT_SERVICES_RECEPTACLE_INDEX;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[1].min
 = 2;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[1].max
 = 2;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[1].ret
 = 10;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[1]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[1].min
 = 2;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[1].max
 = 2;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[1].ret
 = 20;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[1]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[1].min
 = 2;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[1].max
 = 2;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[1].ret
 = 1;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[1]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[1].min
 = 2;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[1].max
 = 2;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[1].ret
 = 1;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[1]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[17].min
 = 18;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[17].max
 = 18;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[17].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28].min
 = 29;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28].max
 = 29;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28].ret
 = (T_PortInterface)((T_PortInterface*)&local_lBTVServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[1].min = 2;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[1].max = 2;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[1].ret = 1;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[1]._datain.pInstance
 = (struct BTVServices *)(&local_lBTVServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[18].min
 = 19;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[18].max
 = 19;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[18].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29].min
 = 30;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29].max
 = 30;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29].ret
 = (T_PortInterface)((T_PortInterface*)&local_lAircraftLocalizationServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRCRAFT_LOCALIZATION_SERVICES_RECEPTACLE_INDEX;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[1].min
 = 2;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[1].max
 = 2;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[1].ret
 = 1;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[1].min
 = 2;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[1].max
 = 2;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[1].ret
 = 0.1E1;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[1].min
 = 2;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[1].max
 = 2;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[1].ret
 = 0.1E1;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[1].min
 = 2;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[1].max
 = 2;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[1].ret
 = 0.1E1;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[1].min
 = 2;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[1].max
 = 2;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[1].ret
 = 0;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[1].min
 = 2;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[1].max
 = 2;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[1].ret
 = 0;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[1].min
 = 2;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[1].max
 = 2;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[1].ret
 = 1;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[19].min
 = 20;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[19].max
 = 20;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[19].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30].min
 = 31;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30].max
 = 31;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31].min
 = 32;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31].max
 = 32;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9].min
 = 10;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9].max
 = 10;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9].min =
 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9].max =
 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9].ret =
 0.35E2;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10].min =
 11;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10].max =
 11;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10].ret =
 0.125E3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10]._datain.pData
 = 4;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11].min =
 12;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11].max =
 12;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11].ret =
 0.159E3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11]._datain.pData
 = 2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1].min
 = 2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1].max
 = 2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1].ret
 = 1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pLatitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pLongitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pAltitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pAirportLatitude
 = 0.35E2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pAirportLongitude
 = 0.125E3;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pAirportAltitude
 = 0.159E3;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pDistanceToAirport
 = (T_float32*)(((T_ptr)0));
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[20].min
 = 21;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[20].max
 = 21;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[20].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32].min
 = 33;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32].max
 = 33;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33].min
 = 34;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33].max
 = 34;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10].min
 = 11;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10].max
 = 11;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10]._datain.pAirport
 = 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12].min =
 13;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12].max =
 13;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13].min =
 14;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13].max =
 14;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13]._datain.pData
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11].min
 = 12;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11].max
 = 12;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14].min =
 15;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14].max =
 15;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15].min =
 16;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15].max =
 16;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15]._datain.pData
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3].min
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3].max
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3].ret
 = 0.301E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3]._datain.pLatitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3]._datain.pLongitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3]._datain.pLongitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4].min
 = 5;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4].max
 = 5;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4].ret
 = 0.51E2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4]._datain.pLatitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4]._datain.pLongitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5].min
 = 6;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5].max
 = 6;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5].ret
 = 0.3E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5]._datain.pLongitudeB
 = 0.2E1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[21].min
 = 22;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[21].max
 = 22;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[21].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34].min
 = 35;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34].max
 = 35;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34].ret
 = (T_PortInterface)((T_PortInterface*)&local_lModeManagerServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MODE_MANAGER_SERVICES_RECEPTACLE_INDEX;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[1].min = 2;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[1].max = 2;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[1].ret =
 E_PLAN_MODE;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[1]._datain.pInstance
 = (struct ModeManagerServices *)(&local_lModeManagerServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35].min
 = 36;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35].max
 = 36;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36].min
 = 37;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36].max
 = 37;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[22].min
 = 23;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[22].max
 = 23;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[22].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37].min
 = 38;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37].max
 = 38;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38].min
 = 39;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38].max
 = 39;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12].min
 = 13;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12].max
 = 13;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12]._datain.pAirport
 = 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16].min =
 17;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16].max =
 17;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17].min =
 18;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17].max =
 18;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17]._datain.pData
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13].min
 = 14;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13].max
 = 14;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18].min =
 19;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18].max =
 19;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19].min =
 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19].max =
 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19]._datain.pData
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6].min
 = 7;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6].max
 = 7;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6].ret
 = 0.301E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6]._datain.pLatitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6]._datain.pLongitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6]._datain.pLongitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7].min
 = 8;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7].max
 = 8;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7].ret
 = 0.51E2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7]._datain.pLatitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7]._datain.pLongitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8].min
 = 9;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8].max
 = 9;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8].ret
 = 0.3E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8]._datain.pLongitudeB
 = 0.2E1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[23].min
 = 24;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[23].max
 = 24;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[23].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39].min
 = 40;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39].max
 = 40;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_TO_DISPLAY_MODIFICATION_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[3].min = 4;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[3].max = 4;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[3].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[3]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[3].min = 4;
_os_19_AirportManager_4_declarations_c_PointerArray_get[3].max = 4;
_os_19_AirportManager_4_declarations_c_PointerArray_get[3].ret = (T_ptr)
(&local_lAirportToDisplayModificationEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[3]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[3]._datain.pIndex = 0;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14].min
 = 15;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14].max
 = 15;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14]._datain.pAirport
 = 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5].min = 6;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5].max = 6;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[11].min = 12;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[11].max = 12;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[11].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[11]._datain.pSize
 = 5;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40].min
 = 41;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40].max
 = 41;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[4].min = 5;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[4].max = 5;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[4].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[4]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[4].min = 5;
_os_19_AirportManager_4_declarations_c_PointerArray_get[4].max = 5;
_os_19_AirportManager_4_declarations_c_PointerArray_get[4].ret = (T_ptr)
(&local_lAirportRequestActivationEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[4]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[4]._datain.pIndex = 0;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[1].min
 = 2;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[1].max
 = 2;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[1]._datain.pInstance
 = (struct AirportRequestActivationEvent *)
(&local_lAirportRequestActivationEvent);
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[1]._datain.pEnabled
 = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[24].min
 = 25;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[24].max
 = 25;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[24].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41].min
 = 42;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41].max
 = 42;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42].min
 = 43;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42].max
 = 43;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43].min
 = 44;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43].max
 = 44;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_LOADING_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[5].min = 6;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[5].max = 6;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[5].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[5]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[5].min = 6;
_os_19_AirportManager_4_declarations_c_PointerArray_get[5].max = 6;
_os_19_AirportManager_4_declarations_c_PointerArray_get[5].ret = (T_ptr)
(&local_lAirportLoadingEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[5]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[5]._datain.pIndex = 0;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15].min
 = 16;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15].max
 = 16;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15]._datain.pAirport
 = 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6].min = 7;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6].max = 7;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[12].min = 13;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[12].max = 13;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[12].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[12]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[5].min = 6;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[5].max = 6;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[5].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16].min
 = 17;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16].max
 = 17;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16]._datain.pAirport
 = 10;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7].min = 8;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7].max = 8;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[13].min = 14;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[13].max = 14;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[13].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[13]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[6].min = 7;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[6].max = 7;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[6].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17].min
 = 18;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17].max
 = 18;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17]._datain.pAirport
 = 1;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8].min = 9;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8].max = 9;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[14].min = 15;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[14].max = 15;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[14].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[14]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[7].min = 8;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[7].max = 8;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[7].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18].min
 = 19;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18].max
 = 19;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9].min =
 10;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9].max =
 10;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[15].min = 16;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[15].max = 16;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[15].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[15]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[8].min = 9;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[8].max = 9;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[8].ret = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[25].min
 = 26;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[25].max
 = 26;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[25].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44].min
 = 45;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44].max
 = 45;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45].min
 = 46;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45].max
 = 46;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19].min
 = 20;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19].max
 = 20;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19]._datain.pAirport
 = 12;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20].min =
 21;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20].max =
 21;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21].min =
 22;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21].max =
 22;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21]._datain.pData
 = 4;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1].min
 = 2;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1].max
 = 2;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1].ret
 = 1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1]._datain.pLatitude
 = 0.1E1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1]._datain.pLongitude
 = 0.1E1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1]._datain.pAirportMos
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1]._datain.pMosProvider
 = (MapObjectServices*)(&local_lMapObjectServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[26].min
 = 27;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[26].max
 = 27;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[26].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46].min
 = 47;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46].max
 = 47;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47].min
 = 48;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47].max
 = 48;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20].min
 = 21;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20].max
 = 21;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10].min =
 11;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10].max =
 11;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10]._datain.pData
 = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[9].min = 10;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[9].max = 10;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[9].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21].min
 = 22;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21].max
 = 22;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21]._datain.pAirport
 = 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11].min =
 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11].max =
 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11]._datain.pData
 = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[10].min = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[10].max = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[10].ret = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[27].min
 = 28;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[27].max
 = 28;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[27].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48].min
 = 49;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48].max
 = 49;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48].ret
 = (T_PortInterface)((T_PortInterface*)&local_lBTVServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49].min
 = 50;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49].max
 = 50;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[1].min = 2;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[1].max = 2;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[1].ret =
 E_ARPTNAV_ST;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[1]._datain.pInstance
 = (struct BTVServices *)(&local_lBTVServices);
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[1].min
 = 2;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[1].max
 = 2;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[1]._datain.pInstance
 = (struct AirportToDisplayModificationEvent *)
(&local_lAirportToDisplayModificationEvent);
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[1]._datain.pAirportToDisplay
 = 12;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[1].min
 = 2;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[1].max
 = 2;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[1]._datain.pInstance
 = (struct AirportLoadingEvent *)(&local_lAirportLoadingEvent);
for( I1=0;I1 <= 3;++I1){
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[1]._datain.pAirportPriorityList[I1]
 = ((I1==0?12:((I1==1?10:((I1==2?1:20))))));
}
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[2].min=0
;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[2].max=0
;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[2].min=0;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[2].max=0;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[2].min=0
;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[2].max=0
;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[2].min=0
;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[2].max=0
;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[2].min=0
;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[2].max=0
;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[2].min=0
;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[2].max=0
;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[4].min=0;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[4].max=0;
_os_19_AirportManager_4_declarations_c_PointerArray_get[6].min=0;
_os_19_AirportManager_4_declarations_c_PointerArray_get[6].max=0;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[2].min=0
;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[2].max=0
;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[6].min=0;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[6].max=0;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[2].min=0
;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[2].max=0
;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[2].min=0
;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[2].max=0
;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[2].min=0
;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[2].max=0
;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[2].min=0
;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[2].max=0
;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[22].min=0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[22].max=0;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[50].min=0
;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[50].max=0
;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[2].min=0;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[2].max=0;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[2].min=0
;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[2].max=0
;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[2].min=0
;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[2].max=0
;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[12].min=0;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[12].max=0;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[2].min=0
;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[2].max=0
;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[9].min=0
;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[9].max=0
;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[22].min=0
;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[22].max=0
;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[2].min=0;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[2].max=0;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[2].min=0
;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[2].max=0
;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[2].min=0
;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[2].max=0
;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[28].min=0
;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[28].max=0
;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[2].min=0
;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[2].max=0
;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[11].min=0;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[11].max=0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[16].min=0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[16].max=0;

NUM_TEST = 2;
START_CHRONO_C();

		
			
			
		
		
		
		
		
		
		
		
		


		
		
	

		

		

		
		
		
		
		
		


		
		
		
		
	

		
			
		
	
AirportManager_initializeStaticClass();
CAirportManager->initialize(pInstance);
local_getTaskInstance = pInstance->getTaskInstance(pInstance);
local_getTaskInstance->execute(local_getTaskInstance);
local_getAirportSelectionEventInstance = pInstance->getAirportSelectionEventInstance(pInstance);
local_getAirportSelectionEventInstance->airportSelected(local_getAirportSelectionEventInstance, pAirportRequest);
local_getTaskInstance->execute(local_getTaskInstance);
	
STOP_CHRONO_C();
_at_check_muets();
EDV_POINTER_C(1,0,( const void * )(local_CStringUtilities.ncopy),0+110,
( const void * )(StringUtilities_ncopy));
EDV_POINTER_C(1,0,( const void * )(local_CStringUtilities.length),0+111,
( const void * )(StringUtilities_length));
EDV_POINTER_C(1,0,( const void * )(local_lModeManagerServices.getMode),0+112,
( const void * )(ModeManagerServices_getMode));
EDV_POINTER_C(1,0,( const void * )(local_CAirportManagerComponent.getInstance)
,0+113,( const void * )(AirportManagerComponent_getInstance));
EDV_POINTER_C(1,0,( const void * )
(local_lAirportManagerComponent.getConnectedFacet),0+114,( const void * )
(AirportManagerComponent_getConnectedFacet));
EDV_POINTER_C(1,0,( const void * )(local_lDatabaseServices.getBooleanData),0+115,
( const void * )(DatabaseServices_getBooleanData));
EDV_POINTER_C(1,0,( const void * )(local_lDatabaseServices.getAirportInstance)
,0+116,( const void * )(DatabaseServices_getAirportInstance));
EDV_POINTER_C(1,0,( const void * )(local_lMapObjectServices.getCharData),0+117,
( const void * )(MapObjectServices_getCharData));
EDV_POINTER_C(1,0,( const void * )(local_lMapObjectServices.getFloatData),0+118,
( const void * )(MapObjectServices_getFloatData));
EDV_POINTER_C(1,0,( const void * )(local_lBTVServices.getBTVAirport),0+119,
( const void * )(BTVServices_getBTVAirport));
EDV_POINTER_C(1,0,( const void * )(local_lBTVServices.getBTVState),0+120,
( const void * )(BTVServices_getBTVState));
EDV_POINTER_C(1,0,( const void * )(local_PointerArray.getCount),0+121,( const void * 
)(PointerArray_getCount));
EDV_POINTER_C(1,0,( const void * )(local_PointerArray.get),0+122,( const void * )
(PointerArray_get));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftLocationValidity),0+123,
( const void * )(AircraftLocalizationServices_getAircraftLocationValidity));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftLatitude),0+124,( const void * )
(AircraftLocalizationServices_getAircraftLatitude));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftLongitude),0+125,( const void * )
(AircraftLocalizationServices_getAircraftLongitude));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftAltitude),0+126,( const void * )
(AircraftLocalizationServices_getAircraftAltitude));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getFlightPhaseValidity),0+127,( const void * 
)(AircraftLocalizationServices_getFlightPhaseValidity));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getFlightPhase),0+128,( const void * )
(AircraftLocalizationServices_getFlightPhase));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftOnGround),0+129,( const void * )
(AircraftLocalizationServices_getAircraftOnGround));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getNearestAirport),0+130,( const void * )
(AircraftLocalizationServices_getNearestAirport));
EDV_POINTER_C(1,0,( const void * )
(local_lAirportLoadingEvent.airportPriorityListUpdated),0+131,( const void * )
(AirportLoadingEvent_airportPriorityListUpdated));
EDV_POINTER_C(1,0,( const void * )
(local_lAirportRequestActivationEvent.airportRequestEnabled),0+132,( const void * 
)(AirportRequestActivationEvent_airportRequestEnabled));
EDV_POINTER_C(1,0,( const void * )
(local_CGeometricTools.isLatLongInAirportCoverageVolume),0+133,( const void * )
(GeometricTools_isLatLongInAirportCoverageVolume));
EDV_POINTER_C(1,0,( const void * )
(local_CGeometricTools.isLatLongInAirportBoundingBox),0+134,( const void * )
(GeometricTools_isLatLongInAirportBoundingBox));
EDV_POINTER_C(1,0,( const void * )
(local_CMathematicalTools.computeOrthodromicDistance),0+135,( const void * )
(MathematicalTools_computeOrthodromicDistance));
EDV_POINTER_C(1,0,( const void * )
(local_lAirportToDisplayModificationEvent.airportToDisplayChanged),0+136,
( const void * )(AirportToDisplayModificationEvent_airportToDisplayChanged));
EDV_POINTER_C(1,0,( const void * )
(local_lFlightPlanManagementServices.getOriginAirport),0+137,( const void * )
(FlightPlanManagementServices_getOriginAirport));
EDV_POINTER_C(1,0,( const void * )
(local_lFlightPlanManagementServices.getDestinationAirport),0+138,( const void * )
(FlightPlanManagementServices_getDestinationAirport));
EDV_POINTER_C(1,0,( const void * )
(local_lFlightPlanManagementServices.getDestinationAirportOfLastFlight),0+139,
( const void * )(FlightPlanManagementServices_getDestinationAirportOfLastFlight));
EDV_POINTER_C(1,0,( const void * )
(local_lFlightPlanManagementServices.getAlternateAirport),0+140,( const void * )
(FlightPlanManagementServices_getAlternateAirport));
for( I1=0;I1 <= 9;++I1){
EDV_UNSIGNED_C(0,0,( unsigned long long )(local_lAirportICAO[I1]),((0)*10)+I1-(0)+141
,10,( unsigned long long )((T_char)'A'),( unsigned long long )((T_char)'A'));
}
EDV_INTEGER_C(0,0,( long long )(pAirportRequest),0+151,10,( long long )(
(T_int16)12),( long long )((T_int16)12));



	

	


DCL_TST_C(152, "UTP-ANF-APT-0173");
_at_init_muets();
local_CStringUtilities.ncopy = (T_int32 (*)(T_char* pDestination,  const
 T_char* pSource, T_uint32 pSize))(StringUtilities_ncopy);
local_CStringUtilities.length = (T_uint16 (*)( const T_char* pStr))
(StringUtilities_length);
local_lModeManagerServices.getMode = (T_Mode (*)(struct ModeManagerServices *
 pThis))(ModeManagerServices_getMode);
local_CAirportManagerComponent.getInstance = (AirportManagerComponent* (*)(void
))(AirportManagerComponent_getInstance);
local_lAirportManagerComponent.getConnectedFacet = (T_PortInterface (*)(struct
 AirportManagerComponent * pThis, T_AirportManagerComponentReceptaclesIndexes
 pReceptacleIndex))(AirportManagerComponent_getConnectedFacet);
local_lDatabaseServices.getBooleanData = (T_boolean (*)(struct DatabaseServices
 * pThis, T_int32 pData))(DatabaseServices_getBooleanData);
local_lDatabaseServices.getAirportInstance = (MapObjectServices* (*)(struct
 DatabaseServices * pThis, T_int16 pAirport))
(DatabaseServices_getAirportInstance);
local_lMapObjectServices.getCharData = (T_PtrChar (*)(struct MapObjectServices
 * pThis, struct MapObjectServices * pMapObject, T_int32 pData))
(MapObjectServices_getCharData);
local_lMapObjectServices.getFloatData = (T_float32 (*)(struct MapObjectServices
 * pThis, struct MapObjectServices * pMapObject, T_int32 pData))
(MapObjectServices_getFloatData);
local_lBTVServices.getBTVAirport = (T_int16 (*)(struct BTVServices * pThis))
(BTVServices_getBTVAirport);
local_lBTVServices.getBTVState = (T_BTVStates (*)(struct BTVServices * pThis))
(BTVServices_getBTVState);
local_PointerArray.getCount = (T_uint32 (*)(struct PointerArray * pThis))
(PointerArray_getCount);
local_PointerArray.get = (T_ptr (*)(struct PointerArray * pThis, T_uint32
 pIndex))(PointerArray_get);
local_lAircraftLocalizationServices.getAircraftLocationValidity = (T_boolean (*
)(struct AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftLocationValidity);
local_lAircraftLocalizationServices.getAircraftLatitude = (T_float32 (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftLatitude);
local_lAircraftLocalizationServices.getAircraftLongitude = (T_float32 (*)
(struct AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftLongitude);
local_lAircraftLocalizationServices.getAircraftAltitude = (T_float32 (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftAltitude);
local_lAircraftLocalizationServices.getFlightPhaseValidity = (T_boolean (*)
(struct AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getFlightPhaseValidity);
local_lAircraftLocalizationServices.getFlightPhase = (T_FlightPhase (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getFlightPhase);
local_lAircraftLocalizationServices.getAircraftOnGround = (T_boolean (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getAircraftOnGround);
local_lAircraftLocalizationServices.getNearestAirport = (T_int16 (*)(struct
 AircraftLocalizationServices * pThis))
(AircraftLocalizationServices_getNearestAirport);
local_lAirportLoadingEvent.airportPriorityListUpdated = (void (*)(struct
 AirportLoadingEvent * pThis, T_int16* pAirportPriorityList))
(AirportLoadingEvent_airportPriorityListUpdated);
local_lAirportRequestActivationEvent.airportRequestEnabled = (void (*)(struct
 AirportRequestActivationEvent * pThis, T_boolean pEnabled))
(AirportRequestActivationEvent_airportRequestEnabled);
local_CGeometricTools.isLatLongInAirportCoverageVolume = (T_boolean (*)
(T_float32 pLatitude, T_float32 pLongitude, T_float32 pAltitude, T_float32
 pAirportLatitude, T_float32 pAirportLongitude, T_float32 pAirportAltitude,
 T_float32* pDistanceToAirport))
(GeometricTools_isLatLongInAirportCoverageVolume);
local_CGeometricTools.isLatLongInAirportBoundingBox = (T_boolean (*)(T_float32
 pLatitude, T_float32 pLongitude, MapObjectServices* pAirportMos,
 MapObjectServices* pMosProvider))(GeometricTools_isLatLongInAirportBoundingBox
);
local_CMathematicalTools.computeOrthodromicDistance = (T_float32 (*)(T_float32
 pLatitudeA, T_float32 pLongitudeA, T_float32 pLatitudeB, T_float32 pLongitudeB
))(MathematicalTools_computeOrthodromicDistance);
local_lAirportToDisplayModificationEvent.airportToDisplayChanged = (void (*)
(struct AirportToDisplayModificationEvent * pThis, T_int16 pAirportToDisplay))
(AirportToDisplayModificationEvent_airportToDisplayChanged);
local_lFlightPlanManagementServices.getOriginAirport = (T_int16 (*)(struct
 FlightPlanManagementServices * pThis))
(FlightPlanManagementServices_getOriginAirport);
local_lFlightPlanManagementServices.getDestinationAirport = (T_int16 (*)(struct
 FlightPlanManagementServices * pThis))
(FlightPlanManagementServices_getDestinationAirport);
local_lFlightPlanManagementServices.getDestinationAirportOfLastFlight = 
(T_int16 (*)(struct FlightPlanManagementServices * pThis))
(FlightPlanManagementServices_getDestinationAirportOfLastFlight);
local_lFlightPlanManagementServices.getAlternateAirport = (T_int16 (*)(struct
 FlightPlanManagementServices * pThis))
(FlightPlanManagementServices_getAlternateAirport);
for( I1=0;I1 <= 9;++I1){
local_lAirportICAO[I1] = 'A';
}
pAirportRequest = 12;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].min = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].max = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0].ret = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[0]._datain.pSize
 = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].min = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].max = 2;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[1]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].min = 3;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].max = 3;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[2]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].min = 4;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].max = 4;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[3]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].min = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].max = 5;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[4]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].min = 6;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].max = 6;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[5]._datain.pSize
 = 32;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].min = 7;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].max = 7;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6].ret = 0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[6]._datain.pSize
 = 32;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[0].min
 = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[0].max
 = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[0].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0].min
 = 1;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0].max
 = 1;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[0]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0].min =
 1;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0].max =
 1;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0].ret =
 1;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[0]._datain.pData
 = 45;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[1].min
 = 2;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[1].max
 = 2;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[1].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1].min
 = 2;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1].max
 = 2;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[1]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1].min =
 2;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1].max =
 2;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1].ret =
 0;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[1]._datain.pData
 = 48;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[2].min
 = 3;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[2].max
 = 3;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[2].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2].min
 = 3;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2].max
 = 3;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2].ret
 = (T_PortInterface)((T_PortInterface*)&local_lFlightPlanManagementServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[2]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_FLIGHT_PLAN_MANAGEMENT_SERVICES_RECEPTACLE_INDEX;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0].min
 = 1;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0].max
 = 1;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0].ret
 = 10;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[0]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0].min
 = 1;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0].max
 = 1;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0].ret
 = 20;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[0]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0].min
 = 1;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0].max
 = 1;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0].ret
 = 1;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[0]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0].min
 = 1;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0].max
 = 1;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0].ret
 = 1;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[0]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[3].min
 = 4;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[3].max
 = 4;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[3].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3].min
 = 4;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3].max
 = 4;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3].ret
 = (T_PortInterface)((T_PortInterface*)&local_lBTVServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[3]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0].min = 1;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0].max = 1;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0].ret = 1;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[0]._datain.pInstance
 = (struct BTVServices *)(&local_lBTVServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[4].min
 = 5;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[4].max
 = 5;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[4].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4].min
 = 5;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4].max
 = 5;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4].ret
 = (T_PortInterface)((T_PortInterface*)&local_lAircraftLocalizationServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[4]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRCRAFT_LOCALIZATION_SERVICES_RECEPTACLE_INDEX;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0].min
 = 1;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0].max
 = 1;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0].ret
 = 1;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0].min
 = 1;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0].max
 = 1;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0].ret
 = 0.1E1;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0].min
 = 1;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0].max
 = 1;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0].ret
 = 0.1E1;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0].min
 = 1;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0].max
 = 1;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0].ret
 = 0.1E1;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0].min
 = 1;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0].max
 = 1;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0].ret
 = 0;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0].min
 = 1;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0].max
 = 1;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0].ret
 = 0;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0].min
 = 1;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0].max
 = 1;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0].ret
 = 1;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[0]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[5].min
 = 6;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[5].max
 = 6;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[5].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5].min
 = 6;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5].max
 = 6;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[5]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6].min
 = 7;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6].max
 = 7;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[6]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0].min
 = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0].max
 = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[0]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0].min =
 1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0].max =
 1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0].ret =
 0.35E2;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[0]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1].min =
 2;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1].max =
 2;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1].ret =
 0.125E3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[1]._datain.pData
 = 4;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2].min =
 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2].max =
 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2].ret =
 0.159E3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[2]._datain.pData
 = 2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0].min
 = 1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0].max
 = 1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0].ret
 = 1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pLatitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pLongitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pAltitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pAirportLatitude
 = 0.35E2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pAirportLongitude
 = 0.125E3;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pAirportAltitude
 = 0.159E3;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[0]._datain.pDistanceToAirport
 = (T_float32*)(((T_ptr)0));
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[6].min
 = 7;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[6].max
 = 7;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[6].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7].min
 = 8;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7].max
 = 8;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[7]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8].min
 = 9;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8].max
 = 9;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[8]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1].min
 = 2;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1].max
 = 2;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[1]._datain.pAirport
 = 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3].min =
 4;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3].max =
 4;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[3]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4].min =
 5;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4].max =
 5;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[4]._datain.pData
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2].min
 = 3;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2].max
 = 3;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[2]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5].min =
 6;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5].max =
 6;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[5]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6].min =
 7;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6].max =
 7;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[6]._datain.pData
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0].min
 = 1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0].max
 = 1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0].ret
 = 0.301E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0]._datain.pLatitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0]._datain.pLongitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[0]._datain.pLongitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1].min
 = 2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1].max
 = 2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1].ret
 = 0.5E2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1]._datain.pLatitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[1]._datain.pLongitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2].min
 = 3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2].max
 = 3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2].ret
 = 0.3E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[2]._datain.pLongitudeB
 = 0.2E1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[7].min
 = 8;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[7].max
 = 8;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[7].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9].min
 = 10;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9].max
 = 10;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9].ret
 = (T_PortInterface)((T_PortInterface*)&local_lModeManagerServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[9]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MODE_MANAGER_SERVICES_RECEPTACLE_INDEX;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0].min = 1;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0].max = 1;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0].ret =
 E_NAV_MODE;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[0]._datain.pInstance
 = (struct ModeManagerServices *)(&local_lModeManagerServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[8].min
 = 9;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[8].max
 = 9;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[8].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10].min
 = 11;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10].max
 = 11;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[10]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_TO_DISPLAY_MODIFICATION_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0].min = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0].max = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[0]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[0].min = 1;
_os_19_AirportManager_4_declarations_c_PointerArray_get[0].max = 1;
_os_19_AirportManager_4_declarations_c_PointerArray_get[0].ret = (T_ptr)
(&local_lAirportToDisplayModificationEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[0]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[0]._datain.pIndex = 0;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0].min
 = 1;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0].max
 = 1;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0]._datain.pInstance
 = (struct AirportToDisplayModificationEvent *)
(&local_lAirportToDisplayModificationEvent);
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[0]._datain.pAirportToDisplay
 = 20;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11].min
 = 12;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11].max
 = 12;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[11]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12].min
 = 13;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12].max
 = 13;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[12]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13].min
 = 14;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13].max
 = 14;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[13]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[1].min = 2;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[1].max = 2;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[1].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[1]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[1].min = 2;
_os_19_AirportManager_4_declarations_c_PointerArray_get[1].max = 2;
_os_19_AirportManager_4_declarations_c_PointerArray_get[1].ret = (T_ptr)
(&local_lAirportRequestActivationEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[1]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[1]._datain.pIndex = 0;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0].min
 = 1;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0].max
 = 1;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0]._datain.pInstance
 = (struct AirportRequestActivationEvent *)
(&local_lAirportRequestActivationEvent);
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[0]._datain.pEnabled
 = 0;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[9].min
 = 10;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[9].max
 = 10;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[9].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14].min
 = 15;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14].max
 = 15;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[14]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15].min
 = 16;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15].max
 = 16;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[15]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16].min
 = 17;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16].max
 = 17;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[16]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_LOADING_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[2].min = 3;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[2].max = 3;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[2].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[2]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[2].min = 3;
_os_19_AirportManager_4_declarations_c_PointerArray_get[2].max = 3;
_os_19_AirportManager_4_declarations_c_PointerArray_get[2].ret = (T_ptr)
(&local_lAirportLoadingEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[2]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[2]._datain.pIndex = 0;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0].min
 = 1;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0].max
 = 1;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0]._datain.pInstance
 = (struct AirportLoadingEvent *)(&local_lAirportLoadingEvent);
for( I1=0;I1 <= 3;++I1){
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[0]._datain.pAirportPriorityList[I1]
 = ((I1==0?20:((I1==1?10:((I1==2?1:-1))))));
}
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3].min
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3].max
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[3]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0].min = 1;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0].max = 1;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[0]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7].min = 8;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7].max = 8;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[7]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[0].min = 1;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[0].max = 1;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[0].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4].min
 = 5;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4].max
 = 5;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[4]._datain.pAirport
 = 10;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1].min = 2;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1].max = 2;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[1]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[8].min = 9;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[8].max = 9;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[8].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[8]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[1].min = 2;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[1].max = 2;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[1].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5].min
 = 6;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5].max
 = 6;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[5]._datain.pAirport
 = 1;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2].min = 3;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2].max = 3;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[2]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[9].min = 10;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[9].max = 10;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[9].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[9]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[2].min = 3;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[2].max = 3;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[2].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[10].min = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[10].max = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[10].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[10]._datain.pSize
 = 32;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[10].min
 = 11;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[10].max
 = 11;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[10].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17].min
 = 18;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17].max
 = 18;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[17]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18].min
 = 19;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18].max
 = 19;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[18]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6].min
 = 7;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6].max
 = 7;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[6]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7].min =
 8;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7].max =
 8;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[7]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8].min =
 9;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8].max =
 9;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[8]._datain.pData
 = 4;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0].min
 = 1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0].max
 = 1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0].ret
 = 1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0]._datain.pLatitude
 = 0.1E1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0]._datain.pLongitude
 = 0.1E1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0]._datain.pAirportMos
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[0]._datain.pMosProvider
 = (MapObjectServices*)(&local_lMapObjectServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[11].min
 = 12;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[11].max
 = 12;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[11].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19].min
 = 20;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19].max
 = 20;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[19]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20].min
 = 21;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20].max
 = 21;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[20]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7].min
 = 8;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7].max
 = 8;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[7]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3].min = 4;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3].max = 4;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[3]._datain.pData
 = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[3].min = 4;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[3].max = 4;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[3].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8].min
 = 9;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8].max
 = 9;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[8]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4].min = 5;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4].max = 5;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[4]._datain.pData
 = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[4].min = 5;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[4].max = 5;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[4].ret = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[12].min
 = 13;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[12].max
 = 13;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[12].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21].min
 = 22;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21].max
 = 22;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21].ret
 = (T_PortInterface)((T_PortInterface*)&local_lBTVServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[21]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22].min
 = 23;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22].max
 = 23;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[22]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0].min = 1;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0].max = 1;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0].ret =
 E_ARPTNAV_ST;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[0]._datain.pInstance
 = (struct BTVServices *)(&local_lBTVServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[13].min
 = 14;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[13].max
 = 14;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[13].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23].min
 = 24;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23].max
 = 24;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[23]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24].min
 = 25;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24].max
 = 25;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[24]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[14].min
 = 15;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[14].max
 = 15;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[14].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25].min
 = 26;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25].max
 = 26;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[25]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2].min =
 3;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2].max =
 3;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2].ret =
 1;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[2]._datain.pData
 = 45;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[15].min
 = 16;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[15].max
 = 16;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[15].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26].min
 = 27;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26].max
 = 27;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[26]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3].min =
 4;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3].max =
 4;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3].ret =
 0;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[3]._datain.pData
 = 48;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[16].min
 = 17;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[16].max
 = 17;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[16].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27].min
 = 28;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27].max
 = 28;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27].ret
 = (T_PortInterface)((T_PortInterface*)&local_lFlightPlanManagementServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[27]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_FLIGHT_PLAN_MANAGEMENT_SERVICES_RECEPTACLE_INDEX;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[1].min
 = 2;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[1].max
 = 2;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[1].ret
 = 10;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[1]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[1].min
 = 2;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[1].max
 = 2;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[1].ret
 = 20;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[1]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[1].min
 = 2;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[1].max
 = 2;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[1].ret
 = 1;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[1]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[1].min
 = 2;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[1].max
 = 2;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[1].ret
 = 1;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[1]._datain.pInstance
 = (struct FlightPlanManagementServices *)(&local_lFlightPlanManagementServices
);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[17].min
 = 18;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[17].max
 = 18;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[17].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28].min
 = 29;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28].max
 = 29;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28].ret
 = (T_PortInterface)((T_PortInterface*)&local_lBTVServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[28]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[1].min = 2;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[1].max = 2;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[1].ret = 1;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[1]._datain.pInstance
 = (struct BTVServices *)(&local_lBTVServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[18].min
 = 19;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[18].max
 = 19;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[18].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29].min
 = 30;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29].max
 = 30;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29].ret
 = (T_PortInterface)((T_PortInterface*)&local_lAircraftLocalizationServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[29]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRCRAFT_LOCALIZATION_SERVICES_RECEPTACLE_INDEX;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[1].min
 = 2;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[1].max
 = 2;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[1].ret
 = 1;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[1].min
 = 2;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[1].max
 = 2;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[1].ret
 = 0.1E1;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[1].min
 = 2;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[1].max
 = 2;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[1].ret
 = 0.1E1;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[1].min
 = 2;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[1].max
 = 2;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[1].ret
 = 0.1E1;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[1].min
 = 2;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[1].max
 = 2;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[1].ret
 = 0;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[1].min
 = 2;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[1].max
 = 2;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[1].ret
 = 0;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[1].min
 = 2;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[1].max
 = 2;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[1].ret
 = 1;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[1]._datain.pInstance
 = (struct AircraftLocalizationServices *)(&local_lAircraftLocalizationServices
);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[19].min
 = 20;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[19].max
 = 20;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[19].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30].min
 = 31;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30].max
 = 31;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[30]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31].min
 = 32;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31].max
 = 32;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[31]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9].min
 = 10;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9].max
 = 10;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[9]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9].min =
 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9].max =
 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9].ret =
 0.35E2;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[9]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10].min =
 11;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10].max =
 11;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10].ret =
 0.125E3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[10]._datain.pData
 = 4;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11].min =
 12;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11].max =
 12;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11].ret =
 0.159E3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[11]._datain.pData
 = 2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1].min
 = 2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1].max
 = 2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1].ret
 = 1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pLatitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pLongitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pAltitude
 = 0.1E1;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pAirportLatitude
 = 0.35E2;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pAirportLongitude
 = 0.125E3;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pAirportAltitude
 = 0.159E3;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[1]._datain.pDistanceToAirport
 = (T_float32*)(((T_ptr)0));
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[20].min
 = 21;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[20].max
 = 21;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[20].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32].min
 = 33;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32].max
 = 33;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[32]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33].min
 = 34;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33].max
 = 34;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[33]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10].min
 = 11;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10].max
 = 11;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[10]._datain.pAirport
 = 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12].min =
 13;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12].max =
 13;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[12]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13].min =
 14;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13].max =
 14;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[13]._datain.pData
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11].min
 = 12;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11].max
 = 12;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[11]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14].min =
 15;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14].max =
 15;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[14]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15].min =
 16;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15].max =
 16;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[15]._datain.pData
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3].min
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3].max
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3].ret
 = 0.301E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3]._datain.pLatitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3]._datain.pLongitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[3]._datain.pLongitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4].min
 = 5;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4].max
 = 5;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4].ret
 = 0.5E2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4]._datain.pLatitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[4]._datain.pLongitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5].min
 = 6;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5].max
 = 6;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5].ret
 = 0.3E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[5]._datain.pLongitudeB
 = 0.2E1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[21].min
 = 22;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[21].max
 = 22;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[21].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34].min
 = 35;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34].max
 = 35;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34].ret
 = (T_PortInterface)((T_PortInterface*)&local_lModeManagerServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[34]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MODE_MANAGER_SERVICES_RECEPTACLE_INDEX;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[1].min = 2;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[1].max = 2;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[1].ret =
 E_PLAN_MODE;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[1]._datain.pInstance
 = (struct ModeManagerServices *)(&local_lModeManagerServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35].min
 = 36;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35].max
 = 36;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[35]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36].min
 = 37;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36].max
 = 37;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[36]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[22].min
 = 23;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[22].max
 = 23;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[22].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37].min
 = 38;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37].max
 = 38;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[37]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38].min
 = 39;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38].max
 = 39;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[38]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12].min
 = 13;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12].max
 = 13;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[12]._datain.pAirport
 = 10;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16].min =
 17;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16].max =
 17;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[16]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17].min =
 18;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17].max =
 18;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[17]._datain.pData
 = 4;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13].min
 = 14;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13].max
 = 14;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[13]._datain.pAirport
 = 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18].min =
 19;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18].max =
 19;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[18]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19].min =
 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19].max =
 20;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19].ret =
 0.2E1;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[19]._datain.pData
 = 4;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6].min
 = 7;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6].max
 = 7;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6].ret
 = 0.301E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6]._datain.pLatitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6]._datain.pLongitudeA
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[6]._datain.pLongitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7].min
 = 8;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7].max
 = 8;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7].ret
 = 0.5E2;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7]._datain.pLatitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[7]._datain.pLongitudeB
 = 0.0;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8].min
 = 9;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8].max
 = 9;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8].ret
 = 0.3E3;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8]._datain.pLatitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8]._datain.pLongitudeA
 = 0.1E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8]._datain.pLatitudeB
 = 0.2E1;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[8]._datain.pLongitudeB
 = 0.2E1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[23].min
 = 24;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[23].max
 = 24;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[23].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39].min
 = 40;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39].max
 = 40;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[39]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_TO_DISPLAY_MODIFICATION_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[3].min = 4;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[3].max = 4;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[3].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[3]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[3].min = 4;
_os_19_AirportManager_4_declarations_c_PointerArray_get[3].max = 4;
_os_19_AirportManager_4_declarations_c_PointerArray_get[3].ret = (T_ptr)
(&local_lAirportToDisplayModificationEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[3]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[3]._datain.pIndex = 0;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14].min
 = 15;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14].max
 = 15;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[14]._datain.pAirport
 = 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5].min = 6;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5].max = 6;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[5]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[11].min = 12;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[11].max = 12;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[11].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[11]._datain.pSize
 = 5;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40].min
 = 41;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40].max
 = 41;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[40]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[4].min = 5;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[4].max = 5;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[4].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[4]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[4].min = 5;
_os_19_AirportManager_4_declarations_c_PointerArray_get[4].max = 5;
_os_19_AirportManager_4_declarations_c_PointerArray_get[4].ret = (T_ptr)
(&local_lAirportRequestActivationEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[4]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[4]._datain.pIndex = 0;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[1].min
 = 2;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[1].max
 = 2;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[1]._datain.pInstance
 = (struct AirportRequestActivationEvent *)
(&local_lAirportRequestActivationEvent);
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[1]._datain.pEnabled
 = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[24].min
 = 25;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[24].max
 = 25;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[24].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41].min
 = 42;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41].max
 = 42;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[41]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42].min
 = 43;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42].max
 = 43;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[42]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43].min
 = 44;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43].max
 = 44;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[43]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_LOADING_EVENT_RECEPTACLE_INDEX;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[5].min = 6;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[5].max = 6;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[5].ret = 1;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[5]._datain.pInstance
 = (struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[5].min = 6;
_os_19_AirportManager_4_declarations_c_PointerArray_get[5].max = 6;
_os_19_AirportManager_4_declarations_c_PointerArray_get[5].ret = (T_ptr)
(&local_lAirportLoadingEvent);
_os_19_AirportManager_4_declarations_c_PointerArray_get[5]._datain.pInstance = 
(struct PointerArray *)(&local_PointerArray);
_os_19_AirportManager_4_declarations_c_PointerArray_get[5]._datain.pIndex = 0;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15].min
 = 16;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15].max
 = 16;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[15]._datain.pAirport
 = 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6].min = 7;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6].max = 7;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[6]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[12].min = 13;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[12].max = 13;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[12].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[12]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[5].min = 6;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[5].max = 6;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[5].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16].min
 = 17;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16].max
 = 17;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[16]._datain.pAirport
 = 10;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7].min = 8;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7].max = 8;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[7]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[13].min = 14;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[13].max = 14;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[13].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[13]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[6].min = 7;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[6].max = 7;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[6].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17].min
 = 18;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17].max
 = 18;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[17]._datain.pAirport
 = 1;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8].min = 9;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8].max = 9;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[8]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[14].min = 15;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[14].max = 15;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[14].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[14]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[7].min = 8;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[7].max = 8;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[7].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18].min
 = 19;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18].max
 = 19;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18].ret
 = (MapObjectServices*)(&local_lOriginAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[18]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9].min =
 10;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9].max =
 10;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lOriginAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[9]._datain.pData
 = 11;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[15].min = 16;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[15].max = 16;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[15].ret = 1;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[15]._datain.pSize
 = 32;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[8].min = 9;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[8].max = 9;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[8].ret = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[25].min
 = 26;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[25].max
 = 26;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[25].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44].min
 = 45;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44].max
 = 45;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[44]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45].min
 = 46;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45].max
 = 46;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[45]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19].min
 = 20;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19].max
 = 20;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[19]._datain.pAirport
 = 12;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20].min =
 21;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20].max =
 21;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[20]._datain.pData
 = 3;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21].min =
 22;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21].max =
 22;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21].ret =
 0.0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[21]._datain.pData
 = 4;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1].min
 = 2;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1].max
 = 2;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1].ret
 = 1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1]._datain.pLatitude
 = 0.1E1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1]._datain.pLongitude
 = 0.1E1;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1]._datain.pAirportMos
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[1]._datain.pMosProvider
 = (MapObjectServices*)(&local_lMapObjectServices);
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[26].min
 = 27;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[26].max
 = 27;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[26].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46].min
 = 47;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46].max
 = 47;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46].ret
 = (T_PortInterface)((T_PortInterface*)&local_lDatabaseServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[46]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_DATABASE_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47].min
 = 48;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47].max
 = 48;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47].ret
 = (T_PortInterface)((T_PortInterface*)&local_lMapObjectServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[47]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_MAP_OBJECT_SERVICES_RECEPTACLE_INDEX;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20].min
 = 21;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20].max
 = 21;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[20]._datain.pAirport
 = 20;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10].min =
 11;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10].max =
 11;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[10]._datain.pData
 = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[9].min = 10;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[9].max = 10;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[9].ret = 1;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21].min
 = 22;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21].max
 = 22;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21].ret
 = (MapObjectServices*)(&local_lDestinationAirportObject);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21]._datain.pInstance
 = (struct DatabaseServices *)(&local_lDatabaseServices);
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[21]._datain.pAirport
 = 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11].min =
 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11].max =
 12;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11].ret = 
(T_PtrChar)(&local_lAirportICAO[0]);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11]._datain.pInstance
 = (struct MapObjectServices *)(&local_lMapObjectServices);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11]._datain.pMapObject
 = (struct MapObjectServices *)(&local_lDestinationAirportObject);
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[11]._datain.pData
 = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[10].min = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[10].max = 11;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[10].ret = 1;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[27].min
 = 28;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[27].max
 = 28;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[27].ret
 = (AirportManagerComponent*)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48].min
 = 49;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48].max
 = 49;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48].ret
 = (T_PortInterface)((T_PortInterface*)&local_lBTVServices);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[48]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_BTV_SERVICES_RECEPTACLE_INDEX;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49].min
 = 50;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49].max
 = 50;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49].ret
 = (T_PortInterface)((T_PortInterface*)&local_PointerArray);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49]._datain.pInstance
 = (struct AirportManagerComponent *)(&local_lAirportManagerComponent);
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[49]._datain.pReceptacleIndex
 = E_AIRPORT_MANAGER_AIRPORT_REQUEST_ACTIVATION_EVENT_RECEPTACLE_INDEX;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[1].min = 2;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[1].max = 2;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[1].ret =
 E_ARPTNAV_ST;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[1]._datain.pInstance
 = (struct BTVServices *)(&local_lBTVServices);
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[1].min
 = 2;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[1].max
 = 2;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[1]._datain.pInstance
 = (struct AirportToDisplayModificationEvent *)
(&local_lAirportToDisplayModificationEvent);
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[1]._datain.pAirportToDisplay
 = 12;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[1].min
 = 2;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[1].max
 = 2;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[1]._datain.pInstance
 = (struct AirportLoadingEvent *)(&local_lAirportLoadingEvent);
for( I1=0;I1 <= 3;++I1){
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[1]._datain.pAirportPriorityList[I1]
 = ((I1==0?12:((I1==1?10:((I1==2?1:20))))));
}
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[2].min=0
;
_os_11_AirportManager_4_declarations_c_AirportRequestActivationEvent_airportRequestEnabled[2].max=0
;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[2].min=0;
_os_12_AirportManager_4_declarations_c_BTVServices_getBTVAirport[2].max=0;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[2].min=0
;
_os_13_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLatitude[2].max=0
;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[2].min=0
;
_os_14_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftAltitude[2].max=0
;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[2].min=0
;
_os_15_AirportManager_4_declarations_c_AircraftLocalizationServices_getFlightPhaseValidity[2].max=0
;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[2].min=0
;
_os_16_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLongitude[2].max=0
;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[4].min=0;
_os_17_AirportManager_4_declarations_c_DatabaseServices_getBooleanData[4].max=0;
_os_19_AirportManager_4_declarations_c_PointerArray_get[6].min=0;
_os_19_AirportManager_4_declarations_c_PointerArray_get[6].max=0;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[2].min=0
;
_os_20_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirport[2].max=0
;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[6].min=0;
_os_21_AirportManager_4_declarations_c_PointerArray_getCount[6].max=0;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[2].min=0
;
_os_22_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportCoverageVolume[2].max=0
;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[2].min=0
;
_os_23_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftOnGround[2].max=0
;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[2].min=0
;
_os_24_AirportManager_4_declarations_c_FlightPlanManagementServices_getDestinationAirportOfLastFlight[2].max=0
;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[2].min=0
;
_os_25_AirportManager_4_declarations_c_AircraftLocalizationServices_getAircraftLocationValidity[2].max=0
;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[22].min=0;
_os_26_AirportManager_4_declarations_c_MapObjectServices_getFloatData[22].max=0;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[50].min=0
;
_os_27_AirportManager_4_declarations_c_AirportManagerComponent_getConnectedFacet[50].max=0
;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[2].min=0;
_os_28_AirportManager_4_declarations_c_BTVServices_getBTVState[2].max=0;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[2].min=0
;
_os_29_AirportManager_4_declarations_c_FlightPlanManagementServices_getOriginAirport[2].max=0
;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[2].min=0
;
_os_31_AirportManager_4_declarations_c_AirportLoadingEvent_airportPriorityListUpdated[2].max=0
;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[12].min=0;
_os_32_AirportManager_4_declarations_c_MapObjectServices_getCharData[12].max=0;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[2].min=0
;
_os_33_AirportManager_4_declarations_c_AirportToDisplayModificationEvent_airportToDisplayChanged[2].max=0
;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[9].min=0
;
_os_34_AirportManager_4_declarations_c_MathematicalTools_computeOrthodromicDistance[9].max=0
;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[22].min=0
;
_os_35_AirportManager_4_declarations_c_DatabaseServices_getAirportInstance[22].max=0
;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[2].min=0;
_os_36_AirportManager_4_declarations_c_ModeManagerServices_getMode[2].max=0;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[2].min=0
;
_os_37_AirportManager_4_declarations_c_FlightPlanManagementServices_getAlternateAirport[2].max=0
;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[2].min=0
;
_os_38_AirportManager_4_declarations_c_GeometricTools_isLatLongInAirportBoundingBox[2].max=0
;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[28].min=0
;
_os_39_AirportManager_4_declarations_c_AirportManagerComponent_getInstance[28].max=0
;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[2].min=0
;
_os_40_AirportManager_4_declarations_c_AircraftLocalizationServices_getNearestAirport[2].max=0
;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[11].min=0;
_os_41_AirportManager_4_implementations_c_StringUtilities_length[11].max=0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[16].min=0;
_os_42_AirportManager_4_implementations_c_StringUtilities_ncopy[16].max=0;

NUM_TEST = 3;
START_CHRONO_C();

		
			
		
		
		
		
		
		
		
		
		
		


		
		
	

		

		

		
		
		
		
		
		


		
		
		
		
	

		
			
		
	
AirportManager_initializeStaticClass();
CAirportManager->initialize(pInstance);
local_getTaskInstance = pInstance->getTaskInstance(pInstance);
local_getTaskInstance->execute(local_getTaskInstance);
local_getAirportSelectionEventInstance = pInstance->getAirportSelectionEventInstance(pInstance);
local_getAirportSelectionEventInstance->airportSelected(local_getAirportSelectionEventInstance, pAirportRequest);
local_getTaskInstance->execute(local_getTaskInstance);
	
STOP_CHRONO_C();
_at_check_muets();
EDV_POINTER_C(1,0,( const void * )(local_CStringUtilities.ncopy),0+180,
( const void * )(StringUtilities_ncopy));
EDV_POINTER_C(1,0,( const void * )(local_CStringUtilities.length),0+181,
( const void * )(StringUtilities_length));
EDV_POINTER_C(1,0,( const void * )(local_lModeManagerServices.getMode),0+182,
( const void * )(ModeManagerServices_getMode));
EDV_POINTER_C(1,0,( const void * )(local_CAirportManagerComponent.getInstance)
,0+183,( const void * )(AirportManagerComponent_getInstance));
EDV_POINTER_C(1,0,( const void * )
(local_lAirportManagerComponent.getConnectedFacet),0+184,( const void * )
(AirportManagerComponent_getConnectedFacet));
EDV_POINTER_C(1,0,( const void * )(local_lDatabaseServices.getBooleanData),0+185,
( const void * )(DatabaseServices_getBooleanData));
EDV_POINTER_C(1,0,( const void * )(local_lDatabaseServices.getAirportInstance)
,0+186,( const void * )(DatabaseServices_getAirportInstance));
EDV_POINTER_C(1,0,( const void * )(local_lMapObjectServices.getCharData),0+187,
( const void * )(MapObjectServices_getCharData));
EDV_POINTER_C(1,0,( const void * )(local_lMapObjectServices.getFloatData),0+188,
( const void * )(MapObjectServices_getFloatData));
EDV_POINTER_C(1,0,( const void * )(local_lBTVServices.getBTVAirport),0+189,
( const void * )(BTVServices_getBTVAirport));
EDV_POINTER_C(1,0,( const void * )(local_lBTVServices.getBTVState),0+190,
( const void * )(BTVServices_getBTVState));
EDV_POINTER_C(1,0,( const void * )(local_PointerArray.getCount),0+191,( const void * 
)(PointerArray_getCount));
EDV_POINTER_C(1,0,( const void * )(local_PointerArray.get),0+192,( const void * )
(PointerArray_get));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftLocationValidity),0+193,
( const void * )(AircraftLocalizationServices_getAircraftLocationValidity));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftLatitude),0+194,( const void * )
(AircraftLocalizationServices_getAircraftLatitude));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftLongitude),0+195,( const void * )
(AircraftLocalizationServices_getAircraftLongitude));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftAltitude),0+196,( const void * )
(AircraftLocalizationServices_getAircraftAltitude));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getFlightPhaseValidity),0+197,( const void * 
)(AircraftLocalizationServices_getFlightPhaseValidity));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getFlightPhase),0+198,( const void * )
(AircraftLocalizationServices_getFlightPhase));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getAircraftOnGround),0+199,( const void * )
(AircraftLocalizationServices_getAircraftOnGround));
EDV_POINTER_C(1,0,( const void * )
(local_lAircraftLocalizationServices.getNearestAirport),0+200,( const void * )
(AircraftLocalizationServices_getNearestAirport));
EDV_POINTER_C(1,0,( const void * )
(local_lAirportLoadingEvent.airportPriorityListUpdated),0+201,( const void * )
(AirportLoadingEvent_airportPriorityListUpdated));
EDV_POINTER_C(1,0,( const void * )
(local_lAirportRequestActivationEvent.airportRequestEnabled),0+202,( const void * 
)(AirportRequestActivationEvent_airportRequestEnabled));
EDV_POINTER_C(1,0,( const void * )
(local_CGeometricTools.isLatLongInAirportCoverageVolume),0+203,( const void * )
(GeometricTools_isLatLongInAirportCoverageVolume));
EDV_POINTER_C(1,0,( const void * )
(local_CGeometricTools.isLatLongInAirportBoundingBox),0+204,( const void * )
(GeometricTools_isLatLongInAirportBoundingBox));
EDV_POINTER_C(1,0,( const void * )
(local_CMathematicalTools.computeOrthodromicDistance),0+205,( const void * )
(MathematicalTools_computeOrthodromicDistance));
EDV_POINTER_C(1,0,( const void * )
(local_lAirportToDisplayModificationEvent.airportToDisplayChanged),0+206,
( const void * )(AirportToDisplayModificationEvent_airportToDisplayChanged));
EDV_POINTER_C(1,0,( const void * )
(local_lFlightPlanManagementServices.getOriginAirport),0+207,( const void * )
(FlightPlanManagementServices_getOriginAirport));
EDV_POINTER_C(1,0,( const void * )
(local_lFlightPlanManagementServices.getDestinationAirport),0+208,( const void * )
(FlightPlanManagementServices_getDestinationAirport));
EDV_POINTER_C(1,0,( const void * )
(local_lFlightPlanManagementServices.getDestinationAirportOfLastFlight),0+209,
( const void * )(FlightPlanManagementServices_getDestinationAirportOfLastFlight));
EDV_POINTER_C(1,0,( const void * )
(local_lFlightPlanManagementServices.getAlternateAirport),0+210,( const void * )
(FlightPlanManagementServices_getAlternateAirport));
for( I1=0;I1 <= 9;++I1){
EDV_UNSIGNED_C(0,0,( unsigned long long )(local_lAirportICAO[I1]),((0)*10)+I1-(0)+211
,10,( unsigned long long )((T_char)'A'),( unsigned long long )((T_char)'A'));
}
EDV_INTEGER_C(0,0,( long long )(pAirportRequest),0+221,10,( long long )(
(T_int16)12),( long long )((T_int16)12));


} 





  int main(int argc,char *argv[]) { 




    atu_init_data(); 
 
 START_C() ;

/*#pragma attol testing_tool_call_place*/
TEST_SERVICE_1();
 STOP_C() ;



  {_ATL_END_EXEC;return(0);} 




} 

   

