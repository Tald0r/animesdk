#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_410D50A01F594275.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_8A50BFB20D9D2482_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF44E000)
#define CLASS_1_8A50BFB20D9D2482_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF44E300)
#define CLASS_1_8A50BFB20D9D2482_1_METHOD_1_7493FC0605E5A625_OFFSET UNITYSDK_OFFSET(0xF44E380)
#define CLASS_1_8A50BFB20D9D2482_1_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xF44E290)
#define CLASS_1_8A50BFB20D9D2482_1_METHOD_1_E091A92EA4DC55B8_OFFSET UNITYSDK_OFFSET(0xF44E060)
#define CLASS_1_8A50BFB20D9D2482_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF44E920)

inline static constexpr unsigned int Class_1_8A50BFB20D9D2482_1_TypeDefinitionIndex = 48935;

class Class_1_8A50BFB20D9D2482_1 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::Enum_3_410D50A01F594275 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7493FC0605E5A625(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_METHOD_1_7493FC0605E5A625_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E091A92EA4DC55B8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A50BFB20D9D2482_1_METHOD_1_E091A92EA4DC55B8_OFFSET))(this, a1, a2);
	}
};
