#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_96C13C26B11AC645_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x9E5E8C0)
#define CLASS_2_96C13C26B11AC645_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9E5E970)
#define CLASS_2_96C13C26B11AC645__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E5E840)
#define CLASS_2_96C13C26B11AC645__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5E8B0)

inline static constexpr unsigned int Class_2_96C13C26B11AC645_TypeDefinitionIndex = 45014;

class Class_2_96C13C26B11AC645 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xE8; // 0x0
	::System::String* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_96C13C26B11AC645__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C13C26B11AC645__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C13C26B11AC645_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96C13C26B11AC645_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
