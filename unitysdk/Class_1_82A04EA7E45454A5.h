#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_27;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_82A04EA7E45454A5__CTOR_OFFSET UNITYSDK_OFFSET(0xD080790)

inline static constexpr unsigned int Class_1_82A04EA7E45454A5_TypeDefinitionIndex = 78432;

class Class_1_82A04EA7E45454A5 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::String* Field_1_15; // 0x28
	::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_27*>* Field_1_16; // 0x30
	::System::String* Field_1_3; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::String* Field_1_13; // 0x48
	::System::Int32 Field_1_10; // 0x50
	::System::Int64 Field_1_7; // 0x58
	::System::Int64 Field_1_8; // 0x60
	::System::Int32 Field_1_9; // 0x68
	::System::Int32 Field_1_1; // 0x6C
	::System::Int32 Field_1_0; // 0x70
	::System::Boolean Field_1_14; // 0x74
	::System::Int32 Field_1_12; // 0x78
	::System::Int32 Field_1_11; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82A04EA7E45454A5__CTOR_OFFSET))(this);
	}
};
