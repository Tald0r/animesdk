#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_INITTEMPLEPARTICLE_OFFSET UNITYSDK_OFFSET(0x8F97010)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8F96DF0)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_START_OFFSET UNITYSDK_OFFSET(0x8F96D90)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x8F976C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTempleEffectControl_TypeDefinitionIndex = 60140;

	class MonoTempleEffectControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MeshFilter* Mesh; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Particles; // 0x20
		::UnityEngine::MeshFilter* Field_5_2; // 0x28
		::UnityEngine::MeshRenderer* Field_5_3; // 0x30
		::System::Boolean Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void InitTempleParticle(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_INITTEMPLEPARTICLE_OFFSET))(this, a1);
		}
	};
}
