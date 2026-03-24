#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class ChessSMPathMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7C14168A3DF17737_METHOD_1_398B86C2A9AAA510_OFFSET UNITYSDK_OFFSET(0x74D8420)
#define CLASS_1_7C14168A3DF17737_METHOD_1_9E843BF7CE34C163_OFFSET UNITYSDK_OFFSET(0x74D8100)
#define CLASS_1_7C14168A3DF17737_METHOD_1_F97B236610B0EBD8_OFFSET UNITYSDK_OFFSET(0x74D81B0)
#define CLASS_1_7C14168A3DF17737_METHOD_1_FAF809643E9055ED_OFFSET UNITYSDK_OFFSET(0x74D8520)
#define CLASS_1_7C14168A3DF17737__CCTOR_OFFSET UNITYSDK_OFFSET(0x74D80F0)
#define CLASS_1_7C14168A3DF17737__CTOR_OFFSET UNITYSDK_OFFSET(0x74D80E0)

inline static constexpr unsigned int Class_1_7C14168A3DF17737_TypeDefinitionIndex = 73130;

class Class_1_7C14168A3DF17737 : public ::System::Object
{
public:
	static ::MoleMole::ChessStateMachine::ChessSMPathMap** StaticGet_Field_1_0()
	{
		return (::MoleMole::ChessStateMachine::ChessSMPathMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C14168A3DF17737_TypeDefinitionIndex)->GetStaticField(0x3A720);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C14168A3DF17737__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C14168A3DF17737__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_9E843BF7CE34C163(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C14168A3DF17737_METHOD_1_9E843BF7CE34C163_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_F97B236610B0EBD8(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C14168A3DF17737_METHOD_1_F97B236610B0EBD8_OFFSET))(a1, a2);
	}

	static ::Foundation::AssetPath Method_1_FAF809643E9055ED()
	{
		return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C14168A3DF17737_METHOD_1_FAF809643E9055ED_OFFSET))();
	}

	static ::MoleMole::ChessStateMachine::ChessSMPathMap* Method_1_398B86C2A9AAA510()
	{
		return ((::MoleMole::ChessStateMachine::ChessSMPathMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C14168A3DF17737_METHOD_1_398B86C2A9AAA510_OFFSET))();
	}
};
