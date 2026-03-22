#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace System { class Action; }

#define CLASS_1_9F5A8B721785BBD2_CLASS_1_28E6DDC47E2D4AD6_METHOD_1_597157D8D0F48706_OFFSET UNITYSDK_OFFSET(0x72DF110)
#define CLASS_1_9F5A8B721785BBD2_CLASS_1_28E6DDC47E2D4AD6__CTOR_OFFSET UNITYSDK_OFFSET(0x72DF100)

inline static constexpr unsigned int Class_1_9F5A8B721785BBD2_Class_1_28E6DDC47E2D4AD6_TypeDefinitionIndex = 69113;

class Class_1_9F5A8B721785BBD2_Class_1_28E6DDC47E2D4AD6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F5A8B721785BBD2_CLASS_1_28E6DDC47E2D4AD6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_597157D8D0F48706(::MoleMole::Config::ConfigAnimatorBeHitPriorities* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorBeHitPriorities*))((::PBYTE)hIl2Cpp + CLASS_1_9F5A8B721785BBD2_CLASS_1_28E6DDC47E2D4AD6_METHOD_1_597157D8D0F48706_OFFSET))(this, a1);
	}
};
