#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_777A5D016ADC7368;
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_MONOSURFSINGLEDIGIT_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA6540C0)
#define MOLEMOLE_MONOSURFSINGLEDIGIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA654190)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfSingleDigit_TypeDefinitionIndex = 68807;

	class MonoSurfSingleDigit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* outer; // 0x18
		::UnityEngine::UI::Image* inner; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSINGLEDIGIT__CTOR_OFFSET))(this);
		}

		::System::Void SetValue(::Class_2_777A5D016ADC7368* a1, ::Foundation::AssetPath a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSINGLEDIGIT_SETVALUE_OFFSET))(this, a1, a2);
		}
	};
}
