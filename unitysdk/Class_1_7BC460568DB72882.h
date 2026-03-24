#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_5588E95C761DC2F1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7BC460568DB72882_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6EF5030)
#define CLASS_1_7BC460568DB72882_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6EF4B00)
#define CLASS_1_7BC460568DB72882_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x6EF4BF0)
#define CLASS_1_7BC460568DB72882_METHOD_1_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x6EF5100)
#define CLASS_1_7BC460568DB72882__CTOR_OFFSET UNITYSDK_OFFSET(0x6EF5380)

inline static constexpr unsigned int Class_1_7BC460568DB72882_TypeDefinitionIndex = 42734;

class Class_1_7BC460568DB72882 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5588E95C761DC2F1*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882_METHOD_1_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
