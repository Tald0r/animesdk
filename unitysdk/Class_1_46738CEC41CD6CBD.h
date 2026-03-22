#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }

#define CLASS_1_46738CEC41CD6CBD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9F5CF60)
#define CLASS_1_46738CEC41CD6CBD__CTOR_OFFSET UNITYSDK_OFFSET(0x9F5CD80)

inline static constexpr unsigned int Class_1_46738CEC41CD6CBD_TypeDefinitionIndex = 40131;

class Class_1_46738CEC41CD6CBD : public ::System::Object
{
public:
	::UnityEngine::Texture* Field_1_1; // 0x10
	::Foundation::AssetRequestHandle Field_1_0; // 0x18

	::System::Void _ctor(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_46738CEC41CD6CBD__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_46738CEC41CD6CBD__CTOR_1_OFFSET))(this, a1);
	}
};
