#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoSurfDoubleDigit; }

#define MOLEMOLE_MONOSURFTIME_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA603230)
#define MOLEMOLE_MONOSURFTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xA603360)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfTime_TypeDefinitionIndex = 37168;

	class MonoSurfTime : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoSurfDoubleDigit* hour; // 0x18
		::MoleMole::MonoSurfDoubleDigit* minute; // 0x20
		::MoleMole::MonoSurfDoubleDigit* second; // 0x28
		::Il2CppArray<::Foundation::AssetPath>* digits; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFTIME__CTOR_OFFSET))(this);
		}

		::System::Void SetValue(::System::Int32 a1, ::Class_2_777A5D016ADC7368* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFTIME_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
