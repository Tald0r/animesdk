#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4385C14088733CE3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x7EDD6B0)

inline static constexpr unsigned int Class_1_4385C14088733CE3_2_TypeDefinitionIndex = 57689;

class Class_1_4385C14088733CE3_2 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4385C14088733CE3_2__CTOR_OFFSET))(this);
	}
};
