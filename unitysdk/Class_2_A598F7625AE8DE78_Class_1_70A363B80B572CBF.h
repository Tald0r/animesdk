#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A598F7625AE8DE78_Class_1_32BCD41779DEEDDF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WWW; }

#define CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x648A710)
#define CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x648A750)
#define CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x648AB60)
#define CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x648ABC0)
#define CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x648AB70)
#define CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x648A6D0)
#define CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF__CTOR_OFFSET UNITYSDK_OFFSET(0x648A6C0)

inline static constexpr unsigned int Class_2_A598F7625AE8DE78_Class_1_70A363B80B572CBF_TypeDefinitionIndex = 71360;

class Class_2_A598F7625AE8DE78_Class_1_70A363B80B572CBF : public ::System::Object
{
public:
	::Class_2_A598F7625AE8DE78_Class_1_32BCD41779DEEDDF* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_4; // 0x18
	::System::Object* Field_1_1; // 0x20
	::UnityEngine::WWW* Field_1_7; // 0x28
	::System::String* Field_1_3; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Int32 Field_1_0; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_CLASS_1_70A363B80B572CBF_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
