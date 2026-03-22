#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIThreeDMapConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_1_A599CE44492C337E;

#define CLASS_1_FCCAFAFEDD17B2C1__CTOR_OFFSET UNITYSDK_OFFSET(0x67FC130)

inline static constexpr unsigned int Class_1_FCCAFAFEDD17B2C1_TypeDefinitionIndex = 67936;

class Class_1_FCCAFAFEDD17B2C1 : public ::System::Object
{
public:
	::MoleMole::UIThreeDMapConfig* Field_1_3; // 0x10
	::System::String* Field_1_2; // 0x18
	::Class_1_A599CE44492C337E<::UnityEngine::GameObject*>* Field_1_0; // 0x20
	::UnityEngine::GameObject* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCAFAFEDD17B2C1__CTOR_OFFSET))(this);
	}
};
