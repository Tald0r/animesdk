#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__BIND_B__16_0_OFFSET UNITYSDK_OFFSET(0xA4034F0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4034A0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4034E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManagePageController___c_TypeDefinitionIndex = 67963;

	class UISuibianTempleManagePageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__16_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManagePageController___c_TypeDefinitionIndex)->GetStaticField(0x38F40);
		}
		static ::MoleMole::UISuibianTempleManagePageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleManagePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleManagePageController___c_TypeDefinitionIndex)->GetStaticField(0x38F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEPAGECONTROLLER___C__BIND_B__16_0_OFFSET))(this);
		}
	};
}
