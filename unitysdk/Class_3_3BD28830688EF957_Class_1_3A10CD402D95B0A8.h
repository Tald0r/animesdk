#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_3BD28830688EF957_CLASS_1_3A10CD402D95B0A8_METHOD_1_1EEFFEB2AAC3855F_OFFSET UNITYSDK_OFFSET(0x9394DE0)
#define CLASS_3_3BD28830688EF957_CLASS_1_3A10CD402D95B0A8__CTOR_OFFSET UNITYSDK_OFFSET(0x9394DD0)

inline static constexpr unsigned int Class_3_3BD28830688EF957_Class_1_3A10CD402D95B0A8_TypeDefinitionIndex = 47009;

class Class_3_3BD28830688EF957_Class_1_3A10CD402D95B0A8 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BD28830688EF957_CLASS_1_3A10CD402D95B0A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1EEFFEB2AAC3855F(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3BD28830688EF957_CLASS_1_3A10CD402D95B0A8_METHOD_1_1EEFFEB2AAC3855F_OFFSET))(this, a1, a2);
	}
};
