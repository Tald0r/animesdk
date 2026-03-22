#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60DDD9C206686F44;
class MonoUITableScrollV2;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_BFBF20E9360097AF__CTOR_OFFSET UNITYSDK_OFFSET(0x747BFF0)

inline static constexpr unsigned int Class_1_BFBF20E9360097AF_TypeDefinitionIndex = 42748;

class Class_1_BFBF20E9360097AF : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_1; // 0x10
	::UnityEngine::RectTransform* Field_1_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_1_0; // 0x20
	::UnityEngine::Animation* Field_1_6; // 0x28
	::UnityEngine::Animation* Field_1_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_5; // 0x38
	::MonoUITableScrollV2* Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFBF20E9360097AF__CTOR_OFFSET))(this);
	}
};
