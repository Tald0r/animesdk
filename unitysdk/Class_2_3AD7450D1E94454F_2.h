#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

#define CLASS_2_3AD7450D1E94454F_2_METHOD_2_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0xB2039B0)
#define CLASS_2_3AD7450D1E94454F_2_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB203900)
#define CLASS_2_3AD7450D1E94454F_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB203A30)
#define CLASS_2_3AD7450D1E94454F_2__CCTOR_OFFSET UNITYSDK_OFFSET(0xB203880)
#define CLASS_2_3AD7450D1E94454F_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB2038F0)

inline static constexpr unsigned int Class_2_3AD7450D1E94454F_2_TypeDefinitionIndex = 48941;

class Class_2_3AD7450D1E94454F_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x11C; // 0x0
	::System::Int32 Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_2_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_2_METHOD_2_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD7450D1E94454F_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
