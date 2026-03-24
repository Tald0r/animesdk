#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_F4F5EB014916907D.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace MoleMole { class UISuibianTempleManageDetailPageController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_GET_FADEANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0xDF4AEE0)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_GET_FADEINTIME_OFFSET UNITYSDK_OFFSET(0xDF4AF00)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_GET_FADEOUTTIME_OFFSET UNITYSDK_OFFSET(0xDF4AEF0)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONENTERDETAIL_OFFSET UNITYSDK_OFFSET(0xDF4B5E0)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONEXITDETAIL_OFFSET UNITYSDK_OFFSET(0xDF4B640)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONOPENMANAGEINFO_OFFSET UNITYSDK_OFFSET(0xDF4B6A0)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONTEMPLEFADEINFINISHED_OFFSET UNITYSDK_OFFSET(0xDF4B3F0)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONTEMPLEFADEOUTFINISHED_OFFSET UNITYSDK_OFFSET(0xDF4B580)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_PLAYTEMPLEANIMATION_OFFSET UNITYSDK_OFFSET(0xDF4B040)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_PLAYTEMPLEFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0xDF4AF10)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_PLAYTEMPLEFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xDF4B450)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDF4B710)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER__PLAYTEMPLEFADEINANIMATION_B__11_0_OFFSET UNITYSDK_OFFSET(0xDF4B750)
#define MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER__PLAYTEMPLEFADEOUTANIMATION_B__13_0_OFFSET UNITYSDK_OFFSET(0xDF4B770)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSimWidgetController_TypeDefinitionIndex = 50630;

	class UISuibianTempleSimWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::String* _FadeAnimationName_k__BackingField; // 0x2A0
		::System::Single _FadeOutTime_k__BackingField; // 0x2A8
		::System::Single _FadeInTime_k__BackingField; // 0x2AC
		::Enum_3_F4F5EB014916907D templateAnimState; // 0x2B0
		::MoleMole::UISuibianTempleManageDetailPageController* DetailPage; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::String* get_FadeAnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_GET_FADEANIMATIONNAME_OFFSET))(this);
		}

		::System::Single get_FadeOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_GET_FADEOUTTIME_OFFSET))(this);
		}

		::System::Single get_FadeInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_GET_FADEINTIME_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayTempleFadeInAnimation()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_PLAYTEMPLEFADEINANIMATION_OFFSET))(this);
		}

		::System::Void OnTempleFadeInFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONTEMPLEFADEINFINISHED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayTempleFadeOutAnimation()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_PLAYTEMPLEFADEOUTANIMATION_OFFSET))(this);
		}

		::System::Void OnTempleFadeOutFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONTEMPLEFADEOUTFINISHED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayTempleAnimation(::System::String* animName, ::System::Single normalizedSpeed, ::System::Single configTime, ::System::Action* callback)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_PLAYTEMPLEANIMATION_OFFSET))(this, animName, normalizedSpeed, configTime, callback);
		}

		::System::Void OnEnterDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONENTERDETAIL_OFFSET))(this);
		}

		::System::Void OnExitDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONEXITDETAIL_OFFSET))(this);
		}

		::System::Void OnOpenManageInfo(::System::Boolean open)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER_ONOPENMANAGEINFO_OFFSET))(this, open);
		}

		::System::Void _PlayTempleFadeInAnimation_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER__PLAYTEMPLEFADEINANIMATION_B__11_0_OFFSET))(this);
		}

		::System::Void _PlayTempleFadeOutAnimation_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESIMWIDGETCONTROLLER__PLAYTEMPLEFADEOUTANIMATION_B__13_0_OFFSET))(this);
		}
	};
}
