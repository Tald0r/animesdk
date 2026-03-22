#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_316CBDE931844AF4.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_4BD7B665C4CA18EA;
class Class_1_D78EEB0971654883;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_22367A4F0964D039_OFFSET UNITYSDK_OFFSET(0x761ED00)
#define CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_2AACF79880CF53D6_OFFSET UNITYSDK_OFFSET(0x761EDA0)
#define CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_B65BB033576C0E3E_OFFSET UNITYSDK_OFFSET(0x761E8F0)
#define CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_B8CEFFD069F754AF_OFFSET UNITYSDK_OFFSET(0x761E190)
#define CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_DFA5C70FAC5B0083_OFFSET UNITYSDK_OFFSET(0x761EC50)
#define CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_EC1914F0DD38A60F_OFFSET UNITYSDK_OFFSET(0x761E970)

inline static constexpr unsigned int Class_1_AE7BDB8FB4DF84DB_TypeDefinitionIndex = 40109;

class Class_1_AE7BDB8FB4DF84DB : public ::System::Object
{
public:
	static ::System::Void Method_1_B8CEFFD069F754AF(::System::Collections::Generic::List_1<::System::Int32>* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Class_1_4BD7B665C4CA18EA* a3, ::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>* a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_4BD7B665C4CA18EA*, ::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_B8CEFFD069F754AF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_DFA5C70FAC5B0083(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_DFA5C70FAC5B0083_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2Int Method_1_B65BB033576C0E3E(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::UnityEngine::Vector2Int(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_B65BB033576C0E3E_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_22367A4F0964D039(::Class_1_D78EEB0971654883* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::Class_1_D78EEB0971654883*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_22367A4F0964D039_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_2AACF79880CF53D6(::Enum_3_316CBDE931844AF4 a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Class_1_4BD7B665C4CA18EA* a3, ::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>* a4)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Enum_3_316CBDE931844AF4, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_4BD7B665C4CA18EA*, ::System::Collections::Generic::List_1<::Class_1_4BD7B665C4CA18EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_2AACF79880CF53D6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_EC1914F0DD38A60F(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Boolean a3, ::UnityEngine::Vector2Int a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Boolean, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AE7BDB8FB4DF84DB_METHOD_1_EC1914F0DD38A60F_OFFSET))(a1, a2, a3, a4, a5);
	}
};
