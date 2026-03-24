#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x873EAD0)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x873EB10)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x873EB20)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x873EC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex = 74861;

	class UIInLevelEmoticonsTipWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelEmoticonsTipWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelEmoticonsTipWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40710);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40718);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__4_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEmoticonsTipWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x40720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___C__ONUIINIT_B__4_1_OFFSET))(this);
		}
	};
}
