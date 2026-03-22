#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_397A2F39DC2FEF29.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_204C453CC79AE4E0_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7BBD8C0)
#define CLASS_1_204C453CC79AE4E0_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7BBD4B0)
#define CLASS_1_204C453CC79AE4E0_1_METHOD_1_020D79381203C043_OFFSET UNITYSDK_OFFSET(0x7BBD920)
#define CLASS_1_204C453CC79AE4E0_1_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x7BBD530)
#define CLASS_1_204C453CC79AE4E0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBDB20)

inline static constexpr unsigned int Class_1_204C453CC79AE4E0_1_TypeDefinitionIndex = 78620;

class Class_1_204C453CC79AE4E0_1 : public ::System::Object
{
public:
	::Struct_2_397A2F39DC2FEF29 Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_020D79381203C043(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_204C453CC79AE4E0_1_METHOD_1_020D79381203C043_OFFSET))(this, a1, a2);
	}
};
