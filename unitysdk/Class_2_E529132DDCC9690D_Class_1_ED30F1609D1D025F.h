#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7ED6D30)
#define CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7ED6EA0)
#define CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x7ED6DF0)
#define CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x7ED6F20)
#define CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x7ED6E50)
#define CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x7ED6E00)
#define CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7ED6D20)
#define CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F__CTOR_OFFSET UNITYSDK_OFFSET(0x7ED6D00)

inline static constexpr unsigned int Class_2_E529132DDCC9690D_Class_1_ED30F1609D1D025F_TypeDefinitionIndex = 53413;

class Class_2_E529132DDCC9690D_Class_1_ED30F1609D1D025F : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_5; // 0x14
	::System::ValueTuple_2<::System::Int32, ::System::Int32> Field_1_1; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::System::Int32 Field_1_3; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Int32 Field_1_6; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> System_Collections_Generic_IEnumerator__System_Int32x_System_Int32y___get_Current()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32X_SYSTEM_INT32Y___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_Int32x_System_Int32y___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32X_SYSTEM_INT32Y___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E529132DDCC9690D_CLASS_1_ED30F1609D1D025F_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
