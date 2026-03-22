#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_17C16694410E7397.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_4_AC6D98911872E0CE;
namespace Share { class CVector2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_935F4E6CB6073FBC;

#define CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_3F89753C8DB39701_OFFSET UNITYSDK_OFFSET(0x64C93A0)
#define CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_79552C39BDADD49A_OFFSET UNITYSDK_OFFSET(0x64C9530)
#define CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_8B32AE6A2538C2D0_OFFSET UNITYSDK_OFFSET(0x64C9460)
#define CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_910BD0933C7A5BC6_OFFSET UNITYSDK_OFFSET(0x64C9210)
#define CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x64C9170)
#define CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_B6B5F4EB63055438_OFFSET UNITYSDK_OFFSET(0x64C92D0)
#define CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_D43CAADD36E33468_OFFSET UNITYSDK_OFFSET(0x64C95E0)
#define CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_D8B67AC7DD095D81_OFFSET UNITYSDK_OFFSET(0x64C8F00)
#define CLASS_2_BE0DBA8BC6ECEE2C__CTOR_OFFSET UNITYSDK_OFFSET(0x64C8E40)

inline static constexpr unsigned int Class_2_BE0DBA8BC6ECEE2C_TypeDefinitionIndex = 74925;

class Class_2_BE0DBA8BC6ECEE2C : public ::Class_1_17C16694410E7397
{
public:
	::Class_1_935F4E6CB6073FBC<::Class_4_AC6D98911872E0CE*>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_4_AC6D98911872E0CE*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_4_AC6D98911872E0CE*>*))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_2_910BD0933C7A5BC6(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::System::Func_2<::Class_4_AC6D98911872E0CE*, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Func_2<::Class_4_AC6D98911872E0CE*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_910BD0933C7A5BC6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B6B5F4EB63055438(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* a2, ::Share::CVector2* a3, ::System::Func_2<::Class_4_AC6D98911872E0CE*, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::Share::CVector2*, ::System::Func_2<::Class_4_AC6D98911872E0CE*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_B6B5F4EB63055438_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3F89753C8DB39701(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>& a2, ::Share::CVector2* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>&, ::Share::CVector2*))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_3F89753C8DB39701_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::HollowChessboard::HollowCell Method_2_8B32AE6A2538C2D0(::UnityEngine::Vector2 a1)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_8B32AE6A2538C2D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8B67AC7DD095D81(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_4_AC6D98911872E0CE*>* a3, ::System::Collections::Generic::List_1<::Class_4_AC6D98911872E0CE*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_4_AC6D98911872E0CE*>*, ::System::Collections::Generic::List_1<::Class_4_AC6D98911872E0CE*>*))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_D8B67AC7DD095D81_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_79552C39BDADD49A(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_79552C39BDADD49A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D43CAADD36E33468(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_2_BE0DBA8BC6ECEE2C_METHOD_2_D43CAADD36E33468_OFFSET))(this, a1);
	}
};
