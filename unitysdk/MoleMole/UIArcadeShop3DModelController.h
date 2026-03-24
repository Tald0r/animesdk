#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9E872ED84D1478B9.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_56AF18CD74DA940A_13;
namespace MoleMole { class UIArcadeMachineUnit3DModelController; }
namespace MoleMole { class UIArcadePageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole::Config { class ConfigArcadeCameraBlendCurve; }
namespace MoleMole::Config { class ConfigArcadeCameraPoint; }
namespace MoleMole::Config { class ConfigArcadePageCamera; }
namespace MoleMole::MiniGame { class MiniGameWorldBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAMENOANIM_OFFSET UNITYSDK_OFFSET(0x98994E0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAME_OFFSET UNITYSDK_OFFSET(0x98992C0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_OFFSET UNITYSDK_OFFSET(0x9898390)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERENTRANCEPHASEFROMSPINNINGTABLE_OFFSET UNITYSDK_OFFSET(0x9897BA0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINENOANIM_OFFSET UNITYSDK_OFFSET(0x9899060)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINE_OFFSET UNITYSDK_OFFSET(0x9898B20)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMSPINNINGTABLE_OFFSET UNITYSDK_OFFSET(0x9899740)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMARCADEMACHINE_OFFSET UNITYSDK_OFFSET(0x9898600)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_OFFSET UNITYSDK_OFFSET(0x9897940)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCE_OFFSET UNITYSDK_OFFSET(0x98975C0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMPLAYGAME_OFFSET UNITYSDK_OFFSET(0x9899960)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETARCADEMODELSCREENDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x989AEA0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETCENTERDATAINDEX_OFFSET UNITYSDK_OFFSET(0x9897550)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETCENTERPOSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x98974E0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETMACHINEUNIT3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x989A030)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETTARGETROTATIONAXISVALUE_OFFSET UNITYSDK_OFFSET(0x989B8B0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITARCADEMACHINEINFO_OFFSET UNITYSDK_OFFSET(0x989AFE0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITCAMERAINFO_OFFSET UNITYSDK_OFFSET(0x989B9B0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x9895D00)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ISTABLEROTATING_OFFSET UNITYSDK_OFFSET(0x989B460)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9896170)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERGAMERTPHASE_OFFSET UNITYSDK_OFFSET(0x9898D40)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERNEARPOSPHASE_OFFSET UNITYSDK_OFFSET(0x9898870)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERTITLEVIDEOPHASE_OFFSET UNITYSDK_OFFSET(0x9898060)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9896210)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9895C40)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_PRELEAVEPLAYGAMEPHASE_OFFSET UNITYSDK_OFFSET(0x9897FE0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHCOMMONVIEW_OFFSET UNITYSDK_OFFSET(0x989A200)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHSPINNINGTABLESTATE_OFFSET UNITYSDK_OFFSET(0x9899C50)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHTABLEROTATINGBYGAMELIST_OFFSET UNITYSDK_OFFSET(0x989B0F0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHTABLEROTATING_OFFSET UNITYSDK_OFFSET(0x989B160)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REGISTERMINIGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x989A980)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_RESETCAMERAMOVE_OFFSET UNITYSDK_OFFSET(0x98977D0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_RESETTABLEROTATING_OFFSET UNITYSDK_OFFSET(0x9897F70)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SET3DSCREENSHOWENABLED_OFFSET UNITYSDK_OFFSET(0x989ACD0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETCAMERAMOVESTATE_OFFSET UNITYSDK_OFFSET(0x989B720)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETDIRECTIONALLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0x989B4D0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETREFCONTROLLER_OFFSET UNITYSDK_OFFSET(0x989A790)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_STARTARCADEGAME_OFFSET UNITYSDK_OFFSET(0x989ABF0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_STOPCENTERMACHINEVIDEO_OFFSET UNITYSDK_OFFSET(0x9899B80)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKCAMERA_OFFSET UNITYSDK_OFFSET(0x9896400)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKSPINNINGTABLEROTATE_OFFSET UNITYSDK_OFFSET(0x9896FD0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKTABLEROTATINGBYSELF_OFFSET UNITYSDK_OFFSET(0x98973E0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_UNREGISTERMINIGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x989AAC0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x98962A0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x989BFC0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x989C0C0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x989C130)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x989C140)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeShop3DModelController_TypeDefinitionIndex = 65679;

	class UIArcadeShop3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_56AF18CD74DA940A_13* _view; // 0x340
		::MoleMole::UIArcadePageController* _arcadePageController; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIArcadeMachineUnit3DModelController*>* _arcadeMachineUnits; // 0x350
		::MoleMole::Config::ConfigArcadePageCamera* _configArcadePageCamera; // 0x358
		::System::Boolean _isCameraMoving; // 0x360
		::System::Single _cameraMoveTimer; // 0x364
		::System::Action* _cameraMoveFinishCB; // 0x368
		::MoleMole::Config::ConfigArcadeCameraPoint* _curCameraPoint; // 0x370
		::MoleMole::Config::ConfigArcadeCameraPoint* _cameraMoveStartPoint; // 0x378
		::MoleMole::Config::ConfigArcadeCameraPoint* _cameraMoveEndPoint; // 0x380
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* _configArcadeCameraBlendCurve; // 0x388
		::System::Collections::Generic::List_1<::System::Int32>* _arcadeCommonGameIDList; // 0x390
		::System::Int32 _curCenterPositionIndex; // 0x398
		::System::Int32 _curCenterDataIndex; // 0x39C
		::MoleMole::UIArcadeMachineUnit3DModelController* _curMachineUnit3DModelController; // 0x3A0
		::System::Single _spinningTableTargetAngle; // 0x3A8
		::System::Single _spinningTableCurAngle; // 0x3AC
		::System::Single _spinningTableAngleVelocity; // 0x3B0
		::System::Boolean _isTableRotating; // 0x3B4
		::System::Boolean _isTableRotatingBySelf; // 0x3B5
		::System::Boolean _isTableRotatingByGameList; // 0x3B6

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Int32 GetCenterPositionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETCENTERPOSITIONINDEX_OFFSET))(this);
		}

		::System::Int32 GetCenterDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETCENTERDATAINDEX_OFFSET))(this);
		}

