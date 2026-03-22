#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_C80589F65F69E5CA__CTOR_OFFSET UNITYSDK_OFFSET(0x998F4F0)

inline static constexpr unsigned int Class_1_C80589F65F69E5CA_TypeDefinitionIndex = 37070;

class Class_1_C80589F65F69E5CA : public ::System::Object
{
public:
	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_C80589F65F69E5CA__CTOR_OFFSET))(this, a1);
	}
};
