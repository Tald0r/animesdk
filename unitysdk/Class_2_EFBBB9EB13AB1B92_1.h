#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_EFBBB9EB13AB1B92_1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x77F74D0)
#define CLASS_2_EFBBB9EB13AB1B92_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x77F7660)
#define CLASS_2_EFBBB9EB13AB1B92_1_METHOD_2_F596F0C235DA3FDB_OFFSET UNITYSDK_OFFSET(0x77F7580)
#define CLASS_2_EFBBB9EB13AB1B92_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x77F7450)
#define CLASS_2_EFBBB9EB13AB1B92_1__CTOR_OFFSET UNITYSDK_OFFSET(0x77F74C0)

inline static constexpr unsigned int Class_2_EFBBB9EB13AB1B92_1_TypeDefinitionIndex = 66265;

class Class_2_EFBBB9EB13AB1B92_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xF2; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EFBBB9EB13AB1B92_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFBBB9EB13AB1B92_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFBBB9EB13AB1B92_1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_F596F0C235DA3FDB(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EFBBB9EB13AB1B92_1_METHOD_2_F596F0C235DA3FDB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFBBB9EB13AB1B92_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
