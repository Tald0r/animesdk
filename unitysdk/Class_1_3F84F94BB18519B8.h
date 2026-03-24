#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_3F84F94BB18519B8_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6B5ABF0)
#define CLASS_1_3F84F94BB18519B8_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6B5A830)
#define CLASS_1_3F84F94BB18519B8_METHOD_1_46F5479027C46F32_OFFSET UNITYSDK_OFFSET(0x6B5AC50)
#define CLASS_1_3F84F94BB18519B8_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x6B5A8B0)
#define CLASS_1_3F84F94BB18519B8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x6B5AF90)
#define CLASS_1_3F84F94BB18519B8__CTOR_OFFSET UNITYSDK_OFFSET(0x6B5AF80)

inline static constexpr unsigned int Class_1_3F84F94BB18519B8_TypeDefinitionIndex = 62682;

class Class_1_3F84F94BB18519B8 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::Enum_3_DFCB42601400F441 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_46F5479027C46F32(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3F84F94BB18519B8_METHOD_1_46F5479027C46F32_OFFSET))(this, a1, a2);
	}
};
