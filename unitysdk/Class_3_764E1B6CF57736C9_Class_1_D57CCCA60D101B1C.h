#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_764E1B6CF57736C9;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define CLASS_3_764E1B6CF57736C9_CLASS_1_D57CCCA60D101B1C_METHOD_1_5CB7AD391AB4E150_OFFSET UNITYSDK_OFFSET(0xE7A9B30)
#define CLASS_3_764E1B6CF57736C9_CLASS_1_D57CCCA60D101B1C__CTOR_OFFSET UNITYSDK_OFFSET(0xE7A9B20)

inline static constexpr unsigned int Class_3_764E1B6CF57736C9_Class_1_D57CCCA60D101B1C_TypeDefinitionIndex = 44166;

class Class_3_764E1B6CF57736C9_Class_1_D57CCCA60D101B1C : public ::System::Object
{
public:
	::Class_3_764E1B6CF57736C9* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_764E1B6CF57736C9_CLASS_1_D57CCCA60D101B1C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5CB7AD391AB4E150(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_764E1B6CF57736C9_CLASS_1_D57CCCA60D101B1C_METHOD_1_5CB7AD391AB4E150_OFFSET))(this, a1);
	}
};
