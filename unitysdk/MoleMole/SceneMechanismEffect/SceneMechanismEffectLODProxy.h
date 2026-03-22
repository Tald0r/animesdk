#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::SceneMechanismEffect { class SceneMechanismEffectLODProxy_Class_1_3336A874CD3123C3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_METHOD_5_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x9945340)
#define MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_METHOD_5_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x9945550)
#define MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9945160)
#define MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9945020)
#define MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x99452A0)

namespace MoleMole::SceneMechanismEffect
{
	inline static constexpr unsigned int SceneMechanismEffectLODProxy_TypeDefinitionIndex = 64570;

	class SceneMechanismEffectLODProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single visibleDistance; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::SceneMechanismEffect::SceneMechanismEffectLODProxy_Class_1_3336A874CD3123C3*>* effectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_43D99DDD80B1E30C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_METHOD_5_43D99DDD80B1E30C_OFFSET))(this);
		}

		::System::Void Method_5_73052712910A9EE7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_METHOD_5_73052712910A9EE7_OFFSET))(this);
		}
	};
}
