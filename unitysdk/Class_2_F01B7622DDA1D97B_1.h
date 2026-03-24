#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_F01B7622DDA1D97B_1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xF3B5E20)
#define CLASS_2_F01B7622DDA1D97B_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF3B5ED0)
#define CLASS_2_F01B7622DDA1D97B_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3B5DA0)
#define CLASS_2_F01B7622DDA1D97B_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF3B5E10)

inline static constexpr unsigned int Class_2_F01B7622DDA1D97B_1_TypeDefinitionIndex = 59214;

class Class_2_F01B7622DDA1D97B_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x85; // 0x0
	::System::String* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F01B7622DDA1D97B_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F01B7622DDA1D97B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F01B7622DDA1D97B_1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F01B7622DDA1D97B_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
