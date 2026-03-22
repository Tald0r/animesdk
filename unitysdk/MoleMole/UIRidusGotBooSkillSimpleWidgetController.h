#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_343;
class Class_2_21768B754ED9AFE6;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class RidusGotBooSkillEx; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_GET_SKILLCFG_OFFSET UNITYSDK_OFFSET(0x73B53D0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x73B5250)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x73B5460)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x73B52F0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x73B4A00)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x73B4AA0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_REFRESHBYSKILLEX_OFFSET UNITYSDK_OFFSET(0x73B4C10)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_SAMPLEANIMATIONBYTIME_OFFSET UNITYSDK_OFFSET(0x73B5660)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_SETISNEXT_OFFSET UNITYSDK_OFFSET(0x73B55F0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x73B5800)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x73B5860)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x73B58D0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x73B5950)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x73B59D0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x73B5A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSkillSimpleWidgetController_TypeDefinitionIndex = 64514;

	class UIRidusGotBooSkillSimpleWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 interruptSkillType = 0x4; // 0x0
		// static const ::System::String* AnimNoise; // 0x0
		// static const ::System::String* AnimFeverKey; // 0x0
		::Class_2_21768B754ED9AFE6* _view; // 0x2D0
		::MoleMole::RidusGotBooSkillEx* m_skillInfo; // 0x2D8
		::System::String* iconFormat; // 0x2E0
		::System::String* correctAnim; // 0x2E8
		::System::String* wrongAnim; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_343* get_SkillCfg()
		{
			return ((::Class_2_208CC9941471731A_343*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_GET_SKILLCFG_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetIsNext(::System::Boolean isNext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_SETISNEXT_OFFSET))(this, isNext);
		}

		::System::Void RefreshBySkillEx(::MoleMole::RidusGotBooSkillEx* skillEx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::RidusGotBooSkillEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_REFRESHBYSKILLEX_OFFSET))(this, skillEx);
		}

		::System::Void SampleAnimationByTime(::Class_2_9E3E3CDA608A4F58* anim, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9E3E3CDA608A4F58*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER_SAMPLEANIMATIONBYTIME_OFFSET))(this, anim, animName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
