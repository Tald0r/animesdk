#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_5;
class Class_2_E7199313189EE055;
namespace MoleMole::Config { class MapIconTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E7199313189EE055_CLASS_1_5A6BA8FAEC1A4450_METHOD_1_78224552C71626C4_OFFSET UNITYSDK_OFFSET(0x8D6DAD0)
#define CLASS_2_E7199313189EE055_CLASS_1_5A6BA8FAEC1A4450__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6DAC0)

inline static constexpr unsigned int Class_2_E7199313189EE055_Class_1_5A6BA8FAEC1A4450_TypeDefinitionIndex = 76210;

class Class_2_E7199313189EE055_Class_1_5A6BA8FAEC1A4450 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Foundation::ViewObject::GroupMemberIdentifier, ::MoleMole::Config::MapIconTrait*>>* Field_1_0; // 0x10
	::Class_2_E7199313189EE055* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_5A6BA8FAEC1A4450__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78224552C71626C4(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_5A6BA8FAEC1A4450_METHOD_1_78224552C71626C4_OFFSET))(this, a1);
	}
};
