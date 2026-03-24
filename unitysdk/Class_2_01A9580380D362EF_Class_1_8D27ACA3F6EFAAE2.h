#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_462;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_8D27ACA3F6EFAAE2_METHOD_1_959E4CFEC9E4055A_OFFSET UNITYSDK_OFFSET(0x8BD2F20)
#define CLASS_2_01A9580380D362EF_CLASS_1_8D27ACA3F6EFAAE2__CTOR_OFFSET UNITYSDK_OFFSET(0x8BD2F10)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_8D27ACA3F6EFAAE2_TypeDefinitionIndex = 39739;

class Class_2_01A9580380D362EF_Class_1_8D27ACA3F6EFAAE2 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Class_2_01A9580380D362EF* Field_1_0; // 0x20
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_8D27ACA3F6EFAAE2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_959E4CFEC9E4055A(::Class_3_025FF4981524A424_462* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_462*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_8D27ACA3F6EFAAE2_METHOD_1_959E4CFEC9E4055A_OFFSET))(this, a1);
	}
};
