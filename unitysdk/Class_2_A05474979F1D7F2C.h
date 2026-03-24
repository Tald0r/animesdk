#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_A05474979F1D7F2C_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x8B39460)
#define CLASS_2_A05474979F1D7F2C_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x8B39550)
#define CLASS_2_A05474979F1D7F2C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8B39600)
#define CLASS_2_A05474979F1D7F2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B394D0)
#define CLASS_2_A05474979F1D7F2C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B39540)

inline static constexpr unsigned int Class_2_A05474979F1D7F2C_TypeDefinitionIndex = 53323;

class Class_2_A05474979F1D7F2C : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0xD2; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A05474979F1D7F2C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A05474979F1D7F2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A05474979F1D7F2C_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A05474979F1D7F2C_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A05474979F1D7F2C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
