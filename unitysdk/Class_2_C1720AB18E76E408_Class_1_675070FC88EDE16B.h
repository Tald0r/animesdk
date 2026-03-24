#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24C014472A8CBA5E.h"
#include "unitysdk/Enum_3_334CDFF338C5BE84.h"
#include "unitysdk/System/Object.h"

class Class_1_9BB4AD5956D1660B;
class Class_2_C1720AB18E76E408;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C1720AB18E76E408_CLASS_1_675070FC88EDE16B_METHOD_1_36003DD00621E1BC_OFFSET UNITYSDK_OFFSET(0xD08E460)
#define CLASS_2_C1720AB18E76E408_CLASS_1_675070FC88EDE16B_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xD08DF60)
#define CLASS_2_C1720AB18E76E408_CLASS_1_675070FC88EDE16B__CTOR_OFFSET UNITYSDK_OFFSET(0xD08DF50)

inline static constexpr unsigned int Class_2_C1720AB18E76E408_Class_1_675070FC88EDE16B_TypeDefinitionIndex = 59166;

class Class_2_C1720AB18E76E408_Class_1_675070FC88EDE16B : public ::System::Object
{
public:
	::System::Action* Field_1_16; // 0x10
	::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_24C014472A8CBA5E>* Field_1_8; // 0x18
	::System::Action* Field_1_15; // 0x20
	::Class_2_C1720AB18E76E408* Field_1_0; // 0x28
	::System::Action* Field_1_9; // 0x30
	::System::Action* Field_1_7; // 0x38
	::System::Action_1<::UnityEngine::Transform*>* Field_1_11; // 0x40
	::System::Boolean Field_1_3; // 0x48
	::System::Boolean Field_1_5; // 0x49
	::System::Boolean Field_1_12; // 0x4A
	::System::Boolean Field_1_1; // 0x4B
	::Enum_3_334CDFF338C5BE84 Field_1_10; // 0x4C
	::System::Int32 Field_1_6; // 0x50
	::System::Boolean Field_1_2; // 0x54
	::System::Boolean Field_1_4; // 0x55
	::System::Int32 Field_1_14; // 0x58
	::System::Int32 Field_1_13; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1720AB18E76E408_CLASS_1_675070FC88EDE16B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1720AB18E76E408_CLASS_1_675070FC88EDE16B_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_36003DD00621E1BC(::Class_1_9BB4AD5956D1660B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BB4AD5956D1660B*))((::PBYTE)hIl2Cpp + CLASS_2_C1720AB18E76E408_CLASS_1_675070FC88EDE16B_METHOD_1_36003DD00621E1BC_OFFSET))(this, a1);
	}
};
