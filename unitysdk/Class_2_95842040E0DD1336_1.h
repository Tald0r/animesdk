#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_C34CCD7720C1C051.h"

#define CLASS_2_95842040E0DD1336_1_METHOD_2_4D623CB5F7A86270_OFFSET UNITYSDK_OFFSET(0xA6BAB80)
#define CLASS_2_95842040E0DD1336_1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xA6BAA70)
#define CLASS_2_95842040E0DD1336_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6BAB20)
#define CLASS_2_95842040E0DD1336_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6BA9F0)
#define CLASS_2_95842040E0DD1336_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA6BAA60)

inline static constexpr unsigned int Class_2_95842040E0DD1336_1_TypeDefinitionIndex = 50828;

class Class_2_95842040E0DD1336_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0xBC; // 0x0
	::Enum_3_C34CCD7720C1C051 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4D623CB5F7A86270(::System::UInt32 a1, ::Enum_3_C34CCD7720C1C051 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_C34CCD7720C1C051))((::PBYTE)hIl2Cpp + CLASS_2_95842040E0DD1336_1_METHOD_2_4D623CB5F7A86270_OFFSET))(this, a1, a2);
	}
};
