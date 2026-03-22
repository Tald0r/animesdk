#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7D1EAB0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7D1EAF0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__DOPREBATTLEPREFABWARMUP_B__79_0_OFFSET UNITYSDK_OFFSET(0x7D1EB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextContainerChildWindowController___c_TypeDefinitionIndex = 56983;

	class UIInLevelDamageTextContainerChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>** StaticGet___9__79_0()
		{
			return (::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelDamageTextContainerChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D00);
		}
		static ::MoleMole::UIInLevelDamageTextContainerChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelDamageTextContainerChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelDamageTextContainerChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoPrebattlePrefabWarmup_b__79_0(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject* o)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__DOPREBATTLEPREFABWARMUP_B__79_0_OFFSET))(this, assetPath, o);
		}
	};
}
