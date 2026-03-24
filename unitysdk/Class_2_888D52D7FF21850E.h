#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_888D52D7FF21850E_METHOD_2_5ECF7DD8CCA10DB2_OFFSET UNITYSDK_OFFSET(0x69A7C20)
#define CLASS_2_888D52D7FF21850E_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x69A7B70)
#define CLASS_2_888D52D7FF21850E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x69A7CB0)
#define CLASS_2_888D52D7FF21850E__CCTOR_OFFSET UNITYSDK_OFFSET(0x69A7AF0)
#define CLASS_2_888D52D7FF21850E__CTOR_OFFSET UNITYSDK_OFFSET(0x69A7B60)

inline static constexpr unsigned int Class_2_888D52D7FF21850E_TypeDefinitionIndex = 65147;

class Class_2_888D52D7FF21850E : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x103; // 0x0
	::System::Boolean Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x21
	::System::Int32 Field_2_2; // 0x24
	::System::UInt32 Field_2_3; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_888D52D7FF21850E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_888D52D7FF21850E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_888D52D7FF21850E_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_5ECF7DD8CCA10DB2(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_888D52D7FF21850E_METHOD_2_5ECF7DD8CCA10DB2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_888D52D7FF21850E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
