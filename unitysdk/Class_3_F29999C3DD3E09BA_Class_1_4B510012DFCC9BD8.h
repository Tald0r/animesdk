#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D0F2373931CC685D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_F29999C3DD3E09BA;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD6A4240)
#define CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD6A4510)
#define CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD6A4570)
#define CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD6A4520)
#define CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6A4230)
#define CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A4220)

inline static constexpr unsigned int Class_3_F29999C3DD3E09BA_Class_1_4B510012DFCC9BD8_TypeDefinitionIndex = 68380;

class Class_3_F29999C3DD3E09BA_Class_1_4B510012DFCC9BD8 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_2; // 0x10
	::Class_3_F29999C3DD3E09BA* Field_1_3; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_7; // 0x24
	::System::Int32 Field_1_0; // 0x28
	::System::Single Field_1_6; // 0x2C
	::System::Single Field_1_5; // 0x30
	::Enum_3_D0F2373931CC685D Field_1_4; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F29999C3DD3E09BA_CLASS_1_4B510012DFCC9BD8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
