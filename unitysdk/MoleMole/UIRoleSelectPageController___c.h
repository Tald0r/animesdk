#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__BINDBTNS_B__82_5_OFFSET UNITYSDK_OFFSET(0xCA50660)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA50610)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA50650)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c_TypeDefinitionIndex = 51298;

	class UIRoleSelectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIRoleSelectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIRoleSelectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRoleSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x32A30);
		}
		static ::System::Action** StaticGet___9__82_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleSelectPageController___c_TypeDefinitionIndex)->GetStaticField(0x32A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindBtns_b__82_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__BINDBTNS_B__82_5_OFFSET))(this);
		}
	};
}
