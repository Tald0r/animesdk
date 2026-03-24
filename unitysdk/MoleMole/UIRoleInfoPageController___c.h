#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x86884E0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8688520)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONUIINIT_B__72_1_OFFSET UNITYSDK_OFFSET(0x8688530)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__UPDATEINFOBTNTEXT_B__109_0_OFFSET UNITYSDK_OFFSET(0x8688740)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController___c_TypeDefinitionIndex = 74630;

	class UIRoleInfoPageController___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::String*>** StaticGet___9__109_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x31DD0);
		}
		static ::MoleMole::UIRoleInfoPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleInfoPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x31DD8);
		}
		static ::System::Action** StaticGet___9__72_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x31DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__72_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONUIINIT_B__72_1_OFFSET))(this);
		}

		::System::String* _UpdateInfoBtnText_b__109_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__UPDATEINFOBTNTEXT_B__109_0_OFFSET))(this);
		}
	};
}
