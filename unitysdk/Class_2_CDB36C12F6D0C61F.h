#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_E3505814A644146C.h"

#define CLASS_2_CDB36C12F6D0C61F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8602FA0)
#define CLASS_2_CDB36C12F6D0C61F_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x86030F0)
#define CLASS_2_CDB36C12F6D0C61F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8603280)
#define CLASS_2_CDB36C12F6D0C61F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x86031A0)
#define CLASS_2_CDB36C12F6D0C61F_METHOD_2_D79CC8F576883D14_OFFSET UNITYSDK_OFFSET(0x8603200)
#define CLASS_2_CDB36C12F6D0C61F__CCTOR_OFFSET UNITYSDK_OFFSET(0x8603070)
#define CLASS_2_CDB36C12F6D0C61F__CTOR_OFFSET UNITYSDK_OFFSET(0x86030E0)

inline static constexpr unsigned int Class_2_CDB36C12F6D0C61F_TypeDefinitionIndex = 68961;

class Class_2_CDB36C12F6D0C61F : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x121; // 0x0
	::System::Boolean Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x21
	::Enum_3_E3505814A644146C Field_2_2; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CDB36C12F6D0C61F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB36C12F6D0C61F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB36C12F6D0C61F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB36C12F6D0C61F_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB36C12F6D0C61F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_D79CC8F576883D14(::System::Boolean a1, ::System::Boolean a2, ::Enum_3_E3505814A644146C a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Enum_3_E3505814A644146C))((::PBYTE)hIl2Cpp + CLASS_2_CDB36C12F6D0C61F_METHOD_2_D79CC8F576883D14_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDB36C12F6D0C61F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
