#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoSurfSingleDigit; }

#define MOLEMOLE_MONOSURFDOUBLEDIGIT_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA7ED490)
#define MOLEMOLE_MONOSURFDOUBLEDIGIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA7ED5D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfDoubleDigit_TypeDefinitionIndex = 38834;

	class MonoSurfDoubleDigit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoSurfSingleDigit* high; // 0x18
		::MoleMole::MonoSurfSingleDigit* low; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFDOUBLEDIGIT__CTOR_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int32 a1, ::Class_2_777A5D016ADC7368* a2, ::Il2CppArray<::Foundation::AssetPath>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_777A5D016ADC7368*, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFDOUBLEDIGIT_SETVALUE_OFFSET))(this, a1, a2, a3);
		}
	};
}
