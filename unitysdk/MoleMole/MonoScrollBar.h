#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOSCROLLBAR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xB3BB310)
#define MOLEMOLE_MONOSCROLLBAR__CTOR_OFFSET UNITYSDK_OFFSET(0xB3BB3A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollBar_TypeDefinitionIndex = 52898;

	class MonoScrollBar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBAR__CTOR_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLBAR_SETVISIBLE_OFFSET))(this, a1);
		}
	};
}
