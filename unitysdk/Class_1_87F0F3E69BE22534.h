#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_87F0F3E69BE22534__CTOR_OFFSET UNITYSDK_OFFSET(0x6DA84A0)

inline static constexpr unsigned int Class_1_87F0F3E69BE22534_TypeDefinitionIndex = 58749;

class Class_1_87F0F3E69BE22534 : public ::System::Object
{
public:
	::Il2CppArray<::MoleMole::Battle::Entity*>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_8; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Renderer*>* Field_1_5; // 0x38
	::System::Int32 Field_1_2; // 0x40
	::System::Single Field_1_0; // 0x44
	::System::Single Field_1_3; // 0x48
	::System::Single Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F0F3E69BE22534__CTOR_OFFSET))(this);
	}
};
