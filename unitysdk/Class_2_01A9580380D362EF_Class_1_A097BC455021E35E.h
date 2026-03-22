#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_7E6E8DD3EAC12A67_21;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_A097BC455021E35E_METHOD_1_EFC58908CA350AE0_OFFSET UNITYSDK_OFFSET(0x681C9A0)
#define CLASS_2_01A9580380D362EF_CLASS_1_A097BC455021E35E__CTOR_OFFSET UNITYSDK_OFFSET(0x681C990)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_A097BC455021E35E_TypeDefinitionIndex = 40636;

class Class_2_01A9580380D362EF_Class_1_A097BC455021E35E : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_A097BC455021E35E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EFC58908CA350AE0(::Class_3_7E6E8DD3EAC12A67_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6E8DD3EAC12A67_21*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_A097BC455021E35E_METHOD_1_EFC58908CA350AE0_OFFSET))(this, a1);
	}
};
