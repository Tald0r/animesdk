#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_5.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_F6B65C10EC800BA8_METHOD_1_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0x6C3A840)
#define CLASS_1_F6B65C10EC800BA8_METHOD_1_0CC4BC19C602BCD0_2_OFFSET UNITYSDK_OFFSET(0x6C3AA30)
#define CLASS_1_F6B65C10EC800BA8_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x6C3A380)
#define CLASS_1_F6B65C10EC800BA8_METHOD_1_1DFCC636FF29BCBA_OFFSET UNITYSDK_OFFSET(0x6C3AC20)
#define CLASS_1_F6B65C10EC800BA8__CTOR_OFFSET UNITYSDK_OFFSET(0x6C3A340)

inline static constexpr unsigned int Class_1_F6B65C10EC800BA8_TypeDefinitionIndex = 37403;

class Class_1_F6B65C10EC800BA8 : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* Field_1_5; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x28
	::Enum_3_0A3761FE34514D6C_5 Field_1_3; // 0x2C
	::System::UInt32 Field_1_0; // 0x30
	::System::UInt32 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B65C10EC800BA8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B65C10EC800BA8_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B65C10EC800BA8_METHOD_1_0CC4BC19C602BCD0_1_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B65C10EC800BA8_METHOD_1_0CC4BC19C602BCD0_2_OFFSET))(this);
	}

	::System::Void Method_1_1DFCC636FF29BCBA(::Enum_3_0A3761FE34514D6C_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_5))((::PBYTE)hIl2Cpp + CLASS_1_F6B65C10EC800BA8_METHOD_1_1DFCC636FF29BCBA_OFFSET))(this, a1);
	}
};
