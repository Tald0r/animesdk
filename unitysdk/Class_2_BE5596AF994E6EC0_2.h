#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_87B8941B71E58844.h"

#define CLASS_2_BE5596AF994E6EC0_2_METHOD_2_32EA3B027892C0DD_OFFSET UNITYSDK_OFFSET(0xB345930)
#define CLASS_2_BE5596AF994E6EC0_2_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB3457C0)
#define CLASS_2_BE5596AF994E6EC0_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB345870)
#define CLASS_2_BE5596AF994E6EC0_2__CCTOR_OFFSET UNITYSDK_OFFSET(0xB345730)
#define CLASS_2_BE5596AF994E6EC0_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB3457A0)

inline static constexpr unsigned int Class_2_BE5596AF994E6EC0_2_TypeDefinitionIndex = 72810;

class Class_2_BE5596AF994E6EC0_2 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xD6; // 0x0
	::Enum_3_87B8941B71E58844 Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_2_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_32EA3B027892C0DD(::System::Int32 a1, ::Enum_3_87B8941B71E58844 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_87B8941B71E58844))((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_2_METHOD_2_32EA3B027892C0DD_OFFSET))(this, a1, a2);
	}
};
