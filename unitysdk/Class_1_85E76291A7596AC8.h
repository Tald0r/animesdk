#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace UnityEngine { class Transform; }

#define CLASS_1_85E76291A7596AC8_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0xB40A030)
#define CLASS_1_85E76291A7596AC8__CTOR_OFFSET UNITYSDK_OFFSET(0xB409F70)

inline static constexpr unsigned int Class_1_85E76291A7596AC8_TypeDefinitionIndex = 50402;

class Class_1_85E76291A7596AC8 : public ::System::Object
{
public:
	::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor(::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_85E76291A7596AC8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8A9A72FB00358D11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85E76291A7596AC8_METHOD_1_8A9A72FB00358D11_OFFSET))(this);
	}
};
