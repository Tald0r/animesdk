#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo_Item; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4CE236EE8D8E7290_OFFSET UNITYSDK_OFFSET(0x972BB20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_OFFSET UNITYSDK_OFFSET(0x972C960)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_CA887D86345F9813_OFFSET UNITYSDK_OFFSET(0x972C9E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9721DA0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_RendererPartInfo_TypeDefinitionIndex = 54443;

	class ESAvatarMatChange_RendererPartInfo : public ::System::Object
	{
	public:
		::System::Boolean applyAllRenderers; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*>* rendererPartInfos; // 0x18
		::UnityEngine::GameObject* m_stTargetGo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4E056BB144231A80(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_OFFSET))(this, a1);
		}

		::System::Void Method_1_4CE236EE8D8E7290(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4CE236EE8D8E7290_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerable* Method_1_CA887D86345F9813()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_CA887D86345F9813_OFFSET))(this);
		}
	};
}
