#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5BC4A642501E33BD.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class ConfigBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29EEA995F8FD7C71_METHOD_1_1EDD41E6E4980E79_OFFSET UNITYSDK_OFFSET(0xAA85970)
#define CLASS_1_29EEA995F8FD7C71_METHOD_1_6EC3AE2ADDCC3BFF_OFFSET UNITYSDK_OFFSET(0xAA85C10)
#define CLASS_1_29EEA995F8FD7C71_METHOD_1_9AEEA16F27488438_OFFSET UNITYSDK_OFFSET(0xAA85960)
#define CLASS_1_29EEA995F8FD7C71_METHOD_1_C7CD1D914D759BC5_OFFSET UNITYSDK_OFFSET(0xAA85850)
#define CLASS_1_29EEA995F8FD7C71_METHOD_1_EC336B4ACF721D52_OFFSET UNITYSDK_OFFSET(0xAA857D0)
#define CLASS_1_29EEA995F8FD7C71__CTOR_OFFSET UNITYSDK_OFFSET(0xAA85720)

inline static constexpr unsigned int Class_1_29EEA995F8FD7C71_TypeDefinitionIndex = 61492;

class Class_1_29EEA995F8FD7C71 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_1_29EEA995F8FD7C71* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_29EEA995F8FD7C71*>* Field_1_7; // 0x20
	::Class_1_29EEA995F8FD7C71* Field_1_6; // 0x28
	::Class_1_29EEA995F8FD7C71* Field_1_4; // 0x30
	::System::String* guid; // 0x38
	::Enum_3_5BC4A642501E33BD Field_1_2; // 0x40
	::System::Boolean Field_1_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29EEA995F8FD7C71__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC336B4ACF721D52(::MoleMole::ChessStateMachine::ConfigBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::ConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_29EEA995F8FD7C71_METHOD_1_EC336B4ACF721D52_OFFSET))(this, a1);
	}

	::Class_1_29EEA995F8FD7C71* Method_1_C7CD1D914D759BC5(::System::String* a1)
	{
		return ((::Class_1_29EEA995F8FD7C71*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29EEA995F8FD7C71_METHOD_1_C7CD1D914D759BC5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_29EEA995F8FD7C71*>* Method_1_9AEEA16F27488438()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_29EEA995F8FD7C71*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29EEA995F8FD7C71_METHOD_1_9AEEA16F27488438_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_29EEA995F8FD7C71*>* Method_1_1EDD41E6E4980E79()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_29EEA995F8FD7C71*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29EEA995F8FD7C71_METHOD_1_1EDD41E6E4980E79_OFFSET))(this);
	}

	::System::Void Method_1_6EC3AE2ADDCC3BFF(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_29EEA995F8FD7C71*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_29EEA995F8FD7C71*>*))((::PBYTE)hIl2Cpp + CLASS_1_29EEA995F8FD7C71_METHOD_1_6EC3AE2ADDCC3BFF_OFFSET))(this, a1);
	}
};
