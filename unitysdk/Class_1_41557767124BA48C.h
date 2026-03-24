#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_4521B631ACA75155;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_41557767124BA48C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xBC92A00)
#define CLASS_1_41557767124BA48C_FROMFLX_OFFSET UNITYSDK_OFFSET(0xBC92480)
#define CLASS_1_41557767124BA48C_METHOD_1_01A38C1C04BF8076_OFFSET UNITYSDK_OFFSET(0xBC92A60)
#define CLASS_1_41557767124BA48C_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xBC92500)
#define CLASS_1_41557767124BA48C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC92470)

inline static constexpr unsigned int Class_1_41557767124BA48C_TypeDefinitionIndex = 38216;

class Class_1_41557767124BA48C : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_2_4521B631ACA75155*>* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_01A38C1C04BF8076(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_41557767124BA48C_METHOD_1_01A38C1C04BF8076_OFFSET))(this, a1, a2);
	}
};
