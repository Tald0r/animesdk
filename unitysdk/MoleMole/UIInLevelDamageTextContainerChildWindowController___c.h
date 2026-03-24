#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x914EB00)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x914EB40)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__DOPREBATTLEPREFABWARMUP_B__79_0_OFFSET UNITYSDK_OFFSET(0x914EB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextContainerChildWindowController___c_TypeDefinitionIndex = 50664;

	class UIInLevelDamageTextContainerChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelDamageTextContainerChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelDamageTextContainerChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelDamageTextContainerChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3B920);
		}
		static ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>** StaticGet___9__79_0()
		{
			return (::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelDamageTextContainerChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3B928);
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
