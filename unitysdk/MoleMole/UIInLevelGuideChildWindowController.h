#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_5D14E331734C3C6B.h"
#include "unitysdk/Enum_3_AA439AE9E76594AE.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CAC0F23A7272040;
class Class_2_0D9C707A5EC39DEF;
namespace MoleMole { class ItemStyle; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelGuideChildWindowController_RemovingArrow; }
namespace MoleMole { class UIInLevelGuideItemChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ADDARROWITEM_1_OFFSET UNITYSDK_OFFSET(0xA3A8FC0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ADDARROWITEM_OFFSET UNITYSDK_OFFSET(0xA3A7B60)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_CALCULATEGUIDEITEMSHOW_OFFSET UNITYSDK_OFFSET(0xA3A9FA0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_CHECKENABLE_OFFSET UNITYSDK_OFFSET(0xA3AAD30)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_COLLECTALL_OFFSET UNITYSDK_OFFSET(0xA3A63C0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_COLLECTARROWITEM_OFFSET UNITYSDK_OFFSET(0xA3A6B50)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_FINDENTITYLOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA3AB330)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_FINDTARGETPOINTITEM_OFFSET UNITYSDK_OFFSET(0xA3A7280)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETARROWITEM_OFFSET UNITYSDK_OFFSET(0xA3A8CE0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETENTITYHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3AD3C0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETGUIDEITEM_OFFSET UNITYSDK_OFFSET(0xA3A5C10)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETITEMSTYLE_OFFSET UNITYSDK_OFFSET(0xA3AD000)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0xA3ABF50)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA3A5540)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GUIDEUIFOCUSTARGET_OFFSET UNITYSDK_OFFSET(0xA3A92E0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_HANDLEUSERDATA_OFFSET UNITYSDK_OFFSET(0xA3A7730)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_INITTWEENPARAM_OFFSET UNITYSDK_OFFSET(0xA3AD240)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_INITWEIGHTANDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3A5E40)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ISENTITYALIVE_OFFSET UNITYSDK_OFFSET(0xA3ABB00)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA3AA4C0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3A5550)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA3A5F40)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONREGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0xA3A5940)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA3A5ED0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xA3A59F0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3A5FE0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3A55F0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3A5880)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_POPARROWITEM_OFFSET UNITYSDK_OFFSET(0xA3ACCF0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_PRECHECKCAMERA_OFFSET UNITYSDK_OFFSET(0xA3AADD0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REFRESHARROWITEM_1_OFFSET UNITYSDK_OFFSET(0xA3AC7E0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REFRESHARROWITEM_OFFSET UNITYSDK_OFFSET(0xA3AC200)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_RETURNITEM_1_OFFSET UNITYSDK_OFFSET(0xA3AC0F0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_RETURNITEM_OFFSET UNITYSDK_OFFSET(0xA3ABE80)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETALLTARGETENTITYITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0xA3AD500)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETALLTARGETPOSITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0xA3AD690)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0xA3A5CB0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGETPOINTINLISTVISIBLE_OFFSET UNITYSDK_OFFSET(0xA3A7040)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGET_1_OFFSET UNITYSDK_OFFSET(0xA3A8E00)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGET_OFFSET UNITYSDK_OFFSET(0xA3A78B0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETVIEWENABLE_OFFSET UNITYSDK_OFFSET(0xA3A5800)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETVIEWVISABLE_OFFSET UNITYSDK_OFFSET(0xA3A77A0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xA3A5D70)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALLTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xA3A7580)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALLTARGETPOINT_OFFSET UNITYSDK_OFFSET(0xA3A6710)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALL_OFFSET UNITYSDK_OFFSET(0xA3A62F0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xA3A7410)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETPOINT_1_OFFSET UNITYSDK_OFFSET(0xA3A6D80)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETPOINT_OFFSET UNITYSDK_OFFSET(0xA3A6C60)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKENTITY_OFFSET UNITYSDK_OFFSET(0xA3A9720)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKFADEENTITYARROW_OFFSET UNITYSDK_OFFSET(0xA3AB910)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKSTEP_OFFSET UNITYSDK_OFFSET(0xA3A7E80)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0xA3AB620)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TRYPLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA3A6070)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_UPDATETARGETPOS_OFFSET UNITYSDK_OFFSET(0xA3AD2E0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARMUP_OFFSET UNITYSDK_OFFSET(0xA3AD7E0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARNNINGTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xA3A9DD0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARNNINGTARGET_OFFSET UNITYSDK_OFFSET(0xA3A9C10)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3ADC60)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER__WARMUP_G___WARMUPW_78_0_OFFSET UNITYSDK_OFFSET(0xA3ADB50)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3AE020)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xA3AE090)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA3AE0F0)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3AE100)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3AE110)
#define MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3AE120)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelGuideChildWindowController_TypeDefinitionIndex = 62945;

	class UIInLevelGuideChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* DefaultStyleName; // 0x0
		::Class_2_0D9C707A5EC39DEF* _view; // 0x2F8
		::System::Boolean enableState; // 0x300
		::System::Single tickDelta; // 0x304
		::UnityEngine::Transform* mainCameraTran; // 0x308
		::UnityEngine::Camera* mainCameraRef; // 0x310
		::UnityEngine::RectTransform* rootTran; // 0x318
		::System::Single screenWidth; // 0x320
		::System::Single screenHeight; // 0x324
		::System::Collections::Generic::List_1<::System::UInt32>* entityList; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* targetPosList; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* targetPosDic; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::UnityEngine::Vector3>*>* targetGetPosDic; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIInLevelGuideItemChildWindowController*>* entityArrowDic; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIInLevelGuideItemChildWindowController*>* targetPosArrowDic; // 0x350
		::System::Collections::Generic::HashSet_1<::System::UInt32>* tempEntityRemoveList; // 0x358
		::System::Collections::Generic::HashSet_1<::System::Int32>* tempRemoveList; // 0x360
		::System::Int32 seed; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelGuideChildWindowController_RemovingArrow*>* removeingArrow; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnRegisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONREGISTEREVENTS_OFFSET))(this);
		}

		::System::Void OnStatusChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONSTATUSCHANGE_OFFSET))(this, args);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TryPlayFadein()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TRYPLAYFADEIN_OFFSET))(this);
		}

		::System::Void StopAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALL_OFFSET))(this);
		}

		::System::Void StopAllTargetPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALLTARGETPOINT_OFFSET))(this);
		}

		::System::Void StopTargetPoint(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETPOINT_OFFSET))(this, name);
		}

		::System::Void SetTargetPointInListVisible(::System::Collections::Generic::List_1<::System::String*>* nameList, ::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGETPOINTINLISTVISIBLE_OFFSET))(this, nameList, isVisible);
		}

		::System::Void StopTargetPoint_1(::System::Collections::Generic::List_1<::System::String*>* nameList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETPOINT_1_OFFSET))(this, nameList);
		}

		::System::Void StopTargetEntity(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPTARGETENTITY_OFFSET))(this, entityId);
		}

		::System::Void StopAllTargetEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_STOPALLTARGETENTITY_OFFSET))(this);
		}

		::System::Void HandleUserData(::System::Object* userData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_HANDLEUSERDATA_OFFSET))(this, userData);
		}

		::System::Void SetViewEnable(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETVIEWENABLE_OFFSET))(this, state);
		}

		::System::Void SetViewVisable(::System::Boolean visable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETVIEWVISABLE_OFFSET))(this, visable);
		}

		::System::Int32 SetTarget(::UnityEngine::Vector3 pos, ::System::String* style, ::Class_1_1CAC0F23A7272040* param, ::System::String* anchorName, ::System::Func_1<::UnityEngine::Vector3>* getPosFunc, ::System::Boolean visible)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::Class_1_1CAC0F23A7272040*, ::System::String*, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGET_OFFSET))(this, pos, style, param, anchorName, getPosFunc, visible);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* GetArrowItem(::System::UInt32 entityID)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETARROWITEM_OFFSET))(this, entityID);
		}

		::System::UInt32 SetTarget_1(::MoleMole::Battle::Entity* entity, ::System::String* style, ::Class_1_1CAC0F23A7272040* param, ::System::Boolean visible)
		{
			return ((::System::UInt32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::Class_1_1CAC0F23A7272040*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETTARGET_1_OFFSET))(this, entity, style, param, visible);
		}

		::System::Void GuideUIFocusTarget(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GUIDEUIFOCUSTARGET_OFFSET))(this, entityID);
		}

		::System::Void WarnningTarget(::System::Int32 index, ::System::Boolean warnning)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARNNINGTARGET_OFFSET))(this, index, warnning);
		}

		::System::Void WarnningTargetEntity(::System::UInt32 id, ::System::Boolean warnning, ::Enum_3_5D14E331734C3C6B speedType, ::Enum_3_AA439AE9E76594AE warningType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::Enum_3_5D14E331734C3C6B, ::Enum_3_AA439AE9E76594AE))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARNNINGTARGETENTITY_OFFSET))(this, id, warnning, speedType, warningType);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* SetItemVisible(::System::String* tagStr, ::System::Boolean show)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETITEMVISIBLE_OFFSET))(this, tagStr, show);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* GetGuideItem(::System::String* tagStr)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETGUIDEITEM_OFFSET))(this, tagStr);
		}

		::System::Boolean CalculateGuideItemShow(::System::String* tagStr, ::System::Boolean defaultValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_CALCULATEGUIDEITEMSHOW_OFFSET))(this, tagStr, defaultValue);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean CheckEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_CHECKENABLE_OFFSET))(this);
		}

		::System::Void InitWeightAndHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_INITWEIGHTANDHEIGHT_OFFSET))(this);
		}

		::System::Void PreCheckCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_PRECHECKCAMERA_OFFSET))(this);
		}

		::System::Void TickEntity(::MoleMole::Battle::Entity* ent, ::UnityEngine::Vector3 avatarPos, ::UnityEngine::Vector3 forward, ::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKENTITY_OFFSET))(this, ent, avatarPos, forward, item);
		}

		::System::Void TickTargetPosition(::UnityEngine::Vector3 targetPos, ::UnityEngine::Vector3 avatarPos, ::UnityEngine::Vector3 forward, ::MoleMole::UIInLevelGuideItemChildWindowController* item, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::UIInLevelGuideItemChildWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKTARGETPOSITION_OFFSET))(this, targetPos, avatarPos, forward, item, index);
		}

		::System::Void TickFadeEntityArrow(::System::UInt32 entityId, ::UnityEngine::Vector3 forward, ::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKFADEENTITYARROW_OFFSET))(this, entityId, forward, item);
		}

		::System::Void TickStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_TICKSTEP_OFFSET))(this);
		}

		::System::Void ReturnItem(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_RETURNITEM_OFFSET))(this, entityId);
		}

		::System::Void ReturnItem_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_RETURNITEM_1_OFFSET))(this, index);
		}

		::System::Void CollectArrowItem(::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_COLLECTARROWITEM_OFFSET))(this, item);
		}

		::System::Void CollectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_COLLECTALL_OFFSET))(this);
		}

		::System::Void RefreshArrowItem(::MoleMole::Battle::Entity* ent, ::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REFRESHARROWITEM_OFFSET))(this, ent, item);
		}

		::System::Void RefreshArrowItem_1(::UnityEngine::Vector3 pos, ::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_REFRESHARROWITEM_1_OFFSET))(this, pos, item);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* PopArrowItem(::System::String* style, ::Class_1_1CAC0F23A7272040* param, ::System::Boolean visible)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::System::String*, ::Class_1_1CAC0F23A7272040*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_POPARROWITEM_OFFSET))(this, style, param, visible);
		}

		::MoleMole::ItemStyle* GetItemStyle(::System::String* style)
		{
			return ((::MoleMole::ItemStyle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETITEMSTYLE_OFFSET))(this, style);
		}

		::System::Void AddArrowItem(::System::String* style, ::System::Int32 index, ::Class_1_1CAC0F23A7272040* param, ::System::String* anchorName, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_1_1CAC0F23A7272040*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ADDARROWITEM_OFFSET))(this, style, index, param, anchorName, visible);
		}

		::UnityEngine::Vector3 GetTargetPos(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETTARGETPOS_OFFSET))(this, index);
		}

		::System::Boolean UpdateTargetPos(::System::Int32 index, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_UPDATETARGETPOS_OFFSET))(this, index, pos);
		}

		::UnityEngine::Transform* FindEntityLockTransform(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_FINDENTITYLOCKTRANSFORM_OFFSET))(this, entity);
		}

		::System::Void InitTweenParam(::MoleMole::UIInLevelGuideItemChildWindowController* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelGuideItemChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_INITTWEENPARAM_OFFSET))(this, item);
		}

		::MoleMole::UIInLevelGuideItemChildWindowController* AddArrowItem_1(::MoleMole::Battle::Entity* ent, ::System::String* style, ::Class_1_1CAC0F23A7272040* param, ::System::Boolean visible)
		{
			return ((::MoleMole::UIInLevelGuideItemChildWindowController*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::Class_1_1CAC0F23A7272040*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ADDARROWITEM_1_OFFSET))(this, ent, style, param, visible);
		}

		::System::Boolean IsEntityAlive(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_ISENTITYALIVE_OFFSET))(this, ent);
		}

		::System::Single GetEntityHeight(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_GETENTITYHEIGHT_OFFSET))(this, ent);
		}

		::System::Int32 FindTargetPointItem(::System::String* anchorName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_FINDTARGETPOINTITEM_OFFSET))(this, anchorName);
		}

		::System::Void SetAllTargetEntityItemVisible(::System::Boolean visibleState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETALLTARGETENTITYITEMVISIBLE_OFFSET))(this, visibleState);
		}

		::System::Void SetAllTargetPosItemVisible(::System::Boolean visibleState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_SETALLTARGETPOSITEMVISIBLE_OFFSET))(this, visibleState);
		}

		::System::Void Warmup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER_WARMUP_OFFSET))(this);
		}

		::System::Void _Warmup_g___WarmupW_78_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER__WARMUP_G___WARMUPW_78_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELGUIDECHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
