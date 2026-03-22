#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24C014472A8CBA5E.h"
#include "unitysdk/Enum_3_334CDFF338C5BE84.h"
#include "unitysdk/System/Object.h"

class Class_1_9BB4AD5956D1660B;
class Class_2_C0E1B4940D4EF734;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C0E1B4940D4EF734_CLASS_1_675070FC88EDE16B_METHOD_1_36003DD00621E1BC_OFFSET UNITYSDK_OFFSET(0xB9FEAF0)
#define CLASS_2_C0E1B4940D4EF734_CLASS_1_675070FC88EDE16B_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xB9FEB10)
#define CLASS_2_C0E1B4940D4EF734_CLASS_1_675070FC88EDE16B__CTOR_OFFSET UNITYSDK_OFFSET(0xB9FEAE0)

inline static constexpr unsigned int Class_2_C0E1B4940D4EF734_Class_1_675070FC88EDE16B_TypeDefinitionIndex = 74670;

class Class_2_C0E1B4940D4EF734_Class_1_675070FC88EDE16B : public ::System::Object
{
public:
	::Class_2_C0E1B4940D4EF734* Field_1_0; // 0x10
	::System::Action_1<::UnityEngine::Transform*>* Field_1_11; // 0x18
	::System::Action* Field_1_7; // 0x20
	::System::Action* Field_1_9; // 0x28
	::System::Action* Field_1_14; // 0x30
	::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_24C014472A8CBA5E>* Field_1_8; // 0x38
	::System::Action* Field_1_15; // 0x40
	::System::Boolean Field_1_3; // 0x48
	::System::Boolean Field_1_12; // 0x49
	::System::Boolean Field_1_4; // 0x4A
	::System::Boolean Field_1_2; // 0x4B
	::System::Boolean Field_1_1; // 0x4C
	::System::Boolean Field_1_5; // 0x4D
	::System::Int32 Field_1_6; // 0x50
	::Enum_3_334CDFF338C5BE84 Field_1_10; // 0x54
	::System::Int32 Field_1_13; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0E1B4940D4EF734_CLASS_1_675070FC88EDE16B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36003DD00621E1BC(::Class_1_9BB4AD5956D1660B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BB4AD5956D1660B*))((::PBYTE)hIl2Cpp + CLASS_2_C0E1B4940D4EF734_CLASS_1_675070FC88EDE16B_METHOD_1_36003DD00621E1BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0E1B4940D4EF734_CLASS_1_675070FC88EDE16B_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}
};
