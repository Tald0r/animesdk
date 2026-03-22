#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8FBDD7D8E0EE0B49;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA074F90)
#define CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA075400)
#define CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA075090)
#define CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_RESET_OFFSET UNITYSDK_OFFSET(0xA0752F0)
#define CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA0754B0)
#define CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35__CTOR_OFFSET UNITYSDK_OFFSET(0xA074F80)

inline static constexpr unsigned int Class_3_B60F0A00B4DBE12A_Class_1_80BA1FDAD0E7FF35_TypeDefinitionIndex = 40938;

class Class_3_B60F0A00B4DBE12A_Class_1_80BA1FDAD0E7FF35 : public ::System::Object
{
public:
	::Class_1_8FBDD7D8E0EE0B49* Field_1_2; // 0x10
	::System::Collections::Generic::IEnumerator_1<::System::Single>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::System::Collections::Generic::IEnumerator_1<::System::Single>* a1, ::System::Int32 a2, ::Class_1_8FBDD7D8E0EE0B49* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::System::Int32, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_RESET_OFFSET))(this);
	}

	::System::Single get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B60F0A00B4DBE12A_CLASS_1_80BA1FDAD0E7FF35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
