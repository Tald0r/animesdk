#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/HexagonalLib/HexagonalGrid.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B09F450)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HEXAGONALLIB_COORDINATES_OFFSET__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B09F8C0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HEXAGONALLIB_COORDINATES_OFFSET__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B09F810)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B09F950)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B09F870)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B09F820)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B09F2E0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40__CTOR_OFFSET UNITYSDK_OFFSET(0x1B09F2C0)
#define HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B09F3A0)

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalGrid__GetNeighbors_d__40_TypeDefinitionIndex = 25751;

	class HexagonalGrid__GetNeighbors_d__40 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Offset>* __7__wrap1; // 0x10
		::HexagonalLib::Coordinates::Offset hex; // 0x18
		::HexagonalLib::HexagonalGrid __3____4__this; // 0x20
		::System::Int32 __1__state; // 0x2C
		::HexagonalLib::HexagonalGrid __4__this; // 0x30
		::System::Int32 __l__initialThreadId; // 0x3C
		::HexagonalLib::Coordinates::Offset __2__current; // 0x40
		::HexagonalLib::Coordinates::Offset __3__hex; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40___M__FINALLY1_OFFSET))(this);
		}

		::HexagonalLib::Coordinates::Offset System_Collections_Generic_IEnumerator_HexagonalLib_Coordinates_Offset__get_Current()
		{
			return ((::HexagonalLib::Coordinates::Offset(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HEXAGONALLIB_COORDINATES_OFFSET__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Offset>* System_Collections_Generic_IEnumerable_HexagonalLib_Coordinates_Offset__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HexagonalLib::Coordinates::Offset>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HEXAGONALLIB_COORDINATES_OFFSET__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALGRID__GETNEIGHBORS_D__40_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
