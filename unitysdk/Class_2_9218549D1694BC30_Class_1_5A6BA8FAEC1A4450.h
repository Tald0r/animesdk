#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_7;
class Class_2_9218549D1694BC30;
namespace MoleMole::Config { class MapIconTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9218549D1694BC30_CLASS_1_5A6BA8FAEC1A4450_METHOD_1_78224552C71626C4_OFFSET UNITYSDK_OFFSET(0x7A1A0A0)
#define CLASS_2_9218549D1694BC30_CLASS_1_5A6BA8FAEC1A4450__CTOR_OFFSET UNITYSDK_OFFSET(0x7A1A090)

inline static constexpr unsigned int Class_2_9218549D1694BC30_Class_1_5A6BA8FAEC1A4450_TypeDefinitionIndex = 40440;

class Class_2_9218549D1694BC30_Class_1_5A6BA8FAEC1A4450 : public ::System::Object
{
public:
	::Class_2_9218549D1694BC30* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Foundation::ViewObject::GroupMemberIdentifier, ::MoleMole::Config::MapIconTrait*>>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_5A6BA8FAEC1A4450__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78224552C71626C4(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_5A6BA8FAEC1A4450_METHOD_1_78224552C71626C4_OFFSET))(this, a1);
	}
};
