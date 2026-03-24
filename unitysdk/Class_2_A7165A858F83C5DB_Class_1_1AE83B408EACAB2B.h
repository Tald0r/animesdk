#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_1AE83B408EACAB2B_METHOD_1_D1B1E19AC459D83C_OFFSET UNITYSDK_OFFSET(0xE12D720)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_1AE83B408EACAB2B__CTOR_OFFSET UNITYSDK_OFFSET(0xE12D710)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_1AE83B408EACAB2B_TypeDefinitionIndex = 64727;

class Class_2_A7165A858F83C5DB_Class_1_1AE83B408EACAB2B : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_1AE83B408EACAB2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D1B1E19AC459D83C(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_1AE83B408EACAB2B_METHOD_1_D1B1E19AC459D83C_OFFSET))(this, a1);
	}
};
