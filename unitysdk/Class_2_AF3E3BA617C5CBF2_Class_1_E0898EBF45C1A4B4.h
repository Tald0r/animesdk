#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF3E3BA617C5CBF2;
class Class_3_1F2AB93F01651F88;

#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x77E6760)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x77E72F0)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x77E7350)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x77E7300)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x77E6750)
#define CLASS_2_AF3E3BA617C5CBF2_CLASS_1_E0898EBF45C1A4B4__CTOR_OFFSET UNITYSDK_OFFSET(0x77E6740)

inline static constexpr unsigned int Class_2_AF3E3BA617C5CBF2_Class_1_E0898EBF45C1A4B4_TypeDefinitionIndex = 45495;

class Class_2_AF3E3BA617C5CBF2_Class_1_E0898EBF45C1A4B4 : public ::System::Object
{
public:
	::Class_3_1F2AB93F01651F88* Field_1_4; // 0x10
	::Class_2_AF3E3BA617C5CBF2* Field_1_2; // 0x18
	::System::Single Field_1_11; // 0x20
	::System::Single Field_1_5; // 0x24
	::System::Int64 Field_1_8; // 0x28
	::System::Int64 Field_1_7; // 0x30
	::System::Int64 Field_1_9; // 0x38
	::System::Single Field_1_1; // 0x40
	::System::Single Field_1_12; // 0x44
	::System::Int32 Field_1_0; // 0x48
	::System::Boolean Field_1_3; // 0x4C
	::System::Single Field_1_10; // 0x50
	::System::Single Field_1_6; // 0x54

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
