#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_2169ABC757988FED;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9539D40)
#define CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x953A090)
#define CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x953A0F0)
#define CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x953A0A0)
#define CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9539D30)
#define CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50__CTOR_OFFSET UNITYSDK_OFFSET(0x9539D20)

inline static constexpr unsigned int Class_5_2169ABC757988FED_Class_1_DD09E474F5CCFA50_TypeDefinitionIndex = 36780;

class Class_5_2169ABC757988FED_Class_1_DD09E474F5CCFA50 : public ::System::Object
{
public:
	::Class_5_2169ABC757988FED* Field_1_5; // 0x10
	::UnityEngine::AnimationCurve* Field_1_2; // 0x18
	::System::Object* Field_1_1; // 0x20
	::System::Single Field_1_4; // 0x28
	::System::Single Field_1_3; // 0x2C
	::System::Single Field_1_8; // 0x30
	::System::Single Field_1_6; // 0x34
	::System::Int32 Field_1_0; // 0x38
	::System::Single Field_1_7; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_2169ABC757988FED_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
