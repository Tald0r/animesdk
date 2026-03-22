#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_368CFE32F3FA4452_METHOD_3_00C582D95B60B963_OFFSET UNITYSDK_OFFSET(0xA18C490)
#define CLASS_3_368CFE32F3FA4452_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA18C2B0)
#define CLASS_3_368CFE32F3FA4452_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA18C750)
#define CLASS_3_368CFE32F3FA4452__CTOR_OFFSET UNITYSDK_OFFSET(0xA18C5E0)

inline static constexpr unsigned int Class_3_368CFE32F3FA4452_TypeDefinitionIndex = 50572;

class Class_3_368CFE32F3FA4452 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_368CFE32F3FA4452__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_368CFE32F3FA4452_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_00C582D95B60B963(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_368CFE32F3FA4452_METHOD_3_00C582D95B60B963_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_368CFE32F3FA4452_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
