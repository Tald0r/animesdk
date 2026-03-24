#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F1F160)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6F1F970)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6F1F9D0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x6F1F980)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6F1F150)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6F1F140)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_D2D22C923C05C14E_1_TypeDefinitionIndex = 39296;

class Class_2_C219469667DBAA6A_Class_1_D2D22C923C05C14E_1 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::Action_1<::System::Single>* Field_1_4; // 0x18
	::Class_2_C219469667DBAA6A* Field_1_2; // 0x20
	::System::Object* Field_1_1; // 0x28
	::System::Single Field_1_3; // 0x30
	::System::Boolean Field_1_6; // 0x34
	::System::Int32 Field_1_0; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D2D22C923C05C14E_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
