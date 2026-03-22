#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAFE2200)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAFE22F0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAFE2350)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAFE2300)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAFE21F0)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC5FA0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_D8625306DD48EC6F_TypeDefinitionIndex = 57080;

class Class_1_1F219549AE9B7C82_Class_1_D8625306DD48EC6F : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::UnityEngine::Animation* Field_1_3; // 0x18
	::System::Object* Field_1_1; // 0x20
	::System::String* Field_1_4; // 0x28
	::System::Single Field_1_6; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Single Field_1_2; // 0x38

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_D8625306DD48EC6F_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
