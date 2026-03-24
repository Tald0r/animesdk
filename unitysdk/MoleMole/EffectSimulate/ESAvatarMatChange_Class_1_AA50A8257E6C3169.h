#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::EffectSimulate { class ESAvatarMatChange; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_AA50A8257E6C3169_METHOD_1_1D1039410C32AA4D_OFFSET UNITYSDK_OFFSET(0xB5AB2D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_AA50A8257E6C3169__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AB2C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_Class_1_AA50A8257E6C3169_TypeDefinitionIndex = 51116;

	class ESAvatarMatChange_Class_1_AA50A8257E6C3169 : public ::System::Object
	{
	public:
		::MoleMole::EffectSimulate::ESAvatarMatChange* Field_1_0; // 0x10
		::System::Boolean Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_AA50A8257E6C3169__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_1D1039410C32AA4D(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_CLASS_1_AA50A8257E6C3169_METHOD_1_1D1039410C32AA4D_OFFSET))(this, a1, a2, a3);
		}
	};
}
