#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define STRUCT_2_95FC5B98D4A132D6_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x37A230)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_09D8B5211B19E2FF_OFFSET UNITYSDK_OFFSET(0x37A630)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_13F1B56B940BB384_1_OFFSET UNITYSDK_OFFSET(0x223870)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_13F1B56B940BB384_OFFSET UNITYSDK_OFFSET(0x272280)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_16261919CBD78227_OFFSET UNITYSDK_OFFSET(0x37A3A0)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_1E95A648DD7216C2_OFFSET UNITYSDK_OFFSET(0x37A390)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_249A8727C4A633EE_OFFSET UNITYSDK_OFFSET(0x37A610)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_2E81C799D267E6AB_OFFSET UNITYSDK_OFFSET(0x37A640)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_30A325C56474D217_OFFSET UNITYSDK_OFFSET(0x37A450)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_4967DD316EFAC48B_1_OFFSET UNITYSDK_OFFSET(0x302310)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_4967DD316EFAC48B_OFFSET UNITYSDK_OFFSET(0x3074E0)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x302AD0)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_DA10968DEAC864BC_OFFSET UNITYSDK_OFFSET(0x37A460)
#define STRUCT_2_95FC5B98D4A132D6_METHOD_2_F40A1039406BFB27_OFFSET UNITYSDK_OFFSET(0x37A2E0)
#define STRUCT_2_95FC5B98D4A132D6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x37A140)
#define STRUCT_2_95FC5B98D4A132D6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x37A130)
#define STRUCT_2_95FC5B98D4A132D6__CTOR_OFFSET UNITYSDK_OFFSET(0x37A100)

inline static constexpr unsigned int Struct_2_95FC5B98D4A132D6_TypeDefinitionIndex = 59515;

struct alignas(4) Struct_2_95FC5B98D4A132D6
{
	::MoleMole::Vector2Int Field_2_0; // 0x10
	::MoleMole::Vector2Int Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::MoleMole::Vector2Int a1, ::MoleMole::Vector2Int a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	/*
	::System::Collections::Generic::IEnumerator_1<::MoleMole::HollowChessboard::HollowCell>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_GETENUMERATOR_OFFSET))(this);
	}
	*/

	::System::Void Method_2_4967DD316EFAC48B(::MoleMole::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_4967DD316EFAC48B_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	/*
	::System::Boolean Method_2_F40A1039406BFB27(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_F40A1039406BFB27_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_1E95A648DD7216C2(::MoleMole::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_1E95A648DD7216C2_OFFSET))(this, a1);
	}

	/*
	::MoleMole::HollowChessboard::HollowCell Method_2_16261919CBD78227(::System::Int32 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_16261919CBD78227_OFFSET))(this, a1);
	}
	*/

	::MoleMole::Vector2Int Method_2_30A325C56474D217(::System::Int32 a1)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_30A325C56474D217_OFFSET))(this, a1);
	}

	::MoleMole::Vector2Int Method_2_DA10968DEAC864BC()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_DA10968DEAC864BC_OFFSET))(this);
	}

	::MoleMole::Vector2Int Method_2_13F1B56B940BB384()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_13F1B56B940BB384_OFFSET))(this);
	}

	::Struct_2_95FC5B98D4A132D6 Method_2_249A8727C4A633EE(::MoleMole::Vector2Int a1)
	{
		return ((::Struct_2_95FC5B98D4A132D6(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_249A8727C4A633EE_OFFSET))(this, a1);
	}

	::MoleMole::Vector2Int Method_2_13F1B56B940BB384_1()
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_13F1B56B940BB384_1_OFFSET))(this);
	}

	::System::Void Method_2_4967DD316EFAC48B_1(::MoleMole::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_4967DD316EFAC48B_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_09D8B5211B19E2FF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_09D8B5211B19E2FF_OFFSET))(this);
	}

	::System::Boolean Method_2_2E81C799D267E6AB(::MoleMole::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + STRUCT_2_95FC5B98D4A132D6_METHOD_2_2E81C799D267E6AB_OFFSET))(this, a1);
	}
};