		::System::Void EnterSpinningTablePhaseFromEntrance(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCE_OFFSET))(this, finishCB);
		}

		::System::Void EnterSpinningTablePhaseFromEntranceDirect(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_OFFSET))(this, finishCB);
		}

		::System::Single EnterEntrancePhaseFromSpinningTable(::System::Action* finishCB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERENTRANCEPHASEFROMSPINNINGTABLE_OFFSET))(this, finishCB);
		}

		::System::Void PreLeavePlayGamePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_PRELEAVEPLAYGAMEPHASE_OFFSET))(this);
		}

		::System::Single EnterArcadeMachinePhaseFromSpinningTable(::System::Action* finishCB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_OFFSET))(this, finishCB);
		}

		::System::Single EnterSpinningTablePhaseFromArcadeMachine(::System::Action* finishCB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMARCADEMACHINE_OFFSET))(this, finishCB);
		}

		::System::Void EnterPlayGamePhaseFromArcadeMachine(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINE_OFFSET))(this, finishCB);
		}

		::System::Void EnterPlayGamePhaseFromArcadeMachineNoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINENOANIM_OFFSET))(this);
		}

		::System::Void EnterArcadeMachinePhaseFromPlayGame(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAME_OFFSET))(this, finishCB);
		}

		::System::Void EnterArcadeMachinePhaseFromPlayGameNoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAMENOANIM_OFFSET))(this);
		}

		::System::Void EnterPlayGamePhaseFromSpinningTable(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMSPINNINGTABLE_OFFSET))(this, finishCB);
		}

		::System::Void EnterSpinningTablePhaseFromPlayGame(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMPLAYGAME_OFFSET))(this, finishCB);
		}

		::System::Void StopCenterMachineVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_STOPCENTERMACHINEVIDEO_OFFSET))(this);
		}

		::System::Void OnEnterNearPosPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERNEARPOSPHASE_OFFSET))(this);
		}

		::System::Void OnEnterTitleVideoPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERTITLEVIDEOPHASE_OFFSET))(this);
		}

		::System::Void OnEnterGameRTPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERGAMERTPHASE_OFFSET))(this);
		}

		::System::Void RefreshSpinningTableState(::System::Int32 centerDataIndex, ::System::Single deltaY, ::System::Single itemHeight, ::System::Single itemMargin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHSPINNINGTABLESTATE_OFFSET))(this, centerDataIndex, deltaY, itemHeight, itemMargin);
		}

		::System::Void SetRefController(::MoleMole::UIArcadePageController* arcadePageController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIArcadePageController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETREFCONTROLLER_OFFSET))(this, arcadePageController);
		}

		::System::Void RegisterMiniGameWorld(::MoleMole::MiniGame::MiniGameWorldBase* miniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::MiniGameWorldBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REGISTERMINIGAMEWORLD_OFFSET))(this, miniGameWorld);
		}

		::System::Void UnregisterMiniGameWorld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_UNREGISTERMINIGAMEWORLD_OFFSET))(this);
		}

		::System::Void StartArcadeGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_STARTARCADEGAME_OFFSET))(this);
		}

		::System::Void Set3DScreenShowEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SET3DSCREENSHOWENABLED_OFFSET))(this, isEnabled);
		}

		::Enum_3_9E872ED84D1478B9 GetArcadeModelScreenDisplayType()
		{
			return ((::Enum_3_9E872ED84D1478B9(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETARCADEMODELSCREENDISPLAYTYPE_OFFSET))(this);
		}

		::System::Void InitArcadeMachineInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITARCADEMACHINEINFO_OFFSET))(this);
		}

		::System::Void RefreshCommonView(::System::Int32 newPositionIndex, ::System::Int32 newDataIndex, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHCOMMONVIEW_OFFSET))(this, newPositionIndex, newDataIndex, force);
		}

		::System::Void RefreshTableRotatingByGameList(::System::Boolean isRotating)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHTABLEROTATINGBYGAMELIST_OFFSET))(this, isRotating);
		}

		::System::Void ResetTableRotating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_RESETTABLEROTATING_OFFSET))(this);
		}

		::System::Boolean IsTableRotating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ISTABLEROTATING_OFFSET))(this);
		}

		::System::Void SetDirectionalLightState(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETDIRECTIONALLIGHTSTATE_OFFSET))(this, isEnabled);
		}

		::System::Void ResetCameraMove(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_RESETCAMERAMOVE_OFFSET))(this, finishCB);
		}

		::System::Void TickTableRotatingBySelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKTABLEROTATINGBYSELF_OFFSET))(this);
		}

		::MoleMole::UIArcadeMachineUnit3DModelController* GetMachineUnit3DModelController(::System::Int32 dataIndex)
		{
			return ((::MoleMole::UIArcadeMachineUnit3DModelController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETMACHINEUNIT3DMODELCONTROLLER_OFFSET))(this, dataIndex);
		}

		::System::Void TickSpinningTableRotate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKSPINNINGTABLEROTATE_OFFSET))(this);
		}

		::System::Void TickCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKCAMERA_OFFSET))(this);
		}

		::System::Void GetTargetRotationAxisValue(::System::Single startValue, ::System::Single endValue, ::System::Single& targetStartValue, ::System::Single& targetEndValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETTARGETROTATIONAXISVALUE_OFFSET))(this, startValue, endValue, targetStartValue, targetEndValue);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitCameraInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITCAMERAINFO_OFFSET))(this);
		}

		::System::Void SetCameraMoveState(::System::Boolean isMoving)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETCAMERAMOVESTATE_OFFSET))(this, isMoving);
		}

		::System::Void RefreshTableRotating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHTABLEROTATING_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
