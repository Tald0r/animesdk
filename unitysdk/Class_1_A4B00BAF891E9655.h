#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_A4B00BAF891E9655_METHOD_1_A01AE729684F1F89_OFFSET UNITYSDK_OFFSET(0x9103340)
#define CLASS_1_A4B00BAF891E9655_METHOD_1_CECA77A10FC3CB79_OFFSET UNITYSDK_OFFSET(0x9103800)

inline static constexpr unsigned int Class_1_A4B00BAF891E9655_TypeDefinitionIndex = 44222;

class Class_1_A4B00BAF891E9655 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_A01AE729684F1F89(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A4B00BAF891E9655_METHOD_1_A01AE729684F1F89_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CECA77A10FC3CB79(::MoleMole::Battle::Entity* a1, ::UnityEngine::RectTransform* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A4B00BAF891E9655_METHOD_1_CECA77A10FC3CB79_OFFSET))(a1, a2, a3);
	}
};
