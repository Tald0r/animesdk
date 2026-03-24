#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_ITEM_METHOD_1_8EA91B93B34817EA_OFFSET UNITYSDK_OFFSET(0x10AC5C80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_ITEM_METHOD_1_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x10AC5C10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_ITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10AC5BC0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_RendererPartInfo_Item_TypeDefinitionIndex = 51119;

	class ESAvatarMatChange_RendererPartInfo_Item : public ::System::Object
	{
	public:
		::System::String* renderPath; // 0x10
		::System::Boolean applyAllMaterials; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* materialIndexList; // 0x20
		::UnityEngine::GameObject* m_stTargetGo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_ITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_ITEM_METHOD_1_C433AF37CE9D6E5B_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_1_8EA91B93B34817EA()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_ITEM_METHOD_1_8EA91B93B34817EA_OFFSET))(this);
		}
	};
}
