#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Tweener; }

#define CLASS_1_BB7EDA01543EB7EB__CTOR_OFFSET UNITYSDK_OFFSET(0x6253B90)

inline static constexpr unsigned int Class_1_BB7EDA01543EB7EB_TypeDefinitionIndex = 47901;

class Class_1_BB7EDA01543EB7EB : public ::System::Object
{
public:
	::DG::Tweening::Tweener* Field_1_2; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::UnityEngine::Vector2 Field_1_1; // 0x1C
	::System::Single Field_1_3; // 0x24
	::System::Int32 Field_1_0; // 0x28
	::System::Boolean Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7EDA01543EB7EB__CTOR_OFFSET))(this);
	}
};
