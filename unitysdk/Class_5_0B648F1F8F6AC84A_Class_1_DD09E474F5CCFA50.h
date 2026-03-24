#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_0B648F1F8F6AC84A;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCB6F610)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCB6F960)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCB6F9C0)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCB6F970)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB6F600)
#define CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50__CTOR_OFFSET UNITYSDK_OFFSET(0xCB6F5F0)

inline static constexpr unsigned int Class_5_0B648F1F8F6AC84A_Class_1_DD09E474F5CCFA50_TypeDefinitionIndex = 46157;

class Class_5_0B648F1F8F6AC84A_Class_1_DD09E474F5CCFA50 : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::UnityEngine::AnimationCurve* Field_1_2; // 0x18
	::Class_5_0B648F1F8F6AC84A* Field_1_5; // 0x20
	::System::Single Field_1_7; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_8; // 0x30
	::System::Single Field_1_6; // 0x34
	::System::Int32 Field_1_0; // 0x38
	::System::Single Field_1_3; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0B648F1F8F6AC84A_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
