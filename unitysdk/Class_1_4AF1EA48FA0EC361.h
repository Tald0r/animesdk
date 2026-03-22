#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_4AF1EA48FA0EC361_METHOD_1_08B7287B59325288_OFFSET UNITYSDK_OFFSET(0x6572390)
#define CLASS_1_4AF1EA48FA0EC361_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x65724A0)
#define CLASS_1_4AF1EA48FA0EC361_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x6572230)
#define CLASS_1_4AF1EA48FA0EC361_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x65722A0)
#define CLASS_1_4AF1EA48FA0EC361_METHOD_1_7EEBD5CFECCBC45E_OFFSET UNITYSDK_OFFSET(0x6572430)
#define CLASS_1_4AF1EA48FA0EC361_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6572520)
#define CLASS_1_4AF1EA48FA0EC361_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x65721C0)
#define CLASS_1_4AF1EA48FA0EC361__CCTOR_OFFSET UNITYSDK_OFFSET(0x6572180)
#define CLASS_1_4AF1EA48FA0EC361__CTOR_OFFSET UNITYSDK_OFFSET(0x6572110)

inline static constexpr unsigned int Class_1_4AF1EA48FA0EC361_TypeDefinitionIndex = 43584;

class Class_1_4AF1EA48FA0EC361 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF1EA48FA0EC361_TypeDefinitionIndex)->GetStaticField(0xE460);
	}
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Single Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_08B7287B59325288(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361_METHOD_1_08B7287B59325288_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EEBD5CFECCBC45E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361_METHOD_1_7EEBD5CFECCBC45E_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF1EA48FA0EC361_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
