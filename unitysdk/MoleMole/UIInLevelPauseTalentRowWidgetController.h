#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_01F220EE9A01429C;
class Class_2_208CC9941471731A_681;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseSkillDetailRowWidgetController; }
namespace MoleMole { class UIRoleTalentBGColor; }

#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x874DEE0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x874DF80)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x874DB30)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x874DBD0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_REFRESHTALENT_OFFSET UNITYSDK_OFFSET(0x874E060)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x874E870)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x874E830)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET UNITYSDK_OFFSET(0x874E9D0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x874EAE0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x874EB50)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x874EBD0)
#define MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x874EC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTalentRowWidgetController_TypeDefinitionIndex = 53294;

	class UIInLevelPauseTalentRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_talentBG()
		{
			return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTalentRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x452B0);
		}
		::Class_2_01F220EE9A01429C* _view; // 0x2A0
		::MoleMole::UIRoleTalentBGColor* configColor; // 0x2A8
		::System::Boolean isFold; // 0x2B0
		::MoleMole::UIInLevelPauseSkillDetailRowWidgetController* skillDetailRowWidgetController; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshTalent(::Class_2_208CC9941471731A_681* template_, ::Class_2_D89CCC627A66D0AD* avatarItemData, ::System::Boolean unlock, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_681*, ::Class_2_D89CCC627A66D0AD*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER_REFRESHTALENT_OFFSET))(this, template_, avatarItemData, unlock, index);
		}

		::System::Void _OnUIOpen_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
