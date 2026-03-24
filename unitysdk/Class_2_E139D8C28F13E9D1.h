#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_E139D8C28F13E9D1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB000630)
#define CLASS_2_E139D8C28F13E9D1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB0006E0)
#define CLASS_2_E139D8C28F13E9D1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0005B0)
#define CLASS_2_E139D8C28F13E9D1__CTOR_OFFSET UNITYSDK_OFFSET(0xB000620)

inline static constexpr unsigned int Class_2_E139D8C28F13E9D1_TypeDefinitionIndex = 54282;

class Class_2_E139D8C28F13E9D1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x1E; // 0x0
	::System::UInt32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E139D8C28F13E9D1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E139D8C28F13E9D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E139D8C28F13E9D1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E139D8C28F13E9D1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
