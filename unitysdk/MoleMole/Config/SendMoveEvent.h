#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"

class Class_1_32D1736C0D56C181;

#define MOLEMOLE_CONFIG_SENDMOVEEVENT_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0xE379B70)
#define MOLEMOLE_CONFIG_SENDMOVEEVENT_ONSTOP_OFFSET UNITYSDK_OFFSET(0xE379B00)
#define MOLEMOLE_CONFIG_SENDMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE379C10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SendMoveEvent_TypeDefinitionIndex = 45520;

	class SendMoveEvent : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::Boolean SendOnlyOnce; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENDMOVEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnStop(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENDMOVEEVENT_ONSTOP_OFFSET))(this, context);
		}

		::System::Void OnInteractInternal(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SENDMOVEEVENT_ONINTERACTINTERNAL_OFFSET))(this, context);
		}
	};
}
