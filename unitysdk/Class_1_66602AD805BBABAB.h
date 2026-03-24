#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_4_7162AE539CEC5D38;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_66602AD805BBABAB_METHOD_1_53FF5BD7BE66E442_OFFSET UNITYSDK_OFFSET(0x963C230)
#define CLASS_1_66602AD805BBABAB_METHOD_1_B2DFD33DF29E34DD_OFFSET UNITYSDK_OFFSET(0x963BF50)
#define CLASS_1_66602AD805BBABAB_METHOD_1_FE6BCFE0CF55FDAF_OFFSET UNITYSDK_OFFSET(0x963C490)
#define CLASS_1_66602AD805BBABAB__CTOR_OFFSET UNITYSDK_OFFSET(0x963BF30)

inline static constexpr unsigned int Class_1_66602AD805BBABAB_TypeDefinitionIndex = 66693;

class Class_1_66602AD805BBABAB : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_1; // 0x10
	::Enum_3_ABCAEFDF06E3479A Field_1_0; // 0x1C

	::System::Void _ctor(::Enum_3_ABCAEFDF06E3479A a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ABCAEFDF06E3479A, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_66602AD805BBABAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B2DFD33DF29E34DD(::Class_5_AF65C3A968E836D2* a1, ::Class_4_7162AE539CEC5D38* a2, ::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::Class_4_7162AE539CEC5D38*, ::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>*&))((::PBYTE)hIl2Cpp + CLASS_1_66602AD805BBABAB_METHOD_1_B2DFD33DF29E34DD_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>* Method_1_53FF5BD7BE66E442(::Class_4_7162AE539CEC5D38* a1, ::Class_5_AF65C3A968E836D2* a2, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>*(*)(::PVOID, ::Class_4_7162AE539CEC5D38*, ::Class_5_AF65C3A968E836D2*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_66602AD805BBABAB_METHOD_1_53FF5BD7BE66E442_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Nullable_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195> Method_1_FE6BCFE0CF55FDAF(::Class_4_7162AE539CEC5D38* a1, ::Class_5_AF65C3A968E836D2* a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Nullable_1<::Class_4_7162AE539CEC5D38_Struct_2_64FE122F26515195>(*)(::Class_4_7162AE539CEC5D38*, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_66602AD805BBABAB_METHOD_1_FE6BCFE0CF55FDAF_OFFSET))(a1, a2, a3);
	}
};
