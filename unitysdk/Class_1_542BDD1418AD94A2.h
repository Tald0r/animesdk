#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_542BDD1418AD94A2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9623490)
#define CLASS_1_542BDD1418AD94A2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9622F10)
#define CLASS_1_542BDD1418AD94A2_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x9622F90)
#define CLASS_1_542BDD1418AD94A2_METHOD_1_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x96234F0)
#define CLASS_1_542BDD1418AD94A2__CTOR_OFFSET UNITYSDK_OFFSET(0x96238C0)

inline static constexpr unsigned int Class_1_542BDD1418AD94A2_TypeDefinitionIndex = 60841;

class Class_1_542BDD1418AD94A2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542BDD1418AD94A2__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_542BDD1418AD94A2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_542BDD1418AD94A2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_542BDD1418AD94A2_METHOD_1_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_542BDD1418AD94A2_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
