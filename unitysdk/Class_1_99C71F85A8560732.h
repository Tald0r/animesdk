#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_99C71F85A8560732_METHOD_1_0852445A7629ADD3_OFFSET UNITYSDK_OFFSET(0x6E77D00)
#define CLASS_1_99C71F85A8560732__CTOR_OFFSET UNITYSDK_OFFSET(0x6E77CF0)

inline static constexpr unsigned int Class_1_99C71F85A8560732_TypeDefinitionIndex = 55842;

class Class_1_99C71F85A8560732 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_99C71F85A8560732__CTOR_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_0852445A7629ADD3(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_99C71F85A8560732_METHOD_1_0852445A7629ADD3_OFFSET))(this, a1, a2);
	}
};
