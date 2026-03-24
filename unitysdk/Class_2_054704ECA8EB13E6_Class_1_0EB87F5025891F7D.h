#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_054704ECA8EB13E6;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define CLASS_2_054704ECA8EB13E6_CLASS_1_0EB87F5025891F7D_METHOD_1_E9FE0359249D252A_OFFSET UNITYSDK_OFFSET(0x644AA40)
#define CLASS_2_054704ECA8EB13E6_CLASS_1_0EB87F5025891F7D__CTOR_OFFSET UNITYSDK_OFFSET(0x644AA30)

inline static constexpr unsigned int Class_2_054704ECA8EB13E6_Class_1_0EB87F5025891F7D_TypeDefinitionIndex = 43572;

class Class_2_054704ECA8EB13E6_Class_1_0EB87F5025891F7D : public ::System::Object
{
public:
	::Class_2_054704ECA8EB13E6* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_054704ECA8EB13E6_CLASS_1_0EB87F5025891F7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E9FE0359249D252A(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_054704ECA8EB13E6_CLASS_1_0EB87F5025891F7D_METHOD_1_E9FE0359249D252A_OFFSET))(this, a1);
	}
};
