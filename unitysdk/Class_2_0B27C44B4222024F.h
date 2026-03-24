#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_0B27C44B4222024F_METHOD_2_82CC32C8832A5E55_OFFSET UNITYSDK_OFFSET(0x783A0B0)
#define CLASS_2_0B27C44B4222024F_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x7839FA0)
#define CLASS_2_0B27C44B4222024F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x783A050)
#define CLASS_2_0B27C44B4222024F__CCTOR_OFFSET UNITYSDK_OFFSET(0x7839F20)
#define CLASS_2_0B27C44B4222024F__CTOR_OFFSET UNITYSDK_OFFSET(0x7839F90)

inline static constexpr unsigned int Class_2_0B27C44B4222024F_TypeDefinitionIndex = 53232;

class Class_2_0B27C44B4222024F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x107; // 0x0
	::System::String* Field_2_0; // 0x20
	::System::UInt32 Field_2_2; // 0x28
	::System::Single Field_2_1; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0B27C44B4222024F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B27C44B4222024F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B27C44B4222024F_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B27C44B4222024F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_82CC32C8832A5E55(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0B27C44B4222024F_METHOD_2_82CC32C8832A5E55_OFFSET))(this, a1, a2, a3, a4);
	}
};
