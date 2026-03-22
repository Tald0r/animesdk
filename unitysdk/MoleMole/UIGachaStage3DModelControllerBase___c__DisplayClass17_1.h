#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaStage3DModelControllerBase___c__DisplayClass17_0; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___C__DISPLAYCLASS17_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBF7AD60)
#define MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___C__DISPLAYCLASS17_1__PRELOADITEMSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0xBF7AD70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStage3DModelControllerBase___c__DisplayClass17_1_TypeDefinitionIndex = 60227;

	class UIGachaStage3DModelControllerBase___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::Foundation::AssetPath assetPath; // 0x10
		::MoleMole::UIGachaStage3DModelControllerBase___c__DisplayClass17_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___C__DISPLAYCLASS17_1__CTOR_OFFSET))(this);
		}

		::System::Void _PreloadItemStage_b__0(::Foundation::AssetPath path, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGE3DMODELCONTROLLERBASE___C__DISPLAYCLASS17_1__PRELOADITEMSTAGE_B__0_OFFSET))(this, path, go);
		}
	};
}
