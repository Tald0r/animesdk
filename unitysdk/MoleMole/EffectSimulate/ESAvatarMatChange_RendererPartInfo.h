#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo_Item; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_0790347A350315BA_OFFSET UNITYSDK_OFFSET(0xB0BBB70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_1FDFD3529235BC46_OFFSET UNITYSDK_OFFSET(0xB0BC560)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_1_OFFSET UNITYSDK_OFFSET(0xB0BC4E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_OFFSET UNITYSDK_OFFSET(0xB0BBAF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_813F339405C9659E_OFFSET UNITYSDK_OFFSET(0xB0BBA10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_ABA1DD894C5FFAFC_OFFSET UNITYSDK_OFFSET(0xB0BC010)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_B0A7B48A95450D3C_OFFSET UNITYSDK_OFFSET(0xB0BBEC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0xB0BC2B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB0B0F40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_RendererPartInfo_TypeDefinitionIndex = 51117;

	class ESAvatarMatChange_RendererPartInfo : public ::System::Object
	{
	public:
		::System::Boolean applyAllRenderers; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*>* rendererPartInfos; // 0x18
		::UnityEngine::GameObject* m_stTargetGo; // 0x20
		::MoleMole::EffectSimulate::ESAvatarMatChange* m_stAMCCtx; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4E056BB144231A80(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_OFFSET))(this, a1);
		}

		::System::Void Method_1_813F339405C9659E(::UnityEngine::GameObject* a1, ::MoleMole::EffectSimulate::ESAvatarMatChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::EffectSimulate::ESAvatarMatChange*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_813F339405C9659E_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_0790347A350315BA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_0790347A350315BA_OFFSET))(this);
		}

		::System::Collections::IEnumerable* Method_1_B0A7B48A95450D3C()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_B0A7B48A95450D3C_OFFSET))(this);
		}

		::System::Void Method_1_ED79705457B92B5C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_ED79705457B92B5C_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* Method_1_ABA1DD894C5FFAFC()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_ABA1DD894C5FFAFC_OFFSET))(this);
		}

		::System::Void Method_1_4E056BB144231A80_1(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo_Item*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_4E056BB144231A80_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_1FDFD3529235BC46(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_RENDERERPARTINFO_METHOD_1_1FDFD3529235BC46_OFFSET))(this, a1);
		}
	};
}
