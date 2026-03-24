#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_E139D8C28F13E9D1_1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xDA2B410)
#define CLASS_2_E139D8C28F13E9D1_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDA2B4C0)
#define CLASS_2_E139D8C28F13E9D1_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xDA2B390)
#define CLASS_2_E139D8C28F13E9D1_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDA2B400)

inline static constexpr unsigned int Class_2_E139D8C28F13E9D1_1_TypeDefinitionIndex = 64911;

class Class_2_E139D8C28F13E9D1_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x1F; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E139D8C28F13E9D1_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E139D8C28F13E9D1_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E139D8C28F13E9D1_1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E139D8C28F13E9D1_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
