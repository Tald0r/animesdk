#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_9AE843FF905C0BDB;
class Class_3_F35B080B137ECC46;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_EXITEFFECT_OFFSET UNITYSDK_OFFSET(0xA474780)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_INIT_OFFSET UNITYSDK_OFFSET(0xA474340)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STARTEFFECT_OFFSET UNITYSDK_OFFSET(0xA4743F0)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STOPEFFECT_OFFSET UNITYSDK_OFFSET(0xA4745F0)
#define MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA474970)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaterialAnimationEffectKeyConfig_TypeDefinitionIndex = 42695;

	class MonoMaterialAnimationEffectKeyConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* effectKeys; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_INIT_OFFSET))(this);
		}

		::System::Void StartEffect(::Class_3_F35B080B137ECC46* a1, ::Class_3_9AE843FF905C0BDB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STARTEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void StopEffect(::Class_3_9AE843FF905C0BDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_STOPEFFECT_OFFSET))(this, a1);
		}

		::System::Void ExitEffect(::Class_3_9AE843FF905C0BDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9AE843FF905C0BDB*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMATERIALANIMATIONEFFECTKEYCONFIG_EXITEFFECT_OFFSET))(this, a1);
		}
	};
}
