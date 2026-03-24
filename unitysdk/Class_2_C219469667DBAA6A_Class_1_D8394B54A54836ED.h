#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
class Class_2_C219469667DBAA6A_Class_1_53CDB4C532B91334;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAEDE700)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEDEF60)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAEDEFC0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAEDEF70)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEDE6F0)
#define CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED__CTOR_OFFSET UNITYSDK_OFFSET(0xAEDE6E0)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_D8394B54A54836ED_TypeDefinitionIndex = 39302;

class Class_2_C219469667DBAA6A_Class_1_D8394B54A54836ED : public ::System::Object
{
public:
	::Class_2_C219469667DBAA6A* Field_1_2; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::Action_1<::System::Single>* Field_1_6; // 0x20
	::Class_2_C219469667DBAA6A_Class_1_53CDB4C532B91334* Field_1_5; // 0x28
	::System::String* Field_1_3; // 0x30
	::System::Int32 Field_1_7; // 0x38
	::System::Int32 Field_1_9; // 0x3C
	::System::Int32 Field_1_10; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Int32 Field_1_0; // 0x48
	::System::Single Field_1_4; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_D8394B54A54836ED_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
