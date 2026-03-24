#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6378A8AD9A7CDBB8;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_32D28DD6CB952086_METHOD_1_0FDE67E8BCF7203D_OFFSET UNITYSDK_OFFSET(0x823A7C0)
#define CLASS_1_32D28DD6CB952086_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x823A720)
#define CLASS_1_32D28DD6CB952086_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x823A680)
#define CLASS_1_32D28DD6CB952086_METHOD_1_DC27F0A4B4484065_OFFSET UNITYSDK_OFFSET(0x823A580)
#define CLASS_1_32D28DD6CB952086__CTOR_OFFSET UNITYSDK_OFFSET(0x823A520)

inline static constexpr unsigned int Class_1_32D28DD6CB952086_TypeDefinitionIndex = 52107;

class Class_1_32D28DD6CB952086 : public ::System::Object
{
public:
	::Class_1_6378A8AD9A7CDBB8* Field_1_1; // 0x10
	::Class_1_6378A8AD9A7CDBB8* Field_1_0; // 0x18
	::Class_1_6378A8AD9A7CDBB8* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC27F0A4B4484065(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086_METHOD_1_DC27F0A4B4484065_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_0FDE67E8BCF7203D(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_32D28DD6CB952086_METHOD_1_0FDE67E8BCF7203D_OFFSET))(this, a1);
	}
};
