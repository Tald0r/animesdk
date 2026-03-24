#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_E94F7049FFF3AFCB_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x71E2DC0)
#define CLASS_2_E94F7049FFF3AFCB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x71E2E70)
#define CLASS_2_E94F7049FFF3AFCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x71E2D40)
#define CLASS_2_E94F7049FFF3AFCB__CTOR_OFFSET UNITYSDK_OFFSET(0x71E2DB0)

inline static constexpr unsigned int Class_2_E94F7049FFF3AFCB_TypeDefinitionIndex = 60187;

class Class_2_E94F7049FFF3AFCB : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xEB; // 0x0
	::System::Int32 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E94F7049FFF3AFCB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E94F7049FFF3AFCB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E94F7049FFF3AFCB_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E94F7049FFF3AFCB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
