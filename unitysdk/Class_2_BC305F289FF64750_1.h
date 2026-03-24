#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_BC305F289FF64750_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB4C3860)
#define CLASS_2_BC305F289FF64750_1_METHOD_2_49DBA8F4C59158DB_OFFSET UNITYSDK_OFFSET(0xB4C3AD0)
#define CLASS_2_BC305F289FF64750_1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB4C39B0)
#define CLASS_2_BC305F289FF64750_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB4C3B50)
#define CLASS_2_BC305F289FF64750_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4C3A60)
#define CLASS_2_BC305F289FF64750_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4C3930)
#define CLASS_2_BC305F289FF64750_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C39A0)

inline static constexpr unsigned int Class_2_BC305F289FF64750_1_TypeDefinitionIndex = 50241;

class Class_2_BC305F289FF64750_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x61; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BC305F289FF64750_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC305F289FF64750_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC305F289FF64750_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC305F289FF64750_1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC305F289FF64750_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_49DBA8F4C59158DB(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BC305F289FF64750_1_METHOD_2_49DBA8F4C59158DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC305F289FF64750_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
