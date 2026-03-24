#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_5F3554F3AFB1219A_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x83CB860)
#define CLASS_3_5F3554F3AFB1219A_METHOD_3_7DCA9545AA6FF653_OFFSET UNITYSDK_OFFSET(0x83CB9B0)
#define CLASS_3_5F3554F3AFB1219A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x83CBC40)
#define CLASS_3_5F3554F3AFB1219A__CTOR_OFFSET UNITYSDK_OFFSET(0x83CBB50)

inline static constexpr unsigned int Class_3_5F3554F3AFB1219A_TypeDefinitionIndex = 67053;

class Class_3_5F3554F3AFB1219A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x18
	::Class_4_D0B094D0B900A9F0<::System::Int32>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F3554F3AFB1219A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F3554F3AFB1219A_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_7DCA9545AA6FF653(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_5F3554F3AFB1219A_METHOD_3_7DCA9545AA6FF653_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F3554F3AFB1219A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
