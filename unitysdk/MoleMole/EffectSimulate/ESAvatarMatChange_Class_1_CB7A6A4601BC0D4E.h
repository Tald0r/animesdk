#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_CB7A6A4601BC0D4E_METHOD_1_3DBBE5136150B7CF_OFFSET UNITYSDK_OFFSET(0x13FB10D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_CB7A6A4601BC0D4E__CTOR_OFFSET UNITYSDK_OFFSET(0x13FB10C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_Class_1_CB7A6A4601BC0D4E_TypeDefinitionIndex = 54440;

	class ESAvatarMatChange_Class_1_CB7A6A4601BC0D4E : public ::System::Object
	{
	public:
		::System::String* Field_1_1; // 0x10
		::MoleMole::EffectSimulate::ESAvatarMatChange* Field_1_0; // 0x18
		::System::Boolean Field_1_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_CB7A6A4601BC0D4E__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3DBBE5136150B7CF(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_CB7A6A4601BC0D4E_METHOD_1_3DBBE5136150B7CF_OFFSET))(this, a1, a2, a3);
		}
	};
}
