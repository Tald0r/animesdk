#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF3E3BA617C5CBF2;
class Class_3_1F2AB93F01651F88_1;

#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xAB06940)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB074E0)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xAB07540)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xAB074F0)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB06930)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4__CTOR_OFFSET UNITYSDK_OFFSET(0xAB06920)

inline static constexpr unsigned int Class_2_AF3E3BA617C5CBF2_Class_1_E0898EBF45C1A4B4_TypeDefinitionIndex = 74564;

class Class_2_AF3E3BA617C5CBF2_Class_1_E0898EBF45C1A4B4 : public ::System::Object
{
public:
	::Class_2_AF3E3BA617C5CBF2* Field_1_2; // 0x10
	::Class_3_1F2AB93F01651F88_1* Field_1_4; // 0x18
	::System::Single Field_1_11; // 0x20
	::System::Single Field_1_6; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::Single Field_1_10; // 0x2C
	::System::Int64 Field_1_7; // 0x30
	::System::Int32 Field_1_0; // 0x38
	::System::Boolean Field_1_3; // 0x3C
	::System::Int64 Field_1_9; // 0x40
	::System::Single Field_1_12; // 0x48
	::System::Single Field_1_1; // 0x4C
	::System::Int64 Field_1_8; // 0x50

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
