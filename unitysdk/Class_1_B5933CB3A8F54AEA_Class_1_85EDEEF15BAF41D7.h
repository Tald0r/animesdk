#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4DE9364B75C28A4E;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_85EDEEF15BAF41D7_METHOD_1_E6687450EBD5833C_OFFSET UNITYSDK_OFFSET(0x15AA6E60)
#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_85EDEEF15BAF41D7__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA6E50)

inline static constexpr unsigned int Class_1_B5933CB3A8F54AEA_Class_1_85EDEEF15BAF41D7_TypeDefinitionIndex = 53608;

class Class_1_B5933CB3A8F54AEA_Class_1_85EDEEF15BAF41D7 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_3_4DE9364B75C28A4E*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_85EDEEF15BAF41D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E6687450EBD5833C(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_85EDEEF15BAF41D7_METHOD_1_E6687450EBD5833C_OFFSET))(this, a1);
	}
};
