#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_0F2758DE6491F147_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7AD8E00)
#define CLASS_2_0F2758DE6491F147_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x7AD8F50)
#define CLASS_2_0F2758DE6491F147_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x7AD9060)
#define CLASS_2_0F2758DE6491F147_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7AD9000)
#define CLASS_2_0F2758DE6491F147__CCTOR_OFFSET UNITYSDK_OFFSET(0x7AD8ED0)
#define CLASS_2_0F2758DE6491F147__CTOR_OFFSET UNITYSDK_OFFSET(0x7AD8F40)

inline static constexpr unsigned int Class_2_0F2758DE6491F147_TypeDefinitionIndex = 64052;

class Class_2_0F2758DE6491F147 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xCF; // 0x0
	::System::String* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0F2758DE6491F147__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2758DE6491F147__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2758DE6491F147_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2758DE6491F147_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2758DE6491F147_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F2758DE6491F147_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
