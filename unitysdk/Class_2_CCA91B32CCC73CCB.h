#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_CCA91B32CCC73CCB_METHOD_2_20A193958CD38A4D_OFFSET UNITYSDK_OFFSET(0xD84CED0)
#define CLASS_2_CCA91B32CCC73CCB_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xD84CDC0)
#define CLASS_2_CCA91B32CCC73CCB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD84CE70)
#define CLASS_2_CCA91B32CCC73CCB__CCTOR_OFFSET UNITYSDK_OFFSET(0xD84CD40)
#define CLASS_2_CCA91B32CCC73CCB__CTOR_OFFSET UNITYSDK_OFFSET(0xD84CDB0)

inline static constexpr unsigned int Class_2_CCA91B32CCC73CCB_TypeDefinitionIndex = 49306;

class Class_2_CCA91B32CCC73CCB : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x51; // 0x0
	::System::Boolean Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_20A193958CD38A4D(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CCA91B32CCC73CCB_METHOD_2_20A193958CD38A4D_OFFSET))(this, a1, a2);
	}
};
