#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD26EE0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD26F20)
#define MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__INITSWITCHAVATARCOMPONENT_B__13_0_OFFSET UNITYSDK_OFFSET(0xBD26F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonSoloAidChildWindowController___c_TypeDefinitionIndex = 56730;

	class UIInLevelSkillButtonSoloAidChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelSkillButtonSoloAidChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelSkillButtonSoloAidChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSkillButtonSoloAidChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34700);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSkillButtonSoloAidChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitSwitchAvatarComponent_b__13_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONSOLOAIDCHILDWINDOWCONTROLLER___C__INITSWITCHAVATARCOMPONENT_B__13_0_OFFSET))(this);
		}
	};
}
