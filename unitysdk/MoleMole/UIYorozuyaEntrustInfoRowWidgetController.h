#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIYorozuyaEntrustInfoRowWidgetController_EChallengeType.h"
#include "unitysdk/MoleMole/UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_1A3197598F874EB7;
class Class_2_3364563BC1008E02;
class Class_3_C248956D95AFBB36;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAC2BC0)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAAC2C60)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAAC2990)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAAC2B10)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETABYSS_OFFSET UNITYSDK_OFFSET(0xAAC3B70)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETCHALLENGE_OFFSET UNITYSDK_OFFSET(0xAAC31E0)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xAAC4570)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETHOLLOWCHALLENGEBYOVERRIDEITEMDATA_OFFSET UNITYSDK_OFFSET(0xAAC3AB0)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETHOLLOWCHALLENGE_OFFSET UNITYSDK_OFFSET(0xAAC3A20)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETPLAYTYPETEXT_OFFSET UNITYSDK_OFFSET(0xAAC4280)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETRALLYCHALLENGE_OFFSET UNITYSDK_OFFSET(0xAAC3040)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CHECKCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0xAAC2E20)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CHECKCHALLENGEIDVALID_OFFSET UNITYSDK_OFFSET(0xAAC2D40)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC4610)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAC4620)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAAC4690)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAAC4710)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAAC4770)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaEntrustInfoRowWidgetController_TypeDefinitionIndex = 65047;

	class UIYorozuyaEntrustInfoRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_3364563BC1008E02* _view; // 0x2D0
		::Class_2_1A3197598F874EB7* _questModel; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean _CheckChallengeIDValid(::System::Int32 questID, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CHECKCHALLENGEIDVALID_OFFSET))(this, questID, type);
		}

		::System::Boolean _CheckChallengeFinish(::System::Int32 questID, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CHECKCHALLENGEFINISH_OFFSET))(this, questID, type);
		}

		::System::Void SetRallyChallenge(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETRALLYCHALLENGE_OFFSET))(this, id);
		}

		::System::Void SetHollowChallenge(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETHOLLOWCHALLENGE_OFFSET))(this, id);
		}

		::System::Void SetHollowChallengeByOverrideItemData(::System::Int32 id, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo overrideChangeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETHOLLOWCHALLENGEBYOVERRIDEITEMDATA_OFFSET))(this, id, overrideChangeInfo);
		}

		::System::Void SetAbyss(::Class_3_C248956D95AFBB36* abyss)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C248956D95AFBB36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETABYSS_OFFSET))(this, abyss);
		}

		::System::Void SetPlayTypeText(::System::String* title, ::System::Int32 progress, ::System::Int32 totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETPLAYTYPETEXT_OFFSET))(this, title, progress, totalProgress);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void SetChallenge(::System::Int32 id, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType type, ::System::Boolean showCompleteReward, ::System::Nullable_1<::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo> overrideChangeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType, ::System::Boolean, ::System::Nullable_1<::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETCHALLENGE_OFFSET))(this, id, type, showCompleteReward, overrideChangeInfo);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
