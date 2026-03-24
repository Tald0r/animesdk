#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_29EEA995F8FD7C71.h"
#include "unitysdk/Enum_3_2668F9BEE67DB4C8.h"

namespace MoleMole::ChessStateMachine { class LayerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1DD66CA78A3425BD_METHOD_2_70C60064131DD9A1_1_OFFSET UNITYSDK_OFFSET(0x6FF5200)
#define CLASS_2_1DD66CA78A3425BD_METHOD_2_70C60064131DD9A1_OFFSET UNITYSDK_OFFSET(0x6FF51E0)
#define CLASS_2_1DD66CA78A3425BD__CTOR_OFFSET UNITYSDK_OFFSET(0x6FF51A0)

inline static constexpr unsigned int Class_2_1DD66CA78A3425BD_TypeDefinitionIndex = 51937;

class Class_2_1DD66CA78A3425BD : public ::Class_1_29EEA995F8FD7C71
{
public:
	::MoleMole::ChessStateMachine::LayerConfig* Field_2_0; // 0x48
	::Enum_3_2668F9BEE67DB4C8 Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD66CA78A3425BD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_70C60064131DD9A1()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD66CA78A3425BD_METHOD_2_70C60064131DD9A1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_70C60064131DD9A1_1()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DD66CA78A3425BD_METHOD_2_70C60064131DD9A1_1_OFFSET))(this);
	}
};
